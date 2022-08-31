/* Code generated by cmd/cgo; DO NOT EDIT. */

/* package command-line-arguments */


#line 1 "cgo-builtin-export-prolog"

#include <stddef.h> /* for ptrdiff_t below */

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; ptrdiff_t n; } _GoString_;
#endif

#endif

/* Start of preamble from import "C" comments.  */


#line 20 "l7_golang_extension.go"

// ref https://github.com/golang/go/issues/25832




#include <stdlib.h>
#include <string.h>

#include "api.h"


#line 1 "cgo-generated-wrapper"


/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt64 GoInt;
typedef GoUint64 GoUint;
typedef __SIZE_TYPE__ GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_64_bit_pointer_matching_GoInt[sizeof(void*)==64/8 ? 1:-1];

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString;
#endif
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif


extern void setPostDecodeCallbackFunc(fc p0);

extern void setPostEncodeCallbackFunc(fc p0);

extern Response runReceiveStreamFilter(Request p0);

extern Response runSendStreamFilter(Request p0);

extern void destoryStream(long long unsigned int p0, int p1);

extern void invokeClusterWarmingCb(char* p0, long long unsigned int p1, long long unsigned int p2, int p3);

extern GoUint64 moeOnNewDownstreamConnection(GoInt64 p0, GoUint64 p1, GoUint64 p2, GoUint64 p3, GoUint64 p4, GoUint64 p5, GoUint64 p6, GoUint64 p7, GoUint64 p8);

extern void moeOnDownstreamEvent(GoInt64 p0, GoUint64 p1, GoInt p2);

extern void moeOnDownstreamData(GoInt64 p0, GoUint64 p1, GoUint64 p2, GoUint64 p3, GoInt p4, GoInt p5);

extern void moeOnUpstreamConnPoolReady(GoInt64 p0, GoUint64 p1, GoUint64 p2, GoUint64 p3, GoUint64 p4, GoUint64 p5, GoUint64 p6);

extern void moeOnUpstreamConnPoolFailure(GoInt64 p0, GoUint64 p1, GoInt p2);

extern void moeOnUpstreamEvent(GoInt64 p0, GoUint64 p1, GoInt p2);

extern void moeOnUpstreamData(GoInt64 p0, GoUint64 p1, GoUint64 p2, GoUint64 p3, GoInt p4, GoInt p5);

extern void moeOnDownstreamTlsInfo(GoInt64 p0, GoUint64 p1, TlsInfo* p2);

extern void moeOnUpstreamTlsInfo(GoInt64 p0, GoUint64 p1, TlsInfo* p2);

extern void moeOnTlsHandshakerSelectCert(GoUint64 p0, GoUint64 p1, GoUint64 p2);

extern void moeOnRequestHeader(GoInt64 p0, GoUint64 p1);

extern void moeOnRequestData(GoInt64 p0, GoUint64 p1);

#ifdef __cplusplus
}
#endif
