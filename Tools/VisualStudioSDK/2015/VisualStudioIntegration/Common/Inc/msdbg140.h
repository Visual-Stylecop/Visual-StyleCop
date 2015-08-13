

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

#ifndef __msdbg140_h__
#define __msdbg140_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugRefreshNotification140_FWD_DEFINED__
#define __IDebugRefreshNotification140_FWD_DEFINED__
typedef interface IDebugRefreshNotification140 IDebugRefreshNotification140;

#endif 	/* __IDebugRefreshNotification140_FWD_DEFINED__ */


#ifndef __IDebugTimedEvent140_FWD_DEFINED__
#define __IDebugTimedEvent140_FWD_DEFINED__
typedef interface IDebugTimedEvent140 IDebugTimedEvent140;

#endif 	/* __IDebugTimedEvent140_FWD_DEFINED__ */


#ifndef __IDebugWrappedMessageEvent140_FWD_DEFINED__
#define __IDebugWrappedMessageEvent140_FWD_DEFINED__
typedef interface IDebugWrappedMessageEvent140 IDebugWrappedMessageEvent140;

#endif 	/* __IDebugWrappedMessageEvent140_FWD_DEFINED__ */


#ifndef __IDebugLaunchCustomTelemetryProvider_FWD_DEFINED__
#define __IDebugLaunchCustomTelemetryProvider_FWD_DEFINED__
typedef interface IDebugLaunchCustomTelemetryProvider IDebugLaunchCustomTelemetryProvider;

#endif 	/* __IDebugLaunchCustomTelemetryProvider_FWD_DEFINED__ */


#ifndef __IVsDebuggerDeploy140_FWD_DEFINED__
#define __IVsDebuggerDeploy140_FWD_DEFINED__
typedef interface IVsDebuggerDeploy140 IVsDebuggerDeploy140;

#endif 	/* __IVsDebuggerDeploy140_FWD_DEFINED__ */


#ifndef __IDebugProcessStartTime140_FWD_DEFINED__
#define __IDebugProcessStartTime140_FWD_DEFINED__
typedef interface IDebugProcessStartTime140 IDebugProcessStartTime140;

#endif 	/* __IDebugProcessStartTime140_FWD_DEFINED__ */


#ifndef __IDebugExceptionSettingsChangeNotification140_FWD_DEFINED__
#define __IDebugExceptionSettingsChangeNotification140_FWD_DEFINED__
typedef interface IDebugExceptionSettingsChangeNotification140 IDebugExceptionSettingsChangeNotification140;

#endif 	/* __IDebugExceptionSettingsChangeNotification140_FWD_DEFINED__ */


#ifndef __IDebugExceptionSettingsManager140_FWD_DEFINED__
#define __IDebugExceptionSettingsManager140_FWD_DEFINED__
typedef interface IDebugExceptionSettingsManager140 IDebugExceptionSettingsManager140;

#endif 	/* __IDebugExceptionSettingsManager140_FWD_DEFINED__ */


#ifndef __IDebugJMCWarningEvent140_FWD_DEFINED__
#define __IDebugJMCWarningEvent140_FWD_DEFINED__
typedef interface IDebugJMCWarningEvent140 IDebugJMCWarningEvent140;

#endif 	/* __IDebugJMCWarningEvent140_FWD_DEFINED__ */


#ifndef __IDebugEngineProgram140_FWD_DEFINED__
#define __IDebugEngineProgram140_FWD_DEFINED__
typedef interface IDebugEngineProgram140 IDebugEngineProgram140;

#endif 	/* __IDebugEngineProgram140_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg140_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/

#ifndef __IVsDebuggerDeployConnection_FWD_DEFINED__
#define __IVsDebuggerDeployConnection_FWD_DEFINED__
typedef interface IVsDebuggerDeployConnection IVsDebuggerDeployConnection;
#endif /* __IVsDebuggerDeployConnection_FWD_DEFINED__ */
#define DBG_ATTRIB_VALUE_RETURN_VALUE 0x0040000000000000
#define DBG_ATTRIB_EVENT_TRACEPOINT       0x0080000000000000
#define DBG_ATTRIB_EVENT_EXCEPTION    0x0100000000000000
#define DBG_ATTRIB_EVENT_UNIMPORTANT  0x0200000000000000


extern RPC_IF_HANDLE __MIDL_itf_msdbg140_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg140_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugRefreshNotification140_INTERFACE_DEFINED__
#define __IDebugRefreshNotification140_INTERFACE_DEFINED__

/* interface IDebugRefreshNotification140 */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugRefreshNotification140;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23d9a2f7-d25a-4963-a59e-4828cb4fecab")
    IDebugRefreshNotification140 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnExpressionEvaluationRefreshRequested( 
            BOOL fCallstackFormattingAffected) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugRefreshNotification140Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugRefreshNotification140 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugRefreshNotification140 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugRefreshNotification140 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnExpressionEvaluationRefreshRequested )( 
            IDebugRefreshNotification140 * This,
            BOOL fCallstackFormattingAffected);
        
        END_INTERFACE
    } IDebugRefreshNotification140Vtbl;

    interface IDebugRefreshNotification140
    {
        CONST_VTBL struct IDebugRefreshNotification140Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugRefreshNotification140_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugRefreshNotification140_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugRefreshNotification140_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugRefreshNotification140_OnExpressionEvaluationRefreshRequested(This,fCallstackFormattingAffected)	\
    ( (This)->lpVtbl -> OnExpressionEvaluationRefreshRequested(This,fCallstackFormattingAffected) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugRefreshNotification140_INTERFACE_DEFINED__ */


#ifndef __IDebugTimedEvent140_INTERFACE_DEFINED__
#define __IDebugTimedEvent140_INTERFACE_DEFINED__

/* interface IDebugTimedEvent140 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugTimedEvent140;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5E1C7ABD-5EBF-462C-866A-8FDCD3678250")
    IDebugTimedEvent140 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTimeStamp( 
            /* [out] */ __RPC__out UINT64 *pTimeStamp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugTimedEvent140Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugTimedEvent140 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugTimedEvent140 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugTimedEvent140 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimeStamp )( 
            __RPC__in IDebugTimedEvent140 * This,
            /* [out] */ __RPC__out UINT64 *pTimeStamp);
        
        END_INTERFACE
    } IDebugTimedEvent140Vtbl;

    interface IDebugTimedEvent140
    {
        CONST_VTBL struct IDebugTimedEvent140Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugTimedEvent140_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugTimedEvent140_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugTimedEvent140_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugTimedEvent140_GetTimeStamp(This,pTimeStamp)	\
    ( (This)->lpVtbl -> GetTimeStamp(This,pTimeStamp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugTimedEvent140_INTERFACE_DEFINED__ */


#ifndef __IDebugWrappedMessageEvent140_INTERFACE_DEFINED__
#define __IDebugWrappedMessageEvent140_INTERFACE_DEFINED__

/* interface IDebugWrappedMessageEvent140 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugWrappedMessageEvent140;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D4A891BB-3F73-4964-A599-8B1210BCBC95")
    IDebugWrappedMessageEvent140 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTimedEventCount( 
            /* [out] */ __RPC__out DWORD *pceltEvents) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTimedEvent( 
            /* [in] */ DWORD index,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrMessage,
            /* [out] */ __RPC__out UINT64 *timeStamp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugWrappedMessageEvent140Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugWrappedMessageEvent140 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugWrappedMessageEvent140 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugWrappedMessageEvent140 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimedEventCount )( 
            __RPC__in IDebugWrappedMessageEvent140 * This,
            /* [out] */ __RPC__out DWORD *pceltEvents);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimedEvent )( 
            __RPC__in IDebugWrappedMessageEvent140 * This,
            /* [in] */ DWORD index,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrMessage,
            /* [out] */ __RPC__out UINT64 *timeStamp);
        
        END_INTERFACE
    } IDebugWrappedMessageEvent140Vtbl;

    interface IDebugWrappedMessageEvent140
    {
        CONST_VTBL struct IDebugWrappedMessageEvent140Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugWrappedMessageEvent140_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugWrappedMessageEvent140_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugWrappedMessageEvent140_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugWrappedMessageEvent140_GetTimedEventCount(This,pceltEvents)	\
    ( (This)->lpVtbl -> GetTimedEventCount(This,pceltEvents) ) 

#define IDebugWrappedMessageEvent140_GetTimedEvent(This,index,pbstrMessage,timeStamp)	\
    ( (This)->lpVtbl -> GetTimedEvent(This,index,pbstrMessage,timeStamp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugWrappedMessageEvent140_INTERFACE_DEFINED__ */


#ifndef __IDebugLaunchCustomTelemetryProvider_INTERFACE_DEFINED__
#define __IDebugLaunchCustomTelemetryProvider_INTERFACE_DEFINED__

/* interface IDebugLaunchCustomTelemetryProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugLaunchCustomTelemetryProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F63A5F5C-DE4E-4361-8361-3178DBC0E675")
    IDebugLaunchCustomTelemetryProvider : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Properties( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *psabstrProperties) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugLaunchCustomTelemetryProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugLaunchCustomTelemetryProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugLaunchCustomTelemetryProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugLaunchCustomTelemetryProvider * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Properties )( 
            __RPC__in IDebugLaunchCustomTelemetryProvider * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *psabstrProperties);
        
        END_INTERFACE
    } IDebugLaunchCustomTelemetryProviderVtbl;

    interface IDebugLaunchCustomTelemetryProvider
    {
        CONST_VTBL struct IDebugLaunchCustomTelemetryProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugLaunchCustomTelemetryProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugLaunchCustomTelemetryProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugLaunchCustomTelemetryProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugLaunchCustomTelemetryProvider_get_Properties(This,psabstrProperties)	\
    ( (This)->lpVtbl -> get_Properties(This,psabstrProperties) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugLaunchCustomTelemetryProvider_INTERFACE_DEFINED__ */


#ifndef __IVsDebuggerDeploy140_INTERFACE_DEFINED__
#define __IVsDebuggerDeploy140_INTERFACE_DEFINED__

/* interface IVsDebuggerDeploy140 */
/* [object][unique][version][uuid][local] */ 


EXTERN_C const IID IID_IVsDebuggerDeploy140;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("202F2CE9-7EA5-48ED-ACEA-7FD533923814")
    IVsDebuggerDeploy140 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateDeployConnectionForExistingConnection( 
            /* [annotation][in] */ 
            _In_  REFGUID uniqueConnectionId,
            /* [annotation][out] */ 
            _Deref_out_  IVsDebuggerDeployConnection **ppConnection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebuggerDeploy140Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVsDebuggerDeploy140 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVsDebuggerDeploy140 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVsDebuggerDeploy140 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDeployConnectionForExistingConnection )( 
            IVsDebuggerDeploy140 * This,
            /* [annotation][in] */ 
            _In_  REFGUID uniqueConnectionId,
            /* [annotation][out] */ 
            _Deref_out_  IVsDebuggerDeployConnection **ppConnection);
        
        END_INTERFACE
    } IVsDebuggerDeploy140Vtbl;

    interface IVsDebuggerDeploy140
    {
        CONST_VTBL struct IVsDebuggerDeploy140Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebuggerDeploy140_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebuggerDeploy140_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebuggerDeploy140_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebuggerDeploy140_CreateDeployConnectionForExistingConnection(This,uniqueConnectionId,ppConnection)	\
    ( (This)->lpVtbl -> CreateDeployConnectionForExistingConnection(This,uniqueConnectionId,ppConnection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebuggerDeploy140_INTERFACE_DEFINED__ */


#ifndef __IDebugProcessStartTime140_INTERFACE_DEFINED__
#define __IDebugProcessStartTime140_INTERFACE_DEFINED__

/* interface IDebugProcessStartTime140 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IDebugProcessStartTime140;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A385590E-F94C-47A5-BC29-84BD01526171")
    IDebugProcessStartTime140 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStartTime( 
            /* [out] */ __RPC__out UINT64 *pStartTime) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugProcessStartTime140Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugProcessStartTime140 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugProcessStartTime140 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugProcessStartTime140 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStartTime )( 
            __RPC__in IDebugProcessStartTime140 * This,
            /* [out] */ __RPC__out UINT64 *pStartTime);
        
        END_INTERFACE
    } IDebugProcessStartTime140Vtbl;

    interface IDebugProcessStartTime140
    {
        CONST_VTBL struct IDebugProcessStartTime140Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugProcessStartTime140_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugProcessStartTime140_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugProcessStartTime140_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugProcessStartTime140_GetStartTime(This,pStartTime)	\
    ( (This)->lpVtbl -> GetStartTime(This,pStartTime) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugProcessStartTime140_INTERFACE_DEFINED__ */


#ifndef __IDebugExceptionSettingsChangeNotification140_INTERFACE_DEFINED__
#define __IDebugExceptionSettingsChangeNotification140_INTERFACE_DEFINED__

/* interface IDebugExceptionSettingsChangeNotification140 */
/* [unique][version][uuid][object][local] */ 


EXTERN_C const IID IID_IDebugExceptionSettingsChangeNotification140;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("95A6C633-4A5F-46A0-B1A9-85145B163955")
    IDebugExceptionSettingsChangeNotification140 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnExceptionSettingChanged( 
            /* [in] */ EXCEPTION_INFO *pExceptionInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnExceptionSettingRemoved( 
            /* [in] */ EXCEPTION_INFO *pExceptionInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAllExceptionSettingsChanged( 
            /* [in] */ REFGUID guidType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAllExceptionSettingsRemoved( 
            /* [in] */ REFGUID guidType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugExceptionSettingsChangeNotification140Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugExceptionSettingsChangeNotification140 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugExceptionSettingsChangeNotification140 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugExceptionSettingsChangeNotification140 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnExceptionSettingChanged )( 
            IDebugExceptionSettingsChangeNotification140 * This,
            /* [in] */ EXCEPTION_INFO *pExceptionInfo);
        
        HRESULT ( STDMETHODCALLTYPE *OnExceptionSettingRemoved )( 
            IDebugExceptionSettingsChangeNotification140 * This,
            /* [in] */ EXCEPTION_INFO *pExceptionInfo);
        
        HRESULT ( STDMETHODCALLTYPE *OnAllExceptionSettingsChanged )( 
            IDebugExceptionSettingsChangeNotification140 * This,
            /* [in] */ REFGUID guidType);
        
        HRESULT ( STDMETHODCALLTYPE *OnAllExceptionSettingsRemoved )( 
            IDebugExceptionSettingsChangeNotification140 * This,
            /* [in] */ REFGUID guidType);
        
        END_INTERFACE
    } IDebugExceptionSettingsChangeNotification140Vtbl;

    interface IDebugExceptionSettingsChangeNotification140
    {
        CONST_VTBL struct IDebugExceptionSettingsChangeNotification140Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugExceptionSettingsChangeNotification140_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugExceptionSettingsChangeNotification140_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugExceptionSettingsChangeNotification140_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugExceptionSettingsChangeNotification140_OnExceptionSettingChanged(This,pExceptionInfo)	\
    ( (This)->lpVtbl -> OnExceptionSettingChanged(This,pExceptionInfo) ) 

#define IDebugExceptionSettingsChangeNotification140_OnExceptionSettingRemoved(This,pExceptionInfo)	\
    ( (This)->lpVtbl -> OnExceptionSettingRemoved(This,pExceptionInfo) ) 

#define IDebugExceptionSettingsChangeNotification140_OnAllExceptionSettingsChanged(This,guidType)	\
    ( (This)->lpVtbl -> OnAllExceptionSettingsChanged(This,guidType) ) 

#define IDebugExceptionSettingsChangeNotification140_OnAllExceptionSettingsRemoved(This,guidType)	\
    ( (This)->lpVtbl -> OnAllExceptionSettingsRemoved(This,guidType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugExceptionSettingsChangeNotification140_INTERFACE_DEFINED__ */


#ifndef __IDebugExceptionSettingsManager140_INTERFACE_DEFINED__
#define __IDebugExceptionSettingsManager140_INTERFACE_DEFINED__

/* interface IDebugExceptionSettingsManager140 */
/* [unique][version][uuid][object] */ 


EXTERN_C const IID IID_IDebugExceptionSettingsManager140;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("73EA578A-D148-4B71-B894-58FC82451450")
    IDebugExceptionSettingsManager140 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseExceptionSettingsEvents( 
            /* [in] */ __RPC__in_opt IDebugExceptionSettingsChangeNotification140 *pEventSink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseExceptionSettingsEvents( 
            /* [in] */ __RPC__in_opt IDebugExceptionSettingsChangeNotification140 *pEventSink) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugExceptionSettingsManager140Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugExceptionSettingsManager140 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugExceptionSettingsManager140 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugExceptionSettingsManager140 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseExceptionSettingsEvents )( 
            __RPC__in IDebugExceptionSettingsManager140 * This,
            /* [in] */ __RPC__in_opt IDebugExceptionSettingsChangeNotification140 *pEventSink);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseExceptionSettingsEvents )( 
            __RPC__in IDebugExceptionSettingsManager140 * This,
            /* [in] */ __RPC__in_opt IDebugExceptionSettingsChangeNotification140 *pEventSink);
        
        END_INTERFACE
    } IDebugExceptionSettingsManager140Vtbl;

    interface IDebugExceptionSettingsManager140
    {
        CONST_VTBL struct IDebugExceptionSettingsManager140Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugExceptionSettingsManager140_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugExceptionSettingsManager140_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugExceptionSettingsManager140_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugExceptionSettingsManager140_AdviseExceptionSettingsEvents(This,pEventSink)	\
    ( (This)->lpVtbl -> AdviseExceptionSettingsEvents(This,pEventSink) ) 

#define IDebugExceptionSettingsManager140_UnadviseExceptionSettingsEvents(This,pEventSink)	\
    ( (This)->lpVtbl -> UnadviseExceptionSettingsEvents(This,pEventSink) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugExceptionSettingsManager140_INTERFACE_DEFINED__ */


#ifndef __IDebugJMCWarningEvent140_INTERFACE_DEFINED__
#define __IDebugJMCWarningEvent140_INTERFACE_DEFINED__

/* interface IDebugJMCWarningEvent140 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IDebugJMCWarningEvent140;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bc87fb3f-20a5-432c-88e3-de67d0ed86b1")
    IDebugJMCWarningEvent140 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetModuleName( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrMessage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugJMCWarningEvent140Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugJMCWarningEvent140 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugJMCWarningEvent140 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugJMCWarningEvent140 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetModuleName )( 
            __RPC__in IDebugJMCWarningEvent140 * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrMessage);
        
        END_INTERFACE
    } IDebugJMCWarningEvent140Vtbl;

    interface IDebugJMCWarningEvent140
    {
        CONST_VTBL struct IDebugJMCWarningEvent140Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugJMCWarningEvent140_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugJMCWarningEvent140_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugJMCWarningEvent140_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugJMCWarningEvent140_GetModuleName(This,pbstrMessage)	\
    ( (This)->lpVtbl -> GetModuleName(This,pbstrMessage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugJMCWarningEvent140_INTERFACE_DEFINED__ */


#ifndef __IDebugEngineProgram140_INTERFACE_DEFINED__
#define __IDebugEngineProgram140_INTERFACE_DEFINED__

/* interface IDebugEngineProgram140 */
/* [unique][version][uuid][object] */ 


EXTERN_C const IID IID_IDebugEngineProgram140;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E74B9A86-4FDD-4AD6-995E-38977FF3AD15")
    IDebugEngineProgram140 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeforeDetach( 
            /* [out] */ __RPC__out BOOL *detachUnavailable,
            /* [out] */ __RPC__out HRESULT *detachReasonCode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugEngineProgram140Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDebugEngineProgram140 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDebugEngineProgram140 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDebugEngineProgram140 * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeforeDetach )( 
            __RPC__in IDebugEngineProgram140 * This,
            /* [out] */ __RPC__out BOOL *detachUnavailable,
            /* [out] */ __RPC__out HRESULT *detachReasonCode);
        
        END_INTERFACE
    } IDebugEngineProgram140Vtbl;

    interface IDebugEngineProgram140
    {
        CONST_VTBL struct IDebugEngineProgram140Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugEngineProgram140_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugEngineProgram140_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugEngineProgram140_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugEngineProgram140_BeforeDetach(This,detachUnavailable,detachReasonCode)	\
    ( (This)->lpVtbl -> BeforeDetach(This,detachUnavailable,detachReasonCode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugEngineProgram140_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


