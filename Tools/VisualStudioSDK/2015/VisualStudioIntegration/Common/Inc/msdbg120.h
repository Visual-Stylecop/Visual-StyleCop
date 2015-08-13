

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
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

#ifndef __msdbg120_h__
#define __msdbg120_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugStackFrame120_FWD_DEFINED__
#define __IDebugStackFrame120_FWD_DEFINED__
typedef interface IDebugStackFrame120 IDebugStackFrame120;

#endif 	/* __IDebugStackFrame120_FWD_DEFINED__ */


#ifndef __IDebugThread120_FWD_DEFINED__
#define __IDebugThread120_FWD_DEFINED__
typedef interface IDebugThread120 IDebugThread120;

#endif 	/* __IDebugThread120_FWD_DEFINED__ */


#ifndef __IDebugLogicalThread120_FWD_DEFINED__
#define __IDebugLogicalThread120_FWD_DEFINED__
typedef interface IDebugLogicalThread120 IDebugLogicalThread120;

#endif 	/* __IDebugLogicalThread120_FWD_DEFINED__ */


#ifndef __IDebugAsyncTask120_FWD_DEFINED__
#define __IDebugAsyncTask120_FWD_DEFINED__
typedef interface IDebugAsyncTask120 IDebugAsyncTask120;

#endif 	/* __IDebugAsyncTask120_FWD_DEFINED__ */


#ifndef __IDebugSessionProcess120_FWD_DEFINED__
#define __IDebugSessionProcess120_FWD_DEFINED__
typedef interface IDebugSessionProcess120 IDebugSessionProcess120;

#endif 	/* __IDebugSessionProcess120_FWD_DEFINED__ */


#ifndef __IDebugExceptionEvent120_FWD_DEFINED__
#define __IDebugExceptionEvent120_FWD_DEFINED__
typedef interface IDebugExceptionEvent120 IDebugExceptionEvent120;

#endif 	/* __IDebugExceptionEvent120_FWD_DEFINED__ */


#ifndef __IDebugDocument120_FWD_DEFINED__
#define __IDebugDocument120_FWD_DEFINED__
typedef interface IDebugDocument120 IDebugDocument120;

#endif 	/* __IDebugDocument120_FWD_DEFINED__ */


#ifndef __IDebugUserNotificationUI120_FWD_DEFINED__
#define __IDebugUserNotificationUI120_FWD_DEFINED__
typedef interface IDebugUserNotificationUI120 IDebugUserNotificationUI120;

#endif 	/* __IDebugUserNotificationUI120_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg120_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/
typedef DWORD_PTR WIN32_HANDLE;





extern RPC_IF_HANDLE __MIDL_itf_msdbg120_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg120_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugStackFrame120_INTERFACE_DEFINED__
#define __IDebugStackFrame120_INTERFACE_DEFINED__

/* interface IDebugStackFrame120 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugStackFrame120;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("94967a8a-5c7b-42df-9415-d6896a51de6a")
    IDebugStackFrame120 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAsyncTask( 
            /* [out] */ __RPC__deref_out_opt IDebugAsyncTask120 **ppFrameTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugStackFrame120Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugStackFrame120 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugStackFrame120 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugStackFrame120 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAsyncTask )( 
            __RPC__in IDebugStackFrame120 * This,
            /* [out] */ __RPC__deref_out_opt IDebugAsyncTask120 **ppFrameTask);
        
        END_INTERFACE
    } IDebugStackFrame120Vtbl;

    interface IDebugStackFrame120
    {
        CONST_VTBL struct IDebugStackFrame120Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugStackFrame120_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugStackFrame120_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugStackFrame120_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugStackFrame120_GetAsyncTask(This,ppFrameTask)	\
    ( (This)->lpVtbl -> GetAsyncTask(This,ppFrameTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugStackFrame120_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg120_0000_0001 */
/* [local] */ 


enum FRAMEINFO_FLAGS_EX
    {
        FIF_EX_INCLUDE_ASYNC_FRAMES	= 0x1
    } ;
DEFINE_ENUM_FLAG_OPERATORS(FRAMEINFO_FLAGS_EX)


extern RPC_IF_HANDLE __MIDL_itf_msdbg120_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg120_0000_0001_v0_0_s_ifspec;

#ifndef __IDebugThread120_INTERFACE_DEFINED__
#define __IDebugThread120_INTERFACE_DEFINED__

/* interface IDebugThread120 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugThread120;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("daabf75d-aed6-4857-83c9-aaf589057c3d")
    IDebugThread120 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumFrameInfoEx( 
            /* [in] */ enum enum_FRAMEINFO_FLAGS dwFieldSpec,
            /* [in] */ enum FRAMEINFO_FLAGS_EX dwFieldSpecExtended,
            /* [in] */ UINT nRadix,
            /* [out] */ __RPC__deref_out_opt IEnumDebugFrameInfo2 **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugThread120Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugThread120 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugThread120 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugThread120 * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumFrameInfoEx )( 
            __RPC__in IDebugThread120 * This,
            /* [in] */ enum enum_FRAMEINFO_FLAGS dwFieldSpec,
            /* [in] */ enum FRAMEINFO_FLAGS_EX dwFieldSpecExtended,
            /* [in] */ UINT nRadix,
            /* [out] */ __RPC__deref_out_opt IEnumDebugFrameInfo2 **ppEnum);
        
        END_INTERFACE
    } IDebugThread120Vtbl;

    interface IDebugThread120
    {
        CONST_VTBL struct IDebugThread120Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugThread120_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugThread120_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugThread120_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugThread120_EnumFrameInfoEx(This,dwFieldSpec,dwFieldSpecExtended,nRadix,ppEnum)	\
    ( (This)->lpVtbl -> EnumFrameInfoEx(This,dwFieldSpec,dwFieldSpecExtended,nRadix,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugThread120_INTERFACE_DEFINED__ */


#ifndef __IDebugLogicalThread120_INTERFACE_DEFINED__
#define __IDebugLogicalThread120_INTERFACE_DEFINED__

/* interface IDebugLogicalThread120 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugLogicalThread120;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fca685e7-45f2-4c36-beb8-be982087479f")
    IDebugLogicalThread120 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumFrameInfoEx( 
            /* [in] */ enum enum_FRAMEINFO_FLAGS dwFieldSpec,
            /* [in] */ enum FRAMEINFO_FLAGS_EX dwFieldSpecExtended,
            /* [in] */ UINT nRadix,
            /* [out] */ __RPC__deref_out_opt IEnumDebugFrameInfo2 **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugLogicalThread120Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugLogicalThread120 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugLogicalThread120 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugLogicalThread120 * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumFrameInfoEx )( 
            __RPC__in IDebugLogicalThread120 * This,
            /* [in] */ enum enum_FRAMEINFO_FLAGS dwFieldSpec,
            /* [in] */ enum FRAMEINFO_FLAGS_EX dwFieldSpecExtended,
            /* [in] */ UINT nRadix,
            /* [out] */ __RPC__deref_out_opt IEnumDebugFrameInfo2 **ppEnum);
        
        END_INTERFACE
    } IDebugLogicalThread120Vtbl;

    interface IDebugLogicalThread120
    {
        CONST_VTBL struct IDebugLogicalThread120Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugLogicalThread120_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugLogicalThread120_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugLogicalThread120_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugLogicalThread120_EnumFrameInfoEx(This,dwFieldSpec,dwFieldSpecExtended,nRadix,ppEnum)	\
    ( (This)->lpVtbl -> EnumFrameInfoEx(This,dwFieldSpec,dwFieldSpecExtended,nRadix,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugLogicalThread120_INTERFACE_DEFINED__ */


#ifndef __IDebugAsyncTask120_INTERFACE_DEFINED__
#define __IDebugAsyncTask120_INTERFACE_DEFINED__

/* interface IDebugAsyncTask120 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugAsyncTask120;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7eab8ebe-0f51-4cc1-b69c-a379a31c6847")
    IDebugAsyncTask120 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTaskCreationStack( 
            /* [in] */ __RPC__in_opt IDebugThread2 *pThread,
            /* [in] */ enum enum_FRAMEINFO_FLAGS dwFieldSpec,
            /* [in] */ enum FRAMEINFO_FLAGS_EX dwFieldSpecExtended,
            /* [in] */ UINT nRadix,
            /* [out] */ __RPC__deref_out_opt IEnumDebugFrameInfo2 **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContinuationFrames( 
            /* [in] */ __RPC__in_opt IDebugThread2 *pThread,
            /* [in] */ enum enum_FRAMEINFO_FLAGS dwFieldSpec,
            /* [in] */ enum FRAMEINFO_FLAGS_EX dwFieldSpecExtended,
            /* [in] */ UINT nRadix,
            /* [out] */ __RPC__deref_out_opt IEnumDebugFrameInfo2 **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreComputeAsyncReturnStack( 
            /* [in] */ UINT maxFrames) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugAsyncTask120Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugAsyncTask120 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugAsyncTask120 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugAsyncTask120 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTaskCreationStack )( 
            __RPC__in IDebugAsyncTask120 * This,
            /* [in] */ __RPC__in_opt IDebugThread2 *pThread,
            /* [in] */ enum enum_FRAMEINFO_FLAGS dwFieldSpec,
            /* [in] */ enum FRAMEINFO_FLAGS_EX dwFieldSpecExtended,
            /* [in] */ UINT nRadix,
            /* [out] */ __RPC__deref_out_opt IEnumDebugFrameInfo2 **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetContinuationFrames )( 
            __RPC__in IDebugAsyncTask120 * This,
            /* [in] */ __RPC__in_opt IDebugThread2 *pThread,
            /* [in] */ enum enum_FRAMEINFO_FLAGS dwFieldSpec,
            /* [in] */ enum FRAMEINFO_FLAGS_EX dwFieldSpecExtended,
            /* [in] */ UINT nRadix,
            /* [out] */ __RPC__deref_out_opt IEnumDebugFrameInfo2 **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *PreComputeAsyncReturnStack )( 
            __RPC__in IDebugAsyncTask120 * This,
            /* [in] */ UINT maxFrames);
        
        END_INTERFACE
    } IDebugAsyncTask120Vtbl;

    interface IDebugAsyncTask120
    {
        CONST_VTBL struct IDebugAsyncTask120Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugAsyncTask120_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugAsyncTask120_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugAsyncTask120_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugAsyncTask120_GetTaskCreationStack(This,pThread,dwFieldSpec,dwFieldSpecExtended,nRadix,ppEnum)	\
    ( (This)->lpVtbl -> GetTaskCreationStack(This,pThread,dwFieldSpec,dwFieldSpecExtended,nRadix,ppEnum) ) 

#define IDebugAsyncTask120_GetContinuationFrames(This,pThread,dwFieldSpec,dwFieldSpecExtended,nRadix,ppEnum)	\
    ( (This)->lpVtbl -> GetContinuationFrames(This,pThread,dwFieldSpec,dwFieldSpecExtended,nRadix,ppEnum) ) 

#define IDebugAsyncTask120_PreComputeAsyncReturnStack(This,maxFrames)	\
    ( (This)->lpVtbl -> PreComputeAsyncReturnStack(This,maxFrames) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugAsyncTask120_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg120_0000_0004 */
/* [local] */ 


enum enum_FRAMEINFO_FLAGS_VALUES120
    {
        FIFV_ASYNC_FRAME	= 0x20,
        FIFV_RETURN_STACK_FRAME	= 0x40,
        FIFV_TASK_CREATION_STACK_FRAME	= 0x80,
        FIFV_ASYNC_CALL_ANNOTATED_FRAME	= 0x100,
        FIFV_ASYNC_CONTINUATION_ANNOTATED_FRAME	= 0x200
    } ;

enum enum_EVENTATTRIBUTES120
    {
        EVENT_ALLOW_AFTER_STOPPED	= 0x10
    } ;
typedef DWORD EVENTATTRIBUTES120;


enum enum_LAUNCH_FLAGS120
    {
        LAUNCH_ALLOW_EVENTS_AFTER_STOPPED	= 0x10,
        LAUNCH_FORCE_32BIT_DEBUG	= 0x20,
        LAUNCH_FORCE_64BIT_DEBUG	= 0x40
    } ;
typedef DWORD LAUNCH_FLAGS120;


enum enum_MESSAGETYPE120
    {
        MT_REASON_LANGUAGE_COMPATIBILITY	= 0x600,
        MT_FATAL_ERROR	= 0x10000
    } ;


extern RPC_IF_HANDLE __MIDL_itf_msdbg120_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg120_0000_0004_v0_0_s_ifspec;

#ifndef __IDebugSessionProcess120_INTERFACE_DEFINED__
#define __IDebugSessionProcess120_INTERFACE_DEFINED__

/* interface IDebugSessionProcess120 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugSessionProcess120;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C80129AA-876A-4F3B-81BB-8497ADE9D47A")
    IDebugSessionProcess120 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryIsLegacyDebugger( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugSessionProcess120Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugSessionProcess120 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugSessionProcess120 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugSessionProcess120 * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryIsLegacyDebugger )( 
            __RPC__in IDebugSessionProcess120 * This);
        
        END_INTERFACE
    } IDebugSessionProcess120Vtbl;

    interface IDebugSessionProcess120
    {
        CONST_VTBL struct IDebugSessionProcess120Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugSessionProcess120_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugSessionProcess120_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugSessionProcess120_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugSessionProcess120_QueryIsLegacyDebugger(This)	\
    ( (This)->lpVtbl -> QueryIsLegacyDebugger(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugSessionProcess120_INTERFACE_DEFINED__ */


#ifndef __IDebugExceptionEvent120_INTERFACE_DEFINED__
#define __IDebugExceptionEvent120_INTERFACE_DEFINED__

/* interface IDebugExceptionEvent120 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugExceptionEvent120;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9c954ace-8041-4c57-ad2a-d9e2cf2e565e")
    IDebugExceptionEvent120 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStackTrace( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrStackTrace) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugExceptionEvent120Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugExceptionEvent120 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugExceptionEvent120 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugExceptionEvent120 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStackTrace )( 
            __RPC__in IDebugExceptionEvent120 * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrStackTrace);
        
        END_INTERFACE
    } IDebugExceptionEvent120Vtbl;

    interface IDebugExceptionEvent120
    {
        CONST_VTBL struct IDebugExceptionEvent120Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugExceptionEvent120_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugExceptionEvent120_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugExceptionEvent120_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugExceptionEvent120_GetStackTrace(This,pbstrStackTrace)	\
    ( (This)->lpVtbl -> GetStackTrace(This,pbstrStackTrace) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugExceptionEvent120_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdbg120_0000_0006 */
/* [local] */ 


enum enum_DOCUMENT_CONTENT_TYPE
    {
        DCT_UNKNOWN	= 0,
        DCT_SCRIPT	= ( DCT_UNKNOWN + 1 ) ,
        DCT_HTML	= ( DCT_SCRIPT + 1 ) 
    } ;
typedef DWORD DOCUMENT_CONTENT_TYPE;



extern RPC_IF_HANDLE __MIDL_itf_msdbg120_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg120_0000_0006_v0_0_s_ifspec;

#ifndef __IDebugDocument120_INTERFACE_DEFINED__
#define __IDebugDocument120_INTERFACE_DEFINED__

/* interface IDebugDocument120 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugDocument120;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("54271ecb-d88e-42c5-b8af-137f851e57e2")
    IDebugDocument120 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDocumentContentType( 
            /* [out] */ __RPC__out DOCUMENT_CONTENT_TYPE *pDocumentContentType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugDocument120Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugDocument120 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugDocument120 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugDocument120 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDocumentContentType )( 
            __RPC__in IDebugDocument120 * This,
            /* [out] */ __RPC__out DOCUMENT_CONTENT_TYPE *pDocumentContentType);
        
        END_INTERFACE
    } IDebugDocument120Vtbl;

    interface IDebugDocument120
    {
        CONST_VTBL struct IDebugDocument120Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugDocument120_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugDocument120_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugDocument120_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugDocument120_GetDocumentContentType(This,pDocumentContentType)	\
    ( (This)->lpVtbl -> GetDocumentContentType(This,pDocumentContentType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugDocument120_INTERFACE_DEFINED__ */


#ifndef __IDebugUserNotificationUI120_INTERFACE_DEFINED__
#define __IDebugUserNotificationUI120_INTERFACE_DEFINED__

/* interface IDebugUserNotificationUI120 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IDebugUserNotificationUI120;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E2E3AEE2-9E39-40E5-8609-D43260630766")
    IDebugUserNotificationUI120 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ShouldShowUI( 
            /* [retval][out] */ __RPC__out BOOL *pShouldShow) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ShouldShowUI( 
            /* [in] */ BOOL shouldShow) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugUserNotificationUI120Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugUserNotificationUI120 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugUserNotificationUI120 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugUserNotificationUI120 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShouldShowUI )( 
            __RPC__in IDebugUserNotificationUI120 * This,
            /* [retval][out] */ __RPC__out BOOL *pShouldShow);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShouldShowUI )( 
            __RPC__in IDebugUserNotificationUI120 * This,
            /* [in] */ BOOL shouldShow);
        
        END_INTERFACE
    } IDebugUserNotificationUI120Vtbl;

    interface IDebugUserNotificationUI120
    {
        CONST_VTBL struct IDebugUserNotificationUI120Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugUserNotificationUI120_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugUserNotificationUI120_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugUserNotificationUI120_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugUserNotificationUI120_get_ShouldShowUI(This,pShouldShow)	\
    ( (This)->lpVtbl -> get_ShouldShowUI(This,pShouldShow) ) 

#define IDebugUserNotificationUI120_put_ShouldShowUI(This,shouldShow)	\
    ( (This)->lpVtbl -> put_ShouldShowUI(This,shouldShow) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugUserNotificationUI120_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


