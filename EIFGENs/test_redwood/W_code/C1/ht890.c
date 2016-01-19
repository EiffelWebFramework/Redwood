/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F890_7746(EIF_REFERENCE);
extern EIF_TYPED_VALUE F890_7747(EIF_REFERENCE);
extern EIF_TYPED_VALUE F890_7748(EIF_REFERENCE);
extern EIF_TYPED_VALUE F890_7749(EIF_REFERENCE);
extern EIF_TYPED_VALUE F890_7750(EIF_REFERENCE);
extern EIF_TYPED_VALUE F890_7751(EIF_REFERENCE);
extern void EIF_Minit890(void);

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

/* {HTTP_CONSTANTS}.default_http_port */
EIF_TYPED_VALUE F890_7746 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F890_7747 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F890_7748)


EIF_TYPED_VALUE F890_7748 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F890_7748,13409,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F890_7749)


EIF_TYPED_VALUE F890_7749 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F890_7749,13410,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F890_7750)


EIF_TYPED_VALUE F890_7750 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F890_7750,13405,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F890_7751 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit890 (void)
{
	GTCX
	RTOTS (7748,F890_7748)
	RTOTS (7749,F890_7749)
	RTOTS (7750,F890_7750)
}


#ifdef __cplusplus
}
#endif
