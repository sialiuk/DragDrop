

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __DropTarget_i_h__
#define __DropTarget_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDropT_FWD_DEFINED__
#define __IDropT_FWD_DEFINED__
typedef interface IDropT IDropT;

#endif 	/* __IDropT_FWD_DEFINED__ */


#ifndef ___IDropTEvents_FWD_DEFINED__
#define ___IDropTEvents_FWD_DEFINED__
typedef interface _IDropTEvents _IDropTEvents;

#endif 	/* ___IDropTEvents_FWD_DEFINED__ */


#ifndef __DropT_FWD_DEFINED__
#define __DropT_FWD_DEFINED__

#ifdef __cplusplus
typedef class DropT DropT;
#else
typedef struct DropT DropT;
#endif /* __cplusplus */

#endif 	/* __DropT_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IDropT_INTERFACE_DEFINED__
#define __IDropT_INTERFACE_DEFINED__

/* interface IDropT */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDropT;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20AB34AA-2435-4C5D-8505-4E4409EA070C")
    IDropT : public IDispatch
    {
    public:
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_AutoSize( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_AutoSize( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDropTVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDropT * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDropT * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDropT * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDropT * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDropT * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDropT * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDropT * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSize )( 
            IDropT * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSize )( 
            IDropT * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        END_INTERFACE
    } IDropTVtbl;

    interface IDropT
    {
        CONST_VTBL struct IDropTVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDropT_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDropT_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDropT_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDropT_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDropT_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDropT_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDropT_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDropT_put_AutoSize(This,vbool)	\
    ( (This)->lpVtbl -> put_AutoSize(This,vbool) ) 

#define IDropT_get_AutoSize(This,pbool)	\
    ( (This)->lpVtbl -> get_AutoSize(This,pbool) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDropT_INTERFACE_DEFINED__ */



#ifndef __DropTargetLib_LIBRARY_DEFINED__
#define __DropTargetLib_LIBRARY_DEFINED__

/* library DropTargetLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_DropTargetLib;

#ifndef ___IDropTEvents_DISPINTERFACE_DEFINED__
#define ___IDropTEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IDropTEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IDropTEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("F317A8D4-EF90-4B1F-9765-C85E0CE792D9")
    _IDropTEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IDropTEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IDropTEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IDropTEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IDropTEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IDropTEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IDropTEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IDropTEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IDropTEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _IDropTEventsVtbl;

    interface _IDropTEvents
    {
        CONST_VTBL struct _IDropTEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IDropTEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IDropTEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IDropTEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IDropTEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IDropTEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IDropTEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IDropTEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IDropTEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DropT;

#ifdef __cplusplus

class DECLSPEC_UUID("920B988E-D118-4179-9580-23B962CDEE20")
DropT;
#endif
#endif /* __DropTargetLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


