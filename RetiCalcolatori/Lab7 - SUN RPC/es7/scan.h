/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SCAN_H_RPCGEN
#define _SCAN_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct ResultFile {
	int numch;
	int numwords;
	int numlines;
};
typedef struct ResultFile ResultFile;

struct Name {
	char name[25];
};
typedef struct Name Name;

struct ResultDir {
	int num_file;
	Name names[8];
};
typedef struct ResultDir ResultDir;

struct RequestDir {
	int num;
	char *dirName;
};
typedef struct RequestDir RequestDir;

#define SCANPROG 0x20000013
#define SCANVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define file_scan 1
extern  ResultFile * file_scan_1(char **, CLIENT *);
extern  ResultFile * file_scan_1_svc(char **, struct svc_req *);
#define dir_scan 2
extern  ResultDir * dir_scan_1(RequestDir *, CLIENT *);
extern  ResultDir * dir_scan_1_svc(RequestDir *, struct svc_req *);
extern int scanprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define file_scan 1
extern  ResultFile * file_scan_1();
extern  ResultFile * file_scan_1_svc();
#define dir_scan 2
extern  ResultDir * dir_scan_1();
extern  ResultDir * dir_scan_1_svc();
extern int scanprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_ResultFile (XDR *, ResultFile*);
extern  bool_t xdr_Name (XDR *, Name*);
extern  bool_t xdr_ResultDir (XDR *, ResultDir*);
extern  bool_t xdr_RequestDir (XDR *, RequestDir*);

#else /* K&R C */
extern bool_t xdr_ResultFile ();
extern bool_t xdr_Name ();
extern bool_t xdr_ResultDir ();
extern bool_t xdr_RequestDir ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SCAN_H_RPCGEN */