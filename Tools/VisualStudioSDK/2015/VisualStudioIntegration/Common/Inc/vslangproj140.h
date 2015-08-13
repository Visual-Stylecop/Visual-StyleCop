

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


#ifndef __vslangproj140_h__
#define __vslangproj140_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __AnalyzerReferences_FWD_DEFINED__
#define __AnalyzerReferences_FWD_DEFINED__
typedef interface AnalyzerReferences AnalyzerReferences;

#endif 	/* __AnalyzerReferences_FWD_DEFINED__ */


#ifndef __VSProject3_FWD_DEFINED__
#define __VSProject3_FWD_DEFINED__
typedef interface VSProject3 VSProject3;

#endif 	/* __VSProject3_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vslangproj140_0000_0000 */
/* [local] */ 

#include "dte.h"
#ifdef FORCE_EXPLICIT_DTE_NAMESPACE
#define DTE VxDTE::DTE
#define Project VxDTE::Project
#define ProjectItem VxDTE::ProjectItem
#endif
#define VSLANGPROJ140_VER_MAJ   14
#define VSLANGPROJ140_VER_MIN    0


extern RPC_IF_HANDLE __MIDL_itf_vslangproj140_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vslangproj140_0000_0000_v0_0_s_ifspec;


#ifndef __VSLangProj140_LIBRARY_DEFINED__
#define __VSLangProj140_LIBRARY_DEFINED__

/* library VSLangProj140 */
/* [version][helpstring][uuid] */ 

#pragma once

EXTERN_C const IID LIBID_VSLangProj140;

#ifndef __AnalyzerReferences_INTERFACE_DEFINED__
#define __AnalyzerReferences_INTERFACE_DEFINED__

/* interface AnalyzerReferences */
/* [uuid][object][oleautomation][dual] */ 


EXTERN_C const IID IID_AnalyzerReferences;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1C0A9223-DF8F-4D3D-A5FC-4D4B506706E7")
    AnalyzerReferences : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DTE( 
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ DTE **ppDTE) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **ppdispParent) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ContainingProject( 
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ Project **ppProject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in BSTR bstrPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ __RPC__in BSTR bstrPath) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *plCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT index,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *bstrPath) = 0;
        
        virtual /* [id][restricted] */ HRESULT STDMETHODCALLTYPE _NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct AnalyzerReferencesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in AnalyzerReferences * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in AnalyzerReferences * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in AnalyzerReferences * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in AnalyzerReferences * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in AnalyzerReferences * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in AnalyzerReferences * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            AnalyzerReferences * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DTE )( 
            __RPC__in AnalyzerReferences * This,
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ DTE **ppDTE);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            __RPC__in AnalyzerReferences * This,
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **ppdispParent);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContainingProject )( 
            __RPC__in AnalyzerReferences * This,
            /* [retval][out] */ __RPC__deref_out_opt /* external definition not present */ Project **ppProject);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in AnalyzerReferences * This,
            /* [in] */ __RPC__in BSTR bstrPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in AnalyzerReferences * This,
            /* [in] */ __RPC__in BSTR bstrPath);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in AnalyzerReferences * This,
            /* [retval][out] */ __RPC__out long *plCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            __RPC__in AnalyzerReferences * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *bstrPath);
        
        /* [id][restricted] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            __RPC__in AnalyzerReferences * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppEnum);
        
        END_INTERFACE
    } AnalyzerReferencesVtbl;

    interface AnalyzerReferences
    {
        CONST_VTBL struct AnalyzerReferencesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define AnalyzerReferences_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define AnalyzerReferences_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define AnalyzerReferences_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define AnalyzerReferences_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define AnalyzerReferences_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define AnalyzerReferences_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define AnalyzerReferences_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define AnalyzerReferences_get_DTE(This,ppDTE)	\
    ( (This)->lpVtbl -> get_DTE(This,ppDTE) ) 

#define AnalyzerReferences_get_Parent(This,ppdispParent)	\
    ( (This)->lpVtbl -> get_Parent(This,ppdispParent) ) 

#define AnalyzerReferences_get_ContainingProject(This,ppProject)	\
    ( (This)->lpVtbl -> get_ContainingProject(This,ppProject) ) 

#define AnalyzerReferences_Add(This,bstrPath)	\
    ( (This)->lpVtbl -> Add(This,bstrPath) ) 

#define AnalyzerReferences_Remove(This,bstrPath)	\
    ( (This)->lpVtbl -> Remove(This,bstrPath) ) 

#define AnalyzerReferences_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define AnalyzerReferences_Item(This,index,bstrPath)	\
    ( (This)->lpVtbl -> Item(This,index,bstrPath) ) 

#define AnalyzerReferences__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> _NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __AnalyzerReferences_INTERFACE_DEFINED__ */


#ifndef __VSProject3_INTERFACE_DEFINED__
#define __VSProject3_INTERFACE_DEFINED__

/* interface VSProject3 */
/* [uuid][object][oleautomation][dual] */ 


EXTERN_C const IID IID_VSProject3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0245DB80-6F23-4B81-9517-DCA8778DAB77")
    VSProject3 : public VSProject2
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AnalyzerReferences( 
            /* [retval][out] */ __RPC__deref_out_opt AnalyzerReferences **ppRefs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct VSProject3Vtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in VSProject3 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **ppvObj,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__out unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in VSProject3 * This,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *pctinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in VSProject3 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__deref_out_opt void **pptinfo,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in VSProject3 * This,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ __RPC__deref_in_opt signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ __RPC__out signed long *rgdispid,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in VSProject3 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ __RPC__in struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ __RPC__in struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ __RPC__out VARIANT *pvarResult,
            /* [out][idldescattr] */ __RPC__out struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ __RPC__out unsigned UINT *puArgErr,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_References )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__deref_out_opt References **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_BuildManager )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BuildManager **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DTE )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__deref_out_opt **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__deref_out_opt Project **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *CreateWebReferencesFolder )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__deref_out_opt ProjectItem **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_WebReferencesFolder )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__deref_out_opt ProjectItem **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddWebReference )( 
            __RPC__in VSProject3 * This,
            /* [in][idldescattr] */ __RPC__in BSTR bstrUrl,
            /* [retval][out] */ __RPC__deref_out_opt ProjectItem **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_TemplatePath )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_WorkOffline )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_WorkOffline )( 
            __RPC__in VSProject3 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Imports )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__deref_out_opt Imports **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Events )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__deref_out_opt VSProjectEvents **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *CopyProject )( 
            __RPC__in VSProject3 * This,
            /* [in][idldescattr] */ __RPC__in BSTR bstrDestFolder,
            /* [in][idldescattr] */ __RPC__in BSTR bstrDestUNCPath,
            /* [in][idldescattr] */ enum prjCopyProjectOption copyProjectOption,
            /* [in][idldescattr] */ __RPC__in BSTR bstrUsername,
            /* [in][idldescattr] */ __RPC__in BSTR bstrPassword,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][hidden][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Exec )( 
            __RPC__in VSProject3 * This,
            /* [in][idldescattr] */ enum prjExecCommand command,
            /* [idldescattr] */ signed long bSuppressUI,
            /* [in][idldescattr] */ VARIANT varIn,
            /* [out][idldescattr] */ __RPC__out VARIANT *pVarOut,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GenerateKeyPairFiles )( 
            __RPC__in VSProject3 * This,
            /* [in][idldescattr] */ __RPC__in BSTR strPublicPrivateFile,
            /* [in][idldescattr] */ __RPC__in BSTR strPublicOnlyFile,
            /* [retval][out] */ __RPC__out void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetUniqueFilename )( 
            __RPC__in VSProject3 * This,
            /* [in][idldescattr] */ __RPC__in_opt IDispatch *pDispatch,
            /* [in][idldescattr] */ __RPC__in BSTR bstrRoot,
            /* [in][idldescattr] */ __RPC__in BSTR bstrDesiredExt,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_PublishManager )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Events2 )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__deref_out_opt VSProjectEvents2 **retval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AnalyzerReferences )( 
            __RPC__in VSProject3 * This,
            /* [retval][out] */ __RPC__deref_out_opt AnalyzerReferences **ppRefs);
        
        END_INTERFACE
    } VSProject3Vtbl;

    interface VSProject3
    {
        CONST_VTBL struct VSProject3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define VSProject3_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define VSProject3_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define VSProject3_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define VSProject3_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define VSProject3_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define VSProject3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define VSProject3_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define VSProject3_get_References(This,retval)	\
    ( (This)->lpVtbl -> get_References(This,retval) ) 

#define VSProject3_get_BuildManager(This,retval)	\
    ( (This)->lpVtbl -> get_BuildManager(This,retval) ) 

#define VSProject3_get_DTE(This,retval)	\
    ( (This)->lpVtbl -> get_DTE(This,retval) ) 

#define VSProject3_get_Project(This,retval)	\
    ( (This)->lpVtbl -> get_Project(This,retval) ) 

#define VSProject3_CreateWebReferencesFolder(This,retval)	\
    ( (This)->lpVtbl -> CreateWebReferencesFolder(This,retval) ) 

#define VSProject3_get_WebReferencesFolder(This,retval)	\
    ( (This)->lpVtbl -> get_WebReferencesFolder(This,retval) ) 

#define VSProject3_AddWebReference(This,bstrUrl,retval)	\
    ( (This)->lpVtbl -> AddWebReference(This,bstrUrl,retval) ) 

#define VSProject3_get_TemplatePath(This,retval)	\
    ( (This)->lpVtbl -> get_TemplatePath(This,retval) ) 

#define VSProject3_Refresh(This,retval)	\
    ( (This)->lpVtbl -> Refresh(This,retval) ) 

#define VSProject3_get_WorkOffline(This,retval)	\
    ( (This)->lpVtbl -> get_WorkOffline(This,retval) ) 

#define VSProject3_put_WorkOffline(This,noname,retval)	\
    ( (This)->lpVtbl -> put_WorkOffline(This,noname,retval) ) 

#define VSProject3_get_Imports(This,retval)	\
    ( (This)->lpVtbl -> get_Imports(This,retval) ) 

#define VSProject3_get_Events(This,retval)	\
    ( (This)->lpVtbl -> get_Events(This,retval) ) 

#define VSProject3_CopyProject(This,bstrDestFolder,bstrDestUNCPath,copyProjectOption,bstrUsername,bstrPassword,retval)	\
    ( (This)->lpVtbl -> CopyProject(This,bstrDestFolder,bstrDestUNCPath,copyProjectOption,bstrUsername,bstrPassword,retval) ) 

#define VSProject3_Exec(This,command,bSuppressUI,varIn,pVarOut,retval)	\
    ( (This)->lpVtbl -> Exec(This,command,bSuppressUI,varIn,pVarOut,retval) ) 

#define VSProject3_GenerateKeyPairFiles(This,strPublicPrivateFile,strPublicOnlyFile,retval)	\
    ( (This)->lpVtbl -> GenerateKeyPairFiles(This,strPublicPrivateFile,strPublicOnlyFile,retval) ) 

#define VSProject3_GetUniqueFilename(This,pDispatch,bstrRoot,bstrDesiredExt,retval)	\
    ( (This)->lpVtbl -> GetUniqueFilename(This,pDispatch,bstrRoot,bstrDesiredExt,retval) ) 

#define VSProject3_get_PublishManager(This,retval)	\
    ( (This)->lpVtbl -> get_PublishManager(This,retval) ) 

#define VSProject3_get_Events2(This,retval)	\
    ( (This)->lpVtbl -> get_Events2(This,retval) ) 


#define VSProject3_get_AnalyzerReferences(This,ppRefs)	\
    ( (This)->lpVtbl -> get_AnalyzerReferences(This,ppRefs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __VSProject3_INTERFACE_DEFINED__ */

#endif /* __VSLangProj140_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_vslangproj140_0000_0001 */
/* [local] */ 

#ifdef FORCE_EXPLICIT_DTE_NAMESPACE
#undef DTE
#undef Project
#undef ProjectItem
#endif


extern RPC_IF_HANDLE __MIDL_itf_vslangproj140_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vslangproj140_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


