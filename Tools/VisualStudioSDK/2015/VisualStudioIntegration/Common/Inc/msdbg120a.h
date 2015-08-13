

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

#ifndef __msdbg120a_h__
#define __msdbg120a_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDebugOptionList120A_FWD_DEFINED__
#define __IDebugOptionList120A_FWD_DEFINED__
typedef interface IDebugOptionList120A IDebugOptionList120A;

#endif 	/* __IDebugOptionList120A_FWD_DEFINED__ */


#ifndef __IVsDebuggerSymbolSettings120A_FWD_DEFINED__
#define __IVsDebuggerSymbolSettings120A_FWD_DEFINED__
typedef interface IVsDebuggerSymbolSettings120A IVsDebuggerSymbolSettings120A;

#endif 	/* __IVsDebuggerSymbolSettings120A_FWD_DEFINED__ */


#ifndef __IVsDebuggerSymbolSettingsManager120A_FWD_DEFINED__
#define __IVsDebuggerSymbolSettingsManager120A_FWD_DEFINED__
typedef interface IVsDebuggerSymbolSettingsManager120A IVsDebuggerSymbolSettingsManager120A;

#endif 	/* __IVsDebuggerSymbolSettingsManager120A_FWD_DEFINED__ */


#ifndef __IVsDebugLaunchNotifyListener120A_FWD_DEFINED__
#define __IVsDebugLaunchNotifyListener120A_FWD_DEFINED__
typedef interface IVsDebugLaunchNotifyListener120A IVsDebugLaunchNotifyListener120A;

#endif 	/* __IVsDebugLaunchNotifyListener120A_FWD_DEFINED__ */


#ifndef __IDebugCodeContext120A_FWD_DEFINED__
#define __IDebugCodeContext120A_FWD_DEFINED__
typedef interface IDebugCodeContext120A IDebugCodeContext120A;

#endif 	/* __IDebugCodeContext120A_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "msdbg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdbg120a_0000_0000 */
/* [local] */ 

/********************************************************
*                                                        *
*   Copyright (C) Microsoft. All rights reserved.        *
*                                                        *
*********************************************************/
typedef struct DebugOption
    {
    BSTR Name;
    VARIANT_BOOL IsEnabled;
    } 	DebugOption;



extern RPC_IF_HANDLE __MIDL_itf_msdbg120a_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdbg120a_0000_0000_v0_0_s_ifspec;

#ifndef __IDebugOptionList120A_INTERFACE_DEFINED__
#define __IDebugOptionList120A_INTERFACE_DEFINED__

/* interface IDebugOptionList120A */
/* [object][local][unique][version][uuid] */ 


EXTERN_C const IID IID_IDebugOptionList120A;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BD0E4180-EEB9-45CF-9341-1CB4CA98CE07")
    IDebugOptionList120A : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long lIndex,
            /* [retval][out] */ DebugOption *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ LPCOLESTR name,
            VARIANT_BOOL isEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LPCOLESTR name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ long lStartIndex,
            /* [in] */ LPCOLESTR name,
            VARIANT_BOOL useWildcard,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ IDebugOptionList120A **ppDebugOptionList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugOptionList120AVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugOptionList120A * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugOptionList120A * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugOptionList120A * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDebugOptionList120A * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDebugOptionList120A * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ DebugOption *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            IDebugOptionList120A * This,
            /* [in] */ LPCOLESTR name,
            VARIANT_BOOL isEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IDebugOptionList120A * This,
            /* [in] */ LPCOLESTR name);
        
        HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IDebugOptionList120A * This);
        
        HRESULT ( STDMETHODCALLTYPE *Find )( 
            IDebugOptionList120A * This,
            /* [in] */ long lStartIndex,
            /* [in] */ LPCOLESTR name,
            VARIANT_BOOL useWildcard,
            /* [retval][out] */ long *plIndex);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDebugOptionList120A * This,
            /* [retval][out] */ IDebugOptionList120A **ppDebugOptionList);
        
        END_INTERFACE
    } IDebugOptionList120AVtbl;

    interface IDebugOptionList120A
    {
        CONST_VTBL struct IDebugOptionList120AVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugOptionList120A_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugOptionList120A_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugOptionList120A_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugOptionList120A_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IDebugOptionList120A_get_Item(This,lIndex,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVal) ) 

#define IDebugOptionList120A_Add(This,name,isEnabled)	\
    ( (This)->lpVtbl -> Add(This,name,isEnabled) ) 

#define IDebugOptionList120A_Remove(This,name)	\
    ( (This)->lpVtbl -> Remove(This,name) ) 

#define IDebugOptionList120A_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IDebugOptionList120A_Find(This,lStartIndex,name,useWildcard,plIndex)	\
    ( (This)->lpVtbl -> Find(This,lStartIndex,name,useWildcard,plIndex) ) 

#define IDebugOptionList120A_Clone(This,ppDebugOptionList)	\
    ( (This)->lpVtbl -> Clone(This,ppDebugOptionList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugOptionList120A_INTERFACE_DEFINED__ */


#ifndef __IVsDebuggerSymbolSettings120A_INTERFACE_DEFINED__
#define __IVsDebuggerSymbolSettings120A_INTERFACE_DEFINED__

/* interface IVsDebuggerSymbolSettings120A */
/* [object][local][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsDebuggerSymbolSettings120A;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BA6E5E41-BE38-4D79-BE35-570160BE009E")
    IVsDebuggerSymbolSettings120A : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SymbolPaths( 
            /* [retval][out] */ IDebugOptionList120A **ppSymbolPaths) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IncludeList( 
            /* [retval][out] */ IDebugOptionList120A **ppIncludeList) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExcludeList( 
            /* [retval][out] */ IDebugOptionList120A **ppExcludeList) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CachePath( 
            /* [in] */ LPCOLESTR cachePath) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachePath( 
            /* [retval][out] */ BSTR *bstrCachePath) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsManualLoad( 
            /* [in] */ VARIANT_BOOL flag) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsManualLoad( 
            /* [retval][out] */ VARIANT_BOOL *flag) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsLoadAdjacent( 
            /* [in] */ VARIANT_BOOL flag) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsLoadAdjacent( 
            /* [retval][out] */ VARIANT_BOOL *flag) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_UseMSSymbolServers( 
            /* [in] */ VARIANT_BOOL flag) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UseMSSymbolServers( 
            /* [retval][out] */ VARIANT_BOOL *flag) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ IVsDebuggerSymbolSettings120A **ppVsDebuggerSymbolSettings) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebuggerSymbolSettings120AVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVsDebuggerSymbolSettings120A * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVsDebuggerSymbolSettings120A * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVsDebuggerSymbolSettings120A * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SymbolPaths )( 
            IVsDebuggerSymbolSettings120A * This,
            /* [retval][out] */ IDebugOptionList120A **ppSymbolPaths);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeList )( 
            IVsDebuggerSymbolSettings120A * This,
            /* [retval][out] */ IDebugOptionList120A **ppIncludeList);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExcludeList )( 
            IVsDebuggerSymbolSettings120A * This,
            /* [retval][out] */ IDebugOptionList120A **ppExcludeList);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachePath )( 
            IVsDebuggerSymbolSettings120A * This,
            /* [in] */ LPCOLESTR cachePath);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachePath )( 
            IVsDebuggerSymbolSettings120A * This,
            /* [retval][out] */ BSTR *bstrCachePath);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsManualLoad )( 
            IVsDebuggerSymbolSettings120A * This,
            /* [in] */ VARIANT_BOOL flag);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsManualLoad )( 
            IVsDebuggerSymbolSettings120A * This,
            /* [retval][out] */ VARIANT_BOOL *flag);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsLoadAdjacent )( 
            IVsDebuggerSymbolSettings120A * This,
            /* [in] */ VARIANT_BOOL flag);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLoadAdjacent )( 
            IVsDebuggerSymbolSettings120A * This,
            /* [retval][out] */ VARIANT_BOOL *flag);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseMSSymbolServers )( 
            IVsDebuggerSymbolSettings120A * This,
            /* [in] */ VARIANT_BOOL flag);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseMSSymbolServers )( 
            IVsDebuggerSymbolSettings120A * This,
            /* [retval][out] */ VARIANT_BOOL *flag);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IVsDebuggerSymbolSettings120A * This,
            /* [retval][out] */ IVsDebuggerSymbolSettings120A **ppVsDebuggerSymbolSettings);
        
        END_INTERFACE
    } IVsDebuggerSymbolSettings120AVtbl;

    interface IVsDebuggerSymbolSettings120A
    {
        CONST_VTBL struct IVsDebuggerSymbolSettings120AVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebuggerSymbolSettings120A_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebuggerSymbolSettings120A_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebuggerSymbolSettings120A_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebuggerSymbolSettings120A_get_SymbolPaths(This,ppSymbolPaths)	\
    ( (This)->lpVtbl -> get_SymbolPaths(This,ppSymbolPaths) ) 

#define IVsDebuggerSymbolSettings120A_get_IncludeList(This,ppIncludeList)	\
    ( (This)->lpVtbl -> get_IncludeList(This,ppIncludeList) ) 

#define IVsDebuggerSymbolSettings120A_get_ExcludeList(This,ppExcludeList)	\
    ( (This)->lpVtbl -> get_ExcludeList(This,ppExcludeList) ) 

#define IVsDebuggerSymbolSettings120A_put_CachePath(This,cachePath)	\
    ( (This)->lpVtbl -> put_CachePath(This,cachePath) ) 

#define IVsDebuggerSymbolSettings120A_get_CachePath(This,bstrCachePath)	\
    ( (This)->lpVtbl -> get_CachePath(This,bstrCachePath) ) 

#define IVsDebuggerSymbolSettings120A_put_IsManualLoad(This,flag)	\
    ( (This)->lpVtbl -> put_IsManualLoad(This,flag) ) 

#define IVsDebuggerSymbolSettings120A_get_IsManualLoad(This,flag)	\
    ( (This)->lpVtbl -> get_IsManualLoad(This,flag) ) 

#define IVsDebuggerSymbolSettings120A_put_IsLoadAdjacent(This,flag)	\
    ( (This)->lpVtbl -> put_IsLoadAdjacent(This,flag) ) 

#define IVsDebuggerSymbolSettings120A_get_IsLoadAdjacent(This,flag)	\
    ( (This)->lpVtbl -> get_IsLoadAdjacent(This,flag) ) 

#define IVsDebuggerSymbolSettings120A_put_UseMSSymbolServers(This,flag)	\
    ( (This)->lpVtbl -> put_UseMSSymbolServers(This,flag) ) 

#define IVsDebuggerSymbolSettings120A_get_UseMSSymbolServers(This,flag)	\
    ( (This)->lpVtbl -> get_UseMSSymbolServers(This,flag) ) 

#define IVsDebuggerSymbolSettings120A_Clone(This,ppVsDebuggerSymbolSettings)	\
    ( (This)->lpVtbl -> Clone(This,ppVsDebuggerSymbolSettings) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebuggerSymbolSettings120A_INTERFACE_DEFINED__ */


#ifndef __IVsDebuggerSymbolSettingsManager120A_INTERFACE_DEFINED__
#define __IVsDebuggerSymbolSettingsManager120A_INTERFACE_DEFINED__

/* interface IVsDebuggerSymbolSettingsManager120A */
/* [object][local][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsDebuggerSymbolSettingsManager120A;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B4460C14-0296-4182-AECD-73514987F21E")
    IVsDebuggerSymbolSettingsManager120A : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrentSymbolSettings( 
            /* [retval][out] */ IVsDebuggerSymbolSettings120A **ppSymbolSettings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveSymbolSettings( 
            /* [in] */ IVsDebuggerSymbolSettings120A *pSymbolSettings,
            /* [defaultvalue][in] */ VARIANT_BOOL loadSymbolsNow = 0) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebuggerSymbolSettingsManager120AVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVsDebuggerSymbolSettingsManager120A * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVsDebuggerSymbolSettingsManager120A * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVsDebuggerSymbolSettingsManager120A * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSymbolSettings )( 
            IVsDebuggerSymbolSettingsManager120A * This,
            /* [retval][out] */ IVsDebuggerSymbolSettings120A **ppSymbolSettings);
        
        HRESULT ( STDMETHODCALLTYPE *SaveSymbolSettings )( 
            IVsDebuggerSymbolSettingsManager120A * This,
            /* [in] */ IVsDebuggerSymbolSettings120A *pSymbolSettings,
            /* [defaultvalue][in] */ VARIANT_BOOL loadSymbolsNow);
        
        END_INTERFACE
    } IVsDebuggerSymbolSettingsManager120AVtbl;

    interface IVsDebuggerSymbolSettingsManager120A
    {
        CONST_VTBL struct IVsDebuggerSymbolSettingsManager120AVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebuggerSymbolSettingsManager120A_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebuggerSymbolSettingsManager120A_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebuggerSymbolSettingsManager120A_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebuggerSymbolSettingsManager120A_GetCurrentSymbolSettings(This,ppSymbolSettings)	\
    ( (This)->lpVtbl -> GetCurrentSymbolSettings(This,ppSymbolSettings) ) 

#define IVsDebuggerSymbolSettingsManager120A_SaveSymbolSettings(This,pSymbolSettings,loadSymbolsNow)	\
    ( (This)->lpVtbl -> SaveSymbolSettings(This,pSymbolSettings,loadSymbolsNow) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebuggerSymbolSettingsManager120A_INTERFACE_DEFINED__ */


#ifndef __IVsDebugLaunchNotifyListener120A_INTERFACE_DEFINED__
#define __IVsDebugLaunchNotifyListener120A_INTERFACE_DEFINED__

/* interface IVsDebugLaunchNotifyListener120A */
/* [object][local][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsDebugLaunchNotifyListener120A;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2CF077B1-ECC0-4DC5-BF44-414A4190012D")
    IVsDebugLaunchNotifyListener120A : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAdditionalLaunchFlags( 
            /* [out] */ DWORD *pdwAdditionalLaunchFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebugLaunchNotifyListener120AVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVsDebugLaunchNotifyListener120A * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVsDebugLaunchNotifyListener120A * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVsDebugLaunchNotifyListener120A * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAdditionalLaunchFlags )( 
            IVsDebugLaunchNotifyListener120A * This,
            /* [out] */ DWORD *pdwAdditionalLaunchFlags);
        
        END_INTERFACE
    } IVsDebugLaunchNotifyListener120AVtbl;

    interface IVsDebugLaunchNotifyListener120A
    {
        CONST_VTBL struct IVsDebugLaunchNotifyListener120AVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebugLaunchNotifyListener120A_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebugLaunchNotifyListener120A_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebugLaunchNotifyListener120A_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebugLaunchNotifyListener120A_GetAdditionalLaunchFlags(This,pdwAdditionalLaunchFlags)	\
    ( (This)->lpVtbl -> GetAdditionalLaunchFlags(This,pdwAdditionalLaunchFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebugLaunchNotifyListener120A_INTERFACE_DEFINED__ */


#ifndef __IDebugCodeContext120A_INTERFACE_DEFINED__
#define __IDebugCodeContext120A_INTERFACE_DEFINED__

/* interface IDebugCodeContext120A */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IDebugCodeContext120A;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("98a98e96-a59a-4580-925f-4e7ff5a49cfe")
    IDebugCodeContext120A : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAlternateDocumentContext( 
            /* [out] */ IDebugDocumentContext2 **ppDocumentContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDebugCodeContext120AVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDebugCodeContext120A * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDebugCodeContext120A * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDebugCodeContext120A * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAlternateDocumentContext )( 
            IDebugCodeContext120A * This,
            /* [out] */ IDebugDocumentContext2 **ppDocumentContext);
        
        END_INTERFACE
    } IDebugCodeContext120AVtbl;

    interface IDebugCodeContext120A
    {
        CONST_VTBL struct IDebugCodeContext120AVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDebugCodeContext120A_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDebugCodeContext120A_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDebugCodeContext120A_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDebugCodeContext120A_GetAlternateDocumentContext(This,ppDocumentContext)	\
    ( (This)->lpVtbl -> GetAlternateDocumentContext(This,ppDocumentContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDebugCodeContext120A_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


