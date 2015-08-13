

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

#ifndef __ImageParameters140_h__
#define __ImageParameters140_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IImageHandle_FWD_DEFINED__
#define __IImageHandle_FWD_DEFINED__
typedef interface IImageHandle IImageHandle;

#endif 	/* __IImageHandle_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ImageParameters140_0000_0000 */
/* [local] */ 

typedef DWORD RGBA;


enum _ImageAttributesFlags
    {
        IAF_Size	= 0x1,
        IAF_Type	= 0x2,
        IAF_Format	= 0x4,
        IAF_Dpi	= 0x8,
        IAF_Background	= 0x80000000,
        IAF_Grayscale	= 0x40000000,
        IAF_GrayscaleBiasColor	= 0x20000000,
        IAF_HighContrast	= 0x10000000,
        IAF_RequiredFlags	= ( ( ( IAF_Size | IAF_Type )  | IAF_Format )  | IAF_Dpi ) ,
        IAF_OptionalFlags	= ( ( ( IAF_Background | IAF_Grayscale )  | IAF_GrayscaleBiasColor )  | IAF_HighContrast ) 
    } ;
typedef DWORD ImageAttributesFlags;


enum _UIDataFormat
    {
        DF_Win32	= 1,
        DF_WinForms	= 2,
        DF_WPF	= 3
    } ;
typedef DWORD UIDataFormat;


enum _UIImageType
    {
        IT_Bitmap	= 1,
        IT_Icon	= 2,
        IT_ImageList	= 3
    } ;
typedef DWORD UIImageType;


enum _ImageMonikerType
    {
        IMT_Unknown	= 0,
        IMT_LoadedFromManifest	= 1,
        IMT_Custom	= 2,
        IMT_System	= 3
    } ;
typedef DWORD ImageMonikerType;


enum _UIImageHorizontalAlignment
    {
        IHA_Left	= 1,
        IHA_Center	= 2,
        IHA_Right	= 3
    } ;
typedef DWORD UIImageHorizontalAlignment;


enum _UIImageVerticalAlignment
    {
        IVA_Top	= 1,
        IVA_Center	= 2,
        IVA_Bottom	= 3
    } ;
typedef DWORD UIImageVerticalAlignment;

typedef /* [public] */ struct __MIDL___MIDL_itf_ImageParameters140_0000_0000_0001
    {
    int StructSize;
    ImageAttributesFlags Flags;
    int LogicalWidth;
    int LogicalHeight;
    int Dpi;
    UIDataFormat Format;
    UIImageType ImageType;
    RGBA Background;
    RGBA GrayscaleBiasColor;
    BOOL HighContrast;
    } 	ImageAttributes;

typedef /* [public][public][public] */ struct __MIDL___MIDL_itf_ImageParameters140_0000_0000_0002
    {
    GUID Guid;
    int Id;
    } 	ImageMoniker;

typedef /* [public] */ struct __MIDL___MIDL_itf_ImageParameters140_0000_0000_0003
    {
    ImageMoniker ImageMoniker;
    int VirtualWidth;
    int VirtualHeight;
    int VirtualXOffset;
    int VirtualYOffset;
    UIImageHorizontalAlignment HorizontalAlignment;
    UIImageVerticalAlignment VerticalAlignment;
    } 	ImageCompositionLayer;



extern RPC_IF_HANDLE __MIDL_itf_ImageParameters140_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ImageParameters140_0000_0000_v0_0_s_ifspec;

#ifndef __IImageHandle_INTERFACE_DEFINED__
#define __IImageHandle_INTERFACE_DEFINED__

/* interface IImageHandle */
/* [object][uuid] */ 


EXTERN_C const IID IID_IImageHandle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B4D44E85-FCF6-481E-BFBF-CDF3A573E298")
    IImageHandle : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Moniker( 
            /* [retval][out] */ __RPC__out ImageMoniker *moniker) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IImageHandleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IImageHandle * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IImageHandle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IImageHandle * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Moniker )( 
            __RPC__in IImageHandle * This,
            /* [retval][out] */ __RPC__out ImageMoniker *moniker);
        
        END_INTERFACE
    } IImageHandleVtbl;

    interface IImageHandle
    {
        CONST_VTBL struct IImageHandleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImageHandle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IImageHandle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IImageHandle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IImageHandle_get_Moniker(This,moniker)	\
    ( (This)->lpVtbl -> get_Moniker(This,moniker) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IImageHandle_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


