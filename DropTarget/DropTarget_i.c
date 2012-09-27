

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Thu Sep 27 17:34:39 2012
 */
/* Compiler settings for DropTarget.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IDropT,0x20AB34AA,0x2435,0x4C5D,0x85,0x05,0x4E,0x44,0x09,0xEA,0x07,0x0C);


MIDL_DEFINE_GUID(IID, LIBID_DropTargetLib,0x94ADF02F,0x8EA2,0x48C6,0x9D,0xBA,0xA5,0xF2,0x93,0x67,0x8D,0xD9);


MIDL_DEFINE_GUID(IID, DIID__IDropTEvents,0xF317A8D4,0xEF90,0x4B1F,0x97,0x65,0xC8,0x5E,0x0C,0xE7,0x92,0xD9);


MIDL_DEFINE_GUID(CLSID, CLSID_DropT,0x920B988E,0xD118,0x4179,0x95,0x80,0x23,0xB9,0x62,0xCD,0xEE,0x20);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



