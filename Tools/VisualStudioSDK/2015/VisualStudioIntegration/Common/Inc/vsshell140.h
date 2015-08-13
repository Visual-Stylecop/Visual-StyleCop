

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

#ifndef __vsshell140_h__
#define __vsshell140_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVsImageMonikerImageList_FWD_DEFINED__
#define __IVsImageMonikerImageList_FWD_DEFINED__
typedef interface IVsImageMonikerImageList IVsImageMonikerImageList;

#endif 	/* __IVsImageMonikerImageList_FWD_DEFINED__ */


#ifndef __IVsImageService2_FWD_DEFINED__
#define __IVsImageService2_FWD_DEFINED__
typedef interface IVsImageService2 IVsImageService2;

#endif 	/* __IVsImageService2_FWD_DEFINED__ */


#ifndef __IVsImageMonikerSource_FWD_DEFINED__
#define __IVsImageMonikerSource_FWD_DEFINED__
typedef interface IVsImageMonikerSource IVsImageMonikerSource;

#endif 	/* __IVsImageMonikerSource_FWD_DEFINED__ */


#ifndef __IVsTaskProvider5_FWD_DEFINED__
#define __IVsTaskProvider5_FWD_DEFINED__
typedef interface IVsTaskProvider5 IVsTaskProvider5;

#endif 	/* __IVsTaskProvider5_FWD_DEFINED__ */


#ifndef __IVsTask2_FWD_DEFINED__
#define __IVsTask2_FWD_DEFINED__
typedef interface IVsTask2 IVsTask2;

#endif 	/* __IVsTask2_FWD_DEFINED__ */


#ifndef __IVsThreadedWaitDialog4_FWD_DEFINED__
#define __IVsThreadedWaitDialog4_FWD_DEFINED__
typedef interface IVsThreadedWaitDialog4 IVsThreadedWaitDialog4;

#endif 	/* __IVsThreadedWaitDialog4_FWD_DEFINED__ */


#ifndef __SVsHubService_FWD_DEFINED__
#define __SVsHubService_FWD_DEFINED__
typedef interface SVsHubService SVsHubService;

#endif 	/* __SVsHubService_FWD_DEFINED__ */


#ifndef __SVsAccountManager_FWD_DEFINED__
#define __SVsAccountManager_FWD_DEFINED__
typedef interface SVsAccountManager SVsAccountManager;

#endif 	/* __SVsAccountManager_FWD_DEFINED__ */


#ifndef __IAsyncProgressCallback_FWD_DEFINED__
#define __IAsyncProgressCallback_FWD_DEFINED__
typedef interface IAsyncProgressCallback IAsyncProgressCallback;

#endif 	/* __IAsyncProgressCallback_FWD_DEFINED__ */


#ifndef __IAsyncServiceProvider_FWD_DEFINED__
#define __IAsyncServiceProvider_FWD_DEFINED__
typedef interface IAsyncServiceProvider IAsyncServiceProvider;

#endif 	/* __IAsyncServiceProvider_FWD_DEFINED__ */


#ifndef __SAsyncServiceProvider_FWD_DEFINED__
#define __SAsyncServiceProvider_FWD_DEFINED__
typedef interface SAsyncServiceProvider SAsyncServiceProvider;

#endif 	/* __SAsyncServiceProvider_FWD_DEFINED__ */


#ifndef __IProfferAsyncService_FWD_DEFINED__
#define __IProfferAsyncService_FWD_DEFINED__
typedef interface IProfferAsyncService IProfferAsyncService;

#endif 	/* __IProfferAsyncService_FWD_DEFINED__ */


#ifndef __SProfferAsyncService_FWD_DEFINED__
#define __SProfferAsyncService_FWD_DEFINED__
typedef interface SProfferAsyncService SProfferAsyncService;

#endif 	/* __SProfferAsyncService_FWD_DEFINED__ */


#ifndef __IVsServiceInfo_FWD_DEFINED__
#define __IVsServiceInfo_FWD_DEFINED__
typedef interface IVsServiceInfo IVsServiceInfo;

#endif 	/* __IVsServiceInfo_FWD_DEFINED__ */


#ifndef __IVsServiceInfoQueryService_FWD_DEFINED__
#define __IVsServiceInfoQueryService_FWD_DEFINED__
typedef interface IVsServiceInfoQueryService IVsServiceInfoQueryService;

#endif 	/* __IVsServiceInfoQueryService_FWD_DEFINED__ */


#ifndef __SVsServiceInfoQueryService_FWD_DEFINED__
#define __SVsServiceInfoQueryService_FWD_DEFINED__
typedef interface SVsServiceInfoQueryService SVsServiceInfoQueryService;

#endif 	/* __SVsServiceInfoQueryService_FWD_DEFINED__ */


#ifndef __IAsyncLoadablePackageInitialize_FWD_DEFINED__
#define __IAsyncLoadablePackageInitialize_FWD_DEFINED__
typedef interface IAsyncLoadablePackageInitialize IAsyncLoadablePackageInitialize;

#endif 	/* __IAsyncLoadablePackageInitialize_FWD_DEFINED__ */


#ifndef __SVsAccountManagementService_FWD_DEFINED__
#define __SVsAccountManagementService_FWD_DEFINED__
typedef interface SVsAccountManagementService SVsAccountManagementService;

#endif 	/* __SVsAccountManagementService_FWD_DEFINED__ */


#ifndef __IVsShell7_FWD_DEFINED__
#define __IVsShell7_FWD_DEFINED__
typedef interface IVsShell7 IVsShell7;

#endif 	/* __IVsShell7_FWD_DEFINED__ */


#ifndef __IVsReferenceManagerUserReloadRequired_FWD_DEFINED__
#define __IVsReferenceManagerUserReloadRequired_FWD_DEFINED__
typedef interface IVsReferenceManagerUserReloadRequired IVsReferenceManagerUserReloadRequired;

#endif 	/* __IVsReferenceManagerUserReloadRequired_FWD_DEFINED__ */


#ifndef __IVsSharedProjectReference_FWD_DEFINED__
#define __IVsSharedProjectReference_FWD_DEFINED__
typedef interface IVsSharedProjectReference IVsSharedProjectReference;

#endif 	/* __IVsSharedProjectReference_FWD_DEFINED__ */


#ifndef __IVsSharedProjectReferenceProviderContext_FWD_DEFINED__
#define __IVsSharedProjectReferenceProviderContext_FWD_DEFINED__
typedef interface IVsSharedProjectReferenceProviderContext IVsSharedProjectReferenceProviderContext;

#endif 	/* __IVsSharedProjectReferenceProviderContext_FWD_DEFINED__ */


#ifndef __IVsEnumSharedProjectReferences_FWD_DEFINED__
#define __IVsEnumSharedProjectReferences_FWD_DEFINED__
typedef interface IVsEnumSharedProjectReferences IVsEnumSharedProjectReferences;

#endif 	/* __IVsEnumSharedProjectReferences_FWD_DEFINED__ */


#ifndef __IVsSharedMSBuildFilesManagerHierarchy2_FWD_DEFINED__
#define __IVsSharedMSBuildFilesManagerHierarchy2_FWD_DEFINED__
typedef interface IVsSharedMSBuildFilesManagerHierarchy2 IVsSharedMSBuildFilesManagerHierarchy2;

#endif 	/* __IVsSharedMSBuildFilesManagerHierarchy2_FWD_DEFINED__ */


#ifndef __IVsSharedProjectReferencesHelper_FWD_DEFINED__
#define __IVsSharedProjectReferencesHelper_FWD_DEFINED__
typedef interface IVsSharedProjectReferencesHelper IVsSharedProjectReferencesHelper;

#endif 	/* __IVsSharedProjectReferencesHelper_FWD_DEFINED__ */


#ifndef __IVsPlatformReferenceProviderContext2_FWD_DEFINED__
#define __IVsPlatformReferenceProviderContext2_FWD_DEFINED__
typedef interface IVsPlatformReferenceProviderContext2 IVsPlatformReferenceProviderContext2;

#endif 	/* __IVsPlatformReferenceProviderContext2_FWD_DEFINED__ */


#ifndef __IVsPlatformReferenceProviderContext3_FWD_DEFINED__
#define __IVsPlatformReferenceProviderContext3_FWD_DEFINED__
typedef interface IVsPlatformReferenceProviderContext3 IVsPlatformReferenceProviderContext3;

#endif 	/* __IVsPlatformReferenceProviderContext3_FWD_DEFINED__ */


#ifndef __IVsSccGlyphs2_FWD_DEFINED__
#define __IVsSccGlyphs2_FWD_DEFINED__
typedef interface IVsSccGlyphs2 IVsSccGlyphs2;

#endif 	/* __IVsSccGlyphs2_FWD_DEFINED__ */


#ifndef __SVsSharedProjectReferencesHelper_FWD_DEFINED__
#define __SVsSharedProjectReferencesHelper_FWD_DEFINED__
typedef interface SVsSharedProjectReferencesHelper SVsSharedProjectReferencesHelper;

#endif 	/* __SVsSharedProjectReferencesHelper_FWD_DEFINED__ */


#ifndef __SharedProjectReferenceProviderGuid_FWD_DEFINED__
#define __SharedProjectReferenceProviderGuid_FWD_DEFINED__
typedef interface SharedProjectReferenceProviderGuid SharedProjectReferenceProviderGuid;

#endif 	/* __SharedProjectReferenceProviderGuid_FWD_DEFINED__ */


#ifndef __IVsSharedProjectQueryCanBeReferenced_FWD_DEFINED__
#define __IVsSharedProjectQueryCanBeReferenced_FWD_DEFINED__
typedef interface IVsSharedProjectQueryCanBeReferenced IVsSharedProjectQueryCanBeReferenced;

#endif 	/* __IVsSharedProjectQueryCanBeReferenced_FWD_DEFINED__ */


#ifndef __IVsStatusbar3_FWD_DEFINED__
#define __IVsStatusbar3_FWD_DEFINED__
typedef interface IVsStatusbar3 IVsStatusbar3;

#endif 	/* __IVsStatusbar3_FWD_DEFINED__ */


#ifndef __BooleanSymbolExpressionEvaluator_FWD_DEFINED__
#define __BooleanSymbolExpressionEvaluator_FWD_DEFINED__
typedef interface BooleanSymbolExpressionEvaluator BooleanSymbolExpressionEvaluator;

#endif 	/* __BooleanSymbolExpressionEvaluator_FWD_DEFINED__ */


#ifndef __IVsBooleanSymbolPresenceChecker_FWD_DEFINED__
#define __IVsBooleanSymbolPresenceChecker_FWD_DEFINED__
typedef interface IVsBooleanSymbolPresenceChecker IVsBooleanSymbolPresenceChecker;

#endif 	/* __IVsBooleanSymbolPresenceChecker_FWD_DEFINED__ */


#ifndef __IVsBooleanSymbolPresenceBulkChecker_FWD_DEFINED__
#define __IVsBooleanSymbolPresenceBulkChecker_FWD_DEFINED__
typedef interface IVsBooleanSymbolPresenceBulkChecker IVsBooleanSymbolPresenceBulkChecker;

#endif 	/* __IVsBooleanSymbolPresenceBulkChecker_FWD_DEFINED__ */


#ifndef __IVsBooleanSymbolExpressionEvaluator2_FWD_DEFINED__
#define __IVsBooleanSymbolExpressionEvaluator2_FWD_DEFINED__
typedef interface IVsBooleanSymbolExpressionEvaluator2 IVsBooleanSymbolExpressionEvaluator2;

#endif 	/* __IVsBooleanSymbolExpressionEvaluator2_FWD_DEFINED__ */


#ifndef __IVsStartupProjectsListService_FWD_DEFINED__
#define __IVsStartupProjectsListService_FWD_DEFINED__
typedef interface IVsStartupProjectsListService IVsStartupProjectsListService;

#endif 	/* __IVsStartupProjectsListService_FWD_DEFINED__ */


#ifndef __SVsStartupProjectsListService_FWD_DEFINED__
#define __SVsStartupProjectsListService_FWD_DEFINED__
typedef interface SVsStartupProjectsListService SVsStartupProjectsListService;

#endif 	/* __SVsStartupProjectsListService_FWD_DEFINED__ */


#ifndef __IVsInfoBarTextSpan_FWD_DEFINED__
#define __IVsInfoBarTextSpan_FWD_DEFINED__
typedef interface IVsInfoBarTextSpan IVsInfoBarTextSpan;

#endif 	/* __IVsInfoBarTextSpan_FWD_DEFINED__ */


#ifndef __IVsInfoBarActionItem_FWD_DEFINED__
#define __IVsInfoBarActionItem_FWD_DEFINED__
typedef interface IVsInfoBarActionItem IVsInfoBarActionItem;

#endif 	/* __IVsInfoBarActionItem_FWD_DEFINED__ */


#ifndef __IVsInfoBarTextSpanCollection_FWD_DEFINED__
#define __IVsInfoBarTextSpanCollection_FWD_DEFINED__
typedef interface IVsInfoBarTextSpanCollection IVsInfoBarTextSpanCollection;

#endif 	/* __IVsInfoBarTextSpanCollection_FWD_DEFINED__ */


#ifndef __IVsInfoBarActionItemCollection_FWD_DEFINED__
#define __IVsInfoBarActionItemCollection_FWD_DEFINED__
typedef interface IVsInfoBarActionItemCollection IVsInfoBarActionItemCollection;

#endif 	/* __IVsInfoBarActionItemCollection_FWD_DEFINED__ */


#ifndef __IVsInfoBar_FWD_DEFINED__
#define __IVsInfoBar_FWD_DEFINED__
typedef interface IVsInfoBar IVsInfoBar;

#endif 	/* __IVsInfoBar_FWD_DEFINED__ */


#ifndef __IVsInfoBarUIEvents_FWD_DEFINED__
#define __IVsInfoBarUIEvents_FWD_DEFINED__
typedef interface IVsInfoBarUIEvents IVsInfoBarUIEvents;

#endif 	/* __IVsInfoBarUIEvents_FWD_DEFINED__ */


#ifndef __IVsInfoBarUIElement_FWD_DEFINED__
#define __IVsInfoBarUIElement_FWD_DEFINED__
typedef interface IVsInfoBarUIElement IVsInfoBarUIElement;

#endif 	/* __IVsInfoBarUIElement_FWD_DEFINED__ */


#ifndef __IVsInfoBarUIFactory_FWD_DEFINED__
#define __IVsInfoBarUIFactory_FWD_DEFINED__
typedef interface IVsInfoBarUIFactory IVsInfoBarUIFactory;

#endif 	/* __IVsInfoBarUIFactory_FWD_DEFINED__ */


#ifndef __SVsInfoBarUIFactory_FWD_DEFINED__
#define __SVsInfoBarUIFactory_FWD_DEFINED__
typedef interface SVsInfoBarUIFactory SVsInfoBarUIFactory;

#endif 	/* __SVsInfoBarUIFactory_FWD_DEFINED__ */


#ifndef __IVsInfoBarHost_FWD_DEFINED__
#define __IVsInfoBarHost_FWD_DEFINED__
typedef interface IVsInfoBarHost IVsInfoBarHost;

#endif 	/* __IVsInfoBarHost_FWD_DEFINED__ */


#ifndef __IVsWindowFrame5_FWD_DEFINED__
#define __IVsWindowFrame5_FWD_DEFINED__
typedef interface IVsWindowFrame5 IVsWindowFrame5;

#endif 	/* __IVsWindowFrame5_FWD_DEFINED__ */


#ifndef __IVsWindowFrameEvents_FWD_DEFINED__
#define __IVsWindowFrameEvents_FWD_DEFINED__
typedef interface IVsWindowFrameEvents IVsWindowFrameEvents;

#endif 	/* __IVsWindowFrameEvents_FWD_DEFINED__ */


#ifndef __IVsDebugger5_FWD_DEFINED__
#define __IVsDebugger5_FWD_DEFINED__
typedef interface IVsDebugger5 IVsDebugger5;

#endif 	/* __IVsDebugger5_FWD_DEFINED__ */


#ifndef __IVsUIShell7_FWD_DEFINED__
#define __IVsUIShell7_FWD_DEFINED__
typedef interface IVsUIShell7 IVsUIShell7;

#endif 	/* __IVsUIShell7_FWD_DEFINED__ */


#ifndef __IVsToolsOptionsHelp_FWD_DEFINED__
#define __IVsToolsOptionsHelp_FWD_DEFINED__
typedef interface IVsToolsOptionsHelp IVsToolsOptionsHelp;

#endif 	/* __IVsToolsOptionsHelp_FWD_DEFINED__ */


#ifndef __IComWrapper_FWD_DEFINED__
#define __IComWrapper_FWD_DEFINED__
typedef interface IComWrapper IComWrapper;

#endif 	/* __IComWrapper_FWD_DEFINED__ */


#ifndef __IComWrapperFactory_FWD_DEFINED__
#define __IComWrapperFactory_FWD_DEFINED__
typedef interface IComWrapperFactory IComWrapperFactory;

#endif 	/* __IComWrapperFactory_FWD_DEFINED__ */


#ifndef __IVsOutputWindowPane3_FWD_DEFINED__
#define __IVsOutputWindowPane3_FWD_DEFINED__
typedef interface IVsOutputWindowPane3 IVsOutputWindowPane3;

#endif 	/* __IVsOutputWindowPane3_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vsshell.h"
#include "vsshell2.h"
#include "vsshell80.h"
#include "vsshell90.h"
#include "vsshell100.h"
#include "vsshell110.h"
#include "vsshell120.h"
#include "ImageParameters140.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vsshell140_0000_0000 */
/* [local] */ 

#pragma once

enum __VSHIERARCHYIMAGEASPECT
    {
        HIA_Icon	= 0,
        HIA_OpenFolderIcon	= 1,
        HIA_OverlayIcon	= 2,
        HIA_StateIcon	= 3
    } ;
typedef int VSHIERARCHYIMAGEASPECT;



extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0000_v0_0_s_ifspec;

#ifndef __IVsImageMonikerImageList_INTERFACE_DEFINED__
#define __IVsImageMonikerImageList_INTERFACE_DEFINED__

/* interface IVsImageMonikerImageList */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsImageMonikerImageList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8660a8eb-6c2e-45c7-920a-73a45ef4de8e")
    IVsImageMonikerImageList : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ImageCount( 
            /* [retval][out] */ __RPC__out int *imageCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageMonikers( 
            /* [in] */ int firstImageIndex,
            /* [in] */ int imageMonikerCount,
            /* [size_is][out][in] */ __RPC__inout_ecount_full(imageMonikerCount) ImageMoniker imageMonikers[  ]) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsImageMonikerImageListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsImageMonikerImageList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsImageMonikerImageList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsImageMonikerImageList * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageCount )( 
            __RPC__in IVsImageMonikerImageList * This,
            /* [retval][out] */ __RPC__out int *imageCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetImageMonikers )( 
            __RPC__in IVsImageMonikerImageList * This,
            /* [in] */ int firstImageIndex,
            /* [in] */ int imageMonikerCount,
            /* [size_is][out][in] */ __RPC__inout_ecount_full(imageMonikerCount) ImageMoniker imageMonikers[  ]);
        
        END_INTERFACE
    } IVsImageMonikerImageListVtbl;

    interface IVsImageMonikerImageList
    {
        CONST_VTBL struct IVsImageMonikerImageListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsImageMonikerImageList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsImageMonikerImageList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsImageMonikerImageList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsImageMonikerImageList_get_ImageCount(This,imageCount)	\
    ( (This)->lpVtbl -> get_ImageCount(This,imageCount) ) 

#define IVsImageMonikerImageList_GetImageMonikers(This,firstImageIndex,imageMonikerCount,imageMonikers)	\
    ( (This)->lpVtbl -> GetImageMonikers(This,firstImageIndex,imageMonikerCount,imageMonikers) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsImageMonikerImageList_INTERFACE_DEFINED__ */


#ifndef __IVsImageService2_INTERFACE_DEFINED__
#define __IVsImageService2_INTERFACE_DEFINED__

/* interface IVsImageService2 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsImageService2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("676ce47b-7375-4d53-b0bc-ef9322a2ae62")
    IVsImageService2 : public IVsImageService
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetImage( 
            /* [in] */ ImageMoniker moniker,
            /* [in] */ ImageAttributes attributes,
            /* [retval][out] */ __RPC__deref_out_opt IVsUIObject **imageObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageMonikerForFile( 
            /* [in] */ __RPC__in LPCOLESTR filename,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageMonikerForHierarchyItem( 
            /* [in] */ __RPC__in_opt IVsHierarchy *hierarchy,
            /* [in] */ VSITEMID hierarchyItemID,
            /* [in] */ VSHIERARCHYIMAGEASPECT hierarchyImageAspect,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageMonikerForName( 
            /* [in] */ __RPC__in LPCOLESTR imageName,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCustomImage( 
            /* [in] */ __RPC__in_opt IVsUIObject *imageObject,
            /* [retval][out] */ __RPC__deref_out_opt IImageHandle **handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCustomImage( 
            /* [in] */ __RPC__in_opt IImageHandle *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCustomImageList( 
            /* [in] */ __RPC__in_opt IVsImageMonikerImageList *imageList,
            /* [retval][out] */ __RPC__deref_out_opt IImageHandle **handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCustomImageList( 
            /* [in] */ __RPC__in_opt IImageHandle *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCustomCompositeImage( 
            /* [in] */ int virtualWidth,
            /* [in] */ int virtualHeight,
            /* [in] */ int layerCount,
            /* [size_is][in] */ __RPC__in_ecount_full(layerCount) ImageCompositionLayer layers[  ],
            /* [retval][out] */ __RPC__deref_out_opt IImageHandle **handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ThemeDIBits( 
            /* [in] */ int pixelCount,
            /* [out][in][size_is] */ __RPC__inout_ecount_full(pixelCount) BYTE pixels[  ],
            /* [in] */ int width,
            /* [in] */ int height,
            /* [in] */ VARIANT_BOOL isTopDownBitmap,
            /* [in] */ COLORREF backgroundColor,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *themed) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryAssociateNameWithMoniker( 
            /* [in] */ __RPC__in LPCOLESTR imageName,
            /* [in] */ ImageMoniker moniker,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *succeeded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryParseImageMoniker( 
            /* [in] */ __RPC__in LPCOLESTR monikerAsString,
            /* [out][custom] */ __RPC__out ImageMoniker *moniker,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *succeeded) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE CreateMonikerImageListFromHIMAGELIST( 
            /* [in] */ HANDLE hImageList,
            /* [retval][out] */ IVsImageMonikerImageList **monikerImageList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageMonikerType( 
            /* [in] */ ImageMoniker moniker,
            /* [retval][out] */ __RPC__out ImageMonikerType *monikerType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageListImageMonikers( 
            /* [in] */ ImageMoniker moniker,
            /* [retval][out] */ __RPC__deref_out_opt IVsImageMonikerImageList **imageListMonikers) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsImageService2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsImageService2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsImageService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in LPCOLESTR name,
            /* [in] */ __RPC__in_opt IVsUIObject *pIconObject);
        
        HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in LPCOLESTR name,
            /* [retval][out] */ __RPC__deref_out_opt IVsUIObject **ppIconObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconForFile )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in LPCOLESTR filename,
            /* [in] */ __VSUIDATAFORMAT desiredFormat,
            /* [retval][out] */ __RPC__deref_out_opt IVsUIObject **ppIconObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconForFileEx )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in LPCOLESTR filename,
            /* [in] */ __VSUIDATAFORMAT desiredFormat,
            /* [out] */ __RPC__out VSIconSource *iconSource,
            /* [retval][out] */ __RPC__deref_out_opt IVsUIObject **ppIconObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetImage )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ ImageMoniker moniker,
            /* [in] */ ImageAttributes attributes,
            /* [retval][out] */ __RPC__deref_out_opt IVsUIObject **imageObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetImageMonikerForFile )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in LPCOLESTR filename,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker);
        
        HRESULT ( STDMETHODCALLTYPE *GetImageMonikerForHierarchyItem )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in_opt IVsHierarchy *hierarchy,
            /* [in] */ VSITEMID hierarchyItemID,
            /* [in] */ VSHIERARCHYIMAGEASPECT hierarchyImageAspect,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker);
        
        HRESULT ( STDMETHODCALLTYPE *GetImageMonikerForName )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in LPCOLESTR imageName,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker);
        
        HRESULT ( STDMETHODCALLTYPE *AddCustomImage )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in_opt IVsUIObject *imageObject,
            /* [retval][out] */ __RPC__deref_out_opt IImageHandle **handle);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCustomImage )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in_opt IImageHandle *handle);
        
        HRESULT ( STDMETHODCALLTYPE *AddCustomImageList )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in_opt IVsImageMonikerImageList *imageList,
            /* [retval][out] */ __RPC__deref_out_opt IImageHandle **handle);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCustomImageList )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in_opt IImageHandle *handle);
        
        HRESULT ( STDMETHODCALLTYPE *AddCustomCompositeImage )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ int virtualWidth,
            /* [in] */ int virtualHeight,
            /* [in] */ int layerCount,
            /* [size_is][in] */ __RPC__in_ecount_full(layerCount) ImageCompositionLayer layers[  ],
            /* [retval][out] */ __RPC__deref_out_opt IImageHandle **handle);
        
        HRESULT ( STDMETHODCALLTYPE *ThemeDIBits )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ int pixelCount,
            /* [out][in][size_is] */ __RPC__inout_ecount_full(pixelCount) BYTE pixels[  ],
            /* [in] */ int width,
            /* [in] */ int height,
            /* [in] */ VARIANT_BOOL isTopDownBitmap,
            /* [in] */ COLORREF backgroundColor,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *themed);
        
        HRESULT ( STDMETHODCALLTYPE *TryAssociateNameWithMoniker )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in LPCOLESTR imageName,
            /* [in] */ ImageMoniker moniker,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *succeeded);
        
        HRESULT ( STDMETHODCALLTYPE *TryParseImageMoniker )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ __RPC__in LPCOLESTR monikerAsString,
            /* [out][custom] */ __RPC__out ImageMoniker *moniker,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *succeeded);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *CreateMonikerImageListFromHIMAGELIST )( 
            IVsImageService2 * This,
            /* [in] */ HANDLE hImageList,
            /* [retval][out] */ IVsImageMonikerImageList **monikerImageList);
        
        HRESULT ( STDMETHODCALLTYPE *GetImageMonikerType )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ ImageMoniker moniker,
            /* [retval][out] */ __RPC__out ImageMonikerType *monikerType);
        
        HRESULT ( STDMETHODCALLTYPE *GetImageListImageMonikers )( 
            __RPC__in IVsImageService2 * This,
            /* [in] */ ImageMoniker moniker,
            /* [retval][out] */ __RPC__deref_out_opt IVsImageMonikerImageList **imageListMonikers);
        
        END_INTERFACE
    } IVsImageService2Vtbl;

    interface IVsImageService2
    {
        CONST_VTBL struct IVsImageService2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsImageService2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsImageService2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsImageService2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsImageService2_Add(This,name,pIconObject)	\
    ( (This)->lpVtbl -> Add(This,name,pIconObject) ) 

#define IVsImageService2_Get(This,name,ppIconObject)	\
    ( (This)->lpVtbl -> Get(This,name,ppIconObject) ) 

#define IVsImageService2_GetIconForFile(This,filename,desiredFormat,ppIconObject)	\
    ( (This)->lpVtbl -> GetIconForFile(This,filename,desiredFormat,ppIconObject) ) 

#define IVsImageService2_GetIconForFileEx(This,filename,desiredFormat,iconSource,ppIconObject)	\
    ( (This)->lpVtbl -> GetIconForFileEx(This,filename,desiredFormat,iconSource,ppIconObject) ) 


#define IVsImageService2_GetImage(This,moniker,attributes,imageObject)	\
    ( (This)->lpVtbl -> GetImage(This,moniker,attributes,imageObject) ) 

#define IVsImageService2_GetImageMonikerForFile(This,filename,moniker)	\
    ( (This)->lpVtbl -> GetImageMonikerForFile(This,filename,moniker) ) 

#define IVsImageService2_GetImageMonikerForHierarchyItem(This,hierarchy,hierarchyItemID,hierarchyImageAspect,moniker)	\
    ( (This)->lpVtbl -> GetImageMonikerForHierarchyItem(This,hierarchy,hierarchyItemID,hierarchyImageAspect,moniker) ) 

#define IVsImageService2_GetImageMonikerForName(This,imageName,moniker)	\
    ( (This)->lpVtbl -> GetImageMonikerForName(This,imageName,moniker) ) 

#define IVsImageService2_AddCustomImage(This,imageObject,handle)	\
    ( (This)->lpVtbl -> AddCustomImage(This,imageObject,handle) ) 

#define IVsImageService2_RemoveCustomImage(This,handle)	\
    ( (This)->lpVtbl -> RemoveCustomImage(This,handle) ) 

#define IVsImageService2_AddCustomImageList(This,imageList,handle)	\
    ( (This)->lpVtbl -> AddCustomImageList(This,imageList,handle) ) 

#define IVsImageService2_RemoveCustomImageList(This,handle)	\
    ( (This)->lpVtbl -> RemoveCustomImageList(This,handle) ) 

#define IVsImageService2_AddCustomCompositeImage(This,virtualWidth,virtualHeight,layerCount,layers,handle)	\
    ( (This)->lpVtbl -> AddCustomCompositeImage(This,virtualWidth,virtualHeight,layerCount,layers,handle) ) 

#define IVsImageService2_ThemeDIBits(This,pixelCount,pixels,width,height,isTopDownBitmap,backgroundColor,themed)	\
    ( (This)->lpVtbl -> ThemeDIBits(This,pixelCount,pixels,width,height,isTopDownBitmap,backgroundColor,themed) ) 

#define IVsImageService2_TryAssociateNameWithMoniker(This,imageName,moniker,succeeded)	\
    ( (This)->lpVtbl -> TryAssociateNameWithMoniker(This,imageName,moniker,succeeded) ) 

#define IVsImageService2_TryParseImageMoniker(This,monikerAsString,moniker,succeeded)	\
    ( (This)->lpVtbl -> TryParseImageMoniker(This,monikerAsString,moniker,succeeded) ) 

#define IVsImageService2_CreateMonikerImageListFromHIMAGELIST(This,hImageList,monikerImageList)	\
    ( (This)->lpVtbl -> CreateMonikerImageListFromHIMAGELIST(This,hImageList,monikerImageList) ) 

#define IVsImageService2_GetImageMonikerType(This,moniker,monikerType)	\
    ( (This)->lpVtbl -> GetImageMonikerType(This,moniker,monikerType) ) 

#define IVsImageService2_GetImageListImageMonikers(This,moniker,imageListMonikers)	\
    ( (This)->lpVtbl -> GetImageListImageMonikers(This,moniker,imageListMonikers) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsImageService2_INTERFACE_DEFINED__ */


#ifndef __IVsImageMonikerSource_INTERFACE_DEFINED__
#define __IVsImageMonikerSource_INTERFACE_DEFINED__

/* interface IVsImageMonikerSource */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsImageMonikerSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05bcd36e-0c17-4ab6-95ac-70aefa2991ee")
    IVsImageMonikerSource : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ImageMoniker( 
            /* [retval][out] */ __RPC__out ImageMoniker *moniker) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsImageMonikerSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsImageMonikerSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsImageMonikerSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsImageMonikerSource * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageMoniker )( 
            __RPC__in IVsImageMonikerSource * This,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker);
        
        END_INTERFACE
    } IVsImageMonikerSourceVtbl;

    interface IVsImageMonikerSource
    {
        CONST_VTBL struct IVsImageMonikerSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsImageMonikerSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsImageMonikerSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsImageMonikerSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsImageMonikerSource_get_ImageMoniker(This,moniker)	\
    ( (This)->lpVtbl -> get_ImageMoniker(This,moniker) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsImageMonikerSource_INTERFACE_DEFINED__ */


#ifndef __IVsTaskProvider5_INTERFACE_DEFINED__
#define __IVsTaskProvider5_INTERFACE_DEFINED__

/* interface IVsTaskProvider5 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsTaskProvider5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1565244d-2daf-486f-acef-54c1a32d03fa")
    IVsTaskProvider5 : public IVsTaskProvider4
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ImageListMoniker( 
            /* [retval][out] */ __RPC__out ImageMoniker *moniker) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsTaskProvider5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsTaskProvider5 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsTaskProvider5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsTaskProvider5 * This);
        
        /* [propget][local] */ HRESULT ( STDMETHODCALLTYPE *get_ThemedImageList )( 
            IVsTaskProvider5 * This,
            /* [retval][out] */ HANDLE *phImageList);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageListMoniker )( 
            __RPC__in IVsTaskProvider5 * This,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker);
        
        END_INTERFACE
    } IVsTaskProvider5Vtbl;

    interface IVsTaskProvider5
    {
        CONST_VTBL struct IVsTaskProvider5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsTaskProvider5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsTaskProvider5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsTaskProvider5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsTaskProvider5_get_ThemedImageList(This,phImageList)	\
    ( (This)->lpVtbl -> get_ThemedImageList(This,phImageList) ) 


#define IVsTaskProvider5_get_ImageListMoniker(This,moniker)	\
    ( (This)->lpVtbl -> get_ImageListMoniker(This,moniker) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsTaskProvider5_INTERFACE_DEFINED__ */


#ifndef __IVsTask2_INTERFACE_DEFINED__
#define __IVsTask2_INTERFACE_DEFINED__

/* interface IVsTask2 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsTask2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("26f21acd-a055-4f5b-97be-27c2ec4d7a33")
    IVsTask2 : public IVsTask
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WaitMessage( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *ppWaitMessage) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_WaitMessage( 
            /* [unique][in] */ __RPC__in_opt LPCOLESTR pWaitMessage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsTask2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsTask2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsTask2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsTask2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ContinueWith )( 
            __RPC__in IVsTask2 * This,
            /* [in] */ VSTASKRUNCONTEXT context,
            /* [in] */ __RPC__in_opt IVsTaskBody *pTaskBody,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *ContinueWithEx )( 
            __RPC__in IVsTask2 * This,
            /* [in] */ VSTASKRUNCONTEXT context,
            /* [in] */ VSTASKCONTINUATIONOPTIONS options,
            /* [in] */ __RPC__in_opt IVsTaskBody *pTaskBody,
            /* [in] */ VARIANT pAsyncState,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            __RPC__in IVsTask2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            __RPC__in IVsTask2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetResult )( 
            __RPC__in IVsTask2 * This,
            /* [retval][out] */ __RPC__out VARIANT *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *AbortIfCanceled )( 
            __RPC__in IVsTask2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Wait )( 
            __RPC__in IVsTask2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *WaitEx )( 
            __RPC__in IVsTask2 * This,
            /* [in] */ int millisecondsTimeout,
            /* [in] */ VSTASKWAITOPTIONS options,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pTaskCompleted);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFaulted )( 
            __RPC__in IVsTask2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pResult);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsCompleted )( 
            __RPC__in IVsTask2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pResult);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )( 
            __RPC__in IVsTask2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pResult);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AsyncState )( 
            __RPC__in IVsTask2 * This,
            /* [retval][out] */ __RPC__out VARIANT *pAsyncState);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            __RPC__in IVsTask2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *ppDescriptionText);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            __RPC__in IVsTask2 * This,
            /* [in] */ __RPC__in LPCOLESTR pDescriptionText);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WaitMessage )( 
            __RPC__in IVsTask2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *ppWaitMessage);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_WaitMessage )( 
            __RPC__in IVsTask2 * This,
            /* [unique][in] */ __RPC__in_opt LPCOLESTR pWaitMessage);
        
        END_INTERFACE
    } IVsTask2Vtbl;

    interface IVsTask2
    {
        CONST_VTBL struct IVsTask2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsTask2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsTask2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsTask2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsTask2_ContinueWith(This,context,pTaskBody,ppTask)	\
    ( (This)->lpVtbl -> ContinueWith(This,context,pTaskBody,ppTask) ) 

#define IVsTask2_ContinueWithEx(This,context,options,pTaskBody,pAsyncState,ppTask)	\
    ( (This)->lpVtbl -> ContinueWithEx(This,context,options,pTaskBody,pAsyncState,ppTask) ) 

#define IVsTask2_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IVsTask2_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IVsTask2_GetResult(This,pResult)	\
    ( (This)->lpVtbl -> GetResult(This,pResult) ) 

#define IVsTask2_AbortIfCanceled(This)	\
    ( (This)->lpVtbl -> AbortIfCanceled(This) ) 

#define IVsTask2_Wait(This)	\
    ( (This)->lpVtbl -> Wait(This) ) 

#define IVsTask2_WaitEx(This,millisecondsTimeout,options,pTaskCompleted)	\
    ( (This)->lpVtbl -> WaitEx(This,millisecondsTimeout,options,pTaskCompleted) ) 

#define IVsTask2_get_IsFaulted(This,pResult)	\
    ( (This)->lpVtbl -> get_IsFaulted(This,pResult) ) 

#define IVsTask2_get_IsCompleted(This,pResult)	\
    ( (This)->lpVtbl -> get_IsCompleted(This,pResult) ) 

#define IVsTask2_get_IsCanceled(This,pResult)	\
    ( (This)->lpVtbl -> get_IsCanceled(This,pResult) ) 

#define IVsTask2_get_AsyncState(This,pAsyncState)	\
    ( (This)->lpVtbl -> get_AsyncState(This,pAsyncState) ) 

#define IVsTask2_get_Description(This,ppDescriptionText)	\
    ( (This)->lpVtbl -> get_Description(This,ppDescriptionText) ) 

#define IVsTask2_put_Description(This,pDescriptionText)	\
    ( (This)->lpVtbl -> put_Description(This,pDescriptionText) ) 


#define IVsTask2_get_WaitMessage(This,ppWaitMessage)	\
    ( (This)->lpVtbl -> get_WaitMessage(This,ppWaitMessage) ) 

#define IVsTask2_put_WaitMessage(This,pWaitMessage)	\
    ( (This)->lpVtbl -> put_WaitMessage(This,pWaitMessage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsTask2_INTERFACE_DEFINED__ */


#ifndef __IVsThreadedWaitDialog4_INTERFACE_DEFINED__
#define __IVsThreadedWaitDialog4_INTERFACE_DEFINED__

/* interface IVsThreadedWaitDialog4 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsThreadedWaitDialog4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7619bd89-3b7e-4838-ad11-434bec7d9530")
    IVsThreadedWaitDialog4 : public IVsThreadedWaitDialog3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartWaitDialogEx( 
            /* [in] */ __RPC__in LPCWSTR szWaitCaption,
            /* [in] */ __RPC__in LPCWSTR szWaitMessage,
            /* [in] */ __RPC__in LPCWSTR szProgressText,
            /* [in] */ VARIANT varStatusBmpAnim,
            /* [in] */ __RPC__in LPCWSTR szStatusBarText,
            /* [in] */ LONG iDelayToShowDialog,
            /* [in] */ VARIANT_BOOL fIsCancelable,
            /* [in] */ VARIANT_BOOL fShowMarqueeProgress,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfStarted) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsThreadedWaitDialog4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsThreadedWaitDialog4 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsThreadedWaitDialog4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsThreadedWaitDialog4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartWaitDialog )( 
            __RPC__in IVsThreadedWaitDialog4 * This,
            /* [in] */ __RPC__in LPCWSTR szWaitCaption,
            /* [in] */ __RPC__in LPCWSTR szWaitMessage,
            /* [in] */ __RPC__in LPCWSTR szProgressText,
            /* [in] */ VARIANT varStatusBmpAnim,
            /* [in] */ __RPC__in LPCWSTR szStatusBarText,
            /* [in] */ LONG iDelayToShowDialog,
            /* [in] */ VARIANT_BOOL fIsCancelable,
            /* [in] */ VARIANT_BOOL fShowMarqueeProgress);
        
        HRESULT ( STDMETHODCALLTYPE *StartWaitDialogWithPercentageProgress )( 
            __RPC__in IVsThreadedWaitDialog4 * This,
            /* [in] */ __RPC__in LPCWSTR szWaitCaption,
            /* [in] */ __RPC__in LPCWSTR szWaitMessage,
            /* [in] */ __RPC__in LPCWSTR szProgressText,
            /* [in] */ VARIANT varStatusBmpAnim,
            /* [in] */ __RPC__in LPCWSTR szStatusBarText,
            /* [in] */ VARIANT_BOOL fIsCancelable,
            /* [in] */ LONG iDelayToShowDialog,
            /* [in] */ LONG iTotalSteps,
            /* [in] */ LONG iCurrentStep);
        
        HRESULT ( STDMETHODCALLTYPE *EndWaitDialog )( 
            __RPC__in IVsThreadedWaitDialog4 * This,
            /* [out] */ __RPC__out BOOL *pfCanceled);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateProgress )( 
            __RPC__in IVsThreadedWaitDialog4 * This,
            /* [in] */ __RPC__in LPCWSTR szUpdatedWaitMessage,
            /* [in] */ __RPC__in LPCWSTR szProgressText,
            /* [in] */ __RPC__in LPCWSTR szStatusBarText,
            /* [in] */ LONG iCurrentStep,
            /* [in] */ LONG iTotalSteps,
            /* [in] */ VARIANT_BOOL fDisableCancel,
            /* [out] */ __RPC__out VARIANT_BOOL *pfCanceled);
        
        HRESULT ( STDMETHODCALLTYPE *HasCanceled )( 
            __RPC__in IVsThreadedWaitDialog4 * This,
            /* [out] */ __RPC__out VARIANT_BOOL *pfCanceled);
        
        HRESULT ( STDMETHODCALLTYPE *StartWaitDialogWithCallback )( 
            __RPC__in IVsThreadedWaitDialog4 * This,
            /* [unique][in] */ __RPC__in_opt LPCWSTR szWaitCaption,
            /* [in] */ __RPC__in LPCWSTR szWaitMessage,
            /* [unique][in] */ __RPC__in_opt LPCWSTR szProgressText,
            /* [in] */ VARIANT varStatusBmpAnim,
            /* [unique][in] */ __RPC__in_opt LPCWSTR szStatusBarText,
            /* [in] */ VARIANT_BOOL fIsCancelable,
            /* [in] */ LONG iDelayToShowDialog,
            /* [in] */ VARIANT_BOOL fShowProgress,
            /* [in] */ LONG iTotalSteps,
            /* [in] */ LONG iCurrentStep,
            /* [in] */ __RPC__in_opt IVsThreadedWaitDialogCallback *pCallback);
        
        HRESULT ( STDMETHODCALLTYPE *StartWaitDialogEx )( 
            __RPC__in IVsThreadedWaitDialog4 * This,
            /* [in] */ __RPC__in LPCWSTR szWaitCaption,
            /* [in] */ __RPC__in LPCWSTR szWaitMessage,
            /* [in] */ __RPC__in LPCWSTR szProgressText,
            /* [in] */ VARIANT varStatusBmpAnim,
            /* [in] */ __RPC__in LPCWSTR szStatusBarText,
            /* [in] */ LONG iDelayToShowDialog,
            /* [in] */ VARIANT_BOOL fIsCancelable,
            /* [in] */ VARIANT_BOOL fShowMarqueeProgress,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfStarted);
        
        END_INTERFACE
    } IVsThreadedWaitDialog4Vtbl;

    interface IVsThreadedWaitDialog4
    {
        CONST_VTBL struct IVsThreadedWaitDialog4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsThreadedWaitDialog4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsThreadedWaitDialog4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsThreadedWaitDialog4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsThreadedWaitDialog4_StartWaitDialog(This,szWaitCaption,szWaitMessage,szProgressText,varStatusBmpAnim,szStatusBarText,iDelayToShowDialog,fIsCancelable,fShowMarqueeProgress)	\
    ( (This)->lpVtbl -> StartWaitDialog(This,szWaitCaption,szWaitMessage,szProgressText,varStatusBmpAnim,szStatusBarText,iDelayToShowDialog,fIsCancelable,fShowMarqueeProgress) ) 

#define IVsThreadedWaitDialog4_StartWaitDialogWithPercentageProgress(This,szWaitCaption,szWaitMessage,szProgressText,varStatusBmpAnim,szStatusBarText,fIsCancelable,iDelayToShowDialog,iTotalSteps,iCurrentStep)	\
    ( (This)->lpVtbl -> StartWaitDialogWithPercentageProgress(This,szWaitCaption,szWaitMessage,szProgressText,varStatusBmpAnim,szStatusBarText,fIsCancelable,iDelayToShowDialog,iTotalSteps,iCurrentStep) ) 

#define IVsThreadedWaitDialog4_EndWaitDialog(This,pfCanceled)	\
    ( (This)->lpVtbl -> EndWaitDialog(This,pfCanceled) ) 

#define IVsThreadedWaitDialog4_UpdateProgress(This,szUpdatedWaitMessage,szProgressText,szStatusBarText,iCurrentStep,iTotalSteps,fDisableCancel,pfCanceled)	\
    ( (This)->lpVtbl -> UpdateProgress(This,szUpdatedWaitMessage,szProgressText,szStatusBarText,iCurrentStep,iTotalSteps,fDisableCancel,pfCanceled) ) 

#define IVsThreadedWaitDialog4_HasCanceled(This,pfCanceled)	\
    ( (This)->lpVtbl -> HasCanceled(This,pfCanceled) ) 


#define IVsThreadedWaitDialog4_StartWaitDialogWithCallback(This,szWaitCaption,szWaitMessage,szProgressText,varStatusBmpAnim,szStatusBarText,fIsCancelable,iDelayToShowDialog,fShowProgress,iTotalSteps,iCurrentStep,pCallback)	\
    ( (This)->lpVtbl -> StartWaitDialogWithCallback(This,szWaitCaption,szWaitMessage,szProgressText,varStatusBmpAnim,szStatusBarText,fIsCancelable,iDelayToShowDialog,fShowProgress,iTotalSteps,iCurrentStep,pCallback) ) 


#define IVsThreadedWaitDialog4_StartWaitDialogEx(This,szWaitCaption,szWaitMessage,szProgressText,varStatusBmpAnim,szStatusBarText,iDelayToShowDialog,fIsCancelable,fShowMarqueeProgress,pfStarted)	\
    ( (This)->lpVtbl -> StartWaitDialogEx(This,szWaitCaption,szWaitMessage,szProgressText,varStatusBmpAnim,szStatusBarText,iDelayToShowDialog,fIsCancelable,fShowMarqueeProgress,pfStarted) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsThreadedWaitDialog4_INTERFACE_DEFINED__ */


#ifndef __SVsHubService_INTERFACE_DEFINED__
#define __SVsHubService_INTERFACE_DEFINED__

/* interface SVsHubService */
/* [object][uuid] */ 


EXTERN_C const IID IID_SVsHubService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("95D652E5-D9B2-4EE6-BB09-BDBB1DCB5263")
    SVsHubService : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SVsHubServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SVsHubService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SVsHubService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SVsHubService * This);
        
        END_INTERFACE
    } SVsHubServiceVtbl;

    interface SVsHubService
    {
        CONST_VTBL struct SVsHubServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SVsHubService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SVsHubService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SVsHubService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SVsHubService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0007 */
/* [local] */ 

#define SID_SVsHubService IID_SVsHubService


extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0007_v0_0_s_ifspec;

#ifndef __SVsAccountManager_INTERFACE_DEFINED__
#define __SVsAccountManager_INTERFACE_DEFINED__

/* interface SVsAccountManager */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_SVsAccountManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("231E1BD9-EECC-4E16-9FCA-A1D24A20EE71")
    SVsAccountManager : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SVsAccountManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SVsAccountManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SVsAccountManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SVsAccountManager * This);
        
        END_INTERFACE
    } SVsAccountManagerVtbl;

    interface SVsAccountManager
    {
        CONST_VTBL struct SVsAccountManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SVsAccountManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SVsAccountManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SVsAccountManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SVsAccountManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0008 */
/* [local] */ 

#define SID_SVsAccountManager __uuidof(SVsAccountManager)


extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0008_v0_0_s_ifspec;

#ifndef __IAsyncProgressCallback_INTERFACE_DEFINED__
#define __IAsyncProgressCallback_INTERFACE_DEFINED__

/* interface IAsyncProgressCallback */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IAsyncProgressCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c3a2d62e-64be-4008-924f-7e303e2b0001")
    IAsyncProgressCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportProgress( 
            /* [in] */ __RPC__in REFGUID guidService,
            /* [in] */ __RPC__in LPCWSTR szWaitMessage,
            /* [in] */ __RPC__in LPCWSTR szProgressText,
            /* [in] */ LONG iCurrentStep,
            /* [in] */ LONG iTotalSteps) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncProgressCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncProgressCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncProgressCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncProgressCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReportProgress )( 
            __RPC__in IAsyncProgressCallback * This,
            /* [in] */ __RPC__in REFGUID guidService,
            /* [in] */ __RPC__in LPCWSTR szWaitMessage,
            /* [in] */ __RPC__in LPCWSTR szProgressText,
            /* [in] */ LONG iCurrentStep,
            /* [in] */ LONG iTotalSteps);
        
        END_INTERFACE
    } IAsyncProgressCallbackVtbl;

    interface IAsyncProgressCallback
    {
        CONST_VTBL struct IAsyncProgressCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncProgressCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncProgressCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncProgressCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncProgressCallback_ReportProgress(This,guidService,szWaitMessage,szProgressText,iCurrentStep,iTotalSteps)	\
    ( (This)->lpVtbl -> ReportProgress(This,guidService,szWaitMessage,szProgressText,iCurrentStep,iTotalSteps) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncProgressCallback_INTERFACE_DEFINED__ */


#ifndef __IAsyncServiceProvider_INTERFACE_DEFINED__
#define __IAsyncServiceProvider_INTERFACE_DEFINED__

/* interface IAsyncServiceProvider */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IAsyncServiceProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("257B63FA-8388-4FEB-9DB8-3DB22F4405DE")
    IAsyncServiceProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryServiceAsync( 
            /* [in] */ __RPC__in REFGUID guidService,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncServiceProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncServiceProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncServiceProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncServiceProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryServiceAsync )( 
            __RPC__in IAsyncServiceProvider * This,
            /* [in] */ __RPC__in REFGUID guidService,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        END_INTERFACE
    } IAsyncServiceProviderVtbl;

    interface IAsyncServiceProvider
    {
        CONST_VTBL struct IAsyncServiceProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncServiceProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncServiceProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncServiceProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncServiceProvider_QueryServiceAsync(This,guidService,ppTask)	\
    ( (This)->lpVtbl -> QueryServiceAsync(This,guidService,ppTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncServiceProvider_INTERFACE_DEFINED__ */


#ifndef __SAsyncServiceProvider_INTERFACE_DEFINED__
#define __SAsyncServiceProvider_INTERFACE_DEFINED__

/* interface SAsyncServiceProvider */
/* [object][uuid] */ 


EXTERN_C const IID IID_SAsyncServiceProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("944774C9-7422-4E87-B01C-189182C779A6")
    SAsyncServiceProvider : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SAsyncServiceProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SAsyncServiceProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SAsyncServiceProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SAsyncServiceProvider * This);
        
        END_INTERFACE
    } SAsyncServiceProviderVtbl;

    interface SAsyncServiceProvider
    {
        CONST_VTBL struct SAsyncServiceProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SAsyncServiceProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SAsyncServiceProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SAsyncServiceProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SAsyncServiceProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0011 */
/* [local] */ 

#define SID_SAsyncServiceProvider IID_SAsyncServiceProvider


extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0011_v0_0_s_ifspec;

#ifndef __IProfferAsyncService_INTERFACE_DEFINED__
#define __IProfferAsyncService_INTERFACE_DEFINED__

/* interface IProfferAsyncService */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IProfferAsyncService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5FDD1FE6-898B-4D51-B2BC-4C936760C572")
    IProfferAsyncService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ProfferAsyncService( 
            /* [in] */ __RPC__in REFGUID rguidService,
            /* [in] */ __RPC__in_opt IAsyncServiceProvider *psp,
            /* [retval][out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RevokeAsyncService( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetServiceProgressCallback( 
            /* [retval][out] */ __RPC__deref_out_opt IAsyncProgressCallback **pProgressCallback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IProfferAsyncServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IProfferAsyncService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IProfferAsyncService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IProfferAsyncService * This);
        
        HRESULT ( STDMETHODCALLTYPE *ProfferAsyncService )( 
            __RPC__in IProfferAsyncService * This,
            /* [in] */ __RPC__in REFGUID rguidService,
            /* [in] */ __RPC__in_opt IAsyncServiceProvider *psp,
            /* [retval][out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *RevokeAsyncService )( 
            __RPC__in IProfferAsyncService * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *GetServiceProgressCallback )( 
            __RPC__in IProfferAsyncService * This,
            /* [retval][out] */ __RPC__deref_out_opt IAsyncProgressCallback **pProgressCallback);
        
        END_INTERFACE
    } IProfferAsyncServiceVtbl;

    interface IProfferAsyncService
    {
        CONST_VTBL struct IProfferAsyncServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProfferAsyncService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IProfferAsyncService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IProfferAsyncService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IProfferAsyncService_ProfferAsyncService(This,rguidService,psp,pdwCookie)	\
    ( (This)->lpVtbl -> ProfferAsyncService(This,rguidService,psp,pdwCookie) ) 

#define IProfferAsyncService_RevokeAsyncService(This,dwCookie)	\
    ( (This)->lpVtbl -> RevokeAsyncService(This,dwCookie) ) 

#define IProfferAsyncService_GetServiceProgressCallback(This,pProgressCallback)	\
    ( (This)->lpVtbl -> GetServiceProgressCallback(This,pProgressCallback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IProfferAsyncService_INTERFACE_DEFINED__ */


#ifndef __SProfferAsyncService_INTERFACE_DEFINED__
#define __SProfferAsyncService_INTERFACE_DEFINED__

/* interface SProfferAsyncService */
/* [object][uuid] */ 


EXTERN_C const IID IID_SProfferAsyncService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("594AC716-4B5C-4A85-B36F-F1E728F71603")
    SProfferAsyncService : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SProfferAsyncServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SProfferAsyncService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SProfferAsyncService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SProfferAsyncService * This);
        
        END_INTERFACE
    } SProfferAsyncServiceVtbl;

    interface SProfferAsyncService
    {
        CONST_VTBL struct SProfferAsyncServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SProfferAsyncService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SProfferAsyncService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SProfferAsyncService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SProfferAsyncService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0013 */
/* [local] */ 

#define SID_SProfferAsyncService IID_SProfferAsyncService


extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0013_v0_0_s_ifspec;

#ifndef __IVsServiceInfo_INTERFACE_DEFINED__
#define __IVsServiceInfo_INTERFACE_DEFINED__

/* interface IVsServiceInfo */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsServiceInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5B5AC77C-213B-4642-9D20-5BF902649356")
    IVsServiceInfo : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ServiceGuid( 
            /* [retval][out] */ __RPC__out GUID *pServiceGuid) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsAsync( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pIsAsync) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PackageGuid( 
            /* [retval][out] */ __RPC__out GUID *pPackageGuid) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasOverride( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pHasOverride) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OverridePackageGuid( 
            /* [retval][out] */ __RPC__out GUID *pOverridePackageGuid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsServiceInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsServiceInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsServiceInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsServiceInfo * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServiceGuid )( 
            __RPC__in IVsServiceInfo * This,
            /* [retval][out] */ __RPC__out GUID *pServiceGuid);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IVsServiceInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsAsync )( 
            __RPC__in IVsServiceInfo * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pIsAsync);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PackageGuid )( 
            __RPC__in IVsServiceInfo * This,
            /* [retval][out] */ __RPC__out GUID *pPackageGuid);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasOverride )( 
            __RPC__in IVsServiceInfo * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pHasOverride);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverridePackageGuid )( 
            __RPC__in IVsServiceInfo * This,
            /* [retval][out] */ __RPC__out GUID *pOverridePackageGuid);
        
        END_INTERFACE
    } IVsServiceInfoVtbl;

    interface IVsServiceInfo
    {
        CONST_VTBL struct IVsServiceInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsServiceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsServiceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsServiceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsServiceInfo_get_ServiceGuid(This,pServiceGuid)	\
    ( (This)->lpVtbl -> get_ServiceGuid(This,pServiceGuid) ) 

#define IVsServiceInfo_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IVsServiceInfo_get_IsAsync(This,pIsAsync)	\
    ( (This)->lpVtbl -> get_IsAsync(This,pIsAsync) ) 

#define IVsServiceInfo_get_PackageGuid(This,pPackageGuid)	\
    ( (This)->lpVtbl -> get_PackageGuid(This,pPackageGuid) ) 

#define IVsServiceInfo_get_HasOverride(This,pHasOverride)	\
    ( (This)->lpVtbl -> get_HasOverride(This,pHasOverride) ) 

#define IVsServiceInfo_get_OverridePackageGuid(This,pOverridePackageGuid)	\
    ( (This)->lpVtbl -> get_OverridePackageGuid(This,pOverridePackageGuid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsServiceInfo_INTERFACE_DEFINED__ */


#ifndef __IVsServiceInfoQueryService_INTERFACE_DEFINED__
#define __IVsServiceInfoQueryService_INTERFACE_DEFINED__

/* interface IVsServiceInfoQueryService */
/* [object][custom][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsServiceInfoQueryService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("932AA966-86BE-44D9-8403-2F4A2C17ADB1")
    IVsServiceInfoQueryService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetServiceInfo( 
            /* [in] */ __RPC__in REFGUID serviceGuid,
            /* [out] */ __RPC__deref_out_opt IVsServiceInfo **ppServiceInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsServiceInfoQueryServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsServiceInfoQueryService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsServiceInfoQueryService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsServiceInfoQueryService * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetServiceInfo )( 
            __RPC__in IVsServiceInfoQueryService * This,
            /* [in] */ __RPC__in REFGUID serviceGuid,
            /* [out] */ __RPC__deref_out_opt IVsServiceInfo **ppServiceInfo);
        
        END_INTERFACE
    } IVsServiceInfoQueryServiceVtbl;

    interface IVsServiceInfoQueryService
    {
        CONST_VTBL struct IVsServiceInfoQueryServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsServiceInfoQueryService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsServiceInfoQueryService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsServiceInfoQueryService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsServiceInfoQueryService_GetServiceInfo(This,serviceGuid,ppServiceInfo)	\
    ( (This)->lpVtbl -> GetServiceInfo(This,serviceGuid,ppServiceInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsServiceInfoQueryService_INTERFACE_DEFINED__ */


#ifndef __SVsServiceInfoQueryService_INTERFACE_DEFINED__
#define __SVsServiceInfoQueryService_INTERFACE_DEFINED__

/* interface SVsServiceInfoQueryService */
/* [object][uuid] */ 


EXTERN_C const IID IID_SVsServiceInfoQueryService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68FB1880-81F7-4939-8BBC-A957A1033345")
    SVsServiceInfoQueryService : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SVsServiceInfoQueryServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SVsServiceInfoQueryService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SVsServiceInfoQueryService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SVsServiceInfoQueryService * This);
        
        END_INTERFACE
    } SVsServiceInfoQueryServiceVtbl;

    interface SVsServiceInfoQueryService
    {
        CONST_VTBL struct SVsServiceInfoQueryServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SVsServiceInfoQueryService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SVsServiceInfoQueryService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SVsServiceInfoQueryService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SVsServiceInfoQueryService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0016 */
/* [local] */ 

#define SID_SVsServiceInfoQueryService IID_SVsServiceInfoQueryService


extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0016_v0_0_s_ifspec;

#ifndef __IAsyncLoadablePackageInitialize_INTERFACE_DEFINED__
#define __IAsyncLoadablePackageInitialize_INTERFACE_DEFINED__

/* interface IAsyncLoadablePackageInitialize */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IAsyncLoadablePackageInitialize;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3EC4D7F6-4036-4406-A393-2FFF7B2E78A1")
    IAsyncLoadablePackageInitialize : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IAsyncServiceProvider *pServiceProvider,
            /* [in] */ __RPC__in_opt IProfferAsyncService *pProfferService,
            /* [in] */ __RPC__in_opt IAsyncProgressCallback *pProgressCallback,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAsyncLoadablePackageInitializeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAsyncLoadablePackageInitialize * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAsyncLoadablePackageInitialize * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAsyncLoadablePackageInitialize * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IAsyncLoadablePackageInitialize * This,
            /* [in] */ __RPC__in_opt IAsyncServiceProvider *pServiceProvider,
            /* [in] */ __RPC__in_opt IProfferAsyncService *pProfferService,
            /* [in] */ __RPC__in_opt IAsyncProgressCallback *pProgressCallback,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        END_INTERFACE
    } IAsyncLoadablePackageInitializeVtbl;

    interface IAsyncLoadablePackageInitialize
    {
        CONST_VTBL struct IAsyncLoadablePackageInitializeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAsyncLoadablePackageInitialize_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAsyncLoadablePackageInitialize_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAsyncLoadablePackageInitialize_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAsyncLoadablePackageInitialize_Initialize(This,pServiceProvider,pProfferService,pProgressCallback,ppTask)	\
    ( (This)->lpVtbl -> Initialize(This,pServiceProvider,pProfferService,pProgressCallback,ppTask) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAsyncLoadablePackageInitialize_INTERFACE_DEFINED__ */


#ifndef __SVsAccountManagementService_INTERFACE_DEFINED__
#define __SVsAccountManagementService_INTERFACE_DEFINED__

/* interface SVsAccountManagementService */
/* [object][uuid] */ 


EXTERN_C const IID IID_SVsAccountManagementService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("33024F95-187C-4F15-AA48-38D05C1E8B58")
    SVsAccountManagementService : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SVsAccountManagementServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SVsAccountManagementService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SVsAccountManagementService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SVsAccountManagementService * This);
        
        END_INTERFACE
    } SVsAccountManagementServiceVtbl;

    interface SVsAccountManagementService
    {
        CONST_VTBL struct SVsAccountManagementServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SVsAccountManagementService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SVsAccountManagementService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SVsAccountManagementService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SVsAccountManagementService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0018 */
/* [local] */ 

#define SID_SVsAccountManagementService IID_SVsAccountManagementService


extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0018_v0_0_s_ifspec;

#ifndef __IVsShell7_INTERFACE_DEFINED__
#define __IVsShell7_INTERFACE_DEFINED__

/* interface IVsShell7 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsShell7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("912079DD-342A-4A53-AB7F-752553679A47")
    IVsShell7 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LoadPackageAsync( 
            /* [in] */ __RPC__in REFGUID guidPackage,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadPackageWithContextAsync( 
            /* [in] */ __RPC__in REFGUID guidPackage,
            /* [in] */ int reason,
            /* [in] */ __RPC__in REFGUID context,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SccGlyphImageListImageMoniker( 
            /* [retval][out] */ __RPC__out ImageMoniker *pImageMoniker) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsShell7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsShell7 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsShell7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsShell7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *LoadPackageAsync )( 
            __RPC__in IVsShell7 * This,
            /* [in] */ __RPC__in REFGUID guidPackage,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        HRESULT ( STDMETHODCALLTYPE *LoadPackageWithContextAsync )( 
            __RPC__in IVsShell7 * This,
            /* [in] */ __RPC__in REFGUID guidPackage,
            /* [in] */ int reason,
            /* [in] */ __RPC__in REFGUID context,
            /* [retval][out] */ __RPC__deref_out_opt IVsTask **ppTask);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SccGlyphImageListImageMoniker )( 
            __RPC__in IVsShell7 * This,
            /* [retval][out] */ __RPC__out ImageMoniker *pImageMoniker);
        
        END_INTERFACE
    } IVsShell7Vtbl;

    interface IVsShell7
    {
        CONST_VTBL struct IVsShell7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsShell7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsShell7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsShell7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsShell7_LoadPackageAsync(This,guidPackage,ppTask)	\
    ( (This)->lpVtbl -> LoadPackageAsync(This,guidPackage,ppTask) ) 

#define IVsShell7_LoadPackageWithContextAsync(This,guidPackage,reason,context,ppTask)	\
    ( (This)->lpVtbl -> LoadPackageWithContextAsync(This,guidPackage,reason,context,ppTask) ) 

#define IVsShell7_get_SccGlyphImageListImageMoniker(This,pImageMoniker)	\
    ( (This)->lpVtbl -> get_SccGlyphImageListImageMoniker(This,pImageMoniker) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsShell7_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0019 */
/* [local] */ 

extern const __declspec(selectany) GUID UICONTEXT_ShellInitialized = { 0xe80ef1cb, 0x6d64, 0x4609, { 0x8f, 0xaa, 0xfe, 0xac, 0xfd, 0x3b, 0xc8, 0x9f } };

enum __VSREFERENCEAPPLYRESULT
    {
        APPLYRESULT_AppliedSuccessfully	= 1,
        APPLYRESULT_NotApplied	= 0,
        APPLYRESULT_NotAppliedAndCloseDialog	= -1
    } ;
typedef int VSREFERENCEAPPLYRESULT;



extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0019_v0_0_s_ifspec;

#ifndef __IVsReferenceManagerUserReloadRequired_INTERFACE_DEFINED__
#define __IVsReferenceManagerUserReloadRequired_INTERFACE_DEFINED__

/* interface IVsReferenceManagerUserReloadRequired */
/* [object][oleautomation][version][uuid] */ 


EXTERN_C const IID IID_IVsReferenceManagerUserReloadRequired;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("400C66C9-5272-418C-9113-1C9BDFD7D7BA")
    IVsReferenceManagerUserReloadRequired : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ApplyReloadRequiredReferenceChanges( 
            /* [in] */ VARIANT_BOOL cancelOperation,
            /* [retval][out] */ __RPC__out VSREFERENCEAPPLYRESULT *applyResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsReferenceManagerUserReloadRequiredVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsReferenceManagerUserReloadRequired * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsReferenceManagerUserReloadRequired * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsReferenceManagerUserReloadRequired * This);
        
        HRESULT ( STDMETHODCALLTYPE *ApplyReloadRequiredReferenceChanges )( 
            __RPC__in IVsReferenceManagerUserReloadRequired * This,
            /* [in] */ VARIANT_BOOL cancelOperation,
            /* [retval][out] */ __RPC__out VSREFERENCEAPPLYRESULT *applyResult);
        
        END_INTERFACE
    } IVsReferenceManagerUserReloadRequiredVtbl;

    interface IVsReferenceManagerUserReloadRequired
    {
        CONST_VTBL struct IVsReferenceManagerUserReloadRequiredVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsReferenceManagerUserReloadRequired_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsReferenceManagerUserReloadRequired_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsReferenceManagerUserReloadRequired_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsReferenceManagerUserReloadRequired_ApplyReloadRequiredReferenceChanges(This,cancelOperation,applyResult)	\
    ( (This)->lpVtbl -> ApplyReloadRequiredReferenceChanges(This,cancelOperation,applyResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsReferenceManagerUserReloadRequired_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0020 */
/* [local] */ 

extern const __declspec(selectany) GUID GUID_ItemType_SharedProjectReference =  { 0xfba6bd9a, 0x47f3, 0x4c04, { 0xbd, 0xc0, 0x7f, 0x76, 0xa9, 0xe2, 0xe5, 0x82 } };


extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0020_v0_0_s_ifspec;

#ifndef __IVsSharedProjectReference_INTERFACE_DEFINED__
#define __IVsSharedProjectReference_INTERFACE_DEFINED__

/* interface IVsSharedProjectReference */
/* [object][oleautomation][version][uuid] */ 


EXTERN_C const IID IID_IVsSharedProjectReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD928D98-26E0-4255-A3CE-3BA866296F8B")
    IVsSharedProjectReference : public IVsReference
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SharedProjectID( 
            /* [retval][out] */ __RPC__out GUID *sharedProjectID) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SharedProjectID( 
            /* [in] */ GUID sharedProjectID) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SharedMSBuildFileFullPath( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *sharedMSBuildFileFullPath) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SharedMSBuildFileFullPath( 
            /* [in] */ __RPC__in LPCOLESTR sharedMSBuildFileFullPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSharedProjectReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSharedProjectReference * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSharedProjectReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSharedProjectReference * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IVsSharedProjectReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *bstrName);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __RPC__in IVsSharedProjectReference * This,
            /* [in] */ __RPC__in LPCOLESTR strName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullPath )( 
            __RPC__in IVsSharedProjectReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *bstrFullPath);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullPath )( 
            __RPC__in IVsSharedProjectReference * This,
            /* [in] */ __RPC__in LPCOLESTR bstrFullPath);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlreadyReferenced )( 
            __RPC__in IVsSharedProjectReference * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *boolAlreadyReferenced);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlreadyReferenced )( 
            __RPC__in IVsSharedProjectReference * This,
            /* [in] */ VARIANT_BOOL boolAlreadyReferenced);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SharedProjectID )( 
            __RPC__in IVsSharedProjectReference * This,
            /* [retval][out] */ __RPC__out GUID *sharedProjectID);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SharedProjectID )( 
            __RPC__in IVsSharedProjectReference * This,
            /* [in] */ GUID sharedProjectID);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SharedMSBuildFileFullPath )( 
            __RPC__in IVsSharedProjectReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *sharedMSBuildFileFullPath);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SharedMSBuildFileFullPath )( 
            __RPC__in IVsSharedProjectReference * This,
            /* [in] */ __RPC__in LPCOLESTR sharedMSBuildFileFullPath);
        
        END_INTERFACE
    } IVsSharedProjectReferenceVtbl;

    interface IVsSharedProjectReference
    {
        CONST_VTBL struct IVsSharedProjectReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSharedProjectReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSharedProjectReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSharedProjectReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSharedProjectReference_get_Name(This,bstrName)	\
    ( (This)->lpVtbl -> get_Name(This,bstrName) ) 

#define IVsSharedProjectReference_put_Name(This,strName)	\
    ( (This)->lpVtbl -> put_Name(This,strName) ) 

#define IVsSharedProjectReference_get_FullPath(This,bstrFullPath)	\
    ( (This)->lpVtbl -> get_FullPath(This,bstrFullPath) ) 

#define IVsSharedProjectReference_put_FullPath(This,bstrFullPath)	\
    ( (This)->lpVtbl -> put_FullPath(This,bstrFullPath) ) 

#define IVsSharedProjectReference_get_AlreadyReferenced(This,boolAlreadyReferenced)	\
    ( (This)->lpVtbl -> get_AlreadyReferenced(This,boolAlreadyReferenced) ) 

#define IVsSharedProjectReference_put_AlreadyReferenced(This,boolAlreadyReferenced)	\
    ( (This)->lpVtbl -> put_AlreadyReferenced(This,boolAlreadyReferenced) ) 


#define IVsSharedProjectReference_get_SharedProjectID(This,sharedProjectID)	\
    ( (This)->lpVtbl -> get_SharedProjectID(This,sharedProjectID) ) 

#define IVsSharedProjectReference_put_SharedProjectID(This,sharedProjectID)	\
    ( (This)->lpVtbl -> put_SharedProjectID(This,sharedProjectID) ) 

#define IVsSharedProjectReference_get_SharedMSBuildFileFullPath(This,sharedMSBuildFileFullPath)	\
    ( (This)->lpVtbl -> get_SharedMSBuildFileFullPath(This,sharedMSBuildFileFullPath) ) 

#define IVsSharedProjectReference_put_SharedMSBuildFileFullPath(This,sharedMSBuildFileFullPath)	\
    ( (This)->lpVtbl -> put_SharedMSBuildFileFullPath(This,sharedMSBuildFileFullPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSharedProjectReference_INTERFACE_DEFINED__ */


#ifndef __IVsSharedProjectReferenceProviderContext_INTERFACE_DEFINED__
#define __IVsSharedProjectReferenceProviderContext_INTERFACE_DEFINED__

/* interface IVsSharedProjectReferenceProviderContext */
/* [object][version][uuid] */ 


EXTERN_C const IID IID_IVsSharedProjectReferenceProviderContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C4385811-F65E-4049-A60F-20B9AB884BBC")
    IVsSharedProjectReferenceProviderContext : public IVsReferenceProviderContext
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReferencingProject( 
            /* [retval][out] */ __RPC__deref_out_opt IVsHierarchy **pRetVal) = 0;
        
        virtual /* [propputref] */ HRESULT STDMETHODCALLTYPE putref_ReferencingProject( 
            /* [in] */ __RPC__in_opt IVsHierarchy *val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSharedProjectReferenceProviderContextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSharedProjectReferenceProviderContext * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSharedProjectReferenceProviderContext * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSharedProjectReferenceProviderContext * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderGuid )( 
            __RPC__in IVsSharedProjectReferenceProviderContext * This,
            /* [retval][out] */ __RPC__out GUID *pguidProvider);
        
        /* [propget][local] */ HRESULT ( STDMETHODCALLTYPE *get_References )( 
            IVsSharedProjectReferenceProviderContext * This,
            /* [retval][out] */ SAFEARRAY * *pReferences);
        
        HRESULT ( STDMETHODCALLTYPE *AddReference )( 
            __RPC__in IVsSharedProjectReferenceProviderContext * This,
            /* [in] */ __RPC__in_opt IVsReference *pReference);
        
        HRESULT ( STDMETHODCALLTYPE *CreateReference )( 
            __RPC__in IVsSharedProjectReferenceProviderContext * This,
            /* [retval][out] */ __RPC__deref_out_opt IVsReference **pRetVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceFilterPaths )( 
            __RPC__in IVsSharedProjectReferenceProviderContext * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *pFilterPaths);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceFilterPaths )( 
            __RPC__in IVsSharedProjectReferenceProviderContext * This,
            /* [in] */ __RPC__in SAFEARRAY * filterPaths);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferencingProject )( 
            __RPC__in IVsSharedProjectReferenceProviderContext * This,
            /* [retval][out] */ __RPC__deref_out_opt IVsHierarchy **pRetVal);
        
        /* [propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_ReferencingProject )( 
            __RPC__in IVsSharedProjectReferenceProviderContext * This,
            /* [in] */ __RPC__in_opt IVsHierarchy *val);
        
        END_INTERFACE
    } IVsSharedProjectReferenceProviderContextVtbl;

    interface IVsSharedProjectReferenceProviderContext
    {
        CONST_VTBL struct IVsSharedProjectReferenceProviderContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSharedProjectReferenceProviderContext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSharedProjectReferenceProviderContext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSharedProjectReferenceProviderContext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSharedProjectReferenceProviderContext_get_ProviderGuid(This,pguidProvider)	\
    ( (This)->lpVtbl -> get_ProviderGuid(This,pguidProvider) ) 

#define IVsSharedProjectReferenceProviderContext_get_References(This,pReferences)	\
    ( (This)->lpVtbl -> get_References(This,pReferences) ) 

#define IVsSharedProjectReferenceProviderContext_AddReference(This,pReference)	\
    ( (This)->lpVtbl -> AddReference(This,pReference) ) 

#define IVsSharedProjectReferenceProviderContext_CreateReference(This,pRetVal)	\
    ( (This)->lpVtbl -> CreateReference(This,pRetVal) ) 

#define IVsSharedProjectReferenceProviderContext_get_ReferenceFilterPaths(This,pFilterPaths)	\
    ( (This)->lpVtbl -> get_ReferenceFilterPaths(This,pFilterPaths) ) 

#define IVsSharedProjectReferenceProviderContext_put_ReferenceFilterPaths(This,filterPaths)	\
    ( (This)->lpVtbl -> put_ReferenceFilterPaths(This,filterPaths) ) 


#define IVsSharedProjectReferenceProviderContext_get_ReferencingProject(This,pRetVal)	\
    ( (This)->lpVtbl -> get_ReferencingProject(This,pRetVal) ) 

#define IVsSharedProjectReferenceProviderContext_putref_ReferencingProject(This,val)	\
    ( (This)->lpVtbl -> putref_ReferencingProject(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSharedProjectReferenceProviderContext_INTERFACE_DEFINED__ */


#ifndef __IVsEnumSharedProjectReferences_INTERFACE_DEFINED__
#define __IVsEnumSharedProjectReferences_INTERFACE_DEFINED__

/* interface IVsEnumSharedProjectReferences */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsEnumSharedProjectReferences;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF92C68E-8503-4E30-A205-3AB4EF219990")
    IVsEnumSharedProjectReferences : public IUnknown
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ __RPC__deref_out_opt IVsSharedProjectReference **lppcReturn) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *lplReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsEnumSharedProjectReferencesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsEnumSharedProjectReferences * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsEnumSharedProjectReferences * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsEnumSharedProjectReferences * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            __RPC__in IVsEnumSharedProjectReferences * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            __RPC__in IVsEnumSharedProjectReferences * This,
            /* [in] */ long index,
            /* [retval][out] */ __RPC__deref_out_opt IVsSharedProjectReference **lppcReturn);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IVsEnumSharedProjectReferences * This,
            /* [retval][out] */ __RPC__out long *lplReturn);
        
        END_INTERFACE
    } IVsEnumSharedProjectReferencesVtbl;

    interface IVsEnumSharedProjectReferences
    {
        CONST_VTBL struct IVsEnumSharedProjectReferencesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsEnumSharedProjectReferences_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsEnumSharedProjectReferences_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsEnumSharedProjectReferences_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsEnumSharedProjectReferences_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define IVsEnumSharedProjectReferences_get_Item(This,index,lppcReturn)	\
    ( (This)->lpVtbl -> get_Item(This,index,lppcReturn) ) 

#define IVsEnumSharedProjectReferences_get_Count(This,lplReturn)	\
    ( (This)->lpVtbl -> get_Count(This,lplReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsEnumSharedProjectReferences_INTERFACE_DEFINED__ */


#ifndef __IVsSharedMSBuildFilesManagerHierarchy2_INTERFACE_DEFINED__
#define __IVsSharedMSBuildFilesManagerHierarchy2_INTERFACE_DEFINED__

/* interface IVsSharedMSBuildFilesManagerHierarchy2 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsSharedMSBuildFilesManagerHierarchy2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CFCB9B0D-59AD-4BD8-B288-A2539B54633A")
    IVsSharedMSBuildFilesManagerHierarchy2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumAllAvailableSharedProjects( 
            /* [unique][in] */ __RPC__in_opt IVsHierarchy *referencingProject,
            /* [retval][out] */ __RPC__deref_out_opt IVsEnumSharedProjectReferences **ppEnumSharedProjectReferences) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSharedProjectReference( 
            /* [in] */ __RPC__in LPCOLESTR sharedFileFullPath,
            /* [in] */ __RPC__in_opt IVsHierarchy *referencingProject,
            /* [retval][out] */ __RPC__deref_out_opt IVsSharedProjectReference **ppSharedProjectReference) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSharedMSBuildFilesManagerHierarchy2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSharedMSBuildFilesManagerHierarchy2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSharedMSBuildFilesManagerHierarchy2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSharedMSBuildFilesManagerHierarchy2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAllAvailableSharedProjects )( 
            __RPC__in IVsSharedMSBuildFilesManagerHierarchy2 * This,
            /* [unique][in] */ __RPC__in_opt IVsHierarchy *referencingProject,
            /* [retval][out] */ __RPC__deref_out_opt IVsEnumSharedProjectReferences **ppEnumSharedProjectReferences);
        
        HRESULT ( STDMETHODCALLTYPE *GetSharedProjectReference )( 
            __RPC__in IVsSharedMSBuildFilesManagerHierarchy2 * This,
            /* [in] */ __RPC__in LPCOLESTR sharedFileFullPath,
            /* [in] */ __RPC__in_opt IVsHierarchy *referencingProject,
            /* [retval][out] */ __RPC__deref_out_opt IVsSharedProjectReference **ppSharedProjectReference);
        
        END_INTERFACE
    } IVsSharedMSBuildFilesManagerHierarchy2Vtbl;

    interface IVsSharedMSBuildFilesManagerHierarchy2
    {
        CONST_VTBL struct IVsSharedMSBuildFilesManagerHierarchy2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSharedMSBuildFilesManagerHierarchy2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSharedMSBuildFilesManagerHierarchy2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSharedMSBuildFilesManagerHierarchy2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSharedMSBuildFilesManagerHierarchy2_EnumAllAvailableSharedProjects(This,referencingProject,ppEnumSharedProjectReferences)	\
    ( (This)->lpVtbl -> EnumAllAvailableSharedProjects(This,referencingProject,ppEnumSharedProjectReferences) ) 

#define IVsSharedMSBuildFilesManagerHierarchy2_GetSharedProjectReference(This,sharedFileFullPath,referencingProject,ppSharedProjectReference)	\
    ( (This)->lpVtbl -> GetSharedProjectReference(This,sharedFileFullPath,referencingProject,ppSharedProjectReference) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSharedMSBuildFilesManagerHierarchy2_INTERFACE_DEFINED__ */


#ifndef __IVsSharedProjectReferencesHelper_INTERFACE_DEFINED__
#define __IVsSharedProjectReferencesHelper_INTERFACE_DEFINED__

/* interface IVsSharedProjectReferencesHelper */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsSharedProjectReferencesHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BB0D419C-04CD-457A-BC3C-954F447EC806")
    IVsSharedProjectReferencesHelper : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ChangeSharedMSBuildFileImports( 
            /* [in] */ __RPC__in_opt IVsHierarchy *importingProject,
            /* [in] */ __RPC__in SAFEARRAY * importFullPathsToRemove,
            /* [in] */ __RPC__in SAFEARRAY * importFullPathsToAdd,
            /* [in] */ __RPC__in LPCOLESTR szImportLabel,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfProjectWasReloaded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ChangeSharedProjectReferences( 
            /* [in] */ __RPC__in_opt IVsHierarchy *referencingProject,
            /* [in] */ int cReferencesToRemove,
            /* [size_is][in] */ __RPC__in_ecount_full(cReferencesToRemove) IUnknown *referencesToRemove[  ],
            /* [in] */ int cReferencesToAdd,
            /* [size_is][in] */ __RPC__in_ecount_full(cReferencesToAdd) IUnknown *referencesToAdd[  ],
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfProjectWasReloaded) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSharedProjectReferencesHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSharedProjectReferencesHelper * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSharedProjectReferencesHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSharedProjectReferencesHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *ChangeSharedMSBuildFileImports )( 
            __RPC__in IVsSharedProjectReferencesHelper * This,
            /* [in] */ __RPC__in_opt IVsHierarchy *importingProject,
            /* [in] */ __RPC__in SAFEARRAY * importFullPathsToRemove,
            /* [in] */ __RPC__in SAFEARRAY * importFullPathsToAdd,
            /* [in] */ __RPC__in LPCOLESTR szImportLabel,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfProjectWasReloaded);
        
        HRESULT ( STDMETHODCALLTYPE *ChangeSharedProjectReferences )( 
            __RPC__in IVsSharedProjectReferencesHelper * This,
            /* [in] */ __RPC__in_opt IVsHierarchy *referencingProject,
            /* [in] */ int cReferencesToRemove,
            /* [size_is][in] */ __RPC__in_ecount_full(cReferencesToRemove) IUnknown *referencesToRemove[  ],
            /* [in] */ int cReferencesToAdd,
            /* [size_is][in] */ __RPC__in_ecount_full(cReferencesToAdd) IUnknown *referencesToAdd[  ],
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfProjectWasReloaded);
        
        END_INTERFACE
    } IVsSharedProjectReferencesHelperVtbl;

    interface IVsSharedProjectReferencesHelper
    {
        CONST_VTBL struct IVsSharedProjectReferencesHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSharedProjectReferencesHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSharedProjectReferencesHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSharedProjectReferencesHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSharedProjectReferencesHelper_ChangeSharedMSBuildFileImports(This,importingProject,importFullPathsToRemove,importFullPathsToAdd,szImportLabel,pfProjectWasReloaded)	\
    ( (This)->lpVtbl -> ChangeSharedMSBuildFileImports(This,importingProject,importFullPathsToRemove,importFullPathsToAdd,szImportLabel,pfProjectWasReloaded) ) 

#define IVsSharedProjectReferencesHelper_ChangeSharedProjectReferences(This,referencingProject,cReferencesToRemove,referencesToRemove,cReferencesToAdd,referencesToAdd,pfProjectWasReloaded)	\
    ( (This)->lpVtbl -> ChangeSharedProjectReferences(This,referencingProject,cReferencesToRemove,referencesToRemove,cReferencesToAdd,referencesToAdd,pfProjectWasReloaded) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSharedProjectReferencesHelper_INTERFACE_DEFINED__ */


#ifndef __IVsPlatformReferenceProviderContext2_INTERFACE_DEFINED__
#define __IVsPlatformReferenceProviderContext2_INTERFACE_DEFINED__

/* interface IVsPlatformReferenceProviderContext2 */
/* [object][oleautomation][version][uuid] */ 


EXTERN_C const IID IID_IVsPlatformReferenceProviderContext2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("65429265-78CC-4772-9826-5BF9E2295C62")
    IVsPlatformReferenceProviderContext2 : public IVsPlatformReferenceProviderContext
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SDKExtensionDirectoryRoot( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSdkExtensionDirectoryRoot) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SDKExtensionDirectoryRoot( 
            /* [in] */ __RPC__in LPCOLESTR strSdkExtensionDirectoryRoot) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsPlatformReferenceProviderContext2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderGuid )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__out GUID *pguidProvider);
        
        /* [propget][local] */ HRESULT ( STDMETHODCALLTYPE *get_References )( 
            IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ SAFEARRAY * *pReferences);
        
        HRESULT ( STDMETHODCALLTYPE *AddReference )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ __RPC__in_opt IVsReference *pReference);
        
        HRESULT ( STDMETHODCALLTYPE *CreateReference )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IVsReference **pRetVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceFilterPaths )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *pFilterPaths);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceFilterPaths )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ __RPC__in SAFEARRAY * filterPaths);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetPlatformIdentifier )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrTargetPlatformIdentifier);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetPlatformIdentifier )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ __RPC__in LPCOLESTR strTargetPlatformIdentifier);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetPlatformVersion )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrTargetPlaformVersion);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetPlatformVersion )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ __RPC__in LPCOLESTR strTargetPlaformVersion);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetFrameworkMoniker )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrTargetPlatformMoniker);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetFrameworkMoniker )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ __RPC__in LPCOLESTR strTargetPlatformMoniker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AssemblySearchPaths )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrAssemblySearchPaths);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AssemblySearchPaths )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ __RPC__in LPCOLESTR strAssemblySearchPaths);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetPlatformReferencesLocation )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrPlatformWinmdLocation);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetPlatformReferencesLocation )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ __RPC__in LPCOLESTR strPlatformWinmdLocation);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SDKRegistryRoot )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSdkRegistryRoot);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SDKRegistryRoot )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ __RPC__in LPCOLESTR strSdkRegistryRoot);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SDKDirectoryRoot )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSdkDirectoryRoot);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SDKDirectoryRoot )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ __RPC__in LPCOLESTR strSdkDirectoryRoot);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SDKFilterKeywords )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSDKFilterKeywords);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SDKFilterKeywords )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ __RPC__in LPCOLESTR strSDKFilterKeywords);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_VisualStudioVersion )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrVisualStudioVersion);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_VisualStudioVersion )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ __RPC__in LPCOLESTR strVisualStudioVersion);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpandSDKContents )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pvarBoolExpandSDKContents);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpandSDKContents )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ VARIANT_BOOL varBoolExpandSDKContents);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tabs )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__out VSSDKPROVIDERTAB *peTabs);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Tabs )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ VSSDKPROVIDERTAB eTabs);
        
        HRESULT ( STDMETHODCALLTYPE *GetTabTitle )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ VSSDKPROVIDERTAB etabId,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrTabTitle);
        
        HRESULT ( STDMETHODCALLTYPE *SetTabTitle )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ VSSDKPROVIDERTAB etabId,
            /* [in] */ __RPC__in LPCOLESTR szTabTitle);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsImplicitlyReferenced )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pvarfIsImplicitlyExpanded);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsImplicitlyReferenced )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ VARIANT_BOOL pvarfIsImplicitlyExpanded);
        
        HRESULT ( STDMETHODCALLTYPE *GetNoItemsMessageForTab )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ VSASSEMBLYPROVIDERTAB etabId,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *bstrNoItemsMessage);
        
        HRESULT ( STDMETHODCALLTYPE *SetNoItemsMessageForTab )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ VSASSEMBLYPROVIDERTAB etabId,
            /* [in] */ __RPC__in LPCOLESTR bstrNoItemsMessage);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SDKExtensionDirectoryRoot )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSdkExtensionDirectoryRoot);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SDKExtensionDirectoryRoot )( 
            __RPC__in IVsPlatformReferenceProviderContext2 * This,
            /* [in] */ __RPC__in LPCOLESTR strSdkExtensionDirectoryRoot);
        
        END_INTERFACE
    } IVsPlatformReferenceProviderContext2Vtbl;

    interface IVsPlatformReferenceProviderContext2
    {
        CONST_VTBL struct IVsPlatformReferenceProviderContext2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsPlatformReferenceProviderContext2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsPlatformReferenceProviderContext2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsPlatformReferenceProviderContext2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsPlatformReferenceProviderContext2_get_ProviderGuid(This,pguidProvider)	\
    ( (This)->lpVtbl -> get_ProviderGuid(This,pguidProvider) ) 

#define IVsPlatformReferenceProviderContext2_get_References(This,pReferences)	\
    ( (This)->lpVtbl -> get_References(This,pReferences) ) 

#define IVsPlatformReferenceProviderContext2_AddReference(This,pReference)	\
    ( (This)->lpVtbl -> AddReference(This,pReference) ) 

#define IVsPlatformReferenceProviderContext2_CreateReference(This,pRetVal)	\
    ( (This)->lpVtbl -> CreateReference(This,pRetVal) ) 

#define IVsPlatformReferenceProviderContext2_get_ReferenceFilterPaths(This,pFilterPaths)	\
    ( (This)->lpVtbl -> get_ReferenceFilterPaths(This,pFilterPaths) ) 

#define IVsPlatformReferenceProviderContext2_put_ReferenceFilterPaths(This,filterPaths)	\
    ( (This)->lpVtbl -> put_ReferenceFilterPaths(This,filterPaths) ) 


#define IVsPlatformReferenceProviderContext2_get_TargetPlatformIdentifier(This,pbstrTargetPlatformIdentifier)	\
    ( (This)->lpVtbl -> get_TargetPlatformIdentifier(This,pbstrTargetPlatformIdentifier) ) 

#define IVsPlatformReferenceProviderContext2_put_TargetPlatformIdentifier(This,strTargetPlatformIdentifier)	\
    ( (This)->lpVtbl -> put_TargetPlatformIdentifier(This,strTargetPlatformIdentifier) ) 

#define IVsPlatformReferenceProviderContext2_get_TargetPlatformVersion(This,pbstrTargetPlaformVersion)	\
    ( (This)->lpVtbl -> get_TargetPlatformVersion(This,pbstrTargetPlaformVersion) ) 

#define IVsPlatformReferenceProviderContext2_put_TargetPlatformVersion(This,strTargetPlaformVersion)	\
    ( (This)->lpVtbl -> put_TargetPlatformVersion(This,strTargetPlaformVersion) ) 

#define IVsPlatformReferenceProviderContext2_get_TargetFrameworkMoniker(This,pbstrTargetPlatformMoniker)	\
    ( (This)->lpVtbl -> get_TargetFrameworkMoniker(This,pbstrTargetPlatformMoniker) ) 

#define IVsPlatformReferenceProviderContext2_put_TargetFrameworkMoniker(This,strTargetPlatformMoniker)	\
    ( (This)->lpVtbl -> put_TargetFrameworkMoniker(This,strTargetPlatformMoniker) ) 

#define IVsPlatformReferenceProviderContext2_get_AssemblySearchPaths(This,pbstrAssemblySearchPaths)	\
    ( (This)->lpVtbl -> get_AssemblySearchPaths(This,pbstrAssemblySearchPaths) ) 

#define IVsPlatformReferenceProviderContext2_put_AssemblySearchPaths(This,strAssemblySearchPaths)	\
    ( (This)->lpVtbl -> put_AssemblySearchPaths(This,strAssemblySearchPaths) ) 

#define IVsPlatformReferenceProviderContext2_get_TargetPlatformReferencesLocation(This,pbstrPlatformWinmdLocation)	\
    ( (This)->lpVtbl -> get_TargetPlatformReferencesLocation(This,pbstrPlatformWinmdLocation) ) 

#define IVsPlatformReferenceProviderContext2_put_TargetPlatformReferencesLocation(This,strPlatformWinmdLocation)	\
    ( (This)->lpVtbl -> put_TargetPlatformReferencesLocation(This,strPlatformWinmdLocation) ) 

#define IVsPlatformReferenceProviderContext2_get_SDKRegistryRoot(This,pbstrSdkRegistryRoot)	\
    ( (This)->lpVtbl -> get_SDKRegistryRoot(This,pbstrSdkRegistryRoot) ) 

#define IVsPlatformReferenceProviderContext2_put_SDKRegistryRoot(This,strSdkRegistryRoot)	\
    ( (This)->lpVtbl -> put_SDKRegistryRoot(This,strSdkRegistryRoot) ) 

#define IVsPlatformReferenceProviderContext2_get_SDKDirectoryRoot(This,pbstrSdkDirectoryRoot)	\
    ( (This)->lpVtbl -> get_SDKDirectoryRoot(This,pbstrSdkDirectoryRoot) ) 

#define IVsPlatformReferenceProviderContext2_put_SDKDirectoryRoot(This,strSdkDirectoryRoot)	\
    ( (This)->lpVtbl -> put_SDKDirectoryRoot(This,strSdkDirectoryRoot) ) 

#define IVsPlatformReferenceProviderContext2_get_SDKFilterKeywords(This,pbstrSDKFilterKeywords)	\
    ( (This)->lpVtbl -> get_SDKFilterKeywords(This,pbstrSDKFilterKeywords) ) 

#define IVsPlatformReferenceProviderContext2_put_SDKFilterKeywords(This,strSDKFilterKeywords)	\
    ( (This)->lpVtbl -> put_SDKFilterKeywords(This,strSDKFilterKeywords) ) 

#define IVsPlatformReferenceProviderContext2_get_VisualStudioVersion(This,pbstrVisualStudioVersion)	\
    ( (This)->lpVtbl -> get_VisualStudioVersion(This,pbstrVisualStudioVersion) ) 

#define IVsPlatformReferenceProviderContext2_put_VisualStudioVersion(This,strVisualStudioVersion)	\
    ( (This)->lpVtbl -> put_VisualStudioVersion(This,strVisualStudioVersion) ) 

#define IVsPlatformReferenceProviderContext2_get_ExpandSDKContents(This,pvarBoolExpandSDKContents)	\
    ( (This)->lpVtbl -> get_ExpandSDKContents(This,pvarBoolExpandSDKContents) ) 

#define IVsPlatformReferenceProviderContext2_put_ExpandSDKContents(This,varBoolExpandSDKContents)	\
    ( (This)->lpVtbl -> put_ExpandSDKContents(This,varBoolExpandSDKContents) ) 

#define IVsPlatformReferenceProviderContext2_get_Tabs(This,peTabs)	\
    ( (This)->lpVtbl -> get_Tabs(This,peTabs) ) 

#define IVsPlatformReferenceProviderContext2_put_Tabs(This,eTabs)	\
    ( (This)->lpVtbl -> put_Tabs(This,eTabs) ) 

#define IVsPlatformReferenceProviderContext2_GetTabTitle(This,etabId,pbstrTabTitle)	\
    ( (This)->lpVtbl -> GetTabTitle(This,etabId,pbstrTabTitle) ) 

#define IVsPlatformReferenceProviderContext2_SetTabTitle(This,etabId,szTabTitle)	\
    ( (This)->lpVtbl -> SetTabTitle(This,etabId,szTabTitle) ) 

#define IVsPlatformReferenceProviderContext2_get_IsImplicitlyReferenced(This,pvarfIsImplicitlyExpanded)	\
    ( (This)->lpVtbl -> get_IsImplicitlyReferenced(This,pvarfIsImplicitlyExpanded) ) 

#define IVsPlatformReferenceProviderContext2_put_IsImplicitlyReferenced(This,pvarfIsImplicitlyExpanded)	\
    ( (This)->lpVtbl -> put_IsImplicitlyReferenced(This,pvarfIsImplicitlyExpanded) ) 

#define IVsPlatformReferenceProviderContext2_GetNoItemsMessageForTab(This,etabId,bstrNoItemsMessage)	\
    ( (This)->lpVtbl -> GetNoItemsMessageForTab(This,etabId,bstrNoItemsMessage) ) 

#define IVsPlatformReferenceProviderContext2_SetNoItemsMessageForTab(This,etabId,bstrNoItemsMessage)	\
    ( (This)->lpVtbl -> SetNoItemsMessageForTab(This,etabId,bstrNoItemsMessage) ) 


#define IVsPlatformReferenceProviderContext2_get_SDKExtensionDirectoryRoot(This,pbstrSdkExtensionDirectoryRoot)	\
    ( (This)->lpVtbl -> get_SDKExtensionDirectoryRoot(This,pbstrSdkExtensionDirectoryRoot) ) 

#define IVsPlatformReferenceProviderContext2_put_SDKExtensionDirectoryRoot(This,strSdkExtensionDirectoryRoot)	\
    ( (This)->lpVtbl -> put_SDKExtensionDirectoryRoot(This,strSdkExtensionDirectoryRoot) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsPlatformReferenceProviderContext2_INTERFACE_DEFINED__ */


#ifndef __IVsPlatformReferenceProviderContext3_INTERFACE_DEFINED__
#define __IVsPlatformReferenceProviderContext3_INTERFACE_DEFINED__

/* interface IVsPlatformReferenceProviderContext3 */
/* [object][oleautomation][version][uuid] */ 


EXTERN_C const IID IID_IVsPlatformReferenceProviderContext3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2EE3C85D-04D8-461B-B7AC-8E4F9C59DC97")
    IVsPlatformReferenceProviderContext3 : public IVsPlatformReferenceProviderContext2
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SDKIdentifier( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSdkIdentifier) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SDKIdentifier( 
            /* [in] */ __RPC__in LPCOLESTR strSdkIdentifier) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SDKVersion( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSdkVersion) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SDKVersion( 
            /* [in] */ __RPC__in LPCOLESTR strSdkVersion) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsPlatformReferenceProviderContext3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderGuid )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__out GUID *pguidProvider);
        
        /* [propget][local] */ HRESULT ( STDMETHODCALLTYPE *get_References )( 
            IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ SAFEARRAY * *pReferences);
        
        HRESULT ( STDMETHODCALLTYPE *AddReference )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in_opt IVsReference *pReference);
        
        HRESULT ( STDMETHODCALLTYPE *CreateReference )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IVsReference **pRetVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceFilterPaths )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *pFilterPaths);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceFilterPaths )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in SAFEARRAY * filterPaths);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetPlatformIdentifier )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrTargetPlatformIdentifier);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetPlatformIdentifier )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in LPCOLESTR strTargetPlatformIdentifier);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetPlatformVersion )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrTargetPlaformVersion);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetPlatformVersion )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in LPCOLESTR strTargetPlaformVersion);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetFrameworkMoniker )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrTargetPlatformMoniker);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetFrameworkMoniker )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in LPCOLESTR strTargetPlatformMoniker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AssemblySearchPaths )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrAssemblySearchPaths);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AssemblySearchPaths )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in LPCOLESTR strAssemblySearchPaths);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetPlatformReferencesLocation )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrPlatformWinmdLocation);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetPlatformReferencesLocation )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in LPCOLESTR strPlatformWinmdLocation);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SDKRegistryRoot )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSdkRegistryRoot);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SDKRegistryRoot )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in LPCOLESTR strSdkRegistryRoot);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SDKDirectoryRoot )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSdkDirectoryRoot);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SDKDirectoryRoot )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in LPCOLESTR strSdkDirectoryRoot);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SDKFilterKeywords )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSDKFilterKeywords);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SDKFilterKeywords )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in LPCOLESTR strSDKFilterKeywords);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_VisualStudioVersion )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrVisualStudioVersion);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_VisualStudioVersion )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in LPCOLESTR strVisualStudioVersion);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpandSDKContents )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pvarBoolExpandSDKContents);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpandSDKContents )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ VARIANT_BOOL varBoolExpandSDKContents);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tabs )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__out VSSDKPROVIDERTAB *peTabs);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Tabs )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ VSSDKPROVIDERTAB eTabs);
        
        HRESULT ( STDMETHODCALLTYPE *GetTabTitle )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ VSSDKPROVIDERTAB etabId,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrTabTitle);
        
        HRESULT ( STDMETHODCALLTYPE *SetTabTitle )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ VSSDKPROVIDERTAB etabId,
            /* [in] */ __RPC__in LPCOLESTR szTabTitle);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsImplicitlyReferenced )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pvarfIsImplicitlyExpanded);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsImplicitlyReferenced )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ VARIANT_BOOL pvarfIsImplicitlyExpanded);
        
        HRESULT ( STDMETHODCALLTYPE *GetNoItemsMessageForTab )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ VSASSEMBLYPROVIDERTAB etabId,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *bstrNoItemsMessage);
        
        HRESULT ( STDMETHODCALLTYPE *SetNoItemsMessageForTab )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ VSASSEMBLYPROVIDERTAB etabId,
            /* [in] */ __RPC__in LPCOLESTR bstrNoItemsMessage);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SDKExtensionDirectoryRoot )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSdkExtensionDirectoryRoot);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SDKExtensionDirectoryRoot )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in LPCOLESTR strSdkExtensionDirectoryRoot);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SDKIdentifier )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSdkIdentifier);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SDKIdentifier )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in LPCOLESTR strSdkIdentifier);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SDKVersion )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSdkVersion);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SDKVersion )( 
            __RPC__in IVsPlatformReferenceProviderContext3 * This,
            /* [in] */ __RPC__in LPCOLESTR strSdkVersion);
        
        END_INTERFACE
    } IVsPlatformReferenceProviderContext3Vtbl;

    interface IVsPlatformReferenceProviderContext3
    {
        CONST_VTBL struct IVsPlatformReferenceProviderContext3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsPlatformReferenceProviderContext3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsPlatformReferenceProviderContext3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsPlatformReferenceProviderContext3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsPlatformReferenceProviderContext3_get_ProviderGuid(This,pguidProvider)	\
    ( (This)->lpVtbl -> get_ProviderGuid(This,pguidProvider) ) 

#define IVsPlatformReferenceProviderContext3_get_References(This,pReferences)	\
    ( (This)->lpVtbl -> get_References(This,pReferences) ) 

#define IVsPlatformReferenceProviderContext3_AddReference(This,pReference)	\
    ( (This)->lpVtbl -> AddReference(This,pReference) ) 

#define IVsPlatformReferenceProviderContext3_CreateReference(This,pRetVal)	\
    ( (This)->lpVtbl -> CreateReference(This,pRetVal) ) 

#define IVsPlatformReferenceProviderContext3_get_ReferenceFilterPaths(This,pFilterPaths)	\
    ( (This)->lpVtbl -> get_ReferenceFilterPaths(This,pFilterPaths) ) 

#define IVsPlatformReferenceProviderContext3_put_ReferenceFilterPaths(This,filterPaths)	\
    ( (This)->lpVtbl -> put_ReferenceFilterPaths(This,filterPaths) ) 


#define IVsPlatformReferenceProviderContext3_get_TargetPlatformIdentifier(This,pbstrTargetPlatformIdentifier)	\
    ( (This)->lpVtbl -> get_TargetPlatformIdentifier(This,pbstrTargetPlatformIdentifier) ) 

#define IVsPlatformReferenceProviderContext3_put_TargetPlatformIdentifier(This,strTargetPlatformIdentifier)	\
    ( (This)->lpVtbl -> put_TargetPlatformIdentifier(This,strTargetPlatformIdentifier) ) 

#define IVsPlatformReferenceProviderContext3_get_TargetPlatformVersion(This,pbstrTargetPlaformVersion)	\
    ( (This)->lpVtbl -> get_TargetPlatformVersion(This,pbstrTargetPlaformVersion) ) 

#define IVsPlatformReferenceProviderContext3_put_TargetPlatformVersion(This,strTargetPlaformVersion)	\
    ( (This)->lpVtbl -> put_TargetPlatformVersion(This,strTargetPlaformVersion) ) 

#define IVsPlatformReferenceProviderContext3_get_TargetFrameworkMoniker(This,pbstrTargetPlatformMoniker)	\
    ( (This)->lpVtbl -> get_TargetFrameworkMoniker(This,pbstrTargetPlatformMoniker) ) 

#define IVsPlatformReferenceProviderContext3_put_TargetFrameworkMoniker(This,strTargetPlatformMoniker)	\
    ( (This)->lpVtbl -> put_TargetFrameworkMoniker(This,strTargetPlatformMoniker) ) 

#define IVsPlatformReferenceProviderContext3_get_AssemblySearchPaths(This,pbstrAssemblySearchPaths)	\
    ( (This)->lpVtbl -> get_AssemblySearchPaths(This,pbstrAssemblySearchPaths) ) 

#define IVsPlatformReferenceProviderContext3_put_AssemblySearchPaths(This,strAssemblySearchPaths)	\
    ( (This)->lpVtbl -> put_AssemblySearchPaths(This,strAssemblySearchPaths) ) 

#define IVsPlatformReferenceProviderContext3_get_TargetPlatformReferencesLocation(This,pbstrPlatformWinmdLocation)	\
    ( (This)->lpVtbl -> get_TargetPlatformReferencesLocation(This,pbstrPlatformWinmdLocation) ) 

#define IVsPlatformReferenceProviderContext3_put_TargetPlatformReferencesLocation(This,strPlatformWinmdLocation)	\
    ( (This)->lpVtbl -> put_TargetPlatformReferencesLocation(This,strPlatformWinmdLocation) ) 

#define IVsPlatformReferenceProviderContext3_get_SDKRegistryRoot(This,pbstrSdkRegistryRoot)	\
    ( (This)->lpVtbl -> get_SDKRegistryRoot(This,pbstrSdkRegistryRoot) ) 

#define IVsPlatformReferenceProviderContext3_put_SDKRegistryRoot(This,strSdkRegistryRoot)	\
    ( (This)->lpVtbl -> put_SDKRegistryRoot(This,strSdkRegistryRoot) ) 

#define IVsPlatformReferenceProviderContext3_get_SDKDirectoryRoot(This,pbstrSdkDirectoryRoot)	\
    ( (This)->lpVtbl -> get_SDKDirectoryRoot(This,pbstrSdkDirectoryRoot) ) 

#define IVsPlatformReferenceProviderContext3_put_SDKDirectoryRoot(This,strSdkDirectoryRoot)	\
    ( (This)->lpVtbl -> put_SDKDirectoryRoot(This,strSdkDirectoryRoot) ) 

#define IVsPlatformReferenceProviderContext3_get_SDKFilterKeywords(This,pbstrSDKFilterKeywords)	\
    ( (This)->lpVtbl -> get_SDKFilterKeywords(This,pbstrSDKFilterKeywords) ) 

#define IVsPlatformReferenceProviderContext3_put_SDKFilterKeywords(This,strSDKFilterKeywords)	\
    ( (This)->lpVtbl -> put_SDKFilterKeywords(This,strSDKFilterKeywords) ) 

#define IVsPlatformReferenceProviderContext3_get_VisualStudioVersion(This,pbstrVisualStudioVersion)	\
    ( (This)->lpVtbl -> get_VisualStudioVersion(This,pbstrVisualStudioVersion) ) 

#define IVsPlatformReferenceProviderContext3_put_VisualStudioVersion(This,strVisualStudioVersion)	\
    ( (This)->lpVtbl -> put_VisualStudioVersion(This,strVisualStudioVersion) ) 

#define IVsPlatformReferenceProviderContext3_get_ExpandSDKContents(This,pvarBoolExpandSDKContents)	\
    ( (This)->lpVtbl -> get_ExpandSDKContents(This,pvarBoolExpandSDKContents) ) 

#define IVsPlatformReferenceProviderContext3_put_ExpandSDKContents(This,varBoolExpandSDKContents)	\
    ( (This)->lpVtbl -> put_ExpandSDKContents(This,varBoolExpandSDKContents) ) 

#define IVsPlatformReferenceProviderContext3_get_Tabs(This,peTabs)	\
    ( (This)->lpVtbl -> get_Tabs(This,peTabs) ) 

#define IVsPlatformReferenceProviderContext3_put_Tabs(This,eTabs)	\
    ( (This)->lpVtbl -> put_Tabs(This,eTabs) ) 

#define IVsPlatformReferenceProviderContext3_GetTabTitle(This,etabId,pbstrTabTitle)	\
    ( (This)->lpVtbl -> GetTabTitle(This,etabId,pbstrTabTitle) ) 

#define IVsPlatformReferenceProviderContext3_SetTabTitle(This,etabId,szTabTitle)	\
    ( (This)->lpVtbl -> SetTabTitle(This,etabId,szTabTitle) ) 

#define IVsPlatformReferenceProviderContext3_get_IsImplicitlyReferenced(This,pvarfIsImplicitlyExpanded)	\
    ( (This)->lpVtbl -> get_IsImplicitlyReferenced(This,pvarfIsImplicitlyExpanded) ) 

#define IVsPlatformReferenceProviderContext3_put_IsImplicitlyReferenced(This,pvarfIsImplicitlyExpanded)	\
    ( (This)->lpVtbl -> put_IsImplicitlyReferenced(This,pvarfIsImplicitlyExpanded) ) 

#define IVsPlatformReferenceProviderContext3_GetNoItemsMessageForTab(This,etabId,bstrNoItemsMessage)	\
    ( (This)->lpVtbl -> GetNoItemsMessageForTab(This,etabId,bstrNoItemsMessage) ) 

#define IVsPlatformReferenceProviderContext3_SetNoItemsMessageForTab(This,etabId,bstrNoItemsMessage)	\
    ( (This)->lpVtbl -> SetNoItemsMessageForTab(This,etabId,bstrNoItemsMessage) ) 


#define IVsPlatformReferenceProviderContext3_get_SDKExtensionDirectoryRoot(This,pbstrSdkExtensionDirectoryRoot)	\
    ( (This)->lpVtbl -> get_SDKExtensionDirectoryRoot(This,pbstrSdkExtensionDirectoryRoot) ) 

#define IVsPlatformReferenceProviderContext3_put_SDKExtensionDirectoryRoot(This,strSdkExtensionDirectoryRoot)	\
    ( (This)->lpVtbl -> put_SDKExtensionDirectoryRoot(This,strSdkExtensionDirectoryRoot) ) 


#define IVsPlatformReferenceProviderContext3_get_SDKIdentifier(This,pbstrSdkIdentifier)	\
    ( (This)->lpVtbl -> get_SDKIdentifier(This,pbstrSdkIdentifier) ) 

#define IVsPlatformReferenceProviderContext3_put_SDKIdentifier(This,strSdkIdentifier)	\
    ( (This)->lpVtbl -> put_SDKIdentifier(This,strSdkIdentifier) ) 

#define IVsPlatformReferenceProviderContext3_get_SDKVersion(This,pbstrSdkVersion)	\
    ( (This)->lpVtbl -> get_SDKVersion(This,pbstrSdkVersion) ) 

#define IVsPlatformReferenceProviderContext3_put_SDKVersion(This,strSdkVersion)	\
    ( (This)->lpVtbl -> put_SDKVersion(This,strSdkVersion) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsPlatformReferenceProviderContext3_INTERFACE_DEFINED__ */


#ifndef __IVsSccGlyphs2_INTERFACE_DEFINED__
#define __IVsSccGlyphs2_INTERFACE_DEFINED__

/* interface IVsSccGlyphs2 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsSccGlyphs2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B3C3F5E2-7460-4AD6-9581-3A24A3DFE417")
    IVsSccGlyphs2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCustomGlyphMonikerList( 
            /* [in] */ ULONG baseIndex,
            /* [retval][out] */ __RPC__deref_out_opt IVsImageMonikerImageList **imageMonikerImageList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSccGlyphs2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSccGlyphs2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSccGlyphs2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSccGlyphs2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCustomGlyphMonikerList )( 
            __RPC__in IVsSccGlyphs2 * This,
            /* [in] */ ULONG baseIndex,
            /* [retval][out] */ __RPC__deref_out_opt IVsImageMonikerImageList **imageMonikerImageList);
        
        END_INTERFACE
    } IVsSccGlyphs2Vtbl;

    interface IVsSccGlyphs2
    {
        CONST_VTBL struct IVsSccGlyphs2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSccGlyphs2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSccGlyphs2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSccGlyphs2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSccGlyphs2_GetCustomGlyphMonikerList(This,baseIndex,imageMonikerImageList)	\
    ( (This)->lpVtbl -> GetCustomGlyphMonikerList(This,baseIndex,imageMonikerImageList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSccGlyphs2_INTERFACE_DEFINED__ */


#ifndef __SVsSharedProjectReferencesHelper_INTERFACE_DEFINED__
#define __SVsSharedProjectReferencesHelper_INTERFACE_DEFINED__

/* interface SVsSharedProjectReferencesHelper */
/* [object][uuid] */ 


EXTERN_C const IID IID_SVsSharedProjectReferencesHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DB598271-AD61-4BB2-80BA-729AF83F0EE3")
    SVsSharedProjectReferencesHelper : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SVsSharedProjectReferencesHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SVsSharedProjectReferencesHelper * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SVsSharedProjectReferencesHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SVsSharedProjectReferencesHelper * This);
        
        END_INTERFACE
    } SVsSharedProjectReferencesHelperVtbl;

    interface SVsSharedProjectReferencesHelper
    {
        CONST_VTBL struct SVsSharedProjectReferencesHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SVsSharedProjectReferencesHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SVsSharedProjectReferencesHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SVsSharedProjectReferencesHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SVsSharedProjectReferencesHelper_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0029 */
/* [local] */ 

#define SID_SVsSharedProjectReferencesHelper IID_SVsSharedProjectReferencesHelper


extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0029_v0_0_s_ifspec;

#ifndef __SharedProjectReferenceProviderGuid_INTERFACE_DEFINED__
#define __SharedProjectReferenceProviderGuid_INTERFACE_DEFINED__

/* interface SharedProjectReferenceProviderGuid */
/* [object][uuid] */ 


EXTERN_C const IID IID_SharedProjectReferenceProviderGuid;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88B47069-C019-4EEC-B69C-3C8630F83BA5")
    SharedProjectReferenceProviderGuid : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SharedProjectReferenceProviderGuidVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SharedProjectReferenceProviderGuid * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SharedProjectReferenceProviderGuid * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SharedProjectReferenceProviderGuid * This);
        
        END_INTERFACE
    } SharedProjectReferenceProviderGuidVtbl;

    interface SharedProjectReferenceProviderGuid
    {
        CONST_VTBL struct SharedProjectReferenceProviderGuidVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SharedProjectReferenceProviderGuid_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SharedProjectReferenceProviderGuid_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SharedProjectReferenceProviderGuid_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SharedProjectReferenceProviderGuid_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0030 */
/* [local] */ 

#define GUID_SharedProjectReferenceProvider  IID_SharedProjectReferenceProviderGuid 


extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0030_v0_0_s_ifspec;

#ifndef __IVsSharedProjectQueryCanBeReferenced_INTERFACE_DEFINED__
#define __IVsSharedProjectQueryCanBeReferenced_INTERFACE_DEFINED__

/* interface IVsSharedProjectQueryCanBeReferenced */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsSharedProjectQueryCanBeReferenced;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("684863A4-BC6E-467C-8218-5C84CAB616DA")
    IVsSharedProjectQueryCanBeReferenced : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryCanSharedProjectBeReferenced( 
            /* [in] */ __RPC__in_opt IVsHierarchy *referencingProject,
            /* [retval][out] */ __RPC__out VSREFERENCEQUERYRESULT *pResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsSharedProjectQueryCanBeReferencedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsSharedProjectQueryCanBeReferenced * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsSharedProjectQueryCanBeReferenced * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsSharedProjectQueryCanBeReferenced * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryCanSharedProjectBeReferenced )( 
            __RPC__in IVsSharedProjectQueryCanBeReferenced * This,
            /* [in] */ __RPC__in_opt IVsHierarchy *referencingProject,
            /* [retval][out] */ __RPC__out VSREFERENCEQUERYRESULT *pResult);
        
        END_INTERFACE
    } IVsSharedProjectQueryCanBeReferencedVtbl;

    interface IVsSharedProjectQueryCanBeReferenced
    {
        CONST_VTBL struct IVsSharedProjectQueryCanBeReferencedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsSharedProjectQueryCanBeReferenced_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsSharedProjectQueryCanBeReferenced_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsSharedProjectQueryCanBeReferenced_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsSharedProjectQueryCanBeReferenced_QueryCanSharedProjectBeReferenced(This,referencingProject,pResult)	\
    ( (This)->lpVtbl -> QueryCanSharedProjectBeReferenced(This,referencingProject,pResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsSharedProjectQueryCanBeReferenced_INTERFACE_DEFINED__ */


#ifndef __IVsStatusbar3_INTERFACE_DEFINED__
#define __IVsStatusbar3_INTERFACE_DEFINED__

/* interface IVsStatusbar3 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsStatusbar3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5a257c4a-2eb3-4db7-83df-29f4a45b632c")
    IVsStatusbar3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Animation2( 
            /* [in] */ VARIANT_BOOL fOnOff,
            /* [in] */ int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) ImageMoniker *monikers,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *succeeded) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsStatusbar3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsStatusbar3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsStatusbar3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsStatusbar3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Animation2 )( 
            __RPC__in IVsStatusbar3 * This,
            /* [in] */ VARIANT_BOOL fOnOff,
            /* [in] */ int count,
            /* [size_is][in] */ __RPC__in_ecount_full(count) ImageMoniker *monikers,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *succeeded);
        
        END_INTERFACE
    } IVsStatusbar3Vtbl;

    interface IVsStatusbar3
    {
        CONST_VTBL struct IVsStatusbar3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsStatusbar3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsStatusbar3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsStatusbar3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsStatusbar3_Animation2(This,fOnOff,count,monikers,succeeded)	\
    ( (This)->lpVtbl -> Animation2(This,fOnOff,count,monikers,succeeded) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsStatusbar3_INTERFACE_DEFINED__ */


#ifndef __BooleanSymbolExpressionEvaluator_INTERFACE_DEFINED__
#define __BooleanSymbolExpressionEvaluator_INTERFACE_DEFINED__

/* interface BooleanSymbolExpressionEvaluator */
/* [object][uuid] */ 


EXTERN_C const IID IID_BooleanSymbolExpressionEvaluator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5DADF1EE-BCBE-46CE-BADF-271992C112A3")
    BooleanSymbolExpressionEvaluator : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct BooleanSymbolExpressionEvaluatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in BooleanSymbolExpressionEvaluator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in BooleanSymbolExpressionEvaluator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in BooleanSymbolExpressionEvaluator * This);
        
        END_INTERFACE
    } BooleanSymbolExpressionEvaluatorVtbl;

    interface BooleanSymbolExpressionEvaluator
    {
        CONST_VTBL struct BooleanSymbolExpressionEvaluatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define BooleanSymbolExpressionEvaluator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define BooleanSymbolExpressionEvaluator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define BooleanSymbolExpressionEvaluator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __BooleanSymbolExpressionEvaluator_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0033 */
/* [local] */ 

#define CLSID_BooleanSymbolExpressionEvaluator IID_BooleanSymbolExpressionEvaluator


extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0033_v0_0_s_ifspec;

#ifndef __IVsBooleanSymbolPresenceChecker_INTERFACE_DEFINED__
#define __IVsBooleanSymbolPresenceChecker_INTERFACE_DEFINED__

/* interface IVsBooleanSymbolPresenceChecker */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsBooleanSymbolPresenceChecker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("416C706C-933E-4ACB-8D30-F02C28DD4874")
    IVsBooleanSymbolPresenceChecker : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HasChangedSince( 
            /* [out][unique][in] */ __RPC__deref_opt_inout_opt IUnknown **versionObject,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *hasChanged) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSymbolPresent( 
            /* [in] */ __RPC__in LPCOLESTR symbol,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsBooleanSymbolPresenceCheckerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsBooleanSymbolPresenceChecker * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsBooleanSymbolPresenceChecker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsBooleanSymbolPresenceChecker * This);
        
        HRESULT ( STDMETHODCALLTYPE *HasChangedSince )( 
            __RPC__in IVsBooleanSymbolPresenceChecker * This,
            /* [out][unique][in] */ __RPC__deref_opt_inout_opt IUnknown **versionObject,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *hasChanged);
        
        HRESULT ( STDMETHODCALLTYPE *IsSymbolPresent )( 
            __RPC__in IVsBooleanSymbolPresenceChecker * This,
            /* [in] */ __RPC__in LPCOLESTR symbol,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *result);
        
        END_INTERFACE
    } IVsBooleanSymbolPresenceCheckerVtbl;

    interface IVsBooleanSymbolPresenceChecker
    {
        CONST_VTBL struct IVsBooleanSymbolPresenceCheckerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsBooleanSymbolPresenceChecker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsBooleanSymbolPresenceChecker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsBooleanSymbolPresenceChecker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsBooleanSymbolPresenceChecker_HasChangedSince(This,versionObject,hasChanged)	\
    ( (This)->lpVtbl -> HasChangedSince(This,versionObject,hasChanged) ) 

#define IVsBooleanSymbolPresenceChecker_IsSymbolPresent(This,symbol,result)	\
    ( (This)->lpVtbl -> IsSymbolPresent(This,symbol,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsBooleanSymbolPresenceChecker_INTERFACE_DEFINED__ */


#ifndef __IVsBooleanSymbolPresenceBulkChecker_INTERFACE_DEFINED__
#define __IVsBooleanSymbolPresenceBulkChecker_INTERFACE_DEFINED__

/* interface IVsBooleanSymbolPresenceBulkChecker */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsBooleanSymbolPresenceBulkChecker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A37429BD-C5FE-4263-A8AD-D06D060B4632")
    IVsBooleanSymbolPresenceBulkChecker : public IVsBooleanSymbolPresenceChecker
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AreSymbolsPresent( 
            /* [in] */ __RPC__in SAFEARRAY * symbols,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsBooleanSymbolPresenceBulkCheckerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsBooleanSymbolPresenceBulkChecker * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsBooleanSymbolPresenceBulkChecker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsBooleanSymbolPresenceBulkChecker * This);
        
        HRESULT ( STDMETHODCALLTYPE *HasChangedSince )( 
            __RPC__in IVsBooleanSymbolPresenceBulkChecker * This,
            /* [out][unique][in] */ __RPC__deref_opt_inout_opt IUnknown **versionObject,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *hasChanged);
        
        HRESULT ( STDMETHODCALLTYPE *IsSymbolPresent )( 
            __RPC__in IVsBooleanSymbolPresenceBulkChecker * This,
            /* [in] */ __RPC__in LPCOLESTR symbol,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *result);
        
        HRESULT ( STDMETHODCALLTYPE *AreSymbolsPresent )( 
            __RPC__in IVsBooleanSymbolPresenceBulkChecker * This,
            /* [in] */ __RPC__in SAFEARRAY * symbols,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *results);
        
        END_INTERFACE
    } IVsBooleanSymbolPresenceBulkCheckerVtbl;

    interface IVsBooleanSymbolPresenceBulkChecker
    {
        CONST_VTBL struct IVsBooleanSymbolPresenceBulkCheckerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsBooleanSymbolPresenceBulkChecker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsBooleanSymbolPresenceBulkChecker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsBooleanSymbolPresenceBulkChecker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsBooleanSymbolPresenceBulkChecker_HasChangedSince(This,versionObject,hasChanged)	\
    ( (This)->lpVtbl -> HasChangedSince(This,versionObject,hasChanged) ) 

#define IVsBooleanSymbolPresenceBulkChecker_IsSymbolPresent(This,symbol,result)	\
    ( (This)->lpVtbl -> IsSymbolPresent(This,symbol,result) ) 


#define IVsBooleanSymbolPresenceBulkChecker_AreSymbolsPresent(This,symbols,results)	\
    ( (This)->lpVtbl -> AreSymbolsPresent(This,symbols,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsBooleanSymbolPresenceBulkChecker_INTERFACE_DEFINED__ */


#ifndef __IVsBooleanSymbolExpressionEvaluator2_INTERFACE_DEFINED__
#define __IVsBooleanSymbolExpressionEvaluator2_INTERFACE_DEFINED__

/* interface IVsBooleanSymbolExpressionEvaluator2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsBooleanSymbolExpressionEvaluator2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D02A169E-F096-48B0-9A1C-B6AC30FAE9AD")
    IVsBooleanSymbolExpressionEvaluator2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EvaluateExpression( 
            /* [unique][in] */ __RPC__in_opt LPCWSTR wszExpression,
            /* [in] */ __RPC__in_opt IVsBooleanSymbolPresenceChecker *pSymbolChecker,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsBooleanSymbolExpressionEvaluator2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsBooleanSymbolExpressionEvaluator2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsBooleanSymbolExpressionEvaluator2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsBooleanSymbolExpressionEvaluator2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *EvaluateExpression )( 
            __RPC__in IVsBooleanSymbolExpressionEvaluator2 * This,
            /* [unique][in] */ __RPC__in_opt LPCWSTR wszExpression,
            /* [in] */ __RPC__in_opt IVsBooleanSymbolPresenceChecker *pSymbolChecker,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pfResult);
        
        END_INTERFACE
    } IVsBooleanSymbolExpressionEvaluator2Vtbl;

    interface IVsBooleanSymbolExpressionEvaluator2
    {
        CONST_VTBL struct IVsBooleanSymbolExpressionEvaluator2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsBooleanSymbolExpressionEvaluator2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsBooleanSymbolExpressionEvaluator2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsBooleanSymbolExpressionEvaluator2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsBooleanSymbolExpressionEvaluator2_EvaluateExpression(This,wszExpression,pSymbolChecker,pfResult)	\
    ( (This)->lpVtbl -> EvaluateExpression(This,wszExpression,pSymbolChecker,pfResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsBooleanSymbolExpressionEvaluator2_INTERFACE_DEFINED__ */


#ifndef __IVsStartupProjectsListService_INTERFACE_DEFINED__
#define __IVsStartupProjectsListService_INTERFACE_DEFINED__

/* interface IVsStartupProjectsListService */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsStartupProjectsListService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DAEC2267-C961-44F3-96E2-3053E4EF550C")
    IVsStartupProjectsListService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddProject( 
            /* [in] */ __RPC__in REFGUID guidProject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveProject( 
            /* [in] */ __RPC__in REFGUID guidProject) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsStartupProjectsListServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsStartupProjectsListService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsStartupProjectsListService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsStartupProjectsListService * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddProject )( 
            __RPC__in IVsStartupProjectsListService * This,
            /* [in] */ __RPC__in REFGUID guidProject);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveProject )( 
            __RPC__in IVsStartupProjectsListService * This,
            /* [in] */ __RPC__in REFGUID guidProject);
        
        END_INTERFACE
    } IVsStartupProjectsListServiceVtbl;

    interface IVsStartupProjectsListService
    {
        CONST_VTBL struct IVsStartupProjectsListServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsStartupProjectsListService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsStartupProjectsListService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsStartupProjectsListService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsStartupProjectsListService_AddProject(This,guidProject)	\
    ( (This)->lpVtbl -> AddProject(This,guidProject) ) 

#define IVsStartupProjectsListService_RemoveProject(This,guidProject)	\
    ( (This)->lpVtbl -> RemoveProject(This,guidProject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsStartupProjectsListService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0037 */
/* [local] */ 

extern const __declspec(selectany) GUID UICONTEXT_WizardOpen = { 0xc3da54e0, 0x794f, 0x440c, { 0x86, 0x55, 0xda, 0x3, 0xcd, 0xd, 0xd0, 0x5e } };


extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0037_v0_0_s_ifspec;

#ifndef __SVsStartupProjectsListService_INTERFACE_DEFINED__
#define __SVsStartupProjectsListService_INTERFACE_DEFINED__

/* interface SVsStartupProjectsListService */
/* [object][uuid] */ 


EXTERN_C const IID IID_SVsStartupProjectsListService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("66B406DF-E206-47F6-A42B-CEE6B4201082")
    SVsStartupProjectsListService : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SVsStartupProjectsListServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SVsStartupProjectsListService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SVsStartupProjectsListService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SVsStartupProjectsListService * This);
        
        END_INTERFACE
    } SVsStartupProjectsListServiceVtbl;

    interface SVsStartupProjectsListService
    {
        CONST_VTBL struct SVsStartupProjectsListServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SVsStartupProjectsListService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SVsStartupProjectsListService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SVsStartupProjectsListService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SVsStartupProjectsListService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0038 */
/* [local] */ 

#define SID_SVsStartupProjectsListService IID_SVsStartupProjectsListService

enum __VSHPROPID8
    {
        VSHPROPID_SupportsIconMonikers	= -2159,
        VSHPROPID_IconMonikerGuid	= -2160,
        VSHPROPID_IconMonikerId	= -2161,
        VSHPROPID_OpenFolderIconMonikerGuid	= -2162,
        VSHPROPID_OpenFolderIconMonikerId	= -2163,
        VSHPROPID_IconMonikerImageList	= -2164,
        VSHPROPID_SharedProjectReference	= -2165,
        VSHPROPID_DiagHubPlatform	= -2166,
        VSHPROPID_DiagHubPlatformVersion	= -2167,
        VSHPROPID_DiagHubLanguage	= -2168,
        VSHPROPID_DiagHubProjectTargetFactory	= -2169,
        VSHPROPID_DiagHubProjectTarget	= -2170,
        VSHPROPID_SolutionGuid	= -2171,
        VSHPROPID_ActiveIntellisenseProjectContext	= -2172,
        VSHPROPID_ProjectCapabilitiesChecker	= -2173,
        VSHPROPID_ContainsStartupTask	= -2174,
        VSHPROPID_FIRST8	= -2174
    } ;
typedef /* [public] */ DWORD VSHPROPID8;


enum __VSSPROPID7
    {
        VSSPROPID_SCCGlyphMonikerImageList	= -9079,
        VSSPROPID_MainWindowInfoBarHost	= -9080,
        VSSPROPID_UnlocalizedReleaseDescription	= -9081,
        VSSPROPID_IsPrerelease	= -9082,
        VSSPROPID_FIRST7	= -9082
    } ;
typedef LONG VSSPROPID7;


enum __VSFPROPID7
    {
        VSFPROPID_InfoBarHost	= -5033,
        VSFPROPID_ToolboxUser	= -5034,
        VSFPROPID7_FIRST	= -5034
    } ;
typedef LONG VSFPROPID7;


enum __VSVPROPID2
    {
        VSVPROPID_IconMonikerGuid	= -6003,
        VSVPROPID_IconMonikerId	= -6004,
        VSVPROPID2_FIRST	= -6004
    } ;
typedef LONG VSVPROPID2;


enum __VSADDVPFLAGS3
    {
        ADDVP_InvisibleInternalProject	= 0x16e
    } ;
typedef DWORD VSADDVPFLAGSPRIVATE;



extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0038_v0_0_s_ifspec;

#ifndef __IVsInfoBarTextSpan_INTERFACE_DEFINED__
#define __IVsInfoBarTextSpan_INTERFACE_DEFINED__

/* interface IVsInfoBarTextSpan */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsInfoBarTextSpan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A513499A-A1D0-4C21-BDEE-16761BAFD930")
    IVsInfoBarTextSpan : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *text) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Bold( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *bold) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Italic( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *italic) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Underline( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *underline) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsInfoBarTextSpanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsInfoBarTextSpan * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsInfoBarTextSpan * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsInfoBarTextSpan * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            __RPC__in IVsInfoBarTextSpan * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *text);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bold )( 
            __RPC__in IVsInfoBarTextSpan * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *bold);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Italic )( 
            __RPC__in IVsInfoBarTextSpan * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *italic);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Underline )( 
            __RPC__in IVsInfoBarTextSpan * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *underline);
        
        END_INTERFACE
    } IVsInfoBarTextSpanVtbl;

    interface IVsInfoBarTextSpan
    {
        CONST_VTBL struct IVsInfoBarTextSpanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsInfoBarTextSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsInfoBarTextSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsInfoBarTextSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsInfoBarTextSpan_get_Text(This,text)	\
    ( (This)->lpVtbl -> get_Text(This,text) ) 

#define IVsInfoBarTextSpan_get_Bold(This,bold)	\
    ( (This)->lpVtbl -> get_Bold(This,bold) ) 

#define IVsInfoBarTextSpan_get_Italic(This,italic)	\
    ( (This)->lpVtbl -> get_Italic(This,italic) ) 

#define IVsInfoBarTextSpan_get_Underline(This,underline)	\
    ( (This)->lpVtbl -> get_Underline(This,underline) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsInfoBarTextSpan_INTERFACE_DEFINED__ */


#ifndef __IVsInfoBarActionItem_INTERFACE_DEFINED__
#define __IVsInfoBarActionItem_INTERFACE_DEFINED__

/* interface IVsInfoBarActionItem */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsInfoBarActionItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("25482DB2-7BBA-49DF-841B-55A01D067679")
    IVsInfoBarActionItem : public IVsInfoBarTextSpan
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ActionContext( 
            /* [retval][out] */ __RPC__out VARIANT *context) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsButton( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *isButton) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsInfoBarActionItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsInfoBarActionItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsInfoBarActionItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsInfoBarActionItem * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            __RPC__in IVsInfoBarActionItem * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *text);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bold )( 
            __RPC__in IVsInfoBarActionItem * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *bold);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Italic )( 
            __RPC__in IVsInfoBarActionItem * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *italic);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Underline )( 
            __RPC__in IVsInfoBarActionItem * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *underline);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionContext )( 
            __RPC__in IVsInfoBarActionItem * This,
            /* [retval][out] */ __RPC__out VARIANT *context);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsButton )( 
            __RPC__in IVsInfoBarActionItem * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *isButton);
        
        END_INTERFACE
    } IVsInfoBarActionItemVtbl;

    interface IVsInfoBarActionItem
    {
        CONST_VTBL struct IVsInfoBarActionItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsInfoBarActionItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsInfoBarActionItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsInfoBarActionItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsInfoBarActionItem_get_Text(This,text)	\
    ( (This)->lpVtbl -> get_Text(This,text) ) 

#define IVsInfoBarActionItem_get_Bold(This,bold)	\
    ( (This)->lpVtbl -> get_Bold(This,bold) ) 

#define IVsInfoBarActionItem_get_Italic(This,italic)	\
    ( (This)->lpVtbl -> get_Italic(This,italic) ) 

#define IVsInfoBarActionItem_get_Underline(This,underline)	\
    ( (This)->lpVtbl -> get_Underline(This,underline) ) 


#define IVsInfoBarActionItem_get_ActionContext(This,context)	\
    ( (This)->lpVtbl -> get_ActionContext(This,context) ) 

#define IVsInfoBarActionItem_get_IsButton(This,isButton)	\
    ( (This)->lpVtbl -> get_IsButton(This,isButton) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsInfoBarActionItem_INTERFACE_DEFINED__ */


#ifndef __IVsInfoBarTextSpanCollection_INTERFACE_DEFINED__
#define __IVsInfoBarTextSpanCollection_INTERFACE_DEFINED__

/* interface IVsInfoBarTextSpanCollection */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsInfoBarTextSpanCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("186DD013-096E-4134-8DC2-A0861607DA50")
    IVsInfoBarTextSpanCollection : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out int *count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpan( 
            /* [in] */ int index,
            /* [retval][out] */ __RPC__deref_out_opt IVsInfoBarTextSpan **span) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsInfoBarTextSpanCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsInfoBarTextSpanCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsInfoBarTextSpanCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsInfoBarTextSpanCollection * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IVsInfoBarTextSpanCollection * This,
            /* [retval][out] */ __RPC__out int *count);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpan )( 
            __RPC__in IVsInfoBarTextSpanCollection * This,
            /* [in] */ int index,
            /* [retval][out] */ __RPC__deref_out_opt IVsInfoBarTextSpan **span);
        
        END_INTERFACE
    } IVsInfoBarTextSpanCollectionVtbl;

    interface IVsInfoBarTextSpanCollection
    {
        CONST_VTBL struct IVsInfoBarTextSpanCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsInfoBarTextSpanCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsInfoBarTextSpanCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsInfoBarTextSpanCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsInfoBarTextSpanCollection_get_Count(This,count)	\
    ( (This)->lpVtbl -> get_Count(This,count) ) 

#define IVsInfoBarTextSpanCollection_GetSpan(This,index,span)	\
    ( (This)->lpVtbl -> GetSpan(This,index,span) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsInfoBarTextSpanCollection_INTERFACE_DEFINED__ */


#ifndef __IVsInfoBarActionItemCollection_INTERFACE_DEFINED__
#define __IVsInfoBarActionItemCollection_INTERFACE_DEFINED__

/* interface IVsInfoBarActionItemCollection */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsInfoBarActionItemCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0E65F0E-DAEB-48B3-AA63-C274605B3EED")
    IVsInfoBarActionItemCollection : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out int *count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItem( 
            /* [in] */ int index,
            /* [retval][out] */ __RPC__deref_out_opt IVsInfoBarActionItem **item) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsInfoBarActionItemCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsInfoBarActionItemCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsInfoBarActionItemCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsInfoBarActionItemCollection * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IVsInfoBarActionItemCollection * This,
            /* [retval][out] */ __RPC__out int *count);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            __RPC__in IVsInfoBarActionItemCollection * This,
            /* [in] */ int index,
            /* [retval][out] */ __RPC__deref_out_opt IVsInfoBarActionItem **item);
        
        END_INTERFACE
    } IVsInfoBarActionItemCollectionVtbl;

    interface IVsInfoBarActionItemCollection
    {
        CONST_VTBL struct IVsInfoBarActionItemCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsInfoBarActionItemCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsInfoBarActionItemCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsInfoBarActionItemCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsInfoBarActionItemCollection_get_Count(This,count)	\
    ( (This)->lpVtbl -> get_Count(This,count) ) 

#define IVsInfoBarActionItemCollection_GetItem(This,index,item)	\
    ( (This)->lpVtbl -> GetItem(This,index,item) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsInfoBarActionItemCollection_INTERFACE_DEFINED__ */


#ifndef __IVsInfoBar_INTERFACE_DEFINED__
#define __IVsInfoBar_INTERFACE_DEFINED__

/* interface IVsInfoBar */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsInfoBar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B8257FE8-9FF5-4F59-A613-02405B32A82A")
    IVsInfoBar : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Image( 
            /* [retval][out] */ __RPC__out ImageMoniker *moniker) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsCloseButtonVisible( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *closeButtonVisible) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TextSpans( 
            /* [retval][out] */ __RPC__deref_out_opt IVsInfoBarTextSpanCollection **textSpans) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ActionItems( 
            /* [retval][out] */ __RPC__deref_out_opt IVsInfoBarActionItemCollection **actionItems) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsInfoBarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsInfoBar * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsInfoBar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsInfoBar * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Image )( 
            __RPC__in IVsInfoBar * This,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsCloseButtonVisible )( 
            __RPC__in IVsInfoBar * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *closeButtonVisible);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TextSpans )( 
            __RPC__in IVsInfoBar * This,
            /* [retval][out] */ __RPC__deref_out_opt IVsInfoBarTextSpanCollection **textSpans);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionItems )( 
            __RPC__in IVsInfoBar * This,
            /* [retval][out] */ __RPC__deref_out_opt IVsInfoBarActionItemCollection **actionItems);
        
        END_INTERFACE
    } IVsInfoBarVtbl;

    interface IVsInfoBar
    {
        CONST_VTBL struct IVsInfoBarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsInfoBar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsInfoBar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsInfoBar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsInfoBar_get_Image(This,moniker)	\
    ( (This)->lpVtbl -> get_Image(This,moniker) ) 

#define IVsInfoBar_get_IsCloseButtonVisible(This,closeButtonVisible)	\
    ( (This)->lpVtbl -> get_IsCloseButtonVisible(This,closeButtonVisible) ) 

#define IVsInfoBar_get_TextSpans(This,textSpans)	\
    ( (This)->lpVtbl -> get_TextSpans(This,textSpans) ) 

#define IVsInfoBar_get_ActionItems(This,actionItems)	\
    ( (This)->lpVtbl -> get_ActionItems(This,actionItems) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsInfoBar_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0043 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0043_v0_0_s_ifspec;

#ifndef __IVsInfoBarUIEvents_INTERFACE_DEFINED__
#define __IVsInfoBarUIEvents_INTERFACE_DEFINED__

/* interface IVsInfoBarUIEvents */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsInfoBarUIEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C115D9E6-DB96-42B1-AE1A-71A5E3835D53")
    IVsInfoBarUIEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnClosed( 
            /* [in] */ __RPC__in_opt IVsInfoBarUIElement *infoBarUIElement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnActionItemClicked( 
            /* [in] */ __RPC__in_opt IVsInfoBarUIElement *infoBarUIElement,
            /* [in] */ __RPC__in_opt IVsInfoBarActionItem *actionItem) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsInfoBarUIEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsInfoBarUIEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsInfoBarUIEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsInfoBarUIEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnClosed )( 
            __RPC__in IVsInfoBarUIEvents * This,
            /* [in] */ __RPC__in_opt IVsInfoBarUIElement *infoBarUIElement);
        
        HRESULT ( STDMETHODCALLTYPE *OnActionItemClicked )( 
            __RPC__in IVsInfoBarUIEvents * This,
            /* [in] */ __RPC__in_opt IVsInfoBarUIElement *infoBarUIElement,
            /* [in] */ __RPC__in_opt IVsInfoBarActionItem *actionItem);
        
        END_INTERFACE
    } IVsInfoBarUIEventsVtbl;

    interface IVsInfoBarUIEvents
    {
        CONST_VTBL struct IVsInfoBarUIEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsInfoBarUIEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsInfoBarUIEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsInfoBarUIEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsInfoBarUIEvents_OnClosed(This,infoBarUIElement)	\
    ( (This)->lpVtbl -> OnClosed(This,infoBarUIElement) ) 

#define IVsInfoBarUIEvents_OnActionItemClicked(This,infoBarUIElement,actionItem)	\
    ( (This)->lpVtbl -> OnActionItemClicked(This,infoBarUIElement,actionItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsInfoBarUIEvents_INTERFACE_DEFINED__ */


#ifndef __IVsInfoBarUIElement_INTERFACE_DEFINED__
#define __IVsInfoBarUIElement_INTERFACE_DEFINED__

/* interface IVsInfoBarUIElement */
/* [object][custom][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsInfoBarUIElement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("369C66D9-2A2B-49CF-9E17-83A1679475B6")
    IVsInfoBarUIElement : public IVsUIElement
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ __RPC__in_opt IVsInfoBarUIEvents *eventSink,
            /* [out] */ __RPC__out VSCOOKIE *cookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ VSCOOKIE cookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsInfoBarUIElementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsInfoBarUIElement * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsInfoBarUIElement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsInfoBarUIElement * This);
        
        HRESULT ( STDMETHODCALLTYPE *get_DataSource )( 
            __RPC__in IVsInfoBarUIElement * This,
            /* [out] */ __RPC__deref_out_opt IVsUISimpleDataSource **ppDataSource);
        
        HRESULT ( STDMETHODCALLTYPE *put_DataSource )( 
            __RPC__in IVsInfoBarUIElement * This,
            /* [in] */ __RPC__in_opt IVsUISimpleDataSource *pDataSource);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )( 
            __RPC__in IVsInfoBarUIElement * This,
            /* [in] */ __RPC__in_opt IVsUIAccelerator *pAccel);
        
        HRESULT ( STDMETHODCALLTYPE *GetUIObject )( 
            __RPC__in IVsInfoBarUIElement * This,
            /* [out] */ __RPC__deref_out_opt IUnknown **ppUnk);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IVsInfoBarUIElement * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            __RPC__in IVsInfoBarUIElement * This,
            /* [in] */ __RPC__in_opt IVsInfoBarUIEvents *eventSink,
            /* [out] */ __RPC__out VSCOOKIE *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            __RPC__in IVsInfoBarUIElement * This,
            /* [in] */ VSCOOKIE cookie);
        
        END_INTERFACE
    } IVsInfoBarUIElementVtbl;

    interface IVsInfoBarUIElement
    {
        CONST_VTBL struct IVsInfoBarUIElementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsInfoBarUIElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsInfoBarUIElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsInfoBarUIElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsInfoBarUIElement_get_DataSource(This,ppDataSource)	\
    ( (This)->lpVtbl -> get_DataSource(This,ppDataSource) ) 

#define IVsInfoBarUIElement_put_DataSource(This,pDataSource)	\
    ( (This)->lpVtbl -> put_DataSource(This,pDataSource) ) 

#define IVsInfoBarUIElement_TranslateAccelerator(This,pAccel)	\
    ( (This)->lpVtbl -> TranslateAccelerator(This,pAccel) ) 

#define IVsInfoBarUIElement_GetUIObject(This,ppUnk)	\
    ( (This)->lpVtbl -> GetUIObject(This,ppUnk) ) 


#define IVsInfoBarUIElement_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IVsInfoBarUIElement_Advise(This,eventSink,cookie)	\
    ( (This)->lpVtbl -> Advise(This,eventSink,cookie) ) 

#define IVsInfoBarUIElement_Unadvise(This,cookie)	\
    ( (This)->lpVtbl -> Unadvise(This,cookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsInfoBarUIElement_INTERFACE_DEFINED__ */


#ifndef __IVsInfoBarUIFactory_INTERFACE_DEFINED__
#define __IVsInfoBarUIFactory_INTERFACE_DEFINED__

/* interface IVsInfoBarUIFactory */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsInfoBarUIFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("15C4AB06-6C7C-4ECB-85AB-FBC32801DA39")
    IVsInfoBarUIFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateInfoBar( 
            /* [in] */ __RPC__in_opt IVsInfoBar *infoBar,
            /* [retval][out] */ __RPC__deref_out_opt IVsInfoBarUIElement **uiElement) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsInfoBarUIFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsInfoBarUIFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsInfoBarUIFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsInfoBarUIFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateInfoBar )( 
            __RPC__in IVsInfoBarUIFactory * This,
            /* [in] */ __RPC__in_opt IVsInfoBar *infoBar,
            /* [retval][out] */ __RPC__deref_out_opt IVsInfoBarUIElement **uiElement);
        
        END_INTERFACE
    } IVsInfoBarUIFactoryVtbl;

    interface IVsInfoBarUIFactory
    {
        CONST_VTBL struct IVsInfoBarUIFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsInfoBarUIFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsInfoBarUIFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsInfoBarUIFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsInfoBarUIFactory_CreateInfoBar(This,infoBar,uiElement)	\
    ( (This)->lpVtbl -> CreateInfoBar(This,infoBar,uiElement) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsInfoBarUIFactory_INTERFACE_DEFINED__ */


#ifndef __SVsInfoBarUIFactory_INTERFACE_DEFINED__
#define __SVsInfoBarUIFactory_INTERFACE_DEFINED__

/* interface SVsInfoBarUIFactory */
/* [object][uuid] */ 


EXTERN_C const IID IID_SVsInfoBarUIFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8E223E35-68A4-4744-9140-C575682A66B4")
    SVsInfoBarUIFactory : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct SVsInfoBarUIFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in SVsInfoBarUIFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in SVsInfoBarUIFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in SVsInfoBarUIFactory * This);
        
        END_INTERFACE
    } SVsInfoBarUIFactoryVtbl;

    interface SVsInfoBarUIFactory
    {
        CONST_VTBL struct SVsInfoBarUIFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SVsInfoBarUIFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SVsInfoBarUIFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SVsInfoBarUIFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SVsInfoBarUIFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0047 */
/* [local] */ 

#define SID_SVsInfoBarUIFactory IID_SVsInfoBarUIFactory


extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0047_v0_0_s_ifspec;

#ifndef __IVsInfoBarHost_INTERFACE_DEFINED__
#define __IVsInfoBarHost_INTERFACE_DEFINED__

/* interface IVsInfoBarHost */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsInfoBarHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5580AE4B-C849-41F8-BC4C-FA7D8207F293")
    IVsInfoBarHost : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddInfoBar( 
            /* [in] */ __RPC__in_opt IVsUIElement *uiElement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveInfoBar( 
            /* [in] */ __RPC__in_opt IVsUIElement *uiElement) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsInfoBarHostVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsInfoBarHost * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsInfoBarHost * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsInfoBarHost * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddInfoBar )( 
            __RPC__in IVsInfoBarHost * This,
            /* [in] */ __RPC__in_opt IVsUIElement *uiElement);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveInfoBar )( 
            __RPC__in IVsInfoBarHost * This,
            /* [in] */ __RPC__in_opt IVsUIElement *uiElement);
        
        END_INTERFACE
    } IVsInfoBarHostVtbl;

    interface IVsInfoBarHost
    {
        CONST_VTBL struct IVsInfoBarHostVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsInfoBarHost_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsInfoBarHost_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsInfoBarHost_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsInfoBarHost_AddInfoBar(This,uiElement)	\
    ( (This)->lpVtbl -> AddInfoBar(This,uiElement) ) 

#define IVsInfoBarHost_RemoveInfoBar(This,uiElement)	\
    ( (This)->lpVtbl -> RemoveInfoBar(This,uiElement) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsInfoBarHost_INTERFACE_DEFINED__ */


#ifndef __IVsWindowFrame5_INTERFACE_DEFINED__
#define __IVsWindowFrame5_INTERFACE_DEFINED__

/* interface IVsWindowFrame5 */
/* [object][version][uuid] */ 


EXTERN_C const IID IID_IVsWindowFrame5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0461CF82-2583-4F9A-A1D6-7D61DE87B58B")
    IVsWindowFrame5 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IconImageMoniker( 
            /* [retval][out] */ __RPC__out ImageMoniker *moniker) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IconImageMoniker( 
            /* [in] */ ImageMoniker moniker) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DisplayedIconImageMoniker( 
            /* [retval][out] */ __RPC__out ImageMoniker *moniker) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsWindowFrame5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsWindowFrame5 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsWindowFrame5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsWindowFrame5 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IconImageMoniker )( 
            __RPC__in IVsWindowFrame5 * This,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconImageMoniker )( 
            __RPC__in IVsWindowFrame5 * This,
            /* [in] */ ImageMoniker moniker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedIconImageMoniker )( 
            __RPC__in IVsWindowFrame5 * This,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker);
        
        END_INTERFACE
    } IVsWindowFrame5Vtbl;

    interface IVsWindowFrame5
    {
        CONST_VTBL struct IVsWindowFrame5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsWindowFrame5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsWindowFrame5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsWindowFrame5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsWindowFrame5_get_IconImageMoniker(This,moniker)	\
    ( (This)->lpVtbl -> get_IconImageMoniker(This,moniker) ) 

#define IVsWindowFrame5_put_IconImageMoniker(This,moniker)	\
    ( (This)->lpVtbl -> put_IconImageMoniker(This,moniker) ) 

#define IVsWindowFrame5_get_DisplayedIconImageMoniker(This,moniker)	\
    ( (This)->lpVtbl -> get_DisplayedIconImageMoniker(This,moniker) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsWindowFrame5_INTERFACE_DEFINED__ */


#ifndef __IVsWindowFrameEvents_INTERFACE_DEFINED__
#define __IVsWindowFrameEvents_INTERFACE_DEFINED__

/* interface IVsWindowFrameEvents */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsWindowFrameEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("15D6E42B-36AD-4AF9-A144-C6F07027A6ED")
    IVsWindowFrameEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnFrameCreated( 
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFrameDestroyed( 
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFrameIsVisibleChanged( 
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame,
            /* [in] */ VARIANT_BOOL newIsVisible) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFrameIsOnScreenChanged( 
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame,
            /* [in] */ VARIANT_BOOL newIsOnScreen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnActiveFrameChanged( 
            /* [in] */ __RPC__in_opt IVsWindowFrame *oldFrame,
            /* [in] */ __RPC__in_opt IVsWindowFrame *newFrame) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsWindowFrameEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsWindowFrameEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsWindowFrameEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsWindowFrameEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnFrameCreated )( 
            __RPC__in IVsWindowFrameEvents * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame);
        
        HRESULT ( STDMETHODCALLTYPE *OnFrameDestroyed )( 
            __RPC__in IVsWindowFrameEvents * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame);
        
        HRESULT ( STDMETHODCALLTYPE *OnFrameIsVisibleChanged )( 
            __RPC__in IVsWindowFrameEvents * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame,
            /* [in] */ VARIANT_BOOL newIsVisible);
        
        HRESULT ( STDMETHODCALLTYPE *OnFrameIsOnScreenChanged )( 
            __RPC__in IVsWindowFrameEvents * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *frame,
            /* [in] */ VARIANT_BOOL newIsOnScreen);
        
        HRESULT ( STDMETHODCALLTYPE *OnActiveFrameChanged )( 
            __RPC__in IVsWindowFrameEvents * This,
            /* [in] */ __RPC__in_opt IVsWindowFrame *oldFrame,
            /* [in] */ __RPC__in_opt IVsWindowFrame *newFrame);
        
        END_INTERFACE
    } IVsWindowFrameEventsVtbl;

    interface IVsWindowFrameEvents
    {
        CONST_VTBL struct IVsWindowFrameEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsWindowFrameEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsWindowFrameEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsWindowFrameEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsWindowFrameEvents_OnFrameCreated(This,frame)	\
    ( (This)->lpVtbl -> OnFrameCreated(This,frame) ) 

#define IVsWindowFrameEvents_OnFrameDestroyed(This,frame)	\
    ( (This)->lpVtbl -> OnFrameDestroyed(This,frame) ) 

#define IVsWindowFrameEvents_OnFrameIsVisibleChanged(This,frame,newIsVisible)	\
    ( (This)->lpVtbl -> OnFrameIsVisibleChanged(This,frame,newIsVisible) ) 

#define IVsWindowFrameEvents_OnFrameIsOnScreenChanged(This,frame,newIsOnScreen)	\
    ( (This)->lpVtbl -> OnFrameIsOnScreenChanged(This,frame,newIsOnScreen) ) 

#define IVsWindowFrameEvents_OnActiveFrameChanged(This,oldFrame,newFrame)	\
    ( (This)->lpVtbl -> OnActiveFrameChanged(This,oldFrame,newFrame) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsWindowFrameEvents_INTERFACE_DEFINED__ */


#ifndef __IVsDebugger5_INTERFACE_DEFINED__
#define __IVsDebugger5_INTERFACE_DEFINED__

/* interface IVsDebugger5 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsDebugger5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7C6788DF-F3EE-4DA7-AE43-148EA5635538")
    IVsDebugger5 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BypassDiagnosticsToolsOnNextSession( 
            /* [in] */ VARIANT_BOOL bypass) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDiagnosticsToolsBypassState( 
            /* [out][retval] */ __RPC__out VARIANT_BOOL *willBypass) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsDebugger5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsDebugger5 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsDebugger5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsDebugger5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *BypassDiagnosticsToolsOnNextSession )( 
            __RPC__in IVsDebugger5 * This,
            /* [in] */ VARIANT_BOOL bypass);
        
        HRESULT ( STDMETHODCALLTYPE *GetDiagnosticsToolsBypassState )( 
            __RPC__in IVsDebugger5 * This,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *willBypass);
        
        END_INTERFACE
    } IVsDebugger5Vtbl;

    interface IVsDebugger5
    {
        CONST_VTBL struct IVsDebugger5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsDebugger5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsDebugger5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsDebugger5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsDebugger5_BypassDiagnosticsToolsOnNextSession(This,bypass)	\
    ( (This)->lpVtbl -> BypassDiagnosticsToolsOnNextSession(This,bypass) ) 

#define IVsDebugger5_GetDiagnosticsToolsBypassState(This,willBypass)	\
    ( (This)->lpVtbl -> GetDiagnosticsToolsBypassState(This,willBypass) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsDebugger5_INTERFACE_DEFINED__ */


#ifndef __IVsUIShell7_INTERFACE_DEFINED__
#define __IVsUIShell7_INTERFACE_DEFINED__

/* interface IVsUIShell7 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsUIShell7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C5FFE6B0-C6E0-45A4-9FE2-DA5DEB84E59D")
    IVsUIShell7 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseWindowFrameEvents( 
            /* [in] */ __RPC__in_opt IVsWindowFrameEvents *eventSink,
            /* [retval][out] */ __RPC__out VSCOOKIE *cookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseWindowFrameEvents( 
            /* [in] */ VSCOOKIE cookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsUIShell7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsUIShell7 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsUIShell7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsUIShell7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseWindowFrameEvents )( 
            __RPC__in IVsUIShell7 * This,
            /* [in] */ __RPC__in_opt IVsWindowFrameEvents *eventSink,
            /* [retval][out] */ __RPC__out VSCOOKIE *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseWindowFrameEvents )( 
            __RPC__in IVsUIShell7 * This,
            /* [in] */ VSCOOKIE cookie);
        
        END_INTERFACE
    } IVsUIShell7Vtbl;

    interface IVsUIShell7
    {
        CONST_VTBL struct IVsUIShell7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsUIShell7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsUIShell7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsUIShell7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsUIShell7_AdviseWindowFrameEvents(This,eventSink,cookie)	\
    ( (This)->lpVtbl -> AdviseWindowFrameEvents(This,eventSink,cookie) ) 

#define IVsUIShell7_UnadviseWindowFrameEvents(This,cookie)	\
    ( (This)->lpVtbl -> UnadviseWindowFrameEvents(This,cookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsUIShell7_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0052 */
/* [local] */ 


enum __VSDBGLAUNCHFLAGS140
    {
        DBGLAUNCH_ContainsStartupTask	= 0x400000,
        DBGLAUNCH_Profiling	= 0x800000
    } ;
typedef DWORD VSDBGLAUNCHFLAGS140;



extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0052_v0_0_s_ifspec;

#ifndef __IVsToolsOptionsHelp_INTERFACE_DEFINED__
#define __IVsToolsOptionsHelp_INTERFACE_DEFINED__

/* interface IVsToolsOptionsHelp */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsToolsOptionsHelp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DDF4F502-C740-47B7-95CC-3FF4B765BA99")
    IVsToolsOptionsHelp : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnHelp( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsToolsOptionsHelpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsToolsOptionsHelp * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsToolsOptionsHelp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsToolsOptionsHelp * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            __RPC__in IVsToolsOptionsHelp * This);
        
        END_INTERFACE
    } IVsToolsOptionsHelpVtbl;

    interface IVsToolsOptionsHelp
    {
        CONST_VTBL struct IVsToolsOptionsHelpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsToolsOptionsHelp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsToolsOptionsHelp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsToolsOptionsHelp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsToolsOptionsHelp_OnHelp(This)	\
    ( (This)->lpVtbl -> OnHelp(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsToolsOptionsHelp_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0053 */
/* [local] */ 

#define VSM_VIRTUALMEMORYLOW          (WM_USER + 0x0C55)
#define VSM_VIRTUALMEMORYCRITICAL     (WM_USER + 0x0C56)
#define VSM_FONTORCOLORCHANGED     (WM_USER + 0x0C57)


extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0053_v0_0_s_ifspec;

#ifndef __IComWrapper_INTERFACE_DEFINED__
#define __IComWrapper_INTERFACE_DEFINED__

/* interface IComWrapper */
/* [object][uuid] */ 


EXTERN_C const IID IID_IComWrapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cbd71f2c-6bc5-4932-b851-b93eb3151386")
    IComWrapper : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_GCHandlePtr( 
            /* [retval][out] */ __RPC__out INT_PTR *pResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IComWrapperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IComWrapper * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IComWrapper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IComWrapper * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_GCHandlePtr )( 
            __RPC__in IComWrapper * This,
            /* [retval][out] */ __RPC__out INT_PTR *pResult);
        
        END_INTERFACE
    } IComWrapperVtbl;

    interface IComWrapper
    {
        CONST_VTBL struct IComWrapperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComWrapper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComWrapper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComWrapper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComWrapper_get_GCHandlePtr(This,pResult)	\
    ( (This)->lpVtbl -> get_GCHandlePtr(This,pResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComWrapper_INTERFACE_DEFINED__ */


#ifndef __IComWrapperFactory_INTERFACE_DEFINED__
#define __IComWrapperFactory_INTERFACE_DEFINED__

/* interface IComWrapperFactory */
/* [object][uuid] */ 


EXTERN_C const IID IID_IComWrapperFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("436b402a-a479-41a8-a093-9713ce3ad111")
    IComWrapperFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateAggregatedObject( 
            /* [in] */ __RPC__in_opt IUnknown *managedObject,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **comWrapper) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IComWrapperFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IComWrapperFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IComWrapperFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IComWrapperFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAggregatedObject )( 
            __RPC__in IComWrapperFactory * This,
            /* [in] */ __RPC__in_opt IUnknown *managedObject,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **comWrapper);
        
        END_INTERFACE
    } IComWrapperFactoryVtbl;

    interface IComWrapperFactory
    {
        CONST_VTBL struct IComWrapperFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComWrapperFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComWrapperFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComWrapperFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComWrapperFactory_CreateAggregatedObject(This,managedObject,comWrapper)	\
    ( (This)->lpVtbl -> CreateAggregatedObject(This,managedObject,comWrapper) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComWrapperFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vsshell140_0000_0055 */
/* [local] */ 


enum __VsSettingsScope2
    {
        SettingsScope_Remote	= 0x4
    } ;
typedef DWORD VSSETTINGSSCOPE2;


enum __VsEnclosingScopes2
    {
        EnclosingScopes_Remote	= SettingsScope_Remote
    } ;
typedef DWORD VSENCLOSINGSCOPES2;



extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0055_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsshell140_0000_0055_v0_0_s_ifspec;

#ifndef __IVsOutputWindowPane3_INTERFACE_DEFINED__
#define __IVsOutputWindowPane3_INTERFACE_DEFINED__

/* interface IVsOutputWindowPane3 */
/* [object][unique][version][uuid] */ 


EXTERN_C const IID IID_IVsOutputWindowPane3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D3D762D1-711A-4A4E-AF75-670F5160C38D")
    IVsOutputWindowPane3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OutputStringWithId( 
            /* [in] */ GUID messageProvider,
            /* [in] */ DWORD messageId,
            /* [in] */ __RPC__in LPCOLESTR message) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryGetStringWithId( 
            /* [in] */ GUID messageProvider,
            /* [in] */ DWORD messageId,
            /* [out] */ __RPC__deref_out_opt BSTR *message,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *succeeded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryNavigateToMessageId( 
            /* [in] */ GUID messageProvider,
            /* [in] */ DWORD messageId,
            /* [in] */ VARIANT_BOOL ensureVisible,
            /* [in] */ VARIANT_BOOL ensureFocused,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *succeeded) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVsOutputWindowPane3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVsOutputWindowPane3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVsOutputWindowPane3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVsOutputWindowPane3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OutputStringWithId )( 
            __RPC__in IVsOutputWindowPane3 * This,
            /* [in] */ GUID messageProvider,
            /* [in] */ DWORD messageId,
            /* [in] */ __RPC__in LPCOLESTR message);
        
        HRESULT ( STDMETHODCALLTYPE *TryGetStringWithId )( 
            __RPC__in IVsOutputWindowPane3 * This,
            /* [in] */ GUID messageProvider,
            /* [in] */ DWORD messageId,
            /* [out] */ __RPC__deref_out_opt BSTR *message,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *succeeded);
        
        HRESULT ( STDMETHODCALLTYPE *TryNavigateToMessageId )( 
            __RPC__in IVsOutputWindowPane3 * This,
            /* [in] */ GUID messageProvider,
            /* [in] */ DWORD messageId,
            /* [in] */ VARIANT_BOOL ensureVisible,
            /* [in] */ VARIANT_BOOL ensureFocused,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *succeeded);
        
        END_INTERFACE
    } IVsOutputWindowPane3Vtbl;

    interface IVsOutputWindowPane3
    {
        CONST_VTBL struct IVsOutputWindowPane3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsOutputWindowPane3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsOutputWindowPane3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsOutputWindowPane3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsOutputWindowPane3_OutputStringWithId(This,messageProvider,messageId,message)	\
    ( (This)->lpVtbl -> OutputStringWithId(This,messageProvider,messageId,message) ) 

#define IVsOutputWindowPane3_TryGetStringWithId(This,messageProvider,messageId,message,succeeded)	\
    ( (This)->lpVtbl -> TryGetStringWithId(This,messageProvider,messageId,message,succeeded) ) 

#define IVsOutputWindowPane3_TryNavigateToMessageId(This,messageProvider,messageId,ensureVisible,ensureFocused,succeeded)	\
    ( (This)->lpVtbl -> TryNavigateToMessageId(This,messageProvider,messageId,ensureVisible,ensureFocused,succeeded) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVsOutputWindowPane3_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


