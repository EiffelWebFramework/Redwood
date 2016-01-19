/*
 * Code for class EJSON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F910_7937(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F910_7938(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F910_7939(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F910_7940(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F910_7941(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F910_7942(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F910_7943(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F910_7944(EIF_REFERENCE);
extern EIF_TYPED_VALUE F910_7945(EIF_REFERENCE);
extern EIF_TYPED_VALUE F910_7946(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F910_7947(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F910_7948(EIF_REFERENCE);
extern void EIF_Minit910(void);

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

/* {EJSON}.value */
EIF_TYPED_VALUE F910_7937 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "value";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_8 loc4 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc5 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc7 = (EIF_INTEGER_64) 0;
	EIF_NATURAL_8 loc8 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc9 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc10 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc11 = (EIF_NATURAL_64) 0;
	EIF_REAL_32 loc12 = (EIF_REAL_32) 0;
	EIF_REAL_64 loc13 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc16 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc17 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc14);
	RTLR(4,Current);
	RTLR(5,loc2);
	RTLR(6,loc15);
	RTLR(7,ur1);
	RTLR(8,tr2);
	RTLR(9,loc18);
	RTLR(10,loc19);
	RTLR(11,loc20);
	RTLIU(12);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_INT8, &loc4);
	RTLU(SK_INT16, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT64, &loc7);
	RTLU(SK_UINT8, &loc8);
	RTLU(SK_UINT16, &loc9);
	RTLU(SK_UINT32, &loc10);
	RTLU(SK_UINT64, &loc11);
	RTLU(SK_REAL32, &loc12);
	RTLU(SK_REAL64, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_CHAR8, &loc16);
	RTLU(SK_CHAR32, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	
	RTEAA(l_feature_name, 909, Current, 20, 1, 13578);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(909, Current, 13578);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(931, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(2,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(3);
		tr1 = RTCCL(arg1);
		RTOB(*(EIF_BOOLEAN *), eif_new_type(191, 0x00), tr1, loc3, tb1);
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(930, 0x01).id);
			ub1 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5964, Dtype(tr1)))(tr1, ub1x);
			RTNHOOK(4,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(5);
			tr1 = RTCCL(arg1);
			RTOB(*(EIF_INTEGER_8 *), eif_new_type(176, 0x00), tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(6);
				RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(929, 0x01).id);
				ti8_1 = (EIF_INTEGER_64) loc4;
				ui8_1 = ti8_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5947, Dtype(tr1)))(tr1, ui8_1x);
				RTNHOOK(6,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(7);
				tr1 = RTCCL(arg1);
				RTOB(*(EIF_INTEGER_16 *), eif_new_type(209, 0x00), tr1, loc5, tb1);
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
					tr1 = RTLN(eif_new_type(929, 0x01).id);
					ti8_1 = (EIF_INTEGER_64) loc5;
					ui8_1 = ti8_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5947, Dtype(tr1)))(tr1, ui8_1x);
					RTNHOOK(8,1);
					Result = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(9);
					tr1 = RTCCL(arg1);
					RTOB(*(EIF_INTEGER_32 *), eif_new_type(206, 0x00), tr1, loc6, tb1);
					if (tb1) {
						RTHOOK(10);
						RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
						tr1 = RTLN(eif_new_type(929, 0x01).id);
						ti8_1 = (EIF_INTEGER_64) loc6;
						ui8_1 = ti8_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5947, Dtype(tr1)))(tr1, ui8_1x);
						RTNHOOK(10,1);
						Result = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(11);
						tr1 = RTCCL(arg1);
						RTOB(*(EIF_INTEGER_64 *), eif_new_type(188, 0x00), tr1, loc7, tb1);
						if (tb1) {
							RTHOOK(12);
							RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
							tr1 = RTLN(eif_new_type(929, 0x01).id);
							ui8_1 = loc7;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5947, Dtype(tr1)))(tr1, ui8_1x);
							RTNHOOK(12,1);
							Result = (EIF_REFERENCE) RTCCL(tr1);
						} else {
							RTHOOK(13);
							tr1 = RTCCL(arg1);
							RTOB(*(EIF_NATURAL_8 *), eif_new_type(197, 0x00), tr1, loc8, tb1);
							if (tb1) {
								RTHOOK(14);
								RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
								tr1 = RTLN(eif_new_type(929, 0x01).id);
								tu8_1 = (EIF_NATURAL_64) loc8;
								uu8_1 = tu8_1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5948, Dtype(tr1)))(tr1, uu8_1x);
								RTNHOOK(14,1);
								Result = (EIF_REFERENCE) RTCCL(tr1);
							} else {
								RTHOOK(15);
								tr1 = RTCCL(arg1);
								RTOB(*(EIF_NATURAL_16 *), eif_new_type(203, 0x00), tr1, loc9, tb1);
								if (tb1) {
									RTHOOK(16);
									RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
									tr1 = RTLN(eif_new_type(929, 0x01).id);
									tu8_1 = (EIF_NATURAL_64) loc9;
									uu8_1 = tu8_1;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5948, Dtype(tr1)))(tr1, uu8_1x);
									RTNHOOK(16,1);
									Result = (EIF_REFERENCE) RTCCL(tr1);
								} else {
									RTHOOK(17);
									tr1 = RTCCL(arg1);
									RTOB(*(EIF_NATURAL_32 *), eif_new_type(200, 0x00), tr1, loc10, tb1);
									if (tb1) {
										RTHOOK(18);
										RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
										tr1 = RTLN(eif_new_type(929, 0x01).id);
										tu8_1 = (EIF_NATURAL_64) loc10;
										uu8_1 = tu8_1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5948, Dtype(tr1)))(tr1, uu8_1x);
										RTNHOOK(18,1);
										Result = (EIF_REFERENCE) RTCCL(tr1);
									} else {
										RTHOOK(19);
										tr1 = RTCCL(arg1);
										RTOB(*(EIF_NATURAL_64 *), eif_new_type(212, 0x00), tr1, loc11, tb1);
										if (tb1) {
											RTHOOK(20);
											RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
											tr1 = RTLN(eif_new_type(929, 0x01).id);
											uu8_1 = loc11;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5948, Dtype(tr1)))(tr1, uu8_1x);
											RTNHOOK(20,1);
											Result = (EIF_REFERENCE) RTCCL(tr1);
										} else {
											RTHOOK(21);
											tr1 = RTCCL(arg1);
											RTOB(*(EIF_REAL_32 *), eif_new_type(179, 0x00), tr1, loc12, tb1);
											if (tb1) {
												RTHOOK(22);
												RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
												tr1 = RTLN(eif_new_type(929, 0x01).id);
												tr8_1 = (EIF_REAL_64) (loc12);
												ur8_1 = tr8_1;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5949, Dtype(tr1)))(tr1, ur8_1x);
												RTNHOOK(22,1);
												Result = (EIF_REFERENCE) RTCCL(tr1);
											} else {
												RTHOOK(23);
												tr1 = RTCCL(arg1);
												RTOB(*(EIF_REAL_64 *), eif_new_type(194, 0x00), tr1, loc13, tb1);
												if (tb1) {
													RTHOOK(24);
													RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
													tr1 = RTLN(eif_new_type(929, 0x01).id);
													ur8_1 = loc13;
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5949, Dtype(tr1)))(tr1, ur8_1x);
													RTNHOOK(24,1);
													Result = (EIF_REFERENCE) RTCCL(tr1);
												} else {
													RTHOOK(25);
													loc14 = RTCCL(arg1);
													{
														static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0,0xFFFF};
														EIF_TYPE typres0;
														static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
														
														typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
														loc14 = RTRV(typres0,loc14);
													}
													if (EIF_TEST(loc14)) {
														RTHOOK(26);
														RTDBGAL(Current, 2, 0xF80003A0, 0, 0); /* loc2 */
														tr1 = RTLN(eif_new_type(928, 0x01).id);
														ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", loc14))(loc14)).it_i4);
														ui4_1 = ti4_1;
														(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5934, Dtype(tr1)))(tr1, ui4_1x);
														RTNHOOK(26,1);
														loc2 = (EIF_REFERENCE) RTCCL(tr1);
														RTHOOK(27);
														RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
														ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(2617, "lower", loc14));
														loc1 = (EIF_INTEGER_32) ti4_1;
														for (;;) {
															RTHOOK(28);
															ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(2618, "upper", loc14));
															if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
															RTHOOK(29);
															ui4_1 = loc1;
															tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
															ur1 = RTCCL(tr1);
															tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5825, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
															loc15 = RTCCL(tr1);
															if (EIF_TEST(loc15)) {
																RTHOOK(30);
																ur1 = RTCCL(loc15);
																(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5941, "add", loc2))(loc2, ur1x);
															} else {
																if (RTAL & CK_CHECK) {
																	RTHOOK(31);
																	RTCT("value_attached", EX_CHECK);
																		RTCF;
																}
															}
															RTHOOK(32);
															RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
															loc1++;
														}
														RTHOOK(33);
														RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
														Result = (EIF_REFERENCE) RTCCL(loc2);
													} else {
														RTHOOK(34);
														tr1 = RTCCL(arg1);
														RTOB(*(EIF_CHARACTER_8 *), eif_new_type(185, 0x00), tr1, loc16, tb1);
														if (tb1) {
															RTHOOK(35);
															RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
															tr1 = RTLN(eif_new_type(932, 0x01).id);
															tr2 = c_outc(loc16);
															ur1 = RTCCL(tr2);
															(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5970, Dtype(tr1)))(tr1, ur1x);
															RTNHOOK(35,1);
															Result = (EIF_REFERENCE) RTCCL(tr1);
														} else {
															RTHOOK(36);
															tr1 = RTCCL(arg1);
															RTOB(*(EIF_CHARACTER_32 *), eif_new_type(182, 0x00), tr1, loc17, tb1);
															if (tb1) {
																RTHOOK(37);
																RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
																tr1 = RTLN(eif_new_type(932, 0x01).id);
																tr2 = RTLN(eif_new_type(226, 0x01).id);
																uw1 = loc17;
																ui4_1 = ((EIF_INTEGER_32) 1L);
																(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4582, Dtype(tr2)))(tr2, uw1x, ui4_1x);
																RTNHOOK(37,1);
																ur1 = RTCCL(tr2);
																(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5971, Dtype(tr1)))(tr1, ur1x);
																RTNHOOK(37,2);
																Result = (EIF_REFERENCE) RTCCL(tr1);
															} else {
																RTHOOK(38);
																loc18 = RTCCL(arg1);
																loc18 = RTRV(eif_new_type(220, 0x01),loc18);
																if (EIF_TEST(loc18)) {
																	RTHOOK(39);
																	RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
																	tr1 = RTLN(eif_new_type(932, 0x01).id);
																	ur1 = RTCCL(loc18);
																	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5970, Dtype(tr1)))(tr1, ur1x);
																	RTNHOOK(39,1);
																	Result = (EIF_REFERENCE) RTCCL(tr1);
																} else {
																	RTHOOK(40);
																	loc19 = RTCCL(arg1);
																	loc19 = RTRV(eif_new_type(226, 0x01),loc19);
																	if (EIF_TEST(loc19)) {
																		RTHOOK(41);
																		RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
																		tr1 = RTLN(eif_new_type(932, 0x01).id);
																		ur1 = RTCCL(loc19);
																		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5971, Dtype(tr1)))(tr1, ur1x);
																		RTNHOOK(41,1);
																		Result = (EIF_REFERENCE) RTCCL(tr1);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTHOOK(42);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		RTHOOK(43);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			ur1 = RTCCL(arg1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5828, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc20 = RTCCL(tr1);
			tb1 = EIF_TEST(loc20);
		}
		if (tb1) {
			RTHOOK(44);
			RTDBGAL(Current, 0, 0xF800039F, 0,0); /* Result */
			ur1 = RTCCL(arg1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5819, "to_json", loc20))(loc20, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(45);
			ur1 = RTCCL(arg1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5835, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1249, dtype))(Current, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(46);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(23);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur8_1
#undef ui8_1
#undef uu8_1
#undef ui4_1
#undef uw1
#undef ub1
#undef arg1
}

/* {EJSON}.object */
EIF_TYPED_VALUE F910_7938 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "object";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(19);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Result);
	RTLR(3,loc5);
	RTLR(4,loc6);
	RTLR(5,loc7);
	RTLR(6,tr1);
	RTLR(7,loc8);
	RTLR(8,tr2);
	RTLR(9,ur1);
	RTLR(10,loc9);
	RTLR(11,loc2);
	RTLR(12,Current);
	RTLR(13,ur2);
	RTLR(14,loc10);
	RTLR(15,loc4);
	RTLR(16,loc3);
	RTLR(17,loc11);
	RTLR(18,loc12);
	RTLIU(19);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
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
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	
	RTEAA(l_feature_name, 909, Current, 12, 2, 13579);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(909, Current, 13579);
	if (arg1) {
		RTCC(arg1, 909, l_feature_name, 1, eif_new_type(927, 0x00), 0x00);
	}
	if (arg2) {
		RTCC(arg2, 909, l_feature_name, 2, eif_new_type(220, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
		Result = (EIF_REFERENCE) NULL;
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(arg2 == NULL)) {
			RTHOOK(4);
			if ((EIF_BOOLEAN)(arg1 == NULL)) {
				RTHOOK(5);
				RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
				Result = (EIF_REFERENCE) NULL;
			} else {
				RTHOOK(6);
				loc5 = RTCCL(arg1);
				loc5 = RTRV(eif_new_type(931, 0x01),loc5);
				if (EIF_TEST(loc5)) {
					RTHOOK(7);
					RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
					Result = (EIF_REFERENCE) NULL;
				} else {
					RTHOOK(8);
					loc6 = RTCCL(arg1);
					loc6 = RTRV(eif_new_type(930, 0x01),loc6);
					if (EIF_TEST(loc6)) {
						RTHOOK(9);
						RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
						tb1 = *(EIF_BOOLEAN *)(loc6 + RTVA(5968, "item", loc6));
						Result = RTLN(eif_new_type(191, 0x00).id);
						*(EIF_BOOLEAN *)Result = tb1;
					} else {
						RTHOOK(10);
						loc7 = RTCCL(arg1);
						loc7 = RTRV(eif_new_type(929, 0x01),loc7);
						if (EIF_TEST(loc7)) {
							RTHOOK(11);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5950, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(11,1);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4372, "is_integer_8", tr1))(tr1)).it_b);
							if (tb1) {
								RTHOOK(12);
								RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5950, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(12,1);
								ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4406, "to_integer_8", tr1))(tr1)).it_i1);
								Result = RTLN(eif_new_type(176, 0x00).id);
								*(EIF_INTEGER_8 *)Result = ti1_1;
							} else {
								RTHOOK(13);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5950, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(13,1);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4373, "is_integer_16", tr1))(tr1)).it_b);
								if (tb1) {
									RTHOOK(14);
									RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5950, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									RTNHOOK(14,1);
									ti2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4407, "to_integer_16", tr1))(tr1)).it_i2);
									Result = RTLN(eif_new_type(209, 0x00).id);
									*(EIF_INTEGER_16 *)Result = ti2_1;
								} else {
									RTHOOK(15);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5950, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									RTNHOOK(15,1);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4375, "is_integer_32", tr1))(tr1)).it_b);
									if (tb1) {
										RTHOOK(16);
										RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5950, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										RTNHOOK(16,1);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4409, "to_integer_32", tr1))(tr1)).it_i4);
										Result = RTLN(eif_new_type(206, 0x00).id);
										*(EIF_INTEGER_32 *)Result = ti4_1;
									} else {
										RTHOOK(17);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5950, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										RTNHOOK(17,1);
										tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4376, "is_integer_64", tr1))(tr1)).it_b);
										if (tb1) {
											RTHOOK(18);
											RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5950, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											RTNHOOK(18,1);
											ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4410, "to_integer_64", tr1))(tr1)).it_i8);
											Result = RTLN(eif_new_type(188, 0x00).id);
											*(EIF_INTEGER_64 *)Result = ti8_1;
										} else {
											RTHOOK(19);
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5950, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											RTNHOOK(19,1);
											tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4381, "is_natural_64", tr1))(tr1)).it_b);
											if (tb1) {
												RTHOOK(20);
												RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5950, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												RTNHOOK(20,1);
												tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4415, "to_natural_64", tr1))(tr1)).it_n8);
												Result = RTLN(eif_new_type(212, 0x00).id);
												*(EIF_NATURAL_64 *)Result = tu8_1;
											} else {
												RTHOOK(21);
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5950, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												RTNHOOK(21,1);
												tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4369, "is_double", tr1))(tr1)).it_b);
												if (tb1) {
													RTHOOK(22);
													RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
													tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5950, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													RTNHOOK(22,1);
													tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4418, "to_double", tr1))(tr1)).it_r8);
													Result = RTLN(eif_new_type(194, 0x00).id);
													*(EIF_REAL_64 *)Result = tr8_1;
												}
											}
										}
									}
								}
							}
						} else {
							RTHOOK(23);
							loc8 = RTCCL(arg1);
							loc8 = RTRV(eif_new_type(932, 0x01),loc8);
							if (EIF_TEST(loc8)) {
								RTHOOK(24);
								RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
								tr1 = RTLN(eif_new_type(226, 0x01).id);
								tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5980, "unescaped_string_32", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr2);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4583, Dtype(tr1)))(tr1, ur1x);
								RTNHOOK(24,1);
								Result = (EIF_REFERENCE) RTCCL(tr1);
							} else {
								RTHOOK(25);
								loc9 = RTCCL(arg1);
								loc9 = RTRV(eif_new_type(928, 0x01),loc9);
								if (EIF_TEST(loc9)) {
									RTHOOK(26);
									RTDBGAL(Current, 2, 0xF800018E, 0, 0); /* loc2 */
									{
										static EIF_TYPE_INDEX typarr0[] = {0xFF01,398,0,0xFFFF};
										EIF_TYPE typres0;
										static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
										
										typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
										tr1 = RTLN(typres0.id);
									}
									(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2550, Dtype(tr1)))(tr1);
									RTNHOOK(26,1);
									loc2 = (EIF_REFERENCE) RTCCL(tr1);
									RTHOOK(27);
									RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
									loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
									for (;;) {
										RTHOOK(28);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5938, "count", loc9))(loc9)).it_i4);
										if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
										RTHOOK(29);
										ui4_1 = loc1;
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5937, "i_th", loc9))(loc9, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr1);
										ur2 = NULL;
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5826, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr1);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc2))(loc2, ur1x);
										RTHOOK(30);
										RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
										loc1++;
									}
									RTHOOK(31);
									RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
									Result = (EIF_REFERENCE) RTCCL(loc2);
								} else {
									RTHOOK(32);
									loc10 = RTCCL(arg1);
									loc10 = RTRV(eif_new_type(933, 0x01),loc10);
									if (EIF_TEST(loc10)) {
										RTHOOK(33);
										RTDBGAL(Current, 4, 0xF80000FA, 0, 0); /* loc4 */
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6011, "current_keys", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc4 = (EIF_REFERENCE) RTCCL(tr1);
										RTHOOK(34);
										RTDBGAL(Current, 3, 0xF800013A, 0, 0); /* loc3 */
										{
											static EIF_TYPE_INDEX typarr0[] = {0xFF01,314,0,0xFF01,219,0xFFFF};
											EIF_TYPE typres0;
											static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
											
											typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
											tr1 = RTLN(typres0.id);
										}
										ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", loc4))(loc4)).it_i4);
										ui4_1 = ti4_2;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
										RTNHOOK(34,1);
										loc3 = (EIF_REFERENCE) RTCCL(tr1);
										RTHOOK(35);
										RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
										ti4_2 = *(EIF_INTEGER_32 *)(loc4 + RTVA(2617, "lower", loc4));
										loc1 = (EIF_INTEGER_32) ti4_2;
										for (;;) {
											RTHOOK(36);
											ti4_2 = *(EIF_INTEGER_32 *)(loc4 + RTVA(2618, "upper", loc4));
											if ((EIF_BOOLEAN) (loc1 > ti4_2)) break;
											RTHOOK(37);
											ui4_1 = loc1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr1);
											ur2 = NULL;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5826, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											loc11 = RTCCL(tr1);
											loc11 = RTRV(eif_new_type(219, 0x01),loc11);
											if (EIF_TEST(loc11)) {
												RTHOOK(38);
												ui4_1 = loc1;
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr1);
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6010, "item", loc10))(loc10, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr1);
												ur2 = NULL;
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5826, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr1);
												ur2 = RTCCL(loc11);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", loc3))(loc3, ur1x, ur2x);
											}
											RTHOOK(39);
											RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
											loc1++;
										}
										RTHOOK(40);
										RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
										Result = (EIF_REFERENCE) RTCCL(loc3);
									}
								}
							}
						}
					}
				}
			}
		} else {
			RTHOOK(41);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5832, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(41,1);
			ur1 = RTCCL(arg2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3318, "has_key", tr1))(tr1, ur1x)).it_b);
			if (tb2) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5832, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(41,2);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3316, "found_item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				loc12 = RTCCL(tr2);
				tb1 = EIF_TEST(loc12);
			}
			if (tb1) {
				RTHOOK(42);
				RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
				ur1 = RTCCL(arg1);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5818, "from_json", loc12))(loc12, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(43);
				ur1 = RTCCL(arg1);
				ur2 = RTCCL(arg2);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5834, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1249, dtype))(Current, ur1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EJSON}.object_from_json */
EIF_TYPED_VALUE F910_7939 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "object_from_json";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc1);
	RTLR(6,tr2);
	RTLR(7,ur2);
	RTLR(8,Result);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 909, Current, 1, 2, 13580);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(909, Current, 13580);
	RTCC(arg1, 909, l_feature_name, 1, eif_new_type(220, 0x01), 0x01);
	if (arg2) {
		RTCC(arg2, 909, l_feature_name, 2, eif_new_type(220, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("json_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5836, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5442, "set_representation", tr1))(tr1, ur1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5836, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5465, "parse_content", tr1))(tr1);
	RTHOOK(4);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5836, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5456, "is_valid", tr1))(tr1)).it_b);
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5836, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5461, "parsed_json_value", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc1 = RTCCL(tr2);
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
		ur1 = RTCCL(loc1);
		ur2 = RTCCL(arg2);
		Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5826, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {EJSON}.converter_for */
EIF_TYPED_VALUE F910_7940 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "converter_for";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 909, Current, 0, 1, 13581);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(909, Current, 13581);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5832, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7, "generator", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3318, "has_key", tr1))(tr1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF8000388, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5832, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3316, "found_item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {EJSON}.json_reference */
EIF_TYPED_VALUE F910_7941 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "json_reference";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,loc2);
	RTLR(7,ur2);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 909, Current, 2, 1, 13582);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(909, Current, 13582);
	RTCC(arg1, 909, l_feature_name, 1, eif_new_type(220, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80003A5, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(933, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5993, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF80003A4, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(932, 0x01).id);
	tr2 = RTMS_EX_H("$ref",4,611476838);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5970, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0xF80003A4, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(932, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5970, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	ur1 = RTCCL(loc2);
	ur2 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5994, "put", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef arg1
}

/* {EJSON}.json_references */
EIF_TYPED_VALUE F910_7942 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "json_references";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 909, Current, 1, 1, 13583);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(909, Current, 13583);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,263,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 909, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("l_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80003A0, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(928, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5934, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF80000F6, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc1))(loc1)).it_b);
		if (tb1) break;
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5829, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5941, "add", Result))(Result, ur1x);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc1))(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EJSON}.add_converter */
void F910_7943 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "add_converter";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 909, Current, 0, 1, 13584);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(909, Current, 13584);
	RTCC(arg1, 909, l_feature_name, 1, eif_new_type(904, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("jc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5832, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5817, "object", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7, "generator", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1745, "force", tr1))(tr1, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("has_converter", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5817, "object", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5828, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef arg1
}

/* {EJSON}.converters */
RTOID (F910_7944)
EIF_TYPED_VALUE F910_7944 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "converters";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F910_7944);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 909, Current, 0, 0, 13585);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(909, Current, 13585);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800013A, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,314,0xFF01,904,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {EJSON}.exception_prefix */
RTOID (F910_7945)


EIF_TYPED_VALUE F910_7945 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F910_7945,13587,RTMS_EX_H("eJSON exception: ",17,1175273760));
}

/* {EJSON}.exception_failed_to_convert_to_eiffel */
EIF_TYPED_VALUE F910_7946 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "exception_failed_to_convert_to_eiffel";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 909, Current, 0, 2, 13587);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(909, Current, 13587);
	RTCC(arg1, 909, l_feature_name, 1, eif_new_type(927, 0x01), 0x01);
	if (arg2) {
		RTCC(arg2, 909, l_feature_name, 2, eif_new_type(220, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5833, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("Failed to convert JSON_VALUE to an Eiffel object: ",50,1768232480);
	ur1 = tr2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4422, "plus", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7, "generator", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4422, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(3);
		tr1 = RTMS_EX_H(" -> {",5,759292027);
		ur1 = RTCCL(arg2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4422, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H("}",1,125);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4422, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4506, "append", Result))(Result, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg2
#undef arg1
}

/* {EJSON}.exception_failed_to_convert_to_json */
EIF_TYPED_VALUE F910_7947 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "exception_failed_to_convert_to_json";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,arg1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 909, Current, 0, 1, 13588);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(909, Current, 13588);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5833, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("Failed to convert Eiffel object to a JSON_VALUE",47,1651991109);
	ur1 = tr2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4422, "plus", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		tr1 = RTMS_EX_H(" : {",4,540680315);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7, "generator", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4422, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H("}",1,125);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4422, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4506, "append", Result))(Result, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {EJSON}.json_parser */
RTOID (F910_7948)
EIF_TYPED_VALUE F910_7948 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "json_parser";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F910_7948);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 909, Current, 0, 0, 13589);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(909, Current, 13589);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000374, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(884, 0x01).id);
	tr2 = RTMS_EX_H("{}",2,31613);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5453, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

void EIF_Minit910 (void)
{
	GTCX
	RTOTS (7944,F910_7944)
	RTOTS (7945,F910_7945)
	RTOTS (7948,F910_7948)
}


#ifdef __cplusplus
}
#endif
