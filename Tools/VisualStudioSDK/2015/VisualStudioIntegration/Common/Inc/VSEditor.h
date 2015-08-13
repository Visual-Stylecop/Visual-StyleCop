

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* Compiler settings for VSEditor.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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


#ifndef __VSEditor_h__
#define __VSEditor_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEnumeratorBSTR_FWD_DEFINED__
#define __IEnumeratorBSTR_FWD_DEFINED__
typedef interface IEnumeratorBSTR IEnumeratorBSTR;

#endif 	/* __IEnumeratorBSTR_FWD_DEFINED__ */


#ifndef __IEnumerableBSTR_FWD_DEFINED__
#define __IEnumerableBSTR_FWD_DEFINED__
typedef interface IEnumerableBSTR IEnumerableBSTR;

#endif 	/* __IEnumerableBSTR_FWD_DEFINED__ */


#ifndef __IVxEventArgsEvent_FWD_DEFINED__
#define __IVxEventArgsEvent_FWD_DEFINED__
typedef interface IVxEventArgsEvent IVxEventArgsEvent;

#endif 	/* __IVxEventArgsEvent_FWD_DEFINED__ */


#ifndef __IEnumeratorIVxContentType_FWD_DEFINED__
#define __IEnumeratorIVxContentType_FWD_DEFINED__
typedef interface IEnumeratorIVxContentType IEnumeratorIVxContentType;

#endif 	/* __IEnumeratorIVxContentType_FWD_DEFINED__ */


#ifndef __IEnumerableIVxContentType_FWD_DEFINED__
#define __IEnumerableIVxContentType_FWD_DEFINED__
typedef interface IEnumerableIVxContentType IEnumerableIVxContentType;

#endif 	/* __IEnumerableIVxContentType_FWD_DEFINED__ */


#ifndef __IVxTextDocumentFileActionEvent_FWD_DEFINED__
#define __IVxTextDocumentFileActionEvent_FWD_DEFINED__
typedef interface IVxTextDocumentFileActionEvent IVxTextDocumentFileActionEvent;

#endif 	/* __IVxTextDocumentFileActionEvent_FWD_DEFINED__ */


#ifndef __IVxTextDocumentEvent_FWD_DEFINED__
#define __IVxTextDocumentEvent_FWD_DEFINED__
typedef interface IVxTextDocumentEvent IVxTextDocumentEvent;

#endif 	/* __IVxTextDocumentEvent_FWD_DEFINED__ */


#ifndef __IVxSnapshotSpanEvent_FWD_DEFINED__
#define __IVxSnapshotSpanEvent_FWD_DEFINED__
typedef interface IVxSnapshotSpanEvent IVxSnapshotSpanEvent;

#endif 	/* __IVxSnapshotSpanEvent_FWD_DEFINED__ */


#ifndef __IVxTextContentChangedEvent_FWD_DEFINED__
#define __IVxTextContentChangedEvent_FWD_DEFINED__
typedef interface IVxTextContentChangedEvent IVxTextContentChangedEvent;

#endif 	/* __IVxTextContentChangedEvent_FWD_DEFINED__ */


#ifndef __IVxTextContentChangingEvent_FWD_DEFINED__
#define __IVxTextContentChangingEvent_FWD_DEFINED__
typedef interface IVxTextContentChangingEvent IVxTextContentChangingEvent;

#endif 	/* __IVxTextContentChangingEvent_FWD_DEFINED__ */


#ifndef __IVxContentTypeChangedEvent_FWD_DEFINED__
#define __IVxContentTypeChangedEvent_FWD_DEFINED__
typedef interface IVxContentTypeChangedEvent IVxContentTypeChangedEvent;

#endif 	/* __IVxContentTypeChangedEvent_FWD_DEFINED__ */


#ifndef __IVxTextBufferCreatedEvent_FWD_DEFINED__
#define __IVxTextBufferCreatedEvent_FWD_DEFINED__
typedef interface IVxTextBufferCreatedEvent IVxTextBufferCreatedEvent;

#endif 	/* __IVxTextBufferCreatedEvent_FWD_DEFINED__ */


#ifndef __IEnumeratorIVxTextSnapshotLine_FWD_DEFINED__
#define __IEnumeratorIVxTextSnapshotLine_FWD_DEFINED__
typedef interface IEnumeratorIVxTextSnapshotLine IEnumeratorIVxTextSnapshotLine;

#endif 	/* __IEnumeratorIVxTextSnapshotLine_FWD_DEFINED__ */


#ifndef __IEnumerableIVxTextSnapshotLine_FWD_DEFINED__
#define __IEnumerableIVxTextSnapshotLine_FWD_DEFINED__
typedef interface IEnumerableIVxTextSnapshotLine IEnumerableIVxTextSnapshotLine;

#endif 	/* __IEnumerableIVxTextSnapshotLine_FWD_DEFINED__ */


#ifndef __IEnumeratorVxSpan_FWD_DEFINED__
#define __IEnumeratorVxSpan_FWD_DEFINED__
typedef interface IEnumeratorVxSpan IEnumeratorVxSpan;

#endif 	/* __IEnumeratorVxSpan_FWD_DEFINED__ */


#ifndef __IListVxSpan_FWD_DEFINED__
#define __IListVxSpan_FWD_DEFINED__
typedef interface IListVxSpan IListVxSpan;

#endif 	/* __IListVxSpan_FWD_DEFINED__ */


#ifndef __IEnumeratorIVxTextBuffer_FWD_DEFINED__
#define __IEnumeratorIVxTextBuffer_FWD_DEFINED__
typedef interface IEnumeratorIVxTextBuffer IEnumeratorIVxTextBuffer;

#endif 	/* __IEnumeratorIVxTextBuffer_FWD_DEFINED__ */


#ifndef __IListIVxTextBuffer_FWD_DEFINED__
#define __IListIVxTextBuffer_FWD_DEFINED__
typedef interface IListIVxTextBuffer IListIVxTextBuffer;

#endif 	/* __IListIVxTextBuffer_FWD_DEFINED__ */


#ifndef __IVxGraphBuffersChangedEvent_FWD_DEFINED__
#define __IVxGraphBuffersChangedEvent_FWD_DEFINED__
typedef interface IVxGraphBuffersChangedEvent IVxGraphBuffersChangedEvent;

#endif 	/* __IVxGraphBuffersChangedEvent_FWD_DEFINED__ */


#ifndef __IVxGraphBufferContentTypeChangedEvent_FWD_DEFINED__
#define __IVxGraphBufferContentTypeChangedEvent_FWD_DEFINED__
typedef interface IVxGraphBufferContentTypeChangedEvent IVxGraphBufferContentTypeChangedEvent;

#endif 	/* __IVxGraphBufferContentTypeChangedEvent_FWD_DEFINED__ */


#ifndef __IEnumeratorIUnknown_FWD_DEFINED__
#define __IEnumeratorIUnknown_FWD_DEFINED__
typedef interface IEnumeratorIUnknown IEnumeratorIUnknown;

#endif 	/* __IEnumeratorIUnknown_FWD_DEFINED__ */


#ifndef __IListIUnknown_FWD_DEFINED__
#define __IListIUnknown_FWD_DEFINED__
typedef interface IListIUnknown IListIUnknown;

#endif 	/* __IListIUnknown_FWD_DEFINED__ */


#ifndef __IVxProjectionSourceSpansChangedEvent_FWD_DEFINED__
#define __IVxProjectionSourceSpansChangedEvent_FWD_DEFINED__
typedef interface IVxProjectionSourceSpansChangedEvent IVxProjectionSourceSpansChangedEvent;

#endif 	/* __IVxProjectionSourceSpansChangedEvent_FWD_DEFINED__ */


#ifndef __IVxProjectionSourceBuffersChangedEvent_FWD_DEFINED__
#define __IVxProjectionSourceBuffersChangedEvent_FWD_DEFINED__
typedef interface IVxProjectionSourceBuffersChangedEvent IVxProjectionSourceBuffersChangedEvent;

#endif 	/* __IVxProjectionSourceBuffersChangedEvent_FWD_DEFINED__ */


#ifndef __IEnumeratorVxSnapshotPoint_FWD_DEFINED__
#define __IEnumeratorVxSnapshotPoint_FWD_DEFINED__
typedef interface IEnumeratorVxSnapshotPoint IEnumeratorVxSnapshotPoint;

#endif 	/* __IEnumeratorVxSnapshotPoint_FWD_DEFINED__ */


#ifndef __IListVxSnapshotPoint_FWD_DEFINED__
#define __IListVxSnapshotPoint_FWD_DEFINED__
typedef interface IListVxSnapshotPoint IListVxSnapshotPoint;

#endif 	/* __IListVxSnapshotPoint_FWD_DEFINED__ */


#ifndef __IEnumeratorVxSnapshotSpan_FWD_DEFINED__
#define __IEnumeratorVxSnapshotSpan_FWD_DEFINED__
typedef interface IEnumeratorVxSnapshotSpan IEnumeratorVxSnapshotSpan;

#endif 	/* __IEnumeratorVxSnapshotSpan_FWD_DEFINED__ */


#ifndef __IListVxSnapshotSpan_FWD_DEFINED__
#define __IListVxSnapshotSpan_FWD_DEFINED__
typedef interface IListVxSnapshotSpan IListVxSnapshotSpan;

#endif 	/* __IListVxSnapshotSpan_FWD_DEFINED__ */


#ifndef __IEnumeratorIVxTextSnapshot_FWD_DEFINED__
#define __IEnumeratorIVxTextSnapshot_FWD_DEFINED__
typedef interface IEnumeratorIVxTextSnapshot IEnumeratorIVxTextSnapshot;

#endif 	/* __IEnumeratorIVxTextSnapshot_FWD_DEFINED__ */


#ifndef __IListIVxTextSnapshot_FWD_DEFINED__
#define __IListIVxTextSnapshot_FWD_DEFINED__
typedef interface IListIVxTextSnapshot IListIVxTextSnapshot;

#endif 	/* __IListIVxTextSnapshot_FWD_DEFINED__ */


#ifndef __IEnumeratorIVxTrackingSpan_FWD_DEFINED__
#define __IEnumeratorIVxTrackingSpan_FWD_DEFINED__
typedef interface IEnumeratorIVxTrackingSpan IEnumeratorIVxTrackingSpan;

#endif 	/* __IEnumeratorIVxTrackingSpan_FWD_DEFINED__ */


#ifndef __IListIVxTrackingSpan_FWD_DEFINED__
#define __IListIVxTrackingSpan_FWD_DEFINED__
typedef interface IListIVxTrackingSpan IListIVxTrackingSpan;

#endif 	/* __IListIVxTrackingSpan_FWD_DEFINED__ */


#ifndef __IEnumeratorIVxTextChange_FWD_DEFINED__
#define __IEnumeratorIVxTextChange_FWD_DEFINED__
typedef interface IEnumeratorIVxTextChange IEnumeratorIVxTextChange;

#endif 	/* __IEnumeratorIVxTextChange_FWD_DEFINED__ */


#ifndef __IListIVxTextChange_FWD_DEFINED__
#define __IListIVxTextChange_FWD_DEFINED__
typedef interface IListIVxTextChange IListIVxTextChange;

#endif 	/* __IListIVxTextChange_FWD_DEFINED__ */


#ifndef __IVxDisposable_FWD_DEFINED__
#define __IVxDisposable_FWD_DEFINED__
typedef interface IVxDisposable IVxDisposable;

#endif 	/* __IVxDisposable_FWD_DEFINED__ */


#ifndef __IVxPropertyOwner_FWD_DEFINED__
#define __IVxPropertyOwner_FWD_DEFINED__
typedef interface IVxPropertyOwner IVxPropertyOwner;

#endif 	/* __IVxPropertyOwner_FWD_DEFINED__ */


#ifndef __IVxPropertyCollection_FWD_DEFINED__
#define __IVxPropertyCollection_FWD_DEFINED__
typedef interface IVxPropertyCollection IVxPropertyCollection;

#endif 	/* __IVxPropertyCollection_FWD_DEFINED__ */


#ifndef __IVxContentTypeRegistryService_FWD_DEFINED__
#define __IVxContentTypeRegistryService_FWD_DEFINED__
typedef interface IVxContentTypeRegistryService IVxContentTypeRegistryService;

#endif 	/* __IVxContentTypeRegistryService_FWD_DEFINED__ */


#ifndef __IVxContentType_FWD_DEFINED__
#define __IVxContentType_FWD_DEFINED__
typedef interface IVxContentType IVxContentType;

#endif 	/* __IVxContentType_FWD_DEFINED__ */


#ifndef __IVxTextDocument_FWD_DEFINED__
#define __IVxTextDocument_FWD_DEFINED__
typedef interface IVxTextDocument IVxTextDocument;

#endif 	/* __IVxTextDocument_FWD_DEFINED__ */


#ifndef __IVxTextDocumentFactoryService_FWD_DEFINED__
#define __IVxTextDocumentFactoryService_FWD_DEFINED__
typedef interface IVxTextDocumentFactoryService IVxTextDocumentFactoryService;

#endif 	/* __IVxTextDocumentFactoryService_FWD_DEFINED__ */


#ifndef __IVxTextDocumentEventArgs_FWD_DEFINED__
#define __IVxTextDocumentEventArgs_FWD_DEFINED__
typedef interface IVxTextDocumentEventArgs IVxTextDocumentEventArgs;

#endif 	/* __IVxTextDocumentEventArgs_FWD_DEFINED__ */


#ifndef __IVxTextDocumentFileActionEventArgs_FWD_DEFINED__
#define __IVxTextDocumentFileActionEventArgs_FWD_DEFINED__
typedef interface IVxTextDocumentFileActionEventArgs IVxTextDocumentFileActionEventArgs;

#endif 	/* __IVxTextDocumentFileActionEventArgs_FWD_DEFINED__ */


#ifndef __IVxTextSnapshotChangedEventArgs_FWD_DEFINED__
#define __IVxTextSnapshotChangedEventArgs_FWD_DEFINED__
typedef interface IVxTextSnapshotChangedEventArgs IVxTextSnapshotChangedEventArgs;

#endif 	/* __IVxTextSnapshotChangedEventArgs_FWD_DEFINED__ */


#ifndef __IVxContentTypeChangedEventArgs_FWD_DEFINED__
#define __IVxContentTypeChangedEventArgs_FWD_DEFINED__
typedef interface IVxContentTypeChangedEventArgs IVxContentTypeChangedEventArgs;

#endif 	/* __IVxContentTypeChangedEventArgs_FWD_DEFINED__ */


#ifndef __IVxMappingPoint_FWD_DEFINED__
#define __IVxMappingPoint_FWD_DEFINED__
typedef interface IVxMappingPoint IVxMappingPoint;

#endif 	/* __IVxMappingPoint_FWD_DEFINED__ */


#ifndef __IVxMappingSpan_FWD_DEFINED__
#define __IVxMappingSpan_FWD_DEFINED__
typedef interface IVxMappingSpan IVxMappingSpan;

#endif 	/* __IVxMappingSpan_FWD_DEFINED__ */


#ifndef __IVxNormalizedTextChangeCollection_FWD_DEFINED__
#define __IVxNormalizedTextChangeCollection_FWD_DEFINED__
typedef interface IVxNormalizedTextChangeCollection IVxNormalizedTextChangeCollection;

#endif 	/* __IVxNormalizedTextChangeCollection_FWD_DEFINED__ */


#ifndef __IVxReadOnlyRegion_FWD_DEFINED__
#define __IVxReadOnlyRegion_FWD_DEFINED__
typedef interface IVxReadOnlyRegion IVxReadOnlyRegion;

#endif 	/* __IVxReadOnlyRegion_FWD_DEFINED__ */


#ifndef __IVxTextBufferEdit_FWD_DEFINED__
#define __IVxTextBufferEdit_FWD_DEFINED__
typedef interface IVxTextBufferEdit IVxTextBufferEdit;

#endif 	/* __IVxTextBufferEdit_FWD_DEFINED__ */


#ifndef __IVxReadOnlyRegionEdit_FWD_DEFINED__
#define __IVxReadOnlyRegionEdit_FWD_DEFINED__
typedef interface IVxReadOnlyRegionEdit IVxReadOnlyRegionEdit;

#endif 	/* __IVxReadOnlyRegionEdit_FWD_DEFINED__ */


#ifndef __IVxTextBuffer_FWD_DEFINED__
#define __IVxTextBuffer_FWD_DEFINED__
typedef interface IVxTextBuffer IVxTextBuffer;

#endif 	/* __IVxTextBuffer_FWD_DEFINED__ */


#ifndef __IVxTextBufferFactoryService_FWD_DEFINED__
#define __IVxTextBufferFactoryService_FWD_DEFINED__
typedef interface IVxTextBufferFactoryService IVxTextBufferFactoryService;

#endif 	/* __IVxTextBufferFactoryService_FWD_DEFINED__ */


#ifndef __IVxTextChange_FWD_DEFINED__
#define __IVxTextChange_FWD_DEFINED__
typedef interface IVxTextChange IVxTextChange;

#endif 	/* __IVxTextChange_FWD_DEFINED__ */


#ifndef __IVxTextEdit_FWD_DEFINED__
#define __IVxTextEdit_FWD_DEFINED__
typedef interface IVxTextEdit IVxTextEdit;

#endif 	/* __IVxTextEdit_FWD_DEFINED__ */


#ifndef __IVxTextSnapshot_FWD_DEFINED__
#define __IVxTextSnapshot_FWD_DEFINED__
typedef interface IVxTextSnapshot IVxTextSnapshot;

#endif 	/* __IVxTextSnapshot_FWD_DEFINED__ */


#ifndef __IVxTextSnapshotLine_FWD_DEFINED__
#define __IVxTextSnapshotLine_FWD_DEFINED__
typedef interface IVxTextSnapshotLine IVxTextSnapshotLine;

#endif 	/* __IVxTextSnapshotLine_FWD_DEFINED__ */


#ifndef __IVxTextVersion_FWD_DEFINED__
#define __IVxTextVersion_FWD_DEFINED__
typedef interface IVxTextVersion IVxTextVersion;

#endif 	/* __IVxTextVersion_FWD_DEFINED__ */


#ifndef __IVxTrackingPoint_FWD_DEFINED__
#define __IVxTrackingPoint_FWD_DEFINED__
typedef interface IVxTrackingPoint IVxTrackingPoint;

#endif 	/* __IVxTrackingPoint_FWD_DEFINED__ */


#ifndef __IVxTrackingSpan_FWD_DEFINED__
#define __IVxTrackingSpan_FWD_DEFINED__
typedef interface IVxTrackingSpan IVxTrackingSpan;

#endif 	/* __IVxTrackingSpan_FWD_DEFINED__ */


#ifndef __IVxNormalizedSnapshotSpanCollection_FWD_DEFINED__
#define __IVxNormalizedSnapshotSpanCollection_FWD_DEFINED__
typedef interface IVxNormalizedSnapshotSpanCollection IVxNormalizedSnapshotSpanCollection;

#endif 	/* __IVxNormalizedSnapshotSpanCollection_FWD_DEFINED__ */


#ifndef __IVxNormalizedSpanCollection_FWD_DEFINED__
#define __IVxNormalizedSpanCollection_FWD_DEFINED__
typedef interface IVxNormalizedSpanCollection IVxNormalizedSpanCollection;

#endif 	/* __IVxNormalizedSpanCollection_FWD_DEFINED__ */


#ifndef __IVxSnapshotSpanEventArgs_FWD_DEFINED__
#define __IVxSnapshotSpanEventArgs_FWD_DEFINED__
typedef interface IVxSnapshotSpanEventArgs IVxSnapshotSpanEventArgs;

#endif 	/* __IVxSnapshotSpanEventArgs_FWD_DEFINED__ */


#ifndef __IVxTextBufferCreatedEventArgs_FWD_DEFINED__
#define __IVxTextBufferCreatedEventArgs_FWD_DEFINED__
typedef interface IVxTextBufferCreatedEventArgs IVxTextBufferCreatedEventArgs;

#endif 	/* __IVxTextBufferCreatedEventArgs_FWD_DEFINED__ */


#ifndef __IVxTextContentChangedEventArgs_FWD_DEFINED__
#define __IVxTextContentChangedEventArgs_FWD_DEFINED__
typedef interface IVxTextContentChangedEventArgs IVxTextContentChangedEventArgs;

#endif 	/* __IVxTextContentChangedEventArgs_FWD_DEFINED__ */


#ifndef __IVxTextContentChangingEventArgs_FWD_DEFINED__
#define __IVxTextContentChangingEventArgs_FWD_DEFINED__
typedef interface IVxTextContentChangingEventArgs IVxTextContentChangingEventArgs;

#endif 	/* __IVxTextContentChangingEventArgs_FWD_DEFINED__ */


#ifndef __IVxGraphBufferContentTypeChangedEventArgs_FWD_DEFINED__
#define __IVxGraphBufferContentTypeChangedEventArgs_FWD_DEFINED__
typedef interface IVxGraphBufferContentTypeChangedEventArgs IVxGraphBufferContentTypeChangedEventArgs;

#endif 	/* __IVxGraphBufferContentTypeChangedEventArgs_FWD_DEFINED__ */


#ifndef __IVxGraphBuffersChangedEventArgs_FWD_DEFINED__
#define __IVxGraphBuffersChangedEventArgs_FWD_DEFINED__
typedef interface IVxGraphBuffersChangedEventArgs IVxGraphBuffersChangedEventArgs;

#endif 	/* __IVxGraphBuffersChangedEventArgs_FWD_DEFINED__ */


#ifndef __IVxBufferGraph_FWD_DEFINED__
#define __IVxBufferGraph_FWD_DEFINED__
typedef interface IVxBufferGraph IVxBufferGraph;

#endif 	/* __IVxBufferGraph_FWD_DEFINED__ */


#ifndef __IVxProjectionBufferBase_FWD_DEFINED__
#define __IVxProjectionBufferBase_FWD_DEFINED__
typedef interface IVxProjectionBufferBase IVxProjectionBufferBase;

#endif 	/* __IVxProjectionBufferBase_FWD_DEFINED__ */


#ifndef __IVxProjectionBuffer_FWD_DEFINED__
#define __IVxProjectionBuffer_FWD_DEFINED__
typedef interface IVxProjectionBuffer IVxProjectionBuffer;

#endif 	/* __IVxProjectionBuffer_FWD_DEFINED__ */


#ifndef __IVxProjectionSnapshot_FWD_DEFINED__
#define __IVxProjectionSnapshot_FWD_DEFINED__
typedef interface IVxProjectionSnapshot IVxProjectionSnapshot;

#endif 	/* __IVxProjectionSnapshot_FWD_DEFINED__ */


#ifndef __IVxProjectionSourceSpansChangedEventArgs_FWD_DEFINED__
#define __IVxProjectionSourceSpansChangedEventArgs_FWD_DEFINED__
typedef interface IVxProjectionSourceSpansChangedEventArgs IVxProjectionSourceSpansChangedEventArgs;

#endif 	/* __IVxProjectionSourceSpansChangedEventArgs_FWD_DEFINED__ */


#ifndef __IVxProjectionSourceBuffersChangedEventArgs_FWD_DEFINED__
#define __IVxProjectionSourceBuffersChangedEventArgs_FWD_DEFINED__
typedef interface IVxProjectionSourceBuffersChangedEventArgs IVxProjectionSourceBuffersChangedEventArgs;

#endif 	/* __IVxProjectionSourceBuffersChangedEventArgs_FWD_DEFINED__ */


#ifndef __IVxTextSearchService_FWD_DEFINED__
#define __IVxTextSearchService_FWD_DEFINED__
typedef interface IVxTextSearchService IVxTextSearchService;

#endif 	/* __IVxTextSearchService_FWD_DEFINED__ */


#ifndef __IVxTextStructureNavigator_FWD_DEFINED__
#define __IVxTextStructureNavigator_FWD_DEFINED__
typedef interface IVxTextStructureNavigator IVxTextStructureNavigator;

#endif 	/* __IVxTextStructureNavigator_FWD_DEFINED__ */


#ifndef __IVxThumbnailSupport_FWD_DEFINED__
#define __IVxThumbnailSupport_FWD_DEFINED__
typedef interface IVxThumbnailSupport IVxThumbnailSupport;

#endif 	/* __IVxThumbnailSupport_FWD_DEFINED__ */


#ifndef __IVxPlatformFactory_FWD_DEFINED__
#define __IVxPlatformFactory_FWD_DEFINED__
typedef interface IVxPlatformFactory IVxPlatformFactory;

#endif 	/* __IVxPlatformFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __VSEditorLibrary_LIBRARY_DEFINED__
#define __VSEditorLibrary_LIBRARY_DEFINED__

/* library VSEditorLibrary */
/* [uuid] */ 















































































typedef 
enum _VxEnumerableCardinality
    {
        VxEnumerableCardinalityZero	= 0,
        VxEnumerableCardinalityOne	= 1,
        VxEnumerableCardinalityTwoOrMore	= 2
    } 	VxEnumerableCardinality;

typedef 
enum _VxCompositionTraceId
    {
        VxCompositionTraceIdRejection_DefinitionRejected	= 1,
        VxCompositionTraceIdRejection_DefinitionResurrected	= 2,
        VxCompositionTraceIdDiscovery_AssemblyLoadFailed	= 3,
        VxCompositionTraceIdDiscovery_DefinitionMarkedWithPartNotDiscoverableAttribute	= 4,
        VxCompositionTraceIdDiscovery_DefinitionMismatchedExportArity	= 5,
        VxCompositionTraceIdDiscovery_DefinitionContainsNoExports	= 6,
        VxCompositionTraceIdDiscovery_MemberMarkedWithMultipleImportAndImportMany	= 7
    } 	VxCompositionTraceId;

typedef 
enum _VxCompositionOptions
    {
        VxCompositionOptionsDefault	= 0,
        VxCompositionOptionsDisableSilentRejection	= 1,
        VxCompositionOptionsIsThreadSafe	= 2,
        VxCompositionOptionsExportCompositionService	= 4
    } 	VxCompositionOptions;

typedef 
enum _VxExportCardinalityCheckResult
    {
        VxExportCardinalityCheckResultMatch	= 0,
        VxExportCardinalityCheckResultNoExports	= 1,
        VxExportCardinalityCheckResultTooManyExports	= 2
    } 	VxExportCardinalityCheckResult;

typedef 
enum _VxImportState
    {
        VxImportStateNoImportsSatisfied	= 0,
        VxImportStateImportsPreviewing	= 1,
        VxImportStateImportsPreviewed	= 2,
        VxImportStatePreExportImportsSatisfying	= 3,
        VxImportStatePreExportImportsSatisfied	= 4,
        VxImportStatePostExportImportsSatisfying	= 5,
        VxImportStatePostExportImportsSatisfied	= 6,
        VxImportStateComposedNotifying	= 7,
        VxImportStateComposed	= 8
    } 	VxImportState;

typedef 
enum _VxImportCardinality
    {
        VxImportCardinalityZeroOrOne	= 0,
        VxImportCardinalityExactlyOne	= 1,
        VxImportCardinalityZeroOrMore	= 2
    } 	VxImportCardinality;

typedef 
enum _VxReflectionItemType
    {
        VxReflectionItemTypeParameter	= 0,
        VxReflectionItemTypeField	= 1,
        VxReflectionItemTypeProperty	= 2,
        VxReflectionItemTypeMethod	= 3,
        VxReflectionItemTypeType	= 4
    } 	VxReflectionItemType;

typedef 
enum _VxCompositionErrorId
    {
        VxCompositionErrorIdUnknown	= 0,
        VxCompositionErrorIdInvalidExportMetadata	= 1,
        VxCompositionErrorIdImportNotSetOnPart	= 2,
        VxCompositionErrorIdImportEngine_ComposeTookTooManyIterations	= 3,
        VxCompositionErrorIdImportEngine_ImportCardinalityMismatch	= 4,
        VxCompositionErrorIdImportEngine_PartCycle	= 5,
        VxCompositionErrorIdImportEngine_PartCannotSetImport	= 6,
        VxCompositionErrorIdImportEngine_PartCannotGetExportedValue	= 7,
        VxCompositionErrorIdImportEngine_PartCannotActivate	= 8,
        VxCompositionErrorIdImportEngine_PreventedByExistingImport	= 9,
        VxCompositionErrorIdImportEngine_InvalidStateForRecomposition	= 10,
        VxCompositionErrorIdReflectionModel_ImportThrewException	= 11,
        VxCompositionErrorIdReflectionModel_ImportNotAssignableFromExport	= 12,
        VxCompositionErrorIdReflectionModel_ImportCollectionNull	= 13,
        VxCompositionErrorIdReflectionModel_ImportCollectionNotWritable	= 14,
        VxCompositionErrorIdReflectionModel_ImportCollectionConstructionThrewException	= 15,
        VxCompositionErrorIdReflectionModel_ImportCollectionGetThrewException	= 16,
        VxCompositionErrorIdReflectionModel_ImportCollectionIsReadOnlyThrewException	= 17,
        VxCompositionErrorIdReflectionModel_ImportCollectionClearThrewException	= 18,
        VxCompositionErrorIdReflectionModel_ImportCollectionAddThrewException	= 19,
        VxCompositionErrorIdReflectionModel_ImportManyOnParameterCanOnlyBeAssigned	= 20
    } 	VxCompositionErrorId;

typedef 
enum _VxCreationPolicy
    {
        VxCreationPolicyAny	= 0,
        VxCreationPolicyShared	= 1,
        VxCreationPolicyNonShared	= 2
    } 	VxCreationPolicy;

typedef 
enum _VxImportSource
    {
        VxImportSourceAny	= 0,
        VxImportSourceLocal	= 1,
        VxImportSourceNonLocal	= 2
    } 	VxImportSource;

typedef 
enum _VxAtomicCompositionQueryState
    {
        VxAtomicCompositionQueryStateUnknown	= 0,
        VxAtomicCompositionQueryStateTreatAsRejected	= 1,
        VxAtomicCompositionQueryStateTreatAsValidated	= 2,
        VxAtomicCompositionQueryStateNeedsTesting	= 3
    } 	VxAtomicCompositionQueryState;

typedef 
enum _VxDWriteFontFeatureTag
    {
        VxDWriteFontFeatureTagAlternativeFractions	= 1668441697,
        VxDWriteFontFeatureTagPetiteCapitalsFromCapitals	= 1668297315,
        VxDWriteFontFeatureTagSmallCapitalsFromCapitals	= 1668493923,
        VxDWriteFontFeatureTagContextualAlternates	= 1953259875,
        VxDWriteFontFeatureTagCaseSensitiveForms	= 1702060387,
        VxDWriteFontFeatureTagGlyphCompositionDecomposition	= 1886217059,
        VxDWriteFontFeatureTagContextualLigatures	= 1734962275,
        VxDWriteFontFeatureTagCapitalSpacing	= 1886613603,
        VxDWriteFontFeatureTagContextualSwash	= 1752658787,
        VxDWriteFontFeatureTagCursivePositioning	= 1936880995,
        VxDWriteFontFeatureTagDefault	= 1953261156,
        VxDWriteFontFeatureTagDiscretionaryLigatures	= 1734962276,
        VxDWriteFontFeatureTagExpertForms	= 1953527909,
        VxDWriteFontFeatureTagFractions	= 1667330662,
        VxDWriteFontFeatureTagFullWidth	= 1684633446,
        VxDWriteFontFeatureTagHalfForms	= 1718378856,
        VxDWriteFontFeatureTagHalantForms	= 1852596584,
        VxDWriteFontFeatureTagAlternateHalfWidth	= 1953259880,
        VxDWriteFontFeatureTagHistoricalForms	= 1953720680,
        VxDWriteFontFeatureTagHorizontalKanaAlternates	= 1634626408,
        VxDWriteFontFeatureTagHistoricalLigatures	= 1734962280,
        VxDWriteFontFeatureTagHalfWidth	= 1684633448,
        VxDWriteFontFeatureTagHojoKanjiForms	= 1869246312,
        VxDWriteFontFeatureTagJIS04Forms	= 875589738,
        VxDWriteFontFeatureTagJIS78Forms	= 943157354,
        VxDWriteFontFeatureTagJIS83Forms	= 859336810,
        VxDWriteFontFeatureTagJIS90Forms	= 809070698,
        VxDWriteFontFeatureTagKerning	= 1852990827,
        VxDWriteFontFeatureTagStandardLigatures	= 1634167148,
        VxDWriteFontFeatureTagLiningFigures	= 1836412524,
        VxDWriteFontFeatureTagLocalizedForms	= 1818455916,
        VxDWriteFontFeatureTagMarkPositioning	= 1802658157,
        VxDWriteFontFeatureTagMathematicalGreek	= 1802659693,
        VxDWriteFontFeatureTagMarkToMarkPositioning	= 1802333037,
        VxDWriteFontFeatureTagAlternateAnnotationForms	= 1953259886,
        VxDWriteFontFeatureTagNLCKanjiForms	= 1801677934,
        VxDWriteFontFeatureTagOldStyleFigures	= 1836412527,
        VxDWriteFontFeatureTagOrdinals	= 1852076655,
        VxDWriteFontFeatureTagProportionalAlternateWidth	= 1953259888,
        VxDWriteFontFeatureTagPetiteCapitals	= 1885430640,
        VxDWriteFontFeatureTagProportionalFigures	= 1836412528,
        VxDWriteFontFeatureTagProportionalWidths	= 1684633456,
        VxDWriteFontFeatureTagQuarterWidths	= 1684633457,
        VxDWriteFontFeatureTagRequiredLigatures	= 1734962290,
        VxDWriteFontFeatureTagRubyNotationForms	= 2036495730,
        VxDWriteFontFeatureTagStylisticAlternates	= 1953259891,
        VxDWriteFontFeatureTagScientificInferiors	= 1718511987,
        VxDWriteFontFeatureTagSmallCapitals	= 1885564275,
        VxDWriteFontFeatureTagSimplifiedForms	= 1819307379,
        VxDWriteFontFeatureTagStylisticSet1	= 825258867,
        VxDWriteFontFeatureTagStylisticSet2	= 842036083,
        VxDWriteFontFeatureTagStylisticSet3	= 858813299,
        VxDWriteFontFeatureTagStylisticSet4	= 875590515,
        VxDWriteFontFeatureTagStylisticSet5	= 892367731,
        VxDWriteFontFeatureTagStylisticSet6	= 909144947,
        VxDWriteFontFeatureTagStylisticSet7	= 925922163,
        VxDWriteFontFeatureTagStylisticSet8	= 942699379,
        VxDWriteFontFeatureTagStylisticSet9	= 959476595,
        VxDWriteFontFeatureTagStylisticSet10	= 808547187,
        VxDWriteFontFeatureTagStylisticSet11	= 825324403,
        VxDWriteFontFeatureTagStylisticSet12	= 842101619,
        VxDWriteFontFeatureTagStylisticSet13	= 858878835,
        VxDWriteFontFeatureTagStylisticSet14	= 875656051,
        VxDWriteFontFeatureTagStylisticSet15	= 892433267,
        VxDWriteFontFeatureTagStylisticSet16	= 909210483,
        VxDWriteFontFeatureTagStylisticSet17	= 925987699,
        VxDWriteFontFeatureTagStylisticSet18	= 942764915,
        VxDWriteFontFeatureTagStylisticSet19	= 959542131,
        VxDWriteFontFeatureTagStylisticSet20	= 808612723,
        VxDWriteFontFeatureTagSubscript	= 1935832435,
        VxDWriteFontFeatureTagSuperscript	= 1936749939,
        VxDWriteFontFeatureTagSwash	= 1752397683,
        VxDWriteFontFeatureTagTitling	= 1819568500,
        VxDWriteFontFeatureTagTraditionalNameForms	= 1835101812,
        VxDWriteFontFeatureTagTabularFigures	= 1836412532,
        VxDWriteFontFeatureTagTraditionalForms	= 1684107892,
        VxDWriteFontFeatureTagThirdWidths	= 1684633460,
        VxDWriteFontFeatureTagUnicase	= 1667853941,
        VxDWriteFontFeatureTagSlashedZero	= 1869768058
    } 	VxDWriteFontFeatureTag;

typedef 
enum _VxFactoryType
    {
        VxFactoryTypeShared	= 0,
        VxFactoryTypeIsolated	= 1
    } 	VxFactoryType;

typedef 
enum _VxFontWeight
    {
        VxFontWeightThin	= 100,
        VxFontWeightExtraLight	= 200,
        VxFontWeightUltraLight	= 200,
        VxFontWeightLight	= 300,
        VxFontWeightNormal	= 400,
        VxFontWeightRegular	= 400,
        VxFontWeightMedium	= 500,
        VxFontWeightDemiBold	= 600,
        VxFontWeightSemiBOLD	= 600,
        VxFontWeightBold	= 700,
        VxFontWeightExtraBold	= 800,
        VxFontWeightUltraBold	= 800,
        VxFontWeightBlack	= 900,
        VxFontWeightHeavy	= 900,
        VxFontWeightExtraBlack	= 950,
        VxFontWeightUltraBlack	= 950
    } 	VxFontWeight;

typedef 
enum _VxFontFaceType
    {
        VxFontFaceTypeCFF	= 0,
        VxFontFaceTypeTrueType	= 1,
        VxFontFaceTypeTrueTypeCollection	= 2,
        VxFontFaceTypeType1	= 3,
        VxFontFaceTypeVector	= 4,
        VxFontFaceTypeBitmap	= 5,
        VxFontFaceTypeUnknown	= 6
    } 	VxFontFaceType;

typedef 
enum _VxFontFileType
    {
        VxFontFileTypeUnknown	= 0,
        VxFontFileTypeCFF	= 1,
        VxFontFileTypeTrueType	= 2,
        VxFontFileTypeTrueTypeCollection	= 3,
        VxFontFileTypeType1PFM	= 4,
        VxFontFileTypeType1PFB	= 5,
        VxFontFileTypeVector	= 6,
        VxFontFileTypeBitmap	= 7
    } 	VxFontFileType;

typedef 
enum _VxFontSimulations
    {
        VxFontSimulationsNone	= 0,
        VxFontSimulationsBold	= 1,
        VxFontSimulationsOblique	= 2
    } 	VxFontSimulations;

typedef 
enum _VxFontStretch
    {
        VxFontStretchUndefined	= 0,
        VxFontStretchUltraCondensed	= 1,
        VxFontStretchExtraCondensed	= 2,
        VxFontStretchCondensed	= 3,
        VxFontStretchSemiCondensed	= 4,
        VxFontStretchNormal	= 5,
        VxFontStretchMedium	= 5,
        VxFontStretchSemiExpanded	= 6,
        VxFontStretchExpanded	= 7,
        VxFontStretchExtraExpanded	= 8,
        VxFontStretchUltraExpanded	= 9
    } 	VxFontStretch;

typedef 
enum _VxFontStyle
    {
        VxFontStyleNormal	= 0,
        VxFontStyleOblique	= 1,
        VxFontStyleItalic	= 2
    } 	VxFontStyle;

typedef 
enum _VxInformationalStringID
    {
        VxInformationalStringIDNone	= 0,
        VxInformationalStringIDCopyrightNotice	= 1,
        VxInformationalStringIDVersionStrings	= 2,
        VxInformationalStringIDTrademark	= 3,
        VxInformationalStringIDManufacturer	= 4,
        VxInformationalStringIDDesigner	= 5,
        VxInformationalStringIDDesignerURL	= 6,
        VxInformationalStringIDDescription	= 7,
        VxInformationalStringIDFontVendorURL	= 8,
        VxInformationalStringIDLicenseDescription	= 9,
        VxInformationalStringIDLicenseInfoURL	= 10,
        VxInformationalStringIDWIN32FamilyNames	= 11,
        VxInformationalStringIDWin32SubFamilyNames	= 12,
        VxInformationalStringIDPreferredFamilyNames	= 13,
        VxInformationalStringIDPreferredSubFamilyNames	= 14,
        VxInformationalStringIDSampleText	= 15
    } 	VxInformationalStringID;

typedef 
enum _VxTextFormattingMode
    {
        VxTextFormattingModeIdeal	= 0,
        VxTextFormattingModeDisplay	= 1
    } 	VxTextFormattingMode;

typedef 
enum _VxOpenTypeTableTag
    {
        VxOpenTypeTableTagCharToIndexMap	= 1885433187,
        VxOpenTypeTableTagControlValue	= 544503395,
        VxOpenTypeTableTagBitmapData	= 1413759557,
        VxOpenTypeTableTagBitmapLocation	= 1129071173,
        VxOpenTypeTableTagBitmapScale	= 1129529925,
        VxOpenTypeTableTagEditor0	= 812934245,
        VxOpenTypeTableTagEditor1	= 829711461,
        VxOpenTypeTableTagEncryption	= 1887007331,
        VxOpenTypeTableTagFontHeader	= 1684104552,
        VxOpenTypeTableTagFontProgram	= 1835495526,
        VxOpenTypeTableTagGridfitAndScanProc	= 1886609767,
        VxOpenTypeTableTagGlyphDirectory	= 1919509607,
        VxOpenTypeTableTagGlyphData	= 1719233639,
        VxOpenTypeTableTagHoriDeviceMetrics	= 2020435048,
        VxOpenTypeTableTagHoriHeader	= 1634035816,
        VxOpenTypeTableTagHorizontalMetrics	= 2020896104,
        VxOpenTypeTableTagIndexToLoc	= 1633906540,
        VxOpenTypeTableTagKerning	= 1852990827,
        VxOpenTypeTableTagLinearThreshold	= 1213420620,
        VxOpenTypeTableTagMaxProfile	= 1886937453,
        VxOpenTypeTableTagNamingTable	= 1701667182,
        VxOpenTypeTableTagOS_2	= 841962319,
        VxOpenTypeTableTagPostscript	= 1953722224,
        VxOpenTypeTableTagPreProgram	= 1885696624,
        VxOpenTypeTableTagVertDeviceMetrics	= 1481458774,
        VxOpenTypeTableTagVertHeader	= 1634035830,
        VxOpenTypeTableTagVerticalMetrics	= 2020896118,
        VxOpenTypeTableTagPCLT	= 1414284112,
        VxOpenTypeTableTagTTO_GSUB	= 1112888135,
        VxOpenTypeTableTagTTO_GPOS	= 1397706823,
        VxOpenTypeTableTagTTO_GDEF	= 1178944583,
        VxOpenTypeTableTagTTO_BASE	= 1163084098,
        VxOpenTypeTableTagTTO_JSTF	= 1179931466
    } 	VxOpenTypeTableTag;

typedef 
enum _VxLockFlags
    {
        VxLockFlagsMIL_LOCK_READ	= 1,
        VxLockFlagsMIL_LOCK_WRITE	= 2
    } 	VxLockFlags;

typedef 
enum _VxWICBitmapAlphaChannelOption
    {
        VxWICBitmapAlphaChannelOptionWICBitmapUseAlpha	= 0,
        VxWICBitmapAlphaChannelOptionWICBitmapUsePremultipliedAlpha	= 1,
        VxWICBitmapAlphaChannelOptionWICBitmapIgnoreAlpha	= 2
    } 	VxWICBitmapAlphaChannelOption;

typedef 
enum _VxWICBitmapCreateCacheOptions
    {
        VxWICBitmapCreateCacheOptionsWICBitmapNoCache	= 0,
        VxWICBitmapCreateCacheOptionsWICBitmapCacheOnDemand	= 1,
        VxWICBitmapCreateCacheOptionsWICBitmapCacheOnLoad	= 2
    } 	VxWICBitmapCreateCacheOptions;

typedef 
enum _VxWICBitmapEncodeCacheOption
    {
        VxWICBitmapEncodeCacheOptionWICBitmapEncodeCacheInMemory	= 0,
        VxWICBitmapEncodeCacheOptionWICBitmapEncodeCacheTempFile	= 1,
        VxWICBitmapEncodeCacheOptionWICBitmapEncodeNoCache	= 2
    } 	VxWICBitmapEncodeCacheOption;

typedef 
enum _VxWICInterpolationMode
    {
        VxWICInterpolationModeNearestNeighbor	= 0,
        VxWICInterpolationModeLinear	= 1,
        VxWICInterpolationModeCubic	= 2,
        VxWICInterpolationModeFant	= 3
    } 	VxWICInterpolationMode;

typedef 
enum _VxPixelFormatEnum
    {
        VxPixelFormatEnumDefault	= 0,
        VxPixelFormatEnumExtended	= 0,
        VxPixelFormatEnumIndexed1	= 1,
        VxPixelFormatEnumIndexed2	= 2,
        VxPixelFormatEnumIndexed4	= 3,
        VxPixelFormatEnumIndexed8	= 4,
        VxPixelFormatEnumBlackWhite	= 5,
        VxPixelFormatEnumGray2	= 6,
        VxPixelFormatEnumGray4	= 7,
        VxPixelFormatEnumGray8	= 8,
        VxPixelFormatEnumBgr555	= 9,
        VxPixelFormatEnumBgr565	= 10,
        VxPixelFormatEnumGray16	= 11,
        VxPixelFormatEnumBgr24	= 12,
        VxPixelFormatEnumRgb24	= 13,
        VxPixelFormatEnumBgr32	= 14,
        VxPixelFormatEnumBgra32	= 15,
        VxPixelFormatEnumPbgra32	= 16,
        VxPixelFormatEnumGray32Float	= 17,
        VxPixelFormatEnumBgr101010	= 20,
        VxPixelFormatEnumRgb48	= 21,
        VxPixelFormatEnumRgba64	= 22,
        VxPixelFormatEnumPrgba64	= 23,
        VxPixelFormatEnumRgba128Float	= 25,
        VxPixelFormatEnumPrgba128Float	= 26,
        VxPixelFormatEnumRgb128Float	= 27,
        VxPixelFormatEnumCmyk32	= 28
    } 	VxPixelFormatEnum;

typedef 
enum _VxDitherType
    {
        VxDitherTypeDitherTypeNone	= 0,
        VxDitherTypeDitherTypeSolid	= 0,
        VxDitherTypeDitherTypeOrdered4x4	= 1,
        VxDitherTypeDitherTypeOrdered8x8	= 2,
        VxDitherTypeDitherTypeOrdered16x16	= 3,
        VxDitherTypeDitherTypeSpiral4x4	= 4,
        VxDitherTypeDitherTypeSpiral8x8	= 5,
        VxDitherTypeDitherTypeDualSpiral4x4	= 6,
        VxDitherTypeDitherTypeDualSpiral8x8	= 7,
        VxDitherTypeDitherTypeErrorDiffusion	= 8
    } 	VxDitherType;

typedef 
enum _VxWICPaletteType
    {
        VxWICPaletteTypeWICPaletteTypeCustom	= 0,
        VxWICPaletteTypeWICPaletteTypeOptimal	= 1,
        VxWICPaletteTypeWICPaletteTypeFixedBW	= 2,
        VxWICPaletteTypeWICPaletteTypeFixedHalftone8	= 3,
        VxWICPaletteTypeWICPaletteTypeFixedHalftone27	= 4,
        VxWICPaletteTypeWICPaletteTypeFixedHalftone64	= 5,
        VxWICPaletteTypeWICPaletteTypeFixedHalftone125	= 6,
        VxWICPaletteTypeWICPaletteTypeFixedHalftone216	= 7,
        VxWICPaletteTypeWICPaletteTypeFixedWebPalette	= 7,
        VxWICPaletteTypeWICPaletteTypeFixedHalftone252	= 8,
        VxWICPaletteTypeWICPaletteTypeFixedHalftone256	= 9,
        VxWICPaletteTypeWICPaletteTypeFixedGray4	= 10,
        VxWICPaletteTypeWICPaletteTypeFixedGray16	= 11,
        VxWICPaletteTypeWICPaletteTypeFixedGray256	= 12
    } 	VxWICPaletteType;

typedef 
enum _VxWICBitmapTransformOptions
    {
        VxWICBitmapTransformOptionsWICBitmapTransformRotate0	= 0,
        VxWICBitmapTransformOptionsWICBitmapTransformRotate90	= 1,
        VxWICBitmapTransformOptionsWICBitmapTransformRotate180	= 2,
        VxWICBitmapTransformOptionsWICBitmapTransformRotate270	= 3,
        VxWICBitmapTransformOptionsWICBitmapTransformFlipHorizontal	= 8,
        VxWICBitmapTransformOptionsWICBitmapTransformFlipVertical	= 16
    } 	VxWICBitmapTransformOptions;

typedef 
enum _VxChannelMarshalType
    {
        VxChannelMarshalTypeChannelMarshalTypeInvalid	= 0,
        VxChannelMarshalTypeChannelMarshalTypeSameThread	= 1,
        VxChannelMarshalTypeChannelMarshalTypeCrossThread	= 2
    } 	VxChannelMarshalType;

typedef 
enum _VxType
    {
        VxTypeInvalid	= 0,
        VxTypeSyncFlushReply	= 1,
        VxTypeCaps	= 4,
        VxTypePartitionIsZombie	= 6,
        VxTypeSyncModeStatus	= 9,
        VxTypePresented	= 10,
        VxTypeBadPixelShader	= 16,
        VxTypeForceDWORD	= -1
    } 	VxType;

typedef 
enum _VxMIL_PRESENTATION_RESULTS
    {
        VxMIL_PRESENTATION_RESULTSMIL_PRESENTATION_VSYNC	= 0,
        VxMIL_PRESENTATION_RESULTSMIL_PRESENTATION_NOPRESENT	= 1,
        VxMIL_PRESENTATION_RESULTSMIL_PRESENTATION_VSYNC_UNSUPPORTED	= 2,
        VxMIL_PRESENTATION_RESULTSMIL_PRESENTATION_DWM	= 3,
        VxMIL_PRESENTATION_RESULTSMIL_PRESENTATION_FORCE_DWORD	= -1
    } 	VxMIL_PRESENTATION_RESULTS;

typedef 
enum _VxMILCMD
    {
        VxMILCMDMilCmdInvalid	= 0,
        VxMILCMDMilCmdTransportSyncFlush	= 1,
        VxMILCMDMilCmdTransportDestroyResourcesOnChannel	= 2,
        VxMILCMDMilCmdPartitionRegisterForNotifications	= 3,
        VxMILCMDMilCmdChannelRequestTier	= 4,
        VxMILCMDMilCmdPartitionSetVBlankSyncMode	= 5,
        VxMILCMDMilCmdPartitionNotifyPresent	= 6,
        VxMILCMDMilCmdChannelCreateResource	= 7,
        VxMILCMDMilCmdChannelDeleteResource	= 8,
        VxMILCMDMilCmdChannelDuplicateHandle	= 9,
        VxMILCMDMilCmdD3DImage	= 10,
        VxMILCMDMilCmdD3DImagePresent	= 11,
        VxMILCMDMilCmdBitmapSource	= 12,
        VxMILCMDMilCmdBitmapInvalidate	= 13,
        VxMILCMDMilCmdDoubleResource	= 14,
        VxMILCMDMilCmdColorResource	= 15,
        VxMILCMDMilCmdPointResource	= 16,
        VxMILCMDMilCmdRectResource	= 17,
        VxMILCMDMilCmdSizeResource	= 18,
        VxMILCMDMilCmdMatrixResource	= 19,
        VxMILCMDMilCmdPoint3DResource	= 20,
        VxMILCMDMilCmdVector3DResource	= 21,
        VxMILCMDMilCmdQuaternionResource	= 22,
        VxMILCMDMilCmdMediaPlayer	= 23,
        VxMILCMDMilCmdRenderData	= 24,
        VxMILCMDMilCmdEtwEventResource	= 25,
        VxMILCMDMilCmdVisualCreate	= 26,
        VxMILCMDMilCmdVisualSetOffset	= 27,
        VxMILCMDMilCmdVisualSetTransform	= 28,
        VxMILCMDMilCmdVisualSetEffect	= 29,
        VxMILCMDMilCmdVisualSetCacheMode	= 30,
        VxMILCMDMilCmdVisualSetClip	= 31,
        VxMILCMDMilCmdVisualSetAlpha	= 32,
        VxMILCMDMilCmdVisualSetRenderOptions	= 33,
        VxMILCMDMilCmdVisualSetContent	= 34,
        VxMILCMDMilCmdVisualSetAlphaMask	= 35,
        VxMILCMDMilCmdVisualRemoveAllChildren	= 36,
        VxMILCMDMilCmdVisualRemoveChild	= 37,
        VxMILCMDMilCmdVisualInsertChildAt	= 38,
        VxMILCMDMilCmdVisualSetGuidelineCollection	= 39,
        VxMILCMDMilCmdVisualSetScrollableAreaClip	= 40,
        VxMILCMDMilCmdViewport3DVisualSetCamera	= 41,
        VxMILCMDMilCmdViewport3DVisualSetViewport	= 42,
        VxMILCMDMilCmdViewport3DVisualSet3DChild	= 43,
        VxMILCMDMilCmdVisual3DSetContent	= 44,
        VxMILCMDMilCmdVisual3DSetTransform	= 45,
        VxMILCMDMilCmdVisual3DRemoveAllChildren	= 46,
        VxMILCMDMilCmdVisual3DRemoveChild	= 47,
        VxMILCMDMilCmdVisual3DInsertChildAt	= 48,
        VxMILCMDMilCmdHwndTargetCreate	= 49,
        VxMILCMDMilCmdHwndTargetSuppressLayered	= 50,
        VxMILCMDMilCmdTargetUpdateWindowSettings	= 51,
        VxMILCMDMilCmdGenericTargetCreate	= 52,
        VxMILCMDMilCmdTargetSetRoot	= 53,
        VxMILCMDMilCmdTargetSetClearColor	= 54,
        VxMILCMDMilCmdTargetInvalidate	= 55,
        VxMILCMDMilCmdTargetSetFlags	= 56,
        VxMILCMDMilCmdGlyphRunCreate	= 57,
        VxMILCMDMilCmdDoubleBufferedBitmap	= 58,
        VxMILCMDMilCmdDoubleBufferedBitmapCopyForward	= 59,
        VxMILCMDMilDrawLine	= 60,
        VxMILCMDMilDrawLineAnimate	= 61,
        VxMILCMDMilDrawRectangle	= 62,
        VxMILCMDMilDrawRectangleAnimate	= 63,
        VxMILCMDMilDrawRoundedRectangle	= 64,
        VxMILCMDMilDrawRoundedRectangleAnimate	= 65,
        VxMILCMDMilDrawEllipse	= 66,
        VxMILCMDMilDrawEllipseAnimate	= 67,
        VxMILCMDMilDrawGeometry	= 68,
        VxMILCMDMilDrawImage	= 69,
        VxMILCMDMilDrawImageAnimate	= 70,
        VxMILCMDMilDrawGlyphRun	= 71,
        VxMILCMDMilDrawDrawing	= 72,
        VxMILCMDMilDrawVideo	= 73,
        VxMILCMDMilDrawVideoAnimate	= 74,
        VxMILCMDMilPushClip	= 75,
        VxMILCMDMilPushOpacityMask	= 76,
        VxMILCMDMilPushOpacity	= 77,
        VxMILCMDMilPushOpacityAnimate	= 78,
        VxMILCMDMilPushTransform	= 79,
        VxMILCMDMilPushGuidelineSet	= 80,
        VxMILCMDMilPushGuidelineY1	= 81,
        VxMILCMDMilPushGuidelineY2	= 82,
        VxMILCMDMilPushEffect	= 83,
        VxMILCMDMilPop	= 84,
        VxMILCMDMilCmdAxisAngleRotation3D	= 85,
        VxMILCMDMilCmdQuaternionRotation3D	= 86,
        VxMILCMDMilCmdPerspectiveCamera	= 87,
        VxMILCMDMilCmdOrthographicCamera	= 88,
        VxMILCMDMilCmdMatrixCamera	= 89,
        VxMILCMDMilCmdModel3DGroup	= 90,
        VxMILCMDMilCmdAmbientLight	= 91,
        VxMILCMDMilCmdDirectionalLight	= 92,
        VxMILCMDMilCmdPointLight	= 93,
        VxMILCMDMilCmdSpotLight	= 94,
        VxMILCMDMilCmdGeometryModel3D	= 95,
        VxMILCMDMilCmdMeshGeometry3D	= 96,
        VxMILCMDMilCmdMaterialGroup	= 97,
        VxMILCMDMilCmdDiffuseMaterial	= 98,
        VxMILCMDMilCmdSpecularMaterial	= 99,
        VxMILCMDMilCmdEmissiveMaterial	= 100,
        VxMILCMDMilCmdTransform3DGroup	= 101,
        VxMILCMDMilCmdTranslateTransform3D	= 102,
        VxMILCMDMilCmdScaleTransform3D	= 103,
        VxMILCMDMilCmdRotateTransform3D	= 104,
        VxMILCMDMilCmdMatrixTransform3D	= 105,
        VxMILCMDMilCmdPixelShader	= 106,
        VxMILCMDMilCmdImplicitInputBrush	= 107,
        VxMILCMDMilCmdBlurEffect	= 108,
        VxMILCMDMilCmdDropShadowEffect	= 109,
        VxMILCMDMilCmdShaderEffect	= 110,
        VxMILCMDMilCmdDrawingImage	= 111,
        VxMILCMDMilCmdTransformGroup	= 112,
        VxMILCMDMilCmdTranslateTransform	= 113,
        VxMILCMDMilCmdScaleTransform	= 114,
        VxMILCMDMilCmdSkewTransform	= 115,
        VxMILCMDMilCmdRotateTransform	= 116,
        VxMILCMDMilCmdMatrixTransform	= 117,
        VxMILCMDMilCmdLineGeometry	= 118,
        VxMILCMDMilCmdRectangleGeometry	= 119,
        VxMILCMDMilCmdEllipseGeometry	= 120,
        VxMILCMDMilCmdGeometryGroup	= 121,
        VxMILCMDMilCmdCombinedGeometry	= 122,
        VxMILCMDMilCmdPathGeometry	= 123,
        VxMILCMDMilCmdSolidColorBrush	= 124,
        VxMILCMDMilCmdLinearGradientBrush	= 125,
        VxMILCMDMilCmdRadialGradientBrush	= 126,
        VxMILCMDMilCmdImageBrush	= 127,
        VxMILCMDMilCmdDrawingBrush	= 128,
        VxMILCMDMilCmdVisualBrush	= 129,
        VxMILCMDMilCmdBitmapCacheBrush	= 130,
        VxMILCMDMilCmdDashStyle	= 131,
        VxMILCMDMilCmdPen	= 132,
        VxMILCMDMilCmdGeometryDrawing	= 133,
        VxMILCMDMilCmdGlyphRunDrawing	= 134,
        VxMILCMDMilCmdImageDrawing	= 135,
        VxMILCMDMilCmdVideoDrawing	= 136,
        VxMILCMDMilCmdDrawingGroup	= 137,
        VxMILCMDMilCmdGuidelineSet	= 138,
        VxMILCMDMilCmdBitmapCache	= 139
    } 	VxMILCMD;

typedef 
enum _VxMilRenderOptionFlags
    {
        VxMilRenderOptionFlagsBitmapScalingMode	= 1,
        VxMilRenderOptionFlagsEdgeMode	= 2,
        VxMilRenderOptionFlagsCompositingMode	= 4,
        VxMilRenderOptionFlagsClearTypeHint	= 8,
        VxMilRenderOptionFlagsTextRenderingMode	= 16,
        VxMilRenderOptionFlagsTextHintingMode	= 32,
        VxMilRenderOptionFlagsLast	= 33,
        VxMilRenderOptionFlagsFORCE_DWORD	= -1
    } 	VxMilRenderOptionFlags;

typedef 
enum _VxMilCompositingMode
    {
        VxMilCompositingModeSourceOver	= 0,
        VxMilCompositingModeSourceCopy	= 1,
        VxMilCompositingModeSourceAdd	= 2,
        VxMilCompositingModeSourceAlphaMultiply	= 3,
        VxMilCompositingModeSourceInverseAlphaMultiply	= 4,
        VxMilCompositingModeSourceUnder	= 5,
        VxMilCompositingModeSourceOverNonPremultiplied	= 6,
        VxMilCompositingModeSourceInverseAlphaOverNonPremultiplied	= 7,
        VxMilCompositingModeDestInvert	= 8,
        VxMilCompositingModeLast	= 9,
        VxMilCompositingModeFORCE_DWORD	= -1
    } 	VxMilCompositingMode;

typedef 
enum _VxEdgeMode
    {
        VxEdgeModeUnspecified	= 0,
        VxEdgeModeAliased	= 1
    } 	VxEdgeMode;

typedef 
enum _VxBitmapScalingMode
    {
        VxBitmapScalingModeUnspecified	= 0,
        VxBitmapScalingModeLowQuality	= 1,
        VxBitmapScalingModeHighQuality	= 2,
        VxBitmapScalingModeLinear	= 1,
        VxBitmapScalingModeFant	= 2,
        VxBitmapScalingModeNearestNeighbor	= 3
    } 	VxBitmapScalingMode;

typedef 
enum _VxClearTypeHint
    {
        VxClearTypeHintAuto	= 0,
        VxClearTypeHintEnabled	= 1
    } 	VxClearTypeHint;

typedef 
enum _VxTextRenderingMode
    {
        VxTextRenderingModeAuto	= 0,
        VxTextRenderingModeAliased	= 1,
        VxTextRenderingModeGrayscale	= 2,
        VxTextRenderingModeClearType	= 3
    } 	VxTextRenderingMode;

typedef 
enum _VxTextHintingMode
    {
        VxTextHintingModeAuto	= 0,
        VxTextHintingModeFixed	= 1,
        VxTextHintingModeAnimated	= 2
    } 	VxTextHintingMode;

typedef 
enum _VxMILTransparencyFlags
    {
        VxMILTransparencyFlagsOpaque	= 0,
        VxMILTransparencyFlagsConstantAlpha	= 1,
        VxMILTransparencyFlagsPerPixelAlpha	= 2,
        VxMILTransparencyFlagsColorKey	= 4,
        VxMILTransparencyFlagsFORCE_DWORD	= -1
    } 	VxMILTransparencyFlags;

typedef 
enum _VxMILWindowLayerType
    {
        VxMILWindowLayerTypeNotLayered	= 0,
        VxMILWindowLayerTypeSystemManagedLayer	= 1,
        VxMILWindowLayerTypeApplicationManagedLayer	= 2,
        VxMILWindowLayerTypeFORCE_DWORD	= -1
    } 	VxMILWindowLayerType;

typedef 
enum _VxShaderRenderMode
    {
        VxShaderRenderModeAuto	= 0,
        VxShaderRenderModeSoftwareOnly	= 1,
        VxShaderRenderModeHardwareOnly	= 2
    } 	VxShaderRenderMode;

typedef 
enum _VxKernelType
    {
        VxKernelTypeGaussian	= 0,
        VxKernelTypeBox	= 1
    } 	VxKernelType;

typedef 
enum _VxRenderingBias
    {
        VxRenderingBiasPerformance	= 0,
        VxRenderingBiasQuality	= 1
    } 	VxRenderingBias;

typedef 
enum _VxFillRule
    {
        VxFillRuleEvenOdd	= 0,
        VxFillRuleNonzero	= 1
    } 	VxFillRule;

typedef 
enum _VxGeometryCombineMode
    {
        VxGeometryCombineModeUnion	= 0,
        VxGeometryCombineModeIntersect	= 1,
        VxGeometryCombineModeXor	= 2,
        VxGeometryCombineModeExclude	= 3
    } 	VxGeometryCombineMode;

typedef 
enum _VxBrushMappingMode
    {
        VxBrushMappingModeAbsolute	= 0,
        VxBrushMappingModeRelativeToBoundingBox	= 1
    } 	VxBrushMappingMode;

typedef 
enum _VxColorInterpolationMode
    {
        VxColorInterpolationModeScRgbLinearInterpolation	= 0,
        VxColorInterpolationModeSRgbLinearInterpolation	= 1
    } 	VxColorInterpolationMode;

typedef 
enum _VxGradientSpreadMethod
    {
        VxGradientSpreadMethodPad	= 0,
        VxGradientSpreadMethodReflect	= 1,
        VxGradientSpreadMethodRepeat	= 2
    } 	VxGradientSpreadMethod;

typedef 
enum _VxAlignmentX
    {
        VxAlignmentXLeft	= 0,
        VxAlignmentXCenter	= 1,
        VxAlignmentXRight	= 2
    } 	VxAlignmentX;

typedef 
enum _VxAlignmentY
    {
        VxAlignmentYTop	= 0,
        VxAlignmentYCenter	= 1,
        VxAlignmentYBottom	= 2
    } 	VxAlignmentY;

typedef 
enum _VxCachingHint
    {
        VxCachingHintUnspecified	= 0,
        VxCachingHintCache	= 1
    } 	VxCachingHint;

typedef 
enum _VxStretch
    {
        VxStretchNone	= 0,
        VxStretchFill	= 1,
        VxStretchUniform	= 2,
        VxStretchUniformToFill	= 3
    } 	VxStretch;

typedef 
enum _VxTileMode
    {
        VxTileModeNone	= 0,
        VxTileModeTile	= 4,
        VxTileModeFlipX	= 1,
        VxTileModeFlipY	= 2,
        VxTileModeFlipXY	= 3
    } 	VxTileMode;

typedef 
enum _VxPenLineCap
    {
        VxPenLineCapFlat	= 0,
        VxPenLineCapSquare	= 1,
        VxPenLineCapRound	= 2,
        VxPenLineCapTriangle	= 3
    } 	VxPenLineCap;

typedef 
enum _VxPenLineJoin
    {
        VxPenLineJoinMiter	= 0,
        VxPenLineJoinBevel	= 1,
        VxPenLineJoinRound	= 2
    } 	VxPenLineJoin;

typedef 
enum _VxResourceType
    {
        VxResourceTypeTYPE_NULL	= 0,
        VxResourceTypeTYPE_MEDIAPLAYER	= 1,
        VxResourceTypeTYPE_ROTATION3D	= 2,
        VxResourceTypeTYPE_AXISANGLEROTATION3D	= 3,
        VxResourceTypeTYPE_QUATERNIONROTATION3D	= 4,
        VxResourceTypeTYPE_CAMERA	= 5,
        VxResourceTypeTYPE_PROJECTIONCAMERA	= 6,
        VxResourceTypeTYPE_PERSPECTIVECAMERA	= 7,
        VxResourceTypeTYPE_ORTHOGRAPHICCAMERA	= 8,
        VxResourceTypeTYPE_MATRIXCAMERA	= 9,
        VxResourceTypeTYPE_MODEL3D	= 10,
        VxResourceTypeTYPE_MODEL3DGROUP	= 11,
        VxResourceTypeTYPE_LIGHT	= 12,
        VxResourceTypeTYPE_AMBIENTLIGHT	= 13,
        VxResourceTypeTYPE_DIRECTIONALLIGHT	= 14,
        VxResourceTypeTYPE_POINTLIGHTBASE	= 15,
        VxResourceTypeTYPE_POINTLIGHT	= 16,
        VxResourceTypeTYPE_SPOTLIGHT	= 17,
        VxResourceTypeTYPE_GEOMETRYMODEL3D	= 18,
        VxResourceTypeTYPE_GEOMETRY3D	= 19,
        VxResourceTypeTYPE_MESHGEOMETRY3D	= 20,
        VxResourceTypeTYPE_MATERIAL	= 21,
        VxResourceTypeTYPE_MATERIALGROUP	= 22,
        VxResourceTypeTYPE_DIFFUSEMATERIAL	= 23,
        VxResourceTypeTYPE_SPECULARMATERIAL	= 24,
        VxResourceTypeTYPE_EMISSIVEMATERIAL	= 25,
        VxResourceTypeTYPE_TRANSFORM3D	= 26,
        VxResourceTypeTYPE_TRANSFORM3DGROUP	= 27,
        VxResourceTypeTYPE_AFFINETRANSFORM3D	= 28,
        VxResourceTypeTYPE_TRANSLATETRANSFORM3D	= 29,
        VxResourceTypeTYPE_SCALETRANSFORM3D	= 30,
        VxResourceTypeTYPE_ROTATETRANSFORM3D	= 31,
        VxResourceTypeTYPE_MATRIXTRANSFORM3D	= 32,
        VxResourceTypeTYPE_PIXELSHADER	= 33,
        VxResourceTypeTYPE_IMPLICITINPUTBRUSH	= 34,
        VxResourceTypeTYPE_EFFECT	= 35,
        VxResourceTypeTYPE_BLUREFFECT	= 36,
        VxResourceTypeTYPE_DROPSHADOWEFFECT	= 37,
        VxResourceTypeTYPE_SHADEREFFECT	= 38,
        VxResourceTypeTYPE_VISUAL	= 39,
        VxResourceTypeTYPE_VIEWPORT3DVISUAL	= 40,
        VxResourceTypeTYPE_VISUAL3D	= 41,
        VxResourceTypeTYPE_GLYPHRUN	= 42,
        VxResourceTypeTYPE_RENDERDATA	= 43,
        VxResourceTypeTYPE_DRAWINGCONTEXT	= 44,
        VxResourceTypeTYPE_RENDERTARGET	= 45,
        VxResourceTypeTYPE_HWNDRENDERTARGET	= 46,
        VxResourceTypeTYPE_GENERICRENDERTARGET	= 47,
        VxResourceTypeTYPE_ETWEVENTRESOURCE	= 48,
        VxResourceTypeTYPE_DOUBLERESOURCE	= 49,
        VxResourceTypeTYPE_COLORRESOURCE	= 50,
        VxResourceTypeTYPE_POINTRESOURCE	= 51,
        VxResourceTypeTYPE_RECTRESOURCE	= 52,
        VxResourceTypeTYPE_SIZERESOURCE	= 53,
        VxResourceTypeTYPE_MATRIXRESOURCE	= 54,
        VxResourceTypeTYPE_POINT3DRESOURCE	= 55,
        VxResourceTypeTYPE_VECTOR3DRESOURCE	= 56,
        VxResourceTypeTYPE_QUATERNIONRESOURCE	= 57,
        VxResourceTypeTYPE_IMAGESOURCE	= 58,
        VxResourceTypeTYPE_DRAWINGIMAGE	= 59,
        VxResourceTypeTYPE_TRANSFORM	= 60,
        VxResourceTypeTYPE_TRANSFORMGROUP	= 61,
        VxResourceTypeTYPE_TRANSLATETRANSFORM	= 62,
        VxResourceTypeTYPE_SCALETRANSFORM	= 63,
        VxResourceTypeTYPE_SKEWTRANSFORM	= 64,
        VxResourceTypeTYPE_ROTATETRANSFORM	= 65,
        VxResourceTypeTYPE_MATRIXTRANSFORM	= 66,
        VxResourceTypeTYPE_GEOMETRY	= 67,
        VxResourceTypeTYPE_LINEGEOMETRY	= 68,
        VxResourceTypeTYPE_RECTANGLEGEOMETRY	= 69,
        VxResourceTypeTYPE_ELLIPSEGEOMETRY	= 70,
        VxResourceTypeTYPE_GEOMETRYGROUP	= 71,
        VxResourceTypeTYPE_COMBINEDGEOMETRY	= 72,
        VxResourceTypeTYPE_PATHGEOMETRY	= 73,
        VxResourceTypeTYPE_BRUSH	= 74,
        VxResourceTypeTYPE_SOLIDCOLORBRUSH	= 75,
        VxResourceTypeTYPE_GRADIENTBRUSH	= 76,
        VxResourceTypeTYPE_LINEARGRADIENTBRUSH	= 77,
        VxResourceTypeTYPE_RADIALGRADIENTBRUSH	= 78,
        VxResourceTypeTYPE_TILEBRUSH	= 79,
        VxResourceTypeTYPE_IMAGEBRUSH	= 80,
        VxResourceTypeTYPE_DRAWINGBRUSH	= 81,
        VxResourceTypeTYPE_VISUALBRUSH	= 82,
        VxResourceTypeTYPE_BITMAPCACHEBRUSH	= 83,
        VxResourceTypeTYPE_DASHSTYLE	= 84,
        VxResourceTypeTYPE_PEN	= 85,
        VxResourceTypeTYPE_DRAWING	= 86,
        VxResourceTypeTYPE_GEOMETRYDRAWING	= 87,
        VxResourceTypeTYPE_GLYPHRUNDRAWING	= 88,
        VxResourceTypeTYPE_IMAGEDRAWING	= 89,
        VxResourceTypeTYPE_VIDEODRAWING	= 90,
        VxResourceTypeTYPE_DRAWINGGROUP	= 91,
        VxResourceTypeTYPE_GUIDELINESET	= 92,
        VxResourceTypeTYPE_CACHEMODE	= 93,
        VxResourceTypeTYPE_BITMAPCACHE	= 94,
        VxResourceTypeTYPE_BITMAPSOURCE	= 95,
        VxResourceTypeTYPE_DOUBLEBUFFEREDBITMAP	= 96,
        VxResourceTypeTYPE_D3DIMAGE	= 97
    } 	VxResourceType;

typedef 
enum _VxAVEvent
    {
        VxAVEventAVMediaNone	= 0,
        VxAVEventAVMediaOpened	= 1,
        VxAVEventAVMediaClosed	= 2,
        VxAVEventAVMediaStarted	= 3,
        VxAVEventAVMediaStopped	= 4,
        VxAVEventAVMediaPaused	= 5,
        VxAVEventAVMediaRateChanged	= 6,
        VxAVEventAVMediaEnded	= 7,
        VxAVEventAVMediaFailed	= 8,
        VxAVEventAVMediaBufferingStarted	= 9,
        VxAVEventAVMediaBufferingEnded	= 10,
        VxAVEventAVMediaPrerolled	= 11,
        VxAVEventAVMediaScriptCommand	= 12,
        VxAVEventAVMediaNewFrame	= 13
    } 	VxAVEvent;

typedef 
enum _VxMIL_SEGMENT_TYPE
    {
        VxMIL_SEGMENT_TYPEMilSegmentNone	= 0,
        VxMIL_SEGMENT_TYPEMilSegmentLine	= 1,
        VxMIL_SEGMENT_TYPEMilSegmentBezier	= 2,
        VxMIL_SEGMENT_TYPEMilSegmentQuadraticBezier	= 3,
        VxMIL_SEGMENT_TYPEMilSegmentArc	= 4,
        VxMIL_SEGMENT_TYPEMilSegmentPolyLine	= 5,
        VxMIL_SEGMENT_TYPEMilSegmentPolyBezier	= 6,
        VxMIL_SEGMENT_TYPEMilSegmentPolyQuadraticBezier	= 7,
        VxMIL_SEGMENT_TYPEMIL_SEGMENT_TYPE_FORCE_DWORD	= -1
    } 	VxMIL_SEGMENT_TYPE;

typedef 
enum _VxMILCoreSegFlags
    {
        VxMILCoreSegFlagsSegTypeLine	= 1,
        VxMILCoreSegFlagsSegTypeBezier	= 2,
        VxMILCoreSegFlagsSegTypeMask	= 3,
        VxMILCoreSegFlagsSegIsAGap	= 4,
        VxMILCoreSegFlagsSegSmoothJoin	= 8,
        VxMILCoreSegFlagsSegClosed	= 16,
        VxMILCoreSegFlagsSegIsCurved	= 32,
        VxMILCoreSegFlagsFORCE_DWORD	= -1
    } 	VxMILCoreSegFlags;

typedef 
enum _VxMIL_PEN_CAP
    {
        VxMIL_PEN_CAPMilPenCapFlat	= 0,
        VxMIL_PEN_CAPMilPenCapSquare	= 1,
        VxMIL_PEN_CAPMilPenCapRound	= 2,
        VxMIL_PEN_CAPMilPenCapTriangle	= 3,
        VxMIL_PEN_CAPMIL_PEN_CAP_FORCE_DWORD	= -1
    } 	VxMIL_PEN_CAP;

typedef 
enum _VxMIL_PEN_JOIN
    {
        VxMIL_PEN_JOINMilPenJoinMiter	= 0,
        VxMIL_PEN_JOINMilPenJoinBevel	= 1,
        VxMIL_PEN_JOINMilPenJoinRound	= 2,
        VxMIL_PEN_JOINMIL_PEN_JOIN_FORCE_DWORD	= -1
    } 	VxMIL_PEN_JOIN;

typedef 
enum _VxMILRTInitializationFlags
    {
        VxMILRTInitializationFlagsMIL_RT_INITIALIZE_DEFAULT	= 0,
        VxMILRTInitializationFlagsMIL_RT_SOFTWARE_ONLY	= 1,
        VxMILRTInitializationFlagsMIL_RT_HARDWARE_ONLY	= 2,
        VxMILRTInitializationFlagsMIL_RT_NULL	= 3,
        VxMILRTInitializationFlagsMIL_RT_TYPE_MASK	= 3,
        VxMILRTInitializationFlagsMIL_RT_PRESENT_IMMEDIATELY	= 4,
        VxMILRTInitializationFlagsMIL_RT_PRESENT_RETAIN_CONTENTS	= 8,
        VxMILRTInitializationFlagsMIL_RT_FULLSCREEN	= 16,
        VxMILRTInitializationFlagsMIL_RT_LINEAR_GAMMA	= 32,
        VxMILRTInitializationFlagsMIL_RT_NEED_DESTINATION_ALPHA	= 64,
        VxMILRTInitializationFlagsMIL_RT_ALLOW_LOW_PRECISION	= 128,
        VxMILRTInitializationFlagsMIL_RT_SINGLE_THREADED_USAGE	= 256,
        VxMILRTInitializationFlagsMIL_RT_RENDER_NONCLIENT	= 512,
        VxMILRTInitializationFlagsMIL_RT_PRESENT_FLIP	= 1024,
        VxMILRTInitializationFlagsMIL_RT_FULLSCREEN_NO_AUTOROTATE	= 2048,
        VxMILRTInitializationFlagsMIL_RT_DISABLE_DISPLAY_CLIPPING	= 4096,
        VxMILRTInitializationFlagsMIL_UCE_RT_ENABLE_OCCLUSION	= 65536,
        VxMILRTInitializationFlagsMIL_RT_USE_REF_RAST	= 16777216,
        VxMILRTInitializationFlagsMIL_RT_USE_RGB_RAST	= 33554432,
        VxMILRTInitializationFlagsMIL_RT_FULLSCREEN_TRANSPOSE_XY	= 268435456,
        VxMILRTInitializationFlagsMIL_RT_PRESENT_USING_MASK	= -1073741824,
        VxMILRTInitializationFlagsMIL_RT_PRESENT_USING_HAL	= 0,
        VxMILRTInitializationFlagsMIL_RT_PRESENT_USING_BITBLT	= 1073741824,
        VxMILRTInitializationFlagsMIL_RT_PRESENT_USING_ALPHABLEND	= 0x80000000,
        VxMILRTInitializationFlagsMIL_RT_PRESENT_USING_ULW	= -1073741824,
        VxMILRTInitializationFlagsFORCE_DWORD	= -1
    } 	VxMILRTInitializationFlags;

typedef 
enum _VxMilPathGeometryFlags
    {
        VxMilPathGeometryFlagsHasCurves	= 1,
        VxMilPathGeometryFlagsBoundsValid	= 2,
        VxMilPathGeometryFlagsHasGaps	= 4,
        VxMilPathGeometryFlagsHasHollows	= 8,
        VxMilPathGeometryFlagsIsRegionData	= 16,
        VxMilPathGeometryFlagsMask	= 31,
        VxMilPathGeometryFlagsFORCE_DWORD	= -1
    } 	VxMilPathGeometryFlags;

typedef 
enum _VxMilPathFigureFlags
    {
        VxMilPathFigureFlagsHasGaps	= 1,
        VxMilPathFigureFlagsHasCurves	= 2,
        VxMilPathFigureFlagsIsClosed	= 4,
        VxMilPathFigureFlagsIsFillable	= 8,
        VxMilPathFigureFlagsIsRectangleData	= 16,
        VxMilPathFigureFlagsMask	= 31,
        VxMilPathFigureFlagsFORCE_DWORD	= -1
    } 	VxMilPathFigureFlags;

typedef 
enum _VxKeyToRead
    {
        VxKeyToReadWebBrowserDisable	= 1,
        VxKeyToReadMediaAudioDisable	= 2,
        VxKeyToReadMediaVideoDisable	= 4,
        VxKeyToReadMediaImageDisable	= 8,
        VxKeyToReadMediaAudioOrVideoDisable	= 6,
        VxKeyToReadScriptInteropDisable	= 16
    } 	VxKeyToRead;

typedef 
enum _VxReferenceType
    {
        VxReferenceTypeStrong	= 0,
        VxReferenceTypeWeak	= 1
    } 	VxReferenceType;

typedef 
enum _VxScriptTags
    {
        VxScriptTagsArabic	= 1634885986,
        VxScriptTagsArmenian	= 1634889070,
        VxScriptTagsBalinese	= 1650551913,
        VxScriptTagsBengali	= 1650814567,
        VxScriptTagsBengali_v2	= 1651402546,
        VxScriptTagsBopomofo	= 1651470447,
        VxScriptTagsBraille	= 1651663209,
        VxScriptTagsBuginese	= 1651861353,
        VxScriptTagsBuhid	= 1651861604,
        VxScriptTagsByzantineMusic	= 1652128365,
        VxScriptTagsCanadianSyllabics	= 1667329651,
        VxScriptTagsCherokee	= 1667786098,
        VxScriptTagsCJKIdeographic	= 1751215721,
        VxScriptTagsCoptic	= 1668247668,
        VxScriptTagsCypriotSyllabary	= 1668313716,
        VxScriptTagsCyrillic	= 1668903532,
        VxScriptTagsDefault	= 1145457748,
        VxScriptTagsDeseret	= 1685287540,
        VxScriptTagsDevanagari	= 1684371041,
        VxScriptTagsDevanagari_v2	= 1684370994,
        VxScriptTagsEthiopic	= 1702127721,
        VxScriptTagsGeorgian	= 1734700914,
        VxScriptTagsGlagolitic	= 1735156071,
        VxScriptTagsGothic	= 1735357544,
        VxScriptTagsGreek	= 1735550315,
        VxScriptTagsGujarati	= 1735748210,
        VxScriptTagsGujarati_v2	= 1735029298,
        VxScriptTagsGurmukhi	= 1735750261,
        VxScriptTagsGurmukhi_v2	= 1735750194,
        VxScriptTagsHangulJamo	= 1784769903,
        VxScriptTagsHangul	= 1751215719,
        VxScriptTagsHanunoo	= 1751215727,
        VxScriptTagsHebrew	= 1751474802,
        VxScriptTagsHiragana	= 1801547361,
        VxScriptTagsJavanese	= 1784772193,
        VxScriptTagsKannada	= 1802396769,
        VxScriptTagsKannada_v2	= 1802396722,
        VxScriptTagsKatakana	= 1801547361,
        VxScriptTagsKharosthi	= 1802002802,
        VxScriptTagsKhmer	= 1802005874,
        VxScriptTagsLao	= 1818324768,
        VxScriptTagsLatin	= 1818326126,
        VxScriptTagsLimbu	= 1818848610,
        VxScriptTagsLinearB	= 1818848866,
        VxScriptTagsMalayalam	= 1835825517,
        VxScriptTagsMalayalam_v2	= 1835822386,
        VxScriptTagsMathematicalAlphanumericSymbols	= 1835103336,
        VxScriptTagsMongolian	= 1836019303,
        VxScriptTagsMusicalSymbols	= 1836413795,
        VxScriptTagsMyanmar	= 1836674418,
        VxScriptTagsNko	= 1852534560,
        VxScriptTagsOgham	= 1869046125,
        VxScriptTagsOldItalic	= 1769234796,
        VxScriptTagsOldPersianCuneiform	= 2020631919,
        VxScriptTagsOriya	= 1869773153,
        VxScriptTagsOriya_v2	= 1869773106,
        VxScriptTagsOsmanya	= 1869835617,
        VxScriptTagsPhagspa	= 1885888871,
        VxScriptTagsPhoenician	= 1885892216,
        VxScriptTagsRunic	= 1920298610,
        VxScriptTagsShavian	= 1936220535,
        VxScriptTagsSinhala	= 1936289384,
        VxScriptTagsSumeroAkkadianCuneiform	= 2020832632,
        VxScriptTagsSylotiNagri	= 1937337455,
        VxScriptTagsSyriac	= 1937338979,
        VxScriptTagsTagalog	= 1952935015,
        VxScriptTagsTagbanwa	= 1952540514,
        VxScriptTagsTaiLe	= 1952541797,
        VxScriptTagsNewTaiLue	= 1952541813,
        VxScriptTagsTamil	= 1952542060,
        VxScriptTagsTamil_v2	= 1953328178,
        VxScriptTagsTelugu	= 1952803957,
        VxScriptTagsTelugu_v2	= 1952803890,
        VxScriptTagsThaana	= 1952997729,
        VxScriptTagsThai	= 1952997737,
        VxScriptTagsTibetan	= 1953063540,
        VxScriptTagsTifinagh	= 1952869991,
        VxScriptTagsUgariticCuneiform	= 1969709426,
        VxScriptTagsYi	= 2036932640
    } 	VxScriptTags;

typedef 
enum _VxLanguageTags
    {
        VxLanguageTagsAbaza	= 1094861088,
        VxLanguageTagsAbkhazian	= 1094863648,
        VxLanguageTagsAdyghe	= 1094998304,
        VxLanguageTagsAfrikaans	= 1095125792,
        VxLanguageTagsAfar	= 1095127584,
        VxLanguageTagsAgaw	= 1095194400,
        VxLanguageTagsAltai	= 1095521312,
        VxLanguageTagsAmharic	= 1095583776,
        VxLanguageTagsArabic	= 1095909664,
        VxLanguageTagsAari	= 1095911712,
        VxLanguageTagsArakanese	= 1095912224,
        VxLanguageTagsAssamese	= 1095978272,
        VxLanguageTagsAthapaskan	= 1096042528,
        VxLanguageTagsAvar	= 1096176160,
        VxLanguageTagsAwadhi	= 1096237344,
        VxLanguageTagsAymara	= 1096371488,
        VxLanguageTagsAzeri	= 1096434976,
        VxLanguageTagsBadaga	= 1111573536,
        VxLanguageTagsBaghelkhandi	= 1111574304,
        VxLanguageTagsBalkar	= 1111575584,
        VxLanguageTagsBaule	= 1111577888,
        VxLanguageTagsBerber	= 1111642656,
        VxLanguageTagsBench	= 1111705632,
        VxLanguageTagsBibleCree	= 1111708192,
        VxLanguageTagsBelarussian	= 1111837728,
        VxLanguageTagsBemba	= 1111837984,
        VxLanguageTagsBengali	= 1111838240,
        VxLanguageTagsBulgarian	= 1111970336,
        VxLanguageTagsBhili	= 1112033568,
        VxLanguageTagsBhojpuri	= 1112035104,
        VxLanguageTagsBikol	= 1112099616,
        VxLanguageTagsBilen	= 1112099872,
        VxLanguageTagsBlackfoot	= 1112229408,
        VxLanguageTagsBalochi	= 1112295712,
        VxLanguageTagsBalante	= 1112296992,
        VxLanguageTagsBalti	= 1112298528,
        VxLanguageTagsBambara	= 1112359456,
        VxLanguageTagsBamileke	= 1112362016,
        VxLanguageTagsBreton	= 1112687904,
        VxLanguageTagsBrahui	= 1112688672,
        VxLanguageTagsBrajBhasha	= 1112688928,
        VxLanguageTagsBurmese	= 1112689952,
        VxLanguageTagsBashkir	= 1112754208,
        VxLanguageTagsBeti	= 1112820000,
        VxLanguageTagsCatalan	= 1128354848,
        VxLanguageTagsCebuano	= 1128612384,
        VxLanguageTagsChechen	= 1128809760,
        VxLanguageTagsChahaGurage	= 1128810272,
        VxLanguageTagsChattisgarhi	= 1128810528,
        VxLanguageTagsChichewa	= 1128810784,
        VxLanguageTagsChukchi	= 1128811296,
        VxLanguageTagsChipewyan	= 1128812576,
        VxLanguageTagsCherokee	= 1128813088,
        VxLanguageTagsChuvash	= 1128813856,
        VxLanguageTagsComorian	= 1129140768,
        VxLanguageTagsCoptic	= 1129271328,
        VxLanguageTagsCree	= 1129465120,
        VxLanguageTagsCarrier	= 1129468448,
        VxLanguageTagsCrimeanTatar	= 1129468960,
        VxLanguageTagsChurchSlavonic	= 1129532448,
        VxLanguageTagsCzech	= 1129535776,
        VxLanguageTagsDanish	= 1145130528,
        VxLanguageTagsDargwa	= 1145131552,
        VxLanguageTagsWoodsCree	= 1145262624,
        VxLanguageTagsGerman	= 1145394464,
        VxLanguageTagsDefault	= 1684434036,
        VxLanguageTagsDogri	= 1145524768,
        VxLanguageTagsDivehi	= 1145656864,
        VxLanguageTagsDjerma	= 1145721376,
        VxLanguageTagsDangme	= 1145980704,
        VxLanguageTagsDinka	= 1145981728,
        VxLanguageTagsDungan	= 1146441248,
        VxLanguageTagsDzongkha	= 1146768928,
        VxLanguageTagsEbira	= 1161972000,
        VxLanguageTagsEasternCree	= 1162039840,
        VxLanguageTagsEdo	= 1162104608,
        VxLanguageTagsEfik	= 1162234144,
        VxLanguageTagsGreek	= 1162628128,
        VxLanguageTagsEnglish	= 1162757920,
        VxLanguageTagsErzya	= 1163024928,
        VxLanguageTagsSpanish	= 1163087904,
        VxLanguageTagsEstonian	= 1163151648,
        VxLanguageTagsBasque	= 1163219232,
        VxLanguageTagsEvenki	= 1163283232,
        VxLanguageTagsEven	= 1163284000,
        VxLanguageTagsEwe	= 1163347232,
        VxLanguageTagsFrenchAntillean	= 1178684960,
        VxLanguageTagsFarsi	= 1178685984,
        VxLanguageTagsFinnish	= 1179209248,
        VxLanguageTagsFijian	= 1179273504,
        VxLanguageTagsFlemish	= 1179403552,
        VxLanguageTagsForestNenets	= 1179534624,
        VxLanguageTagsFon	= 1179602464,
        VxLanguageTagsFaroese	= 1179603744,
        VxLanguageTagsFrench	= 1179795744,
        VxLanguageTagsFrisian	= 1179797792,
        VxLanguageTagsFriulian	= 1179798560,
        VxLanguageTagsFuta	= 1179926816,
        VxLanguageTagsFulani	= 1179995168,
        VxLanguageTagsGa	= 1195459616,
        VxLanguageTagsGaelic	= 1195459872,
        VxLanguageTagsGagauz	= 1195460384,
        VxLanguageTagsGalician	= 1195461664,
        VxLanguageTagsGarshuni	= 1195463200,
        VxLanguageTagsGarhwali	= 1195464480,
        VxLanguageTagsGeez	= 1195727392,
        VxLanguageTagsGilyak	= 1195985952,
        VxLanguageTagsGumuz	= 1196251680,
        VxLanguageTagsGondi	= 1196379680,
        VxLanguageTagsGreenlandic	= 1196576288,
        VxLanguageTagsGaro	= 1196576544,
        VxLanguageTagsGuarani	= 1196769568,
        VxLanguageTagsGujarati	= 1196771872,
        VxLanguageTagsHaitian	= 1212238112,
        VxLanguageTagsHalam	= 1212238880,
        VxLanguageTagsHarauti	= 1212240416,
        VxLanguageTagsHausa	= 1212241184,
        VxLanguageTagsHawaiin	= 1212241696,
        VxLanguageTagsHammerBanna	= 1212304928,
        VxLanguageTagsHiligaynon	= 1212763168,
        VxLanguageTagsHindi	= 1212763680,
        VxLanguageTagsHighMari	= 1213022496,
        VxLanguageTagsHindko	= 1213088800,
        VxLanguageTagsHo	= 1213145120,
        VxLanguageTagsHarari	= 1213352224,
        VxLanguageTagsCroatian	= 1213355552,
        VxLanguageTagsHungarian	= 1213550112,
        VxLanguageTagsArmenian	= 1213809952,
        VxLanguageTagsIgbo	= 1229082400,
        VxLanguageTagsIjo	= 1229606688,
        VxLanguageTagsIlokano	= 1229737760,
        VxLanguageTagsIndonesian	= 1229866016,
        VxLanguageTagsIngush	= 1229866784,
        VxLanguageTagsInuktitut	= 1229870368,
        VxLanguageTagsIrish	= 1230129440,
        VxLanguageTagsIrishTraditional	= 1230132256,
        VxLanguageTagsIcelandic	= 1230195744,
        VxLanguageTagsInariSami	= 1230196000,
        VxLanguageTagsItalian	= 1230258464,
        VxLanguageTagsHebrew	= 1230459424,
        VxLanguageTagsJavanese	= 1245795872,
        VxLanguageTagsYiddish	= 1246316832,
        VxLanguageTagsJapanese	= 1245793824,
        VxLanguageTagsJudezmo	= 1247101984,
        VxLanguageTagsJula	= 1247104032,
        VxLanguageTagsKabardian	= 1262567968,
        VxLanguageTagsKachchi	= 1262568224,
        VxLanguageTagsKalenjin	= 1262570528,
        VxLanguageTagsKannada	= 1262571040,
        VxLanguageTagsKarachay	= 1262572064,
        VxLanguageTagsGeorgian	= 1262572576,
        VxLanguageTagsKazakh	= 1262574112,
        VxLanguageTagsKebena	= 1262830112,
        VxLanguageTagsKhutsuriGeorgian	= 1262961952,
        VxLanguageTagsKhakass	= 1263026464,
        VxLanguageTagsKhantyKazim	= 1263029024,
        VxLanguageTagsKhmer	= 1263029536,
        VxLanguageTagsKhantyShurishkar	= 1263031072,
        VxLanguageTagsKhantyVakhi	= 1263031840,
        VxLanguageTagsKhowar	= 1263032096,
        VxLanguageTagsKikuyu	= 1263094560,
        VxLanguageTagsKirghiz	= 1263096352,
        VxLanguageTagsKisii	= 1263096608,
        VxLanguageTagsKokni	= 1263226400,
        VxLanguageTagsKalmyk	= 1263291680,
        VxLanguageTagsKamba	= 1263354400,
        VxLanguageTagsKumaoni	= 1263357472,
        VxLanguageTagsKomo	= 1263357728,
        VxLanguageTagsKomso	= 1263358752,
        VxLanguageTagsKanuri	= 1263424032,
        VxLanguageTagsKodagu	= 1263485984,
        VxLanguageTagsKoreanOldHangul	= 1263487008,
        VxLanguageTagsKonkani	= 1263487776,
        VxLanguageTagsKikongo	= 1263488544,
        VxLanguageTagsKomiPermyak	= 1263489056,
        VxLanguageTagsKorean	= 1263489568,
        VxLanguageTagsKomiZyrian	= 1263491616,
        VxLanguageTagsKpelle	= 1263553568,
        VxLanguageTagsKrio	= 1263683872,
        VxLanguageTagsKarakalpak	= 1263684384,
        VxLanguageTagsKarelian	= 1263684640,
        VxLanguageTagsKaraim	= 1263684896,
        VxLanguageTagsKaren	= 1263685152,
        VxLanguageTagsKoorete	= 1263686688,
        VxLanguageTagsKashmiri	= 1263749152,
        VxLanguageTagsKhasi	= 1263749408,
        VxLanguageTagsKildinSami	= 1263750432,
        VxLanguageTagsKui	= 1263880480,
        VxLanguageTagsKulvi	= 1263881248,
        VxLanguageTagsKumyk	= 1263881504,
        VxLanguageTagsKurdish	= 1263882784,
        VxLanguageTagsKurukh	= 1263883552,
        VxLanguageTagsKuy	= 1263884576,
        VxLanguageTagsKoryak	= 1264143136,
        VxLanguageTagsLadin	= 1279345696,
        VxLanguageTagsLahuli	= 1279346720,
        VxLanguageTagsLak	= 1279347488,
        VxLanguageTagsLambani	= 1279348000,
        VxLanguageTagsLao	= 1279348512,
        VxLanguageTagsLatin	= 1279349792,
        VxLanguageTagsLaz	= 1279351328,
        VxLanguageTagsLCree	= 1279480352,
        VxLanguageTagsLadakhi	= 1279544096,
        VxLanguageTagsLezgi	= 1279613472,
        VxLanguageTagsLingala	= 1279872544,
        VxLanguageTagsLowMari	= 1280131360,
        VxLanguageTagsLimbu	= 1280131616,
        VxLanguageTagsLomwe	= 1280136992,
        VxLanguageTagsLowerSorbian	= 1280524832,
        VxLanguageTagsLuleSami	= 1280527648,
        VxLanguageTagsLithuanian	= 1280591904,
        VxLanguageTagsLuba	= 1280655904,
        VxLanguageTagsLuganda	= 1280657184,
        VxLanguageTagsLuhya	= 1280657440,
        VxLanguageTagsLuo	= 1280659232,
        VxLanguageTagsLatvian	= 1280723232,
        VxLanguageTagsMajang	= 1296124448,
        VxLanguageTagsMakua	= 1296124704,
        VxLanguageTagsMalayalamTraditional	= 1296124960,
        VxLanguageTagsMansi	= 1296125472,
        VxLanguageTagsMarathi	= 1296126496,
        VxLanguageTagsMarwari	= 1296127776,
        VxLanguageTagsMbundu	= 1296191008,
        VxLanguageTagsManchu	= 1296255008,
        VxLanguageTagsMooseCree	= 1296257568,
        VxLanguageTagsMende	= 1296319776,
        VxLanguageTagsMeen	= 1296387616,
        VxLanguageTagsMizo	= 1296652832,
        VxLanguageTagsMacedonian	= 1296778272,
        VxLanguageTagsMale	= 1296844064,
        VxLanguageTagsMalagasy	= 1296844576,
        VxLanguageTagsMalinke	= 1296846368,
        VxLanguageTagsMalayalamReformed	= 1296847392,
        VxLanguageTagsMalay	= 1296849184,
        VxLanguageTagsMandinka	= 1296974880,
        VxLanguageTagsMongolian	= 1296975648,
        VxLanguageTagsManipuri	= 1296976160,
        VxLanguageTagsManinka	= 1296976672,
        VxLanguageTagsManxGaelic	= 1296980000,
        VxLanguageTagsMoksha	= 1297042208,
        VxLanguageTagsMoldavian	= 1297042464,
        VxLanguageTagsMon	= 1297042976,
        VxLanguageTagsMoroccan	= 1297044000,
        VxLanguageTagsMaori	= 1297238304,
        VxLanguageTagsMaithili	= 1297369120,
        VxLanguageTagsMaltese	= 1297371936,
        VxLanguageTagsMundari	= 1297436192,
        VxLanguageTagsNagaAssamese	= 1312900896,
        VxLanguageTagsNanai	= 1312902688,
        VxLanguageTagsNaskapi	= 1312903968,
        VxLanguageTagsNCree	= 1313034784,
        VxLanguageTagsNdebele	= 1313096224,
        VxLanguageTagsNdonga	= 1313097504,
        VxLanguageTagsNepali	= 1313165344,
        VxLanguageTagsNewari	= 1313167136,
        VxLanguageTagsNorwayHouseCree	= 1313358624,
        VxLanguageTagsNisi	= 1313428256,
        VxLanguageTagsNiuean	= 1313428768,
        VxLanguageTagsNkole	= 1313557536,
        VxLanguageTagsNko	= 1313550368,
        VxLanguageTagsDutch	= 1313621024,
        VxLanguageTagsNogai	= 1313818400,
        VxLanguageTagsNorwegian	= 1313821216,
        VxLanguageTagsNorthernSami	= 1314082080,
        VxLanguageTagsNorthernTai	= 1314144544,
        VxLanguageTagsEsperanto	= 1314148128,
        VxLanguageTagsNynorsk	= 1314475552,
        VxLanguageTagsOjiCree	= 1329812000,
        VxLanguageTagsOjibway	= 1330266656,
        VxLanguageTagsOriya	= 1330792736,
        VxLanguageTagsOromo	= 1330794272,
        VxLanguageTagsOssetian	= 1330860832,
        VxLanguageTagsPalestinianAramaic	= 1346453792,
        VxLanguageTagsPali	= 1346456608,
        VxLanguageTagsPunjabi	= 1346457120,
        VxLanguageTagsPalpa	= 1346457632,
        VxLanguageTagsPashto	= 1346458400,
        VxLanguageTagsPolytonicGreek	= 1346851360,
        VxLanguageTagsPilipino	= 1346980896,
        VxLanguageTagsPalaung	= 1347176224,
        VxLanguageTagsPolish	= 1347177248,
        VxLanguageTagsProvencal	= 1347571488,
        VxLanguageTagsPortuguese	= 1347700512,
        VxLanguageTagsChin	= 1363758624,
        VxLanguageTagsRajasthani	= 1380010528,
        VxLanguageTagsRCree	= 1380143648,
        VxLanguageTagsRussianBuriat	= 1380078880,
        VxLanguageTagsRiang	= 1380532512,
        VxLanguageTagsRhaetoRomanic	= 1380799264,
        VxLanguageTagsRomanian	= 1380928800,
        VxLanguageTagsRomany	= 1380931872,
        VxLanguageTagsRusyn	= 1381194016,
        VxLanguageTagsRuanda	= 1381318944,
        VxLanguageTagsRussian	= 1381323552,
        VxLanguageTagsSadri	= 1396786208,
        VxLanguageTagsSanskrit	= 1396788768,
        VxLanguageTagsSantali	= 1396790304,
        VxLanguageTagsSayisi	= 1396791584,
        VxLanguageTagsSekota	= 1397050144,
        VxLanguageTagsSelkup	= 1397050400,
        VxLanguageTagsSango	= 1397182240,
        VxLanguageTagsShan	= 1397247520,
        VxLanguageTagsSibe	= 1397309984,
        VxLanguageTagsSidamo	= 1397310496,
        VxLanguageTagsSilteGurage	= 1397311264,
        VxLanguageTagsSkoltSami	= 1397445408,
        VxLanguageTagsSlovak	= 1397446944,
        VxLanguageTagsSlavey	= 1397506336,
        VxLanguageTagsSlovenian	= 1397511712,
        VxLanguageTagsSomali	= 1397574688,
        VxLanguageTagsSamoan	= 1397575456,
        VxLanguageTagsSena	= 1397637408,
        VxLanguageTagsSindhi	= 1397638176,
        VxLanguageTagsSinhalese	= 1397639200,
        VxLanguageTagsSoninke	= 1397639968,
        VxLanguageTagsSodoGurage	= 1397704480,
        VxLanguageTagsSotho	= 1397707808,
        VxLanguageTagsAlbanian	= 1397836064,
        VxLanguageTagsSerbian	= 1397899808,
        VxLanguageTagsSaraiki	= 1397902112,
        VxLanguageTagsSerer	= 1397903904,
        VxLanguageTagsSouthSlavey	= 1397967904,
        VxLanguageTagsSouthernSami	= 1397968160,
        VxLanguageTagsSuri	= 1398100512,
        VxLanguageTagsSvan	= 1398161696,
        VxLanguageTagsSwedish	= 1398162720,
        VxLanguageTagsSwadayaAramaic	= 1398227232,
        VxLanguageTagsSwahili	= 1398229792,
        VxLanguageTagsSwazi	= 1398233632,
        VxLanguageTagsSutu	= 1398297632,
        VxLanguageTagsSyriac	= 1398362656,
        VxLanguageTagsTabasaran	= 1413562912,
        VxLanguageTagsTajiki	= 1413564960,
        VxLanguageTagsTamil	= 1413565728,
        VxLanguageTagsTatar	= 1413567520,
        VxLanguageTagsTHCree	= 1413698080,
        VxLanguageTagsTelugu	= 1413827616,
        VxLanguageTagsTongan	= 1413959200,
        VxLanguageTagsTigre	= 1413960224,
        VxLanguageTagsTigrinya	= 1413962016,
        VxLanguageTagsThai	= 1414021408,
        VxLanguageTagsTahitian	= 1414026272,
        VxLanguageTagsTibetan	= 1414087200,
        VxLanguageTagsTurkmen	= 1414221088,
        VxLanguageTagsTemne	= 1414352416,
        VxLanguageTagsTswana	= 1414414624,
        VxLanguageTagsTundraNenets	= 1414415648,
        VxLanguageTagsTonga	= 1414416160,
        VxLanguageTagsTodo	= 1414480928,
        VxLanguageTagsTurkish	= 1414679328,
        VxLanguageTagsTsonga	= 1414743840,
        VxLanguageTagsTuroyoAramaic	= 1414873376,
        VxLanguageTagsTulu	= 1414876192,
        VxLanguageTagsTuvin	= 1414878752,
        VxLanguageTagsTwi	= 1415006496,
        VxLanguageTagsUdmurt	= 1430539552,
        VxLanguageTagsUkrainian	= 1430999584,
        VxLanguageTagsUrdu	= 1431454752,
        VxLanguageTagsUpperSorbian	= 1431519776,
        VxLanguageTagsUyghur	= 1431914272,
        VxLanguageTagsUzbek	= 1431978528,
        VxLanguageTagsVenda	= 1447382560,
        VxLanguageTagsVietnamese	= 1447646240,
        VxLanguageTagsWa	= 1463885856,
        VxLanguageTagsWagdi	= 1463895840,
        VxLanguageTagsWestCree	= 1464029728,
        VxLanguageTagsWelsh	= 1464159264,
        VxLanguageTagsWolof	= 1464616480,
        VxLanguageTagsTaiLue	= 1480737824,
        VxLanguageTagsXhosa	= 1481134880,
        VxLanguageTagsYakut	= 1497451296,
        VxLanguageTagsYoruba	= 1497514272,
        VxLanguageTagsYCree	= 1497584160,
        VxLanguageTagsYiClassic	= 1497973536,
        VxLanguageTagsYiModern	= 1497976096,
        VxLanguageTagsChineseHongKong	= 1514686496,
        VxLanguageTagsChinesePhonetic	= 1514688544,
        VxLanguageTagsChineseSimplified	= 1514689312,
        VxLanguageTagsChineseTraditional	= 1514689568,
        VxLanguageTagsZande	= 1515078688,
        VxLanguageTagsZulu	= 1515539488
    } 	VxLanguageTags;

typedef 
enum _VxTypographyAvailabilities
    {
        VxTypographyAvailabilitiesNone	= 0,
        VxTypographyAvailabilitiesAvailable	= 1,
        VxTypographyAvailabilitiesIdeoTypographyAvailable	= 2,
        VxTypographyAvailabilitiesFastTextTypographyAvailable	= 4,
        VxTypographyAvailabilitiesFastTextMajorLanguageLocalizedFormAvailable	= 8,
        VxTypographyAvailabilitiesFastTextExtraLanguageLocalizedFormAvailable	= 16
    } 	VxTypographyAvailabilities;

typedef 
enum _VxFontTechnology
    {
        VxFontTechnologyPostscriptOpenType	= 0,
        VxFontTechnologyTrueType	= 1,
        VxFontTechnologyTrueTypeCollection	= 2
    } 	VxFontTechnology;

typedef 
enum _VxTrueTypeTags
    {
        VxTrueTypeTagsCharToIndexMap	= 1668112752,
        VxTrueTypeTagsControlValue	= 1668707360,
        VxTrueTypeTagsBitmapData	= 1161970772,
        VxTrueTypeTagsBitmapLocation	= 1161972803,
        VxTrueTypeTagsBitmapScale	= 1161974595,
        VxTrueTypeTagsEditor0	= 1701082160,
        VxTrueTypeTagsEditor1	= 1701082161,
        VxTrueTypeTagsEncryption	= 1668446576,
        VxTrueTypeTagsFontHeader	= 1751474532,
        VxTrueTypeTagsFontProgram	= 1718642541,
        VxTrueTypeTagsGridfitAndScanProc	= 1734439792,
        VxTrueTypeTagsGlyphDirectory	= 1734633842,
        VxTrueTypeTagsGlyphData	= 1735162214,
        VxTrueTypeTagsHoriDeviceMetrics	= 1751412088,
        VxTrueTypeTagsHoriHeader	= 1751672161,
        VxTrueTypeTagsHorizontalMetrics	= 1752003704,
        VxTrueTypeTagsIndexToLoc	= 1819239265,
        VxTrueTypeTagsKerning	= 1801810542,
        VxTrueTypeTagsLinearThreshold	= 1280594760,
        VxTrueTypeTagsMaxProfile	= 1835104368,
        VxTrueTypeTagsNamingTable	= 1851878757,
        VxTrueTypeTagsOS_2	= 1330851634,
        VxTrueTypeTagsPostscript	= 1886352244,
        VxTrueTypeTagsPreProgram	= 1886545264,
        VxTrueTypeTagsVertDeviceMetrics	= 1447316824,
        VxTrueTypeTagsVertHeader	= 1986553185,
        VxTrueTypeTagsVerticalMetrics	= 1986884728,
        VxTrueTypeTagsPCLT	= 1346587732,
        VxTrueTypeTagsTTO_GSUB	= 1196643650,
        VxTrueTypeTagsTTO_GPOS	= 1196445523,
        VxTrueTypeTagsTTO_GDEF	= 1195656518,
        VxTrueTypeTagsTTO_BASE	= 1111577413,
        VxTrueTypeTagsTTO_JSTF	= 1246975046,
        VxTrueTypeTagsOTTO	= 1330926671,
        VxTrueTypeTagsTTC_TTCF	= 1953784678
    } 	VxTrueTypeTags;

typedef 
enum _VxHitResult
    {
        VxHitResultHit	= 0,
        VxHitResultLeft	= 1,
        VxHitResultRight	= 2,
        VxHitResultInFront	= 3,
        VxHitResultBehind	= 4
    } 	VxHitResult;

typedef 
enum _VxDrawingFlags
    {
        VxDrawingFlagsPolyline	= 0,
        VxDrawingFlagsFitToCurve	= 1,
        VxDrawingFlagsSubtractiveTransparency	= 2,
        VxDrawingFlagsIgnorePressure	= 4,
        VxDrawingFlagsAntiAliased	= 16,
        VxDrawingFlagsIgnoreRotation	= 32,
        VxDrawingFlagsIgnoreAngle	= 64
    } 	VxDrawingFlags;

typedef 
enum _VxPersistenceFormat
    {
        VxPersistenceFormatInkSerializedFormat	= 0,
        VxPersistenceFormatGif	= 1
    } 	VxPersistenceFormat;

typedef 
enum _VxCompressionMode
    {
        VxCompressionModeCompressed	= 0,
        VxCompressionModeNoCompression	= 2
    } 	VxCompressionMode;

typedef 
enum _VxOriginalISFIdIndex
    {
        VxOriginalISFIdIndexX	= 0,
        VxOriginalISFIdIndexY	= 1,
        VxOriginalISFIdIndexZ	= 2,
        VxOriginalISFIdIndexPacketStatus	= 3,
        VxOriginalISFIdIndexTimerTick	= 4,
        VxOriginalISFIdIndexSerialNumber	= 5,
        VxOriginalISFIdIndexNormalPressure	= 6,
        VxOriginalISFIdIndexTangentPressure	= 7,
        VxOriginalISFIdIndexButtonPressure	= 8,
        VxOriginalISFIdIndexXTiltOrientation	= 9,
        VxOriginalISFIdIndexYTiltOrientation	= 10,
        VxOriginalISFIdIndexAzimuthOrientation	= 11,
        VxOriginalISFIdIndexAltitudeOrientation	= 12,
        VxOriginalISFIdIndexTwistOrientation	= 13,
        VxOriginalISFIdIndexPitchRotation	= 14,
        VxOriginalISFIdIndexRollRotation	= 15,
        VxOriginalISFIdIndexYawRotation	= 16,
        VxOriginalISFIdIndexPenStyle	= 17,
        VxOriginalISFIdIndexColorRef	= 18,
        VxOriginalISFIdIndexStylusWidth	= 19,
        VxOriginalISFIdIndexStylusHeight	= 20,
        VxOriginalISFIdIndexPenTip	= 21,
        VxOriginalISFIdIndexDrawingFlags	= 22,
        VxOriginalISFIdIndexCursorId	= 23,
        VxOriginalISFIdIndexWordAlternates	= 24,
        VxOriginalISFIdIndexCharAlternates	= 25,
        VxOriginalISFIdIndexInkMetrics	= 26,
        VxOriginalISFIdIndexGuideStructure	= 27,
        VxOriginalISFIdIndexTimestamp	= 28,
        VxOriginalISFIdIndexLanguage	= 29,
        VxOriginalISFIdIndexTransparency	= 30,
        VxOriginalISFIdIndexCurveFittingError	= 31,
        VxOriginalISFIdIndexRecoLattice	= 32,
        VxOriginalISFIdIndexCursorDown	= 33,
        VxOriginalISFIdIndexSecondaryTipSwitch	= 34,
        VxOriginalISFIdIndexBarrelDown	= 35,
        VxOriginalISFIdIndexTabletPick	= 36,
        VxOriginalISFIdIndexRasterOperation	= 37,
        VxOriginalISFIdIndexMAXIMUM	= 37
    } 	VxOriginalISFIdIndex;

typedef 
enum _VxKnownTagIndex
    {
        VxKnownTagIndexUnknown	= 0,
        VxKnownTagIndexInkSpaceRectangle	= 0,
        VxKnownTagIndexGuidTable	= 1,
        VxKnownTagIndexDrawingAttributesTable	= 2,
        VxKnownTagIndexDrawingAttributesBlock	= 3,
        VxKnownTagIndexStrokeDescriptorTable	= 4,
        VxKnownTagIndexStrokeDescriptorBlock	= 5,
        VxKnownTagIndexButtons	= 6,
        VxKnownTagIndexNoX	= 7,
        VxKnownTagIndexNoY	= 8,
        VxKnownTagIndexDrawingAttributesTableIndex	= 9,
        VxKnownTagIndexStroke	= 10,
        VxKnownTagIndexStrokePropertyList	= 11,
        VxKnownTagIndexPointProperty	= 12,
        VxKnownTagIndexStrokeDescriptorTableIndex	= 13,
        VxKnownTagIndexCompressionHeader	= 14,
        VxKnownTagIndexTransformTable	= 15,
        VxKnownTagIndexTransform	= 16,
        VxKnownTagIndexTransformIsotropicScale	= 17,
        VxKnownTagIndexTransformAnisotropicScale	= 18,
        VxKnownTagIndexTransformRotate	= 19,
        VxKnownTagIndexTransformTranslate	= 20,
        VxKnownTagIndexTransformScaleAndTranslate	= 21,
        VxKnownTagIndexTransformQuad	= 22,
        VxKnownTagIndexTransformTableIndex	= 23,
        VxKnownTagIndexMetricTable	= 24,
        VxKnownTagIndexMetricBlock	= 25,
        VxKnownTagIndexMetricTableIndex	= 26,
        VxKnownTagIndexMantissa	= 27,
        VxKnownTagIndexPersistenceFormat	= 28,
        VxKnownTagIndexHimetricSize	= 29,
        VxKnownTagIndexStrokeIds	= 30,
        VxKnownTagIndexExtendedTransformTable	= 31
    } 	VxKnownTagIndex;

typedef 
enum _VxMetricEntryType
    {
        VxMetricEntryTypeOptional	= 0,
        VxMetricEntryTypeMust	= 1,
        VxMetricEntryTypeNever	= 2,
        VxMetricEntryTypeCustom	= 3
    } 	VxMetricEntryType;

typedef 
enum _VxSetType
    {
        VxSetTypeSubSet	= 0,
        VxSetTypeSuperSet	= 1
    } 	VxSetType;

typedef 
enum _VxGorillaEncodingType
    {
        VxGorillaEncodingTypeByte	= 0,
        VxGorillaEncodingTypeShort	= 1,
        VxGorillaEncodingTypeInt	= 2
    } 	VxGorillaEncodingType;

typedef 
enum _VxSerializationFloatType
    {
        VxSerializationFloatTypeUnknown	= 0,
        VxSerializationFloatTypeZero	= 1,
        VxSerializationFloatTypeOne	= 2,
        VxSerializationFloatTypeMinusOne	= 3,
        VxSerializationFloatTypeScaledInteger	= 4,
        VxSerializationFloatTypeDouble	= 5,
        VxSerializationFloatTypeOther	= 6
    } 	VxSerializationFloatType;

typedef 
enum _VxParserGeometryContextOpCodes
    {
        VxParserGeometryContextOpCodesBeginFigure	= 0,
        VxParserGeometryContextOpCodesLineTo	= 1,
        VxParserGeometryContextOpCodesQuadraticBezierTo	= 2,
        VxParserGeometryContextOpCodesBezierTo	= 3,
        VxParserGeometryContextOpCodesPolyLineTo	= 4,
        VxParserGeometryContextOpCodesPolyQuadraticBezierTo	= 5,
        VxParserGeometryContextOpCodesPolyBezierTo	= 6,
        VxParserGeometryContextOpCodesArcTo	= 7,
        VxParserGeometryContextOpCodesClosed	= 8,
        VxParserGeometryContextOpCodesFillRule	= 9
    } 	VxParserGeometryContextOpCodes;

typedef 
enum _VxFaceType
    {
        VxFaceTypeNone	= 0,
        VxFaceTypeFront	= 1,
        VxFaceTypeBack	= 2
    } 	VxFaceType;

typedef 
enum _VxGlyphFlags
    {
        VxGlyphFlagsUnassigned	= 0,
        VxGlyphFlagsBase	= 1,
        VxGlyphFlagsLigature	= 2,
        VxGlyphFlagsMark	= 3,
        VxGlyphFlagsComponent	= 4,
        VxGlyphFlagsUnresolved	= 7,
        VxGlyphFlagsGlyphTypeMask	= 7,
        VxGlyphFlagsSubstituted	= 16,
        VxGlyphFlagsPositioned	= 32,
        VxGlyphFlagsNotChanged	= 0,
        VxGlyphFlagsCursiveConnected	= 64,
        VxGlyphFlagsClusterStart	= 256,
        VxGlyphFlagsDiacritic	= 512,
        VxGlyphFlagsZeroWidth	= 1024,
        VxGlyphFlagsMissing	= 2048,
        VxGlyphFlagsInvalidBase	= 4096
    } 	VxGlyphFlags;

typedef 
enum _VxOpenTypeTags
    {
        VxOpenTypeTagsNull	= 0,
        VxOpenTypeTagsGSUB	= 1196643650,
        VxOpenTypeTagsGPOS	= 1196445523,
        VxOpenTypeTagsGDEF	= 1195656518,
        VxOpenTypeTagsBASE	= 1111577413,
        VxOpenTypeTagsname	= 1851878757,
        VxOpenTypeTagspost	= 1886352244,
        VxOpenTypeTagsdflt	= 1684434036,
        VxOpenTypeTagshead	= 1751474532,
        VxOpenTypeTagslocl	= 1819239276,
        VxOpenTypeTagsccmp	= 1667460464,
        VxOpenTypeTagsrlig	= 1919707495,
        VxOpenTypeTagsliga	= 1818847073,
        VxOpenTypeTagsclig	= 1668049255,
        VxOpenTypeTagspwid	= 1886873956,
        VxOpenTypeTagsinit	= 1768843636,
        VxOpenTypeTagsmedi	= 1835361385,
        VxOpenTypeTagsfina	= 1718185569,
        VxOpenTypeTagsisol	= 1769172844,
        VxOpenTypeTagscalt	= 1667329140,
        VxOpenTypeTagsnukt	= 1853188980,
        VxOpenTypeTagsakhn	= 1634429038,
        VxOpenTypeTagsrphf	= 1919969382,
        VxOpenTypeTagsblwf	= 1651275622,
        VxOpenTypeTagshalf	= 1751215206,
        VxOpenTypeTagsvatu	= 1986098293,
        VxOpenTypeTagspres	= 1886545267,
        VxOpenTypeTagsabvs	= 1633842803,
        VxOpenTypeTagsblws	= 1651275635,
        VxOpenTypeTagspsts	= 1886614643,
        VxOpenTypeTagshaln	= 1751215214,
        VxOpenTypeTagskern	= 1801810542,
        VxOpenTypeTagsmark	= 1835102827,
        VxOpenTypeTagsmkmk	= 1835756907,
        VxOpenTypeTagscurs	= 1668641395,
        VxOpenTypeTagsabvm	= 1633842797,
        VxOpenTypeTagsblwm	= 1651275629,
        VxOpenTypeTagsdist	= 1684632436,
        VxOpenTypeTagslatn	= 1818326126
    } 	VxOpenTypeTags;

typedef 
enum _VxTagInfoFlags
    {
        VxTagInfoFlagsSubstitution	= 1,
        VxTagInfoFlagsPositioning	= 2,
        VxTagInfoFlagsBoth	= 3,
        VxTagInfoFlagsNone	= 0
    } 	VxTagInfoFlags;

typedef 
enum _VxTextFlowDirection
    {
        VxTextFlowDirectionLTR	= 0,
        VxTextFlowDirectionRTL	= 1,
        VxTextFlowDirectionTTB	= 2,
        VxTextFlowDirectionBTT	= 3
    } 	VxTextFlowDirection;

typedef 
enum _VxOpenTypeLayoutResult
    {
        VxOpenTypeLayoutResultSuccess	= 0,
        VxOpenTypeLayoutResultInvalidParameter	= 1,
        VxOpenTypeLayoutResultTableNotFound	= 2,
        VxOpenTypeLayoutResultScriptNotFound	= 3,
        VxOpenTypeLayoutResultLangSysNotFound	= 4,
        VxOpenTypeLayoutResultBadFontTable	= 5,
        VxOpenTypeLayoutResultUnderConstruction	= 6
    } 	VxOpenTypeLayoutResult;

typedef 
enum _VxFlags
    {
        VxFlagsDirectionLeftToRight	= 0,
        VxFlagsDirectionRightToLeft	= 1,
        VxFlagsFirstStrongAsBaseDirection	= 2,
        VxFlagsPreviousStrongIsArabic	= 4,
        VxFlagsContinueAnalysis	= 8,
        VxFlagsIncompleteText	= 16,
        VxFlagsMaximumHint	= 32,
        VxFlagsIgnoreDirectionalControls	= 64,
        VxFlagsOverrideEuropeanNumberResolution	= 128
    } 	VxFlags;

typedef 
enum _VxStateMachineState
    {
        VxStateMachineStateS_L	= 0,
        VxStateMachineStateS_AL	= 1,
        VxStateMachineStateS_R	= 2,
        VxStateMachineStateS_AN	= 3,
        VxStateMachineStateS_EN	= 4,
        VxStateMachineStateS_ET	= 5,
        VxStateMachineStateS_ANfCS	= 6,
        VxStateMachineStateS_ENfCS	= 7,
        VxStateMachineStateS_N	= 8
    } 	VxStateMachineState;

typedef 
enum _VxStateMachineAction
    {
        VxStateMachineActionST_ST	= 0,
        VxStateMachineActionST_ET	= 1,
        VxStateMachineActionST_NUMSEP	= 2,
        VxStateMachineActionST_N	= 3,
        VxStateMachineActionSEP_ST	= 4,
        VxStateMachineActionCS_NUM	= 5,
        VxStateMachineActionSEP_ET	= 6,
        VxStateMachineActionSEP_NUMSEP	= 7,
        VxStateMachineActionSEP_N	= 8,
        VxStateMachineActionES_AN	= 9,
        VxStateMachineActionET_ET	= 10,
        VxStateMachineActionET_NUMSEP	= 11,
        VxStateMachineActionET_EN	= 12,
        VxStateMachineActionET_N	= 13,
        VxStateMachineActionNUM_NUMSEP	= 14,
        VxStateMachineActionNUM_NUM	= 15,
        VxStateMachineActionEN_L	= 16,
        VxStateMachineActionEN_AL	= 17,
        VxStateMachineActionEN_ET	= 18,
        VxStateMachineActionEN_N	= 19,
        VxStateMachineActionBN_ST	= 20,
        VxStateMachineActionNSM_ST	= 21,
        VxStateMachineActionNSM_ET	= 22,
        VxStateMachineActionN_ST	= 23,
        VxStateMachineActionN_ET	= 24
    } 	VxStateMachineAction;

typedef 
enum _VxStatusFlags
    {
        VxStatusFlagsNone	= 0,
        VxStatusFlagsIsDisposed	= 1,
        VxStatusFlagsHasOverflowed	= 2,
        VxStatusFlagsBoundingBoxComputed	= 4,
        VxStatusFlagsRightToLeft	= 8,
        VxStatusFlagsHasCollapsed	= 16,
        VxStatusFlagsKeepState	= 32,
        VxStatusFlagsIsTruncated	= 64,
        VxStatusFlagsIsJustified	= 128
    } 	VxStatusFlags;

typedef 
enum _VxCaretDirection
    {
        VxCaretDirectionForward	= 0,
        VxCaretDirectionBackward	= 1,
        VxCaretDirectionBackspace	= 2
    } 	VxCaretDirection;

typedef 
enum _VxPlsrun
    {
        VxPlsrunCloseAnchor	= 0,
        VxPlsrunReverse	= 1,
        VxPlsrunFakeLineBreak	= 2,
        VxPlsrunFormatAnchor	= 3,
        VxPlsrunHidden	= 4,
        VxPlsrunText	= 5,
        VxPlsrunInlineObject	= 6,
        VxPlsrunLineBreak	= 7,
        VxPlsrunParaBreak	= 8,
        VxPlsrunUndefined	= 0x80000000,
        VxPlsrunIsMarker	= 1073741824,
        VxPlsrunUseNewCharacterBuffer	= 536870912,
        VxPlsrunIsSymbol	= 268435456,
        VxPlsrunUnmaskAll	= 268435455
    } 	VxPlsrun;

typedef 
enum _VxLineFlags
    {
        VxLineFlagsNone	= 0,
        VxLineFlagsBreakClassWide	= 1,
        VxLineFlagsBreakClassStrict	= 2,
        VxLineFlagsBreakAlways	= 4,
        VxLineFlagsMinMax	= 8,
        VxLineFlagsKeepState	= 16
    } 	VxLineFlags;

typedef 
enum _VxLsEndRes
    {
        VxLsEndResendrNormal	= 0,
        VxLsEndResendrHyphenated	= 1,
        VxLsEndResendrEndPara	= 2,
        VxLsEndResendrAltPara	= 3,
        VxLsEndResendrSoftCR	= 4,
        VxLsEndResendrEndColumn	= 5,
        VxLsEndResendrEndSection	= 6,
        VxLsEndResendrEndPage	= 7,
        VxLsEndResendrEndParaSection	= 8,
        VxLsEndResendrStopped	= 9,
        VxLsEndResendrBeforeFillLineObject	= 10,
        VxLsEndResendrAfterFillLineObject	= 11,
        VxLsEndResendrMathUserRequiredBreak	= 12
    } 	VxLsEndRes;

typedef 
enum _VxLsBreakJust
    {
        VxLsBreakJustlsbrjBreakJustify	= 0,
        VxLsBreakJustlsbrjBreakWithCompJustify	= 1,
        VxLsBreakJustlsbrjBreakThenExpand	= 2,
        VxLsBreakJustlsbrjBreakOptimal	= 3,
        VxLsBreakJustlsbrjBreakThenSqueeze	= 4
    } 	VxLsBreakJust;

typedef 
enum _VxLsKJust
    {
        VxLsKJustlskjFullInterWord	= 0,
        VxLsKJustlskjFullInterLetterAligned	= 1,
        VxLsKJustlskjFullScaled	= 2,
        VxLsKJustlskjFullGlyphs	= 3,
        VxLsKJustlskjFullMixed	= 4,
        VxLsKJustlskjSnapGrid	= 5
    } 	VxLsKJust;

typedef 
enum _VxLsKAlign
    {
        VxLsKAlignlskalLeft	= 0,
        VxLsKAlignlskalCentered	= 1,
        VxLsKAlignlskalRight	= 2
    } 	VxLsKAlign;

typedef 
enum _VxLsKEOP
    {
        VxLsKEOPlskeopEndPara1	= 0,
        VxLsKEOPlskeopEndPara2	= 1,
        VxLsKEOPlskeopEndPara12	= 2,
        VxLsKEOPlskeopEndParaAlt	= 3
    } 	VxLsKEOP;

typedef 
enum _VxLsKTab
    {
        VxLsKTablsktLeft	= 0,
        VxLsKTablsktCenter	= 1,
        VxLsKTablsktRight	= 2,
        VxLsKTablsktDecimal	= 3,
        VxLsKTablsktChar	= 4
    } 	VxLsKTab;

typedef 
enum _VxLsTFlow
    {
        VxLsTFlowlstflowDefault	= 0,
        VxLsTFlowlstflowES	= 0,
        VxLsTFlowlstflowEN	= 1,
        VxLsTFlowlstflowSE	= 2,
        VxLsTFlowlstflowSW	= 3,
        VxLsTFlowlstflowWS	= 4,
        VxLsTFlowlstflowWN	= 5,
        VxLsTFlowlstflowNE	= 6,
        VxLsTFlowlstflowNW	= 7
    } 	VxLsTFlow;

typedef 
enum _VxLsBrkCond
    {
        VxLsBrkCondNever	= 0,
        VxLsBrkCondCan	= 1,
        VxLsBrkCondPlease	= 2,
        VxLsBrkCondMust	= 3
    } 	VxLsBrkCond;

typedef 
enum _VxLsDevice
    {
        VxLsDevicePresentation	= 0,
        VxLsDeviceReference	= 1
    } 	VxLsDevice;

typedef 
enum _VxLsExpType
    {
        VxLsExpTypeNone	= 0,
        VxLsExpTypeAddWhiteSpace	= 1,
        VxLsExpTypeAddInkContinuous	= 2,
        VxLsExpTypeAddInkDiscrete	= 3
    } 	VxLsExpType;

typedef 
enum _VxLsKysr
    {
        VxLsKysrkysrNormal	= 0,
        VxLsKysrkysrAddBefore	= 1,
        VxLsKysrkysrChangeBefore	= 2,
        VxLsKysrkysrDeleteBefore	= 3,
        VxLsKysrkysrChangeAfter	= 4,
        VxLsKysrkysrDelAndChange	= 5,
        VxLsKysrkysrAddBeforeChangeAfter	= 6
    } 	VxLsKysr;

typedef 
enum _VxLsHyphenQuality
    {
        VxLsHyphenQualitylshqExcellent	= 0,
        VxLsHyphenQualitylshqGood	= 1,
        VxLsHyphenQualitylshqFair	= 2,
        VxLsHyphenQualitylshqPoor	= 3,
        VxLsHyphenQualitylshqBad	= 4
    } 	VxLsHyphenQuality;

typedef 
enum _VxLsErr
    {
        VxLsErrNone	= 0,
        VxLsErrInvalidParameter	= -1,
        VxLsErrOutOfMemory	= -2,
        VxLsErrNullOutputParameter	= -3,
        VxLsErrInvalidContext	= -4,
        VxLsErrInvalidLine	= -5,
        VxLsErrInvalidDnode	= -6,
        VxLsErrInvalidDeviceResolution	= -7,
        VxLsErrInvalidRun	= -8,
        VxLsErrMismatchLineContext	= -9,
        VxLsErrContextInUse	= -10,
        VxLsErrDuplicateSpecialCharacter	= -11,
        VxLsErrInvalidAutonumRun	= -12,
        VxLsErrFormattingFunctionDisabled	= -13,
        VxLsErrUnfinishedDnode	= -14,
        VxLsErrInvalidDnodeType	= -15,
        VxLsErrInvalidPenDnode	= -16,
        VxLsErrInvalidNonPenDnode	= -17,
        VxLsErrInvalidBaselinePenDnode	= -18,
        VxLsErrInvalidFormatterResult	= -19,
        VxLsErrInvalidObjectIdFetched	= -20,
        VxLsErrInvalidDcpFetched	= -21,
        VxLsErrInvalidCpContentFetched	= -22,
        VxLsErrInvalidBookmarkType	= -23,
        VxLsErrSetDocDisabled	= -24,
        VxLsErrFiniFunctionDisabled	= -25,
        VxLsErrCurrentDnodeIsNotTab	= -26,
        VxLsErrPendingTabIsNotResolved	= -27,
        VxLsErrWrongFiniFunction	= -28,
        VxLsErrInvalidBreakingClass	= -29,
        VxLsErrBreakingTableNotSet	= -30,
        VxLsErrInvalidModWidthClass	= -31,
        VxLsErrModWidthPairsNotSet	= -32,
        VxLsErrWrongTruncationPoint	= -33,
        VxLsErrWrongBreak	= -34,
        VxLsErrDupInvalid	= -35,
        VxLsErrRubyInvalidVersion	= -36,
        VxLsErrTatenakayokoInvalidVersion	= -37,
        VxLsErrWarichuInvalidVersion	= -38,
        VxLsErrWarichuInvalidData	= -39,
        VxLsErrCreateSublineDisabled	= -40,
        VxLsErrCurrentSublineDoesNotExist	= -41,
        VxLsErrCpOutsideSubline	= -42,
        VxLsErrHihInvalidVersion	= -43,
        VxLsErrInsufficientQueryDepth	= -44,
        VxLsErrInvalidBreakRecord	= -45,
        VxLsErrInvalidPap	= -46,
        VxLsErrContradictoryQueryInput	= -47,
        VxLsErrLineIsNotActive	= -48,
        VxLsErrTooLongParagraph	= -49,
        VxLsErrTooManyCharsToGlyph	= -50,
        VxLsErrWrongHyphenationPosition	= -51,
        VxLsErrTooManyPriorities	= -52,
        VxLsErrWrongGivenCp	= -53,
        VxLsErrWrongCpFirstForGetBreaks	= -54,
        VxLsErrWrongJustTypeForGetBreaks	= -55,
        VxLsErrWrongJustTypeForCreateLineGivenCp	= -56,
        VxLsErrTooLongGlyphContext	= -57,
        VxLsErrInvalidCharToGlyphMapping	= -58,
        VxLsErrInvalidMathUsage	= -59,
        VxLsErrInconsistentChp	= -60,
        VxLsErrStoppedInSubline	= -61,
        VxLsErrPenPositionCouldNotBeUsed	= -62,
        VxLsErrDebugFlagsInShip	= -63,
        VxLsErrInvalidOrderTabs	= -64,
        VxLsErrOutputArrayTooSmall	= -110,
        VxLsErrSystemRestrictionsExceeded	= -100,
        VxLsErrLsInternalError	= -1000,
        VxLsErrNotImplemented	= -10000,
        VxLsErrClientAbort	= -100000
    } 	VxLsErr;

typedef 
enum _VxNumberContext
    {
        VxNumberContextUnknown	= 0,
        VxNumberContextArabic	= 1,
        VxNumberContextEuropean	= 2,
        VxNumberContextMask	= 3,
        VxNumberContextFromLetter	= 4,
        VxNumberContextFromFlowDirection	= 8
    } 	VxNumberContext;

typedef 
enum _VxDirectionClass
    {
        VxDirectionClassLeft	= 0,
        VxDirectionClassRight	= 1,
        VxDirectionClassArabicNumber	= 2,
        VxDirectionClassEuropeanNumber	= 3,
        VxDirectionClassArabicLetter	= 4,
        VxDirectionClassEuropeanSeparator	= 5,
        VxDirectionClassCommonSeparator	= 6,
        VxDirectionClassEuropeanTerminator	= 7,
        VxDirectionClassNonSpacingMark	= 8,
        VxDirectionClassBoundaryNeutral	= 9,
        VxDirectionClassGenericNeutral	= 10,
        VxDirectionClassParagraphSeparator	= 11,
        VxDirectionClassLeftToRightEmbedding	= 12,
        VxDirectionClassLeftToRightOverride	= 13,
        VxDirectionClassRightToLeftEmbedding	= 14,
        VxDirectionClassRightToLeftOverride	= 15,
        VxDirectionClassPopDirectionalFormat	= 16,
        VxDirectionClassSegmentSeparator	= 17,
        VxDirectionClassWhiteSpace	= 18,
        VxDirectionClassOtherNeutral	= 19,
        VxDirectionClassClassInvalid	= 20,
        VxDirectionClassClassMax	= 21
    } 	VxDirectionClass;

typedef 
enum _VxItemClass
    {
        VxItemClassDigitClass	= 0,
        VxItemClassANClass	= 1,
        VxItemClassCSClass	= 2,
        VxItemClassESClass	= 3,
        VxItemClassETClass	= 4,
        VxItemClassStrongClass	= 5,
        VxItemClassWeakClass	= 6,
        VxItemClassSimpleMarkClass	= 7,
        VxItemClassComplexMarkClass	= 8,
        VxItemClassControlClass	= 9,
        VxItemClassJoinerClass	= 10,
        VxItemClassNumberSignClass	= 11,
        VxItemClassMaxClass	= 12
    } 	VxItemClass;

typedef 
enum _VxScriptID
    {
        VxScriptIDDefault	= 0,
        VxScriptIDArabic	= 1,
        VxScriptIDArmenian	= 2,
        VxScriptIDBengali	= 3,
        VxScriptIDBopomofo	= 4,
        VxScriptIDBraille	= 5,
        VxScriptIDBuginese	= 6,
        VxScriptIDBuhid	= 7,
        VxScriptIDCanadianSyllabics	= 8,
        VxScriptIDCherokee	= 9,
        VxScriptIDCJKIdeographic	= 10,
        VxScriptIDCoptic	= 11,
        VxScriptIDCypriotSyllabary	= 12,
        VxScriptIDCyrillic	= 13,
        VxScriptIDDeseret	= 14,
        VxScriptIDDevanagari	= 15,
        VxScriptIDEthiopic	= 16,
        VxScriptIDGeorgian	= 17,
        VxScriptIDGlagolitic	= 18,
        VxScriptIDGothic	= 19,
        VxScriptIDGreek	= 20,
        VxScriptIDGujarati	= 21,
        VxScriptIDGurmukhi	= 22,
        VxScriptIDHangul	= 23,
        VxScriptIDHanunoo	= 24,
        VxScriptIDHebrew	= 25,
        VxScriptIDKannada	= 26,
        VxScriptIDKana	= 27,
        VxScriptIDKharoshthi	= 28,
        VxScriptIDKhmer	= 29,
        VxScriptIDLao	= 30,
        VxScriptIDLatin	= 31,
        VxScriptIDLimbu	= 32,
        VxScriptIDLinearB	= 33,
        VxScriptIDMalayalam	= 34,
        VxScriptIDMathematicalAlphanumericSymbols	= 35,
        VxScriptIDMongolian	= 36,
        VxScriptIDMusicalSymbols	= 37,
        VxScriptIDMyanmar	= 38,
        VxScriptIDNewTaiLue	= 39,
        VxScriptIDOgham	= 40,
        VxScriptIDOldItalic	= 41,
        VxScriptIDOldPersianCuneiform	= 42,
        VxScriptIDOriya	= 43,
        VxScriptIDOsmanya	= 44,
        VxScriptIDRunic	= 45,
        VxScriptIDShavian	= 46,
        VxScriptIDSinhala	= 47,
        VxScriptIDSylotiNagri	= 48,
        VxScriptIDSyriac	= 49,
        VxScriptIDTagalog	= 50,
        VxScriptIDTagbanwa	= 51,
        VxScriptIDTaiLe	= 52,
        VxScriptIDTamil	= 53,
        VxScriptIDTelugu	= 54,
        VxScriptIDThaana	= 55,
        VxScriptIDThai	= 56,
        VxScriptIDTibetan	= 57,
        VxScriptIDTifinagh	= 58,
        VxScriptIDUgariticCuneiform	= 59,
        VxScriptIDYi	= 60,
        VxScriptIDDigit	= 61,
        VxScriptIDControl	= 62,
        VxScriptIDMirror	= 63,
        VxScriptIDMax	= 64
    } 	VxScriptID;

typedef 
enum _VxSynchronizedInputStates
    {
        VxSynchronizedInputStatesNoOpportunity	= 1,
        VxSynchronizedInputStatesHadOpportunity	= 2,
        VxSynchronizedInputStatesHandled	= 4,
        VxSynchronizedInputStatesDiscarded	= 8
    } 	VxSynchronizedInputStates;

typedef 
enum _VxALT_BREAKS
    {
        VxALT_BREAKSALT_BREAKS_SAME	= 0,
        VxALT_BREAKSALT_BREAKS_UNIQUE	= 1,
        VxALT_BREAKSALT_BREAKS_FULL	= 2
    } 	VxALT_BREAKS;

typedef 
enum _VxDragAction
    {
        VxDragActionContinue	= 0,
        VxDragActionDrop	= 1,
        VxDragActionCancel	= 2
    } 	VxDragAction;

typedef 
enum _VxDragDropEffects
    {
        VxDragDropEffectsNone	= 0,
        VxDragDropEffectsCopy	= 1,
        VxDragDropEffectsMove	= 2,
        VxDragDropEffectsLink	= 4,
        VxDragDropEffectsScroll	= 0x80000000,
        VxDragDropEffectsAll	= -2147483645
    } 	VxDragDropEffects;

typedef 
enum _VxDurationType
    {
        VxDurationTypeAutomatic	= 0,
        VxDurationTypeTimeSpan	= 1,
        VxDurationTypeForever	= 2
    } 	VxDurationType;

typedef 
enum _VxCloneCommonType
    {
        VxCloneCommonTypeClone	= 0,
        VxCloneCommonTypeCloneCurrentValue	= 1,
        VxCloneCommonTypeGetAsFrozen	= 2,
        VxCloneCommonTypeGetCurrentValueAsFrozen	= 3
    } 	VxCloneCommonType;

typedef 
enum _VxDragDropKeyStates
    {
        VxDragDropKeyStatesNone	= 0,
        VxDragDropKeyStatesLeftMouseButton	= 1,
        VxDragDropKeyStatesRightMouseButton	= 2,
        VxDragDropKeyStatesShiftKey	= 4,
        VxDragDropKeyStatesControlKey	= 8,
        VxDragDropKeyStatesMiddleMouseButton	= 16,
        VxDragDropKeyStatesAltKey	= 32
    } 	VxDragDropKeyStates;

typedef 
enum _VxLocalizationCategory
    {
        VxLocalizationCategoryNone	= 0,
        VxLocalizationCategoryText	= 1,
        VxLocalizationCategoryTitle	= 2,
        VxLocalizationCategoryLabel	= 3,
        VxLocalizationCategoryButton	= 4,
        VxLocalizationCategoryCheckBox	= 5,
        VxLocalizationCategoryComboBox	= 6,
        VxLocalizationCategoryListBox	= 7,
        VxLocalizationCategoryMenu	= 8,
        VxLocalizationCategoryRadioButton	= 9,
        VxLocalizationCategoryToolTip	= 10,
        VxLocalizationCategoryHyperlink	= 11,
        VxLocalizationCategoryTextFlow	= 12,
        VxLocalizationCategoryXmlData	= 13,
        VxLocalizationCategoryFont	= 14,
        VxLocalizationCategoryInherit	= 15,
        VxLocalizationCategoryIgnore	= 16,
        VxLocalizationCategoryNeverLocalize	= 17
    } 	VxLocalizationCategory;

typedef 
enum _VxModifiability
    {
        VxModifiabilityUnmodifiable	= 0,
        VxModifiabilityModifiable	= 1,
        VxModifiabilityInherit	= 2
    } 	VxModifiability;

typedef 
enum _VxReadability
    {
        VxReadabilityUnreadable	= 0,
        VxReadabilityReadable	= 1,
        VxReadabilityInherit	= 2
    } 	VxReadability;

typedef 
enum _VxRoutingStrategy
    {
        VxRoutingStrategyTunnel	= 0,
        VxRoutingStrategyBubble	= 1,
        VxRoutingStrategyDirect	= 2
    } 	VxRoutingStrategy;

typedef 
enum _VxSizeToContent
    {
        VxSizeToContentManual	= 0,
        VxSizeToContentWidth	= 1,
        VxSizeToContentHeight	= 2,
        VxSizeToContentWidthAndHeight	= 3
    } 	VxSizeToContent;

typedef 
enum _VxBaselineAlignment
    {
        VxBaselineAlignmentTop	= 0,
        VxBaselineAlignmentCenter	= 1,
        VxBaselineAlignmentBottom	= 2,
        VxBaselineAlignmentBaseline	= 3,
        VxBaselineAlignmentTextTop	= 4,
        VxBaselineAlignmentTextBottom	= 5,
        VxBaselineAlignmentSubscript	= 6,
        VxBaselineAlignmentSuperscript	= 7
    } 	VxBaselineAlignment;

typedef 
enum _VxTextAlignment
    {
        VxTextAlignmentLeft	= 0,
        VxTextAlignmentRight	= 1,
        VxTextAlignmentCenter	= 2,
        VxTextAlignmentJustify	= 3
    } 	VxTextAlignment;

typedef 
enum _VxFlowDirection
    {
        VxFlowDirectionLeftToRight	= 0,
        VxFlowDirectionRightToLeft	= 1
    } 	VxFlowDirection;

typedef 
enum _VxLineBreakCondition
    {
        VxLineBreakConditionBreakDesired	= 0,
        VxLineBreakConditionBreakPossible	= 1,
        VxLineBreakConditionBreakRestrained	= 2,
        VxLineBreakConditionBreakAlways	= 3
    } 	VxLineBreakCondition;

typedef 
enum _VxTextMarkerStyle
    {
        VxTextMarkerStyleNone	= 0,
        VxTextMarkerStyleDisc	= 1,
        VxTextMarkerStyleCircle	= 2,
        VxTextMarkerStyleSquare	= 3,
        VxTextMarkerStyleBox	= 4,
        VxTextMarkerStyleLowerRoman	= 5,
        VxTextMarkerStyleUpperRoman	= 6,
        VxTextMarkerStyleLowerLatin	= 7,
        VxTextMarkerStyleUpperLatin	= 8,
        VxTextMarkerStyleDecimal	= 9
    } 	VxTextMarkerStyle;

typedef 
enum _VxTextWrapping
    {
        VxTextWrappingWrapWithOverflow	= 0,
        VxTextWrappingNoWrap	= 1,
        VxTextWrappingWrap	= 2
    } 	VxTextWrapping;

typedef 
enum _VxTextTrimming
    {
        VxTextTrimmingNone	= 0,
        VxTextTrimmingCharacterEllipsis	= 1,
        VxTextTrimmingWordEllipsis	= 2
    } 	VxTextTrimming;

typedef 
enum _VxFontVariants
    {
        VxFontVariantsNormal	= 0,
        VxFontVariantsSuperscript	= 1,
        VxFontVariantsSubscript	= 2,
        VxFontVariantsOrdinal	= 3,
        VxFontVariantsInferior	= 4,
        VxFontVariantsRuby	= 5
    } 	VxFontVariants;

typedef 
enum _VxFontCapitals
    {
        VxFontCapitalsNormal	= 0,
        VxFontCapitalsAllSmallCaps	= 1,
        VxFontCapitalsSmallCaps	= 2,
        VxFontCapitalsAllPetiteCaps	= 3,
        VxFontCapitalsPetiteCaps	= 4,
        VxFontCapitalsUnicase	= 5,
        VxFontCapitalsTitling	= 6
    } 	VxFontCapitals;

typedef 
enum _VxFontFraction
    {
        VxFontFractionNormal	= 0,
        VxFontFractionSlashed	= 1,
        VxFontFractionStacked	= 2
    } 	VxFontFraction;

typedef 
enum _VxFontNumeralStyle
    {
        VxFontNumeralStyleNormal	= 0,
        VxFontNumeralStyleLining	= 1,
        VxFontNumeralStyleOldStyle	= 2
    } 	VxFontNumeralStyle;

typedef 
enum _VxFontNumeralAlignment
    {
        VxFontNumeralAlignmentNormal	= 0,
        VxFontNumeralAlignmentProportional	= 1,
        VxFontNumeralAlignmentTabular	= 2
    } 	VxFontNumeralAlignment;

typedef 
enum _VxFontEastAsianWidths
    {
        VxFontEastAsianWidthsNormal	= 0,
        VxFontEastAsianWidthsProportional	= 1,
        VxFontEastAsianWidthsFull	= 2,
        VxFontEastAsianWidthsHalf	= 3,
        VxFontEastAsianWidthsThird	= 4,
        VxFontEastAsianWidthsQuarter	= 5
    } 	VxFontEastAsianWidths;

typedef 
enum _VxFontEastAsianLanguage
    {
        VxFontEastAsianLanguageNormal	= 0,
        VxFontEastAsianLanguageJis78	= 1,
        VxFontEastAsianLanguageJis83	= 2,
        VxFontEastAsianLanguageJis90	= 3,
        VxFontEastAsianLanguageJis04	= 4,
        VxFontEastAsianLanguageHojoKanji	= 5,
        VxFontEastAsianLanguageNlcKanji	= 6,
        VxFontEastAsianLanguageSimplified	= 7,
        VxFontEastAsianLanguageTraditional	= 8,
        VxFontEastAsianLanguageTraditionalNames	= 9
    } 	VxFontEastAsianLanguage;

typedef 
enum _VxTextDataFormat
    {
        VxTextDataFormatText	= 0,
        VxTextDataFormatUnicodeText	= 1,
        VxTextDataFormatRtf	= 2,
        VxTextDataFormatHtml	= 3,
        VxTextDataFormatCommaSeparatedValue	= 4,
        VxTextDataFormatXaml	= 5
    } 	VxTextDataFormat;

typedef 
enum _VxVisibility
    {
        VxVisibilityVisible	= 0,
        VxVisibilityHidden	= 1,
        VxVisibilityCollapsed	= 2
    } 	VxVisibility;

typedef 
enum _VxCoreFlags
    {
        VxCoreFlagsNone	= 0,
        VxCoreFlagsSnapsToDevicePixelsCache	= 1,
        VxCoreFlagsClipToBoundsCache	= 2,
        VxCoreFlagsMeasureDirty	= 4,
        VxCoreFlagsArrangeDirty	= 8,
        VxCoreFlagsMeasureInProgress	= 16,
        VxCoreFlagsArrangeInProgress	= 32,
        VxCoreFlagsNeverMeasured	= 64,
        VxCoreFlagsNeverArranged	= 128,
        VxCoreFlagsMeasureDuringArrange	= 256,
        VxCoreFlagsIsCollapsed	= 512,
        VxCoreFlagsIsKeyboardFocusWithinCache	= 1024,
        VxCoreFlagsIsKeyboardFocusWithinChanged	= 2048,
        VxCoreFlagsIsMouseOverCache	= 4096,
        VxCoreFlagsIsMouseOverChanged	= 8192,
        VxCoreFlagsIsMouseCaptureWithinCache	= 16384,
        VxCoreFlagsIsMouseCaptureWithinChanged	= 32768,
        VxCoreFlagsIsStylusOverCache	= 65536,
        VxCoreFlagsIsStylusOverChanged	= 131072,
        VxCoreFlagsIsStylusCaptureWithinCache	= 262144,
        VxCoreFlagsIsStylusCaptureWithinChanged	= 524288,
        VxCoreFlagsHasAutomationPeer	= 1048576,
        VxCoreFlagsRenderingInvalidated	= 2097152,
        VxCoreFlagsIsVisibleCache	= 4194304,
        VxCoreFlagsAreTransformsClean	= 8388608,
        VxCoreFlagsIsOpacitySuppressed	= 16777216,
        VxCoreFlagsExistsEventHandlersStore	= 33554432,
        VxCoreFlagsTouchesOverCache	= 67108864,
        VxCoreFlagsTouchesOverChanged	= 134217728,
        VxCoreFlagsTouchesCapturedWithinCache	= 268435456,
        VxCoreFlagsTouchesCapturedWithinChanged	= 536870912,
        VxCoreFlagsTouchLeaveCache	= 1073741824,
        VxCoreFlagsTouchEnterCache	= 0x80000000
    } 	VxCoreFlags;

typedef 
enum _VxIsOffscreenBehavior
    {
        VxIsOffscreenBehaviorDefault	= 0,
        VxIsOffscreenBehaviorOnscreen	= 1,
        VxIsOffscreenBehaviorOffscreen	= 2,
        VxIsOffscreenBehaviorFromClip	= 3
    } 	VxIsOffscreenBehavior;

typedef 
enum _VxPatternInterface
    {
        VxPatternInterfaceInvoke	= 0,
        VxPatternInterfaceSelection	= 1,
        VxPatternInterfaceValue	= 2,
        VxPatternInterfaceRangeValue	= 3,
        VxPatternInterfaceScroll	= 4,
        VxPatternInterfaceScrollItem	= 5,
        VxPatternInterfaceExpandCollapse	= 6,
        VxPatternInterfaceGrid	= 7,
        VxPatternInterfaceGridItem	= 8,
        VxPatternInterfaceMultipleView	= 9,
        VxPatternInterfaceWindow	= 10,
        VxPatternInterfaceSelectionItem	= 11,
        VxPatternInterfaceDock	= 12,
        VxPatternInterfaceTable	= 13,
        VxPatternInterfaceTableItem	= 14,
        VxPatternInterfaceToggle	= 15,
        VxPatternInterfaceTransform	= 16,
        VxPatternInterfaceText	= 17,
        VxPatternInterfaceItemContainer	= 18,
        VxPatternInterfaceVirtualizedItem	= 19,
        VxPatternInterfaceSynchronizedInput	= 20
    } 	VxPatternInterface;

typedef 
enum _VxAutomationOrientation
    {
        VxAutomationOrientationNone	= 0,
        VxAutomationOrientationHorizontal	= 1,
        VxAutomationOrientationVertical	= 2
    } 	VxAutomationOrientation;

typedef 
enum _VxAutomationControlType
    {
        VxAutomationControlTypeButton	= 0,
        VxAutomationControlTypeCalendar	= 1,
        VxAutomationControlTypeCheckBox	= 2,
        VxAutomationControlTypeComboBox	= 3,
        VxAutomationControlTypeEdit	= 4,
        VxAutomationControlTypeHyperlink	= 5,
        VxAutomationControlTypeImage	= 6,
        VxAutomationControlTypeListItem	= 7,
        VxAutomationControlTypeList	= 8,
        VxAutomationControlTypeMenu	= 9,
        VxAutomationControlTypeMenuBar	= 10,
        VxAutomationControlTypeMenuItem	= 11,
        VxAutomationControlTypeProgressBar	= 12,
        VxAutomationControlTypeRadioButton	= 13,
        VxAutomationControlTypeScrollBar	= 14,
        VxAutomationControlTypeSlider	= 15,
        VxAutomationControlTypeSpinner	= 16,
        VxAutomationControlTypeStatusBar	= 17,
        VxAutomationControlTypeTab	= 18,
        VxAutomationControlTypeTabItem	= 19,
        VxAutomationControlTypeText	= 20,
        VxAutomationControlTypeToolBar	= 21,
        VxAutomationControlTypeToolTip	= 22,
        VxAutomationControlTypeTree	= 23,
        VxAutomationControlTypeTreeItem	= 24,
        VxAutomationControlTypeCustom	= 25,
        VxAutomationControlTypeGroup	= 26,
        VxAutomationControlTypeThumb	= 27,
        VxAutomationControlTypeDataGrid	= 28,
        VxAutomationControlTypeDataItem	= 29,
        VxAutomationControlTypeDocument	= 30,
        VxAutomationControlTypeSplitButton	= 31,
        VxAutomationControlTypeWindow	= 32,
        VxAutomationControlTypePane	= 33,
        VxAutomationControlTypeHeader	= 34,
        VxAutomationControlTypeHeaderItem	= 35,
        VxAutomationControlTypeTable	= 36,
        VxAutomationControlTypeTitleBar	= 37,
        VxAutomationControlTypeSeparator	= 38
    } 	VxAutomationControlType;

typedef 
enum _VxAutomationEvents
    {
        VxAutomationEventsToolTipOpened	= 0,
        VxAutomationEventsToolTipClosed	= 1,
        VxAutomationEventsMenuOpened	= 2,
        VxAutomationEventsMenuClosed	= 3,
        VxAutomationEventsAutomationFocusChanged	= 4,
        VxAutomationEventsInvokePatternOnInvoked	= 5,
        VxAutomationEventsSelectionItemPatternOnElementAddedToSelection	= 6,
        VxAutomationEventsSelectionItemPatternOnElementRemovedFromSelection	= 7,
        VxAutomationEventsSelectionItemPatternOnElementSelected	= 8,
        VxAutomationEventsSelectionPatternOnInvalidated	= 9,
        VxAutomationEventsTextPatternOnTextSelectionChanged	= 10,
        VxAutomationEventsTextPatternOnTextChanged	= 11,
        VxAutomationEventsAsyncContentLoaded	= 12,
        VxAutomationEventsPropertyChanged	= 13,
        VxAutomationEventsStructureChanged	= 14,
        VxAutomationEventsInputReachedTarget	= 15,
        VxAutomationEventsInputReachedOtherElement	= 16,
        VxAutomationEventsInputDiscarded	= 17
    } 	VxAutomationEvents;

typedef 
enum _VxTextDecorationLocation
    {
        VxTextDecorationLocationUnderline	= 0,
        VxTextDecorationLocationOverLine	= 1,
        VxTextDecorationLocationStrikethrough	= 2,
        VxTextDecorationLocationBaseline	= 3
    } 	VxTextDecorationLocation;

typedef 
enum _VxTextDecorationUnit
    {
        VxTextDecorationUnitFontRecommended	= 0,
        VxTextDecorationUnitFontRenderingEmSize	= 1,
        VxTextDecorationUnitPixel	= 2
    } 	VxTextDecorationUnit;

typedef 
enum _VxApplicationGesture
    {
        VxApplicationGestureAllGestures	= 0,
        VxApplicationGestureArrowDown	= 61497,
        VxApplicationGestureArrowLeft	= 61498,
        VxApplicationGestureArrowRight	= 61499,
        VxApplicationGestureArrowUp	= 61496,
        VxApplicationGestureCheck	= 61445,
        VxApplicationGestureChevronDown	= 61489,
        VxApplicationGestureChevronLeft	= 61490,
        VxApplicationGestureChevronRight	= 61491,
        VxApplicationGestureChevronUp	= 61488,
        VxApplicationGestureCircle	= 61472,
        VxApplicationGestureCurlicue	= 61456,
        VxApplicationGestureDoubleCircle	= 61473,
        VxApplicationGestureDoubleCurlicue	= 61457,
        VxApplicationGestureDoubleTap	= 61681,
        VxApplicationGestureDown	= 61529,
        VxApplicationGestureDownLeft	= 61546,
        VxApplicationGestureDownLeftLong	= 61542,
        VxApplicationGestureDownRight	= 61547,
        VxApplicationGestureDownRightLong	= 61543,
        VxApplicationGestureDownUp	= 61537,
        VxApplicationGestureExclamation	= 61604,
        VxApplicationGestureLeft	= 61530,
        VxApplicationGestureLeftDown	= 61549,
        VxApplicationGestureLeftRight	= 61538,
        VxApplicationGestureLeftUp	= 61548,
        VxApplicationGestureNoGesture	= 61440,
        VxApplicationGestureRight	= 61531,
        VxApplicationGestureRightDown	= 61551,
        VxApplicationGestureRightLeft	= 61539,
        VxApplicationGestureRightUp	= 61550,
        VxApplicationGestureScratchOut	= 61441,
        VxApplicationGestureSemicircleLeft	= 61480,
        VxApplicationGestureSemicircleRight	= 61481,
        VxApplicationGestureSquare	= 61443,
        VxApplicationGestureStar	= 61444,
        VxApplicationGestureTap	= 61680,
        VxApplicationGestureTriangle	= 61442,
        VxApplicationGestureUp	= 61528,
        VxApplicationGestureUpDown	= 61536,
        VxApplicationGestureUpLeft	= 61544,
        VxApplicationGestureUpLeftLong	= 61540,
        VxApplicationGestureUpRight	= 61545,
        VxApplicationGestureUpRightLong	= 61541
    } 	VxApplicationGesture;

typedef 
enum _VxStylusTip
    {
        VxStylusTipRectangle	= 0,
        VxStylusTipEllipse	= 1
    } 	VxStylusTip;

typedef 
enum _VxRecognitionConfidence
    {
        VxRecognitionConfidenceStrong	= 0,
        VxRecognitionConfidenceIntermediate	= 1,
        VxRecognitionConfidencePoor	= 2
    } 	VxRecognitionConfidence;

typedef 
enum _VxMouseAction
    {
        VxMouseActionNone	= 0,
        VxMouseActionLeftClick	= 1,
        VxMouseActionRightClick	= 2,
        VxMouseActionMiddleClick	= 3,
        VxMouseActionWheelClick	= 4,
        VxMouseActionLeftDoubleClick	= 5,
        VxMouseActionRightDoubleClick	= 6,
        VxMouseActionMiddleDoubleClick	= 7
    } 	VxMouseAction;

typedef 
enum _VxPrivateFlags
    {
        VxPrivateFlagsIsBlockedByRM	= 1,
        VxPrivateFlagsAreInputGesturesDelayLoaded	= 2
    } 	VxPrivateFlags;

typedef 
enum _VxCommandId
    {
        VxCommandIdCut	= 0,
        VxCommandIdCopy	= 1,
        VxCommandIdPaste	= 2,
        VxCommandIdUndo	= 3,
        VxCommandIdRedo	= 4,
        VxCommandIdDelete	= 5,
        VxCommandIdFind	= 6,
        VxCommandIdReplace	= 7,
        VxCommandIdHelp	= 8,
        VxCommandIdSelectAll	= 9,
        VxCommandIdNew	= 10,
        VxCommandIdOpen	= 11,
        VxCommandIdSave	= 12,
        VxCommandIdSaveAs	= 13,
        VxCommandIdPrint	= 14,
        VxCommandIdCancelPrint	= 15,
        VxCommandIdPrintPreview	= 16,
        VxCommandIdClose	= 17,
        VxCommandIdProperties	= 18,
        VxCommandIdContextMenu	= 19,
        VxCommandIdCorrectionList	= 20,
        VxCommandIdStop	= 21,
        VxCommandIdNotACommand	= 22,
        VxCommandIdLast	= 23
    } 	VxCommandId;

typedef 
enum _VxCaptureMode
    {
        VxCaptureModeNone	= 0,
        VxCaptureModeElement	= 1,
        VxCaptureModeSubTree	= 2
    } 	VxCaptureMode;

typedef 
enum _VxCursorType
    {
        VxCursorTypeNone	= 0,
        VxCursorTypeNo	= 1,
        VxCursorTypeArrow	= 2,
        VxCursorTypeAppStarting	= 3,
        VxCursorTypeCross	= 4,
        VxCursorTypeHelp	= 5,
        VxCursorTypeIBeam	= 6,
        VxCursorTypeSizeAll	= 7,
        VxCursorTypeSizeNESW	= 8,
        VxCursorTypeSizeNS	= 9,
        VxCursorTypeSizeNWSE	= 10,
        VxCursorTypeSizeWE	= 11,
        VxCursorTypeUpArrow	= 12,
        VxCursorTypeWait	= 13,
        VxCursorTypeHand	= 14,
        VxCursorTypePen	= 15,
        VxCursorTypeScrollNS	= 16,
        VxCursorTypeScrollWE	= 17,
        VxCursorTypeScrollAll	= 18,
        VxCursorTypeScrollN	= 19,
        VxCursorTypeScrollS	= 20,
        VxCursorTypeScrollW	= 21,
        VxCursorTypeScrollE	= 22,
        VxCursorTypeScrollNW	= 23,
        VxCursorTypeScrollNE	= 24,
        VxCursorTypeScrollSW	= 25,
        VxCursorTypeScrollSE	= 26,
        VxCursorTypeArrowCD	= 27
    } 	VxCursorType;

typedef 
enum _VxInputMethodState
    {
        VxInputMethodStateOff	= 0,
        VxInputMethodStateOn	= 1,
        VxInputMethodStateDoNotCare	= 2
    } 	VxInputMethodState;

typedef 
enum _VxSpeechMode
    {
        VxSpeechModeDictation	= 0,
        VxSpeechModeCommand	= 1,
        VxSpeechModeIndeterminate	= 2
    } 	VxSpeechMode;

typedef 
enum _VxImeConversionModeValues
    {
        VxImeConversionModeValuesNative	= 1,
        VxImeConversionModeValuesKatakana	= 2,
        VxImeConversionModeValuesFullShape	= 4,
        VxImeConversionModeValuesRoman	= 8,
        VxImeConversionModeValuesCharCode	= 16,
        VxImeConversionModeValuesNoConversion	= 32,
        VxImeConversionModeValuesEudc	= 64,
        VxImeConversionModeValuesSymbol	= 128,
        VxImeConversionModeValuesFixed	= 256,
        VxImeConversionModeValuesAlphanumeric	= 512,
        VxImeConversionModeValuesDoNotCare	= 0x80000000
    } 	VxImeConversionModeValues;

typedef 
enum _VxImeSentenceModeValues
    {
        VxImeSentenceModeValuesNone	= 0,
        VxImeSentenceModeValuesPluralClause	= 1,
        VxImeSentenceModeValuesSingleConversion	= 2,
        VxImeSentenceModeValuesAutomatic	= 4,
        VxImeSentenceModeValuesPhrasePrediction	= 8,
        VxImeSentenceModeValuesConversation	= 16,
        VxImeSentenceModeValuesDoNotCare	= 0x80000000
    } 	VxImeSentenceModeValues;

typedef 
enum _VxInputMethodStateType
    {
        VxInputMethodStateTypeInvalid	= 0,
        VxInputMethodStateTypeImeState	= 1,
        VxInputMethodStateTypeMicrophoneState	= 2,
        VxInputMethodStateTypeHandwritingState	= 3,
        VxInputMethodStateTypeSpeechMode	= 4,
        VxInputMethodStateTypeImeConversionModeValues	= 5,
        VxInputMethodStateTypeImeSentenceModeValues	= 6
    } 	VxInputMethodStateType;

typedef 
enum _VxCompartmentScope
    {
        VxCompartmentScopeInvalid	= 0,
        VxCompartmentScopeThread	= 1,
        VxCompartmentScopeGlobal	= 2
    } 	VxCompartmentScope;

typedef 
enum _VxInputMode
    {
        VxInputModeForeground	= 0,
        VxInputModeSink	= 1
    } 	VxInputMode;

typedef 
enum _VxInputScopeNameValue
    {
        VxInputScopeNameValueDefault	= 0,
        VxInputScopeNameValueUrl	= 1,
        VxInputScopeNameValueFullFilePath	= 2,
        VxInputScopeNameValueFileName	= 3,
        VxInputScopeNameValueEmailUserName	= 4,
        VxInputScopeNameValueEmailSmtpAddress	= 5,
        VxInputScopeNameValueLogOnName	= 6,
        VxInputScopeNameValuePersonalFullName	= 7,
        VxInputScopeNameValuePersonalNamePrefix	= 8,
        VxInputScopeNameValuePersonalGivenName	= 9,
        VxInputScopeNameValuePersonalMiddleName	= 10,
        VxInputScopeNameValuePersonalSurname	= 11,
        VxInputScopeNameValuePersonalNameSuffix	= 12,
        VxInputScopeNameValuePostalAddress	= 13,
        VxInputScopeNameValuePostalCode	= 14,
        VxInputScopeNameValueAddressStreet	= 15,
        VxInputScopeNameValueAddressStateOrProvince	= 16,
        VxInputScopeNameValueAddressCity	= 17,
        VxInputScopeNameValueAddressCountryName	= 18,
        VxInputScopeNameValueAddressCountryShortName	= 19,
        VxInputScopeNameValueCurrencyAmountAndSymbol	= 20,
        VxInputScopeNameValueCurrencyAmount	= 21,
        VxInputScopeNameValueDate	= 22,
        VxInputScopeNameValueDateMonth	= 23,
        VxInputScopeNameValueDateDay	= 24,
        VxInputScopeNameValueDateYear	= 25,
        VxInputScopeNameValueDateMonthName	= 26,
        VxInputScopeNameValueDateDayName	= 27,
        VxInputScopeNameValueDigits	= 28,
        VxInputScopeNameValueNumber	= 29,
        VxInputScopeNameValueOneChar	= 30,
        VxInputScopeNameValuePassword	= 31,
        VxInputScopeNameValueTelephoneNumber	= 32,
        VxInputScopeNameValueTelephoneCountryCode	= 33,
        VxInputScopeNameValueTelephoneAreaCode	= 34,
        VxInputScopeNameValueTelephoneLocalNumber	= 35,
        VxInputScopeNameValueTime	= 36,
        VxInputScopeNameValueTimeHour	= 37,
        VxInputScopeNameValueTimeMinorSec	= 38,
        VxInputScopeNameValueNumberFullWidth	= 39,
        VxInputScopeNameValueAlphanumericHalfWidth	= 40,
        VxInputScopeNameValueAlphanumericFullWidth	= 41,
        VxInputScopeNameValueCurrencyChinese	= 42,
        VxInputScopeNameValueBopomofo	= 43,
        VxInputScopeNameValueHiragana	= 44,
        VxInputScopeNameValueKatakanaHalfWidth	= 45,
        VxInputScopeNameValueKatakanaFullWidth	= 46,
        VxInputScopeNameValueHanja	= 47,
        VxInputScopeNameValuePhraseList	= -1,
        VxInputScopeNameValueRegularExpression	= -2,
        VxInputScopeNameValueSrgs	= -3,
        VxInputScopeNameValueXml	= -4
    } 	VxInputScopeNameValue;

typedef 
enum _VxInputType
    {
        VxInputTypeKeyboard	= 0,
        VxInputTypeMouse	= 1,
        VxInputTypeStylus	= 2,
        VxInputTypeHid	= 3,
        VxInputTypeText	= 4,
        VxInputTypeCommand	= 5
    } 	VxInputType;

typedef 
enum _VxKeyStates
    {
        VxKeyStatesNone	= 0,
        VxKeyStatesDown	= 1,
        VxKeyStatesToggled	= 2
    } 	VxKeyStates;

typedef 
enum _VxBehaviors
    {
        VxBehaviorsNone	= 0,
        VxBehaviorsTranslation	= 1,
        VxBehaviorsRotation	= 2,
        VxBehaviorsExpansion	= 4
    } 	VxBehaviors;

typedef 
enum _VxManipulationModes
    {
        VxManipulationModesNone	= 0,
        VxManipulationModesTranslateX	= 1,
        VxManipulationModesTranslateY	= 2,
        VxManipulationModesTranslate	= 3,
        VxManipulationModesRotate	= 4,
        VxManipulationModesScale	= 8,
        VxManipulationModesAll	= 15
    } 	VxManipulationModes;

typedef 
enum _VxMouseButton
    {
        VxMouseButtonLeft	= 0,
        VxMouseButtonMiddle	= 1,
        VxMouseButtonRight	= 2,
        VxMouseButtonXButton1	= 3,
        VxMouseButtonXButton2	= 4
    } 	VxMouseButton;

typedef 
enum _VxMouseButtonState
    {
        VxMouseButtonStateReleased	= 0,
        VxMouseButtonStatePressed	= 1
    } 	VxMouseButtonState;

typedef 
enum _VxRawMouseActions
    {
        VxRawMouseActionsNone	= 0,
        VxRawMouseActionsAttributesChanged	= 1,
        VxRawMouseActionsActivate	= 2,
        VxRawMouseActionsDeactivate	= 4,
        VxRawMouseActionsRelativeMove	= 8,
        VxRawMouseActionsAbsoluteMove	= 16,
        VxRawMouseActionsVirtualDesktopMove	= 32,
        VxRawMouseActionsButton1Press	= 64,
        VxRawMouseActionsButton1Release	= 128,
        VxRawMouseActionsButton2Press	= 256,
        VxRawMouseActionsButton2Release	= 512,
        VxRawMouseActionsButton3Press	= 1024,
        VxRawMouseActionsButton3Release	= 2048,
        VxRawMouseActionsButton4Press	= 4096,
        VxRawMouseActionsButton4Release	= 8192,
        VxRawMouseActionsButton5Press	= 16384,
        VxRawMouseActionsButton5Release	= 32768,
        VxRawMouseActionsVerticalWheelRotate	= 65536,
        VxRawMouseActionsHorizontalWheelRotate	= 131072,
        VxRawMouseActionsQueryCursor	= 262144,
        VxRawMouseActionsCancelCapture	= 524288
    } 	VxRawMouseActions;

typedef 
enum _VxRawKeyboardActions
    {
        VxRawKeyboardActionsNone	= 0,
        VxRawKeyboardActionsAttributesChanged	= 1,
        VxRawKeyboardActionsActivate	= 2,
        VxRawKeyboardActionsDeactivate	= 4,
        VxRawKeyboardActionsKeyDown	= 8,
        VxRawKeyboardActionsKeyUp	= 16
    } 	VxRawKeyboardActions;

typedef 
enum _VxRawUIStateActions
    {
        VxRawUIStateActionsSet	= 1,
        VxRawUIStateActionsClear	= 2,
        VxRawUIStateActionsInitialize	= 3
    } 	VxRawUIStateActions;

typedef 
enum _VxRawUIStateTargets
    {
        VxRawUIStateTargetsNone	= 0,
        VxRawUIStateTargetsHideFocus	= 1,
        VxRawUIStateTargetsHideAccelerators	= 2,
        VxRawUIStateTargetsActive	= 4
    } 	VxRawUIStateTargets;

typedef 
enum _VxRestoreFocusMode
    {
        VxRestoreFocusModeAuto	= 0,
        VxRestoreFocusModeNone	= 1
    } 	VxRestoreFocusMode;

typedef 
enum _VxTouchAction
    {
        VxTouchActionDown	= 0,
        VxTouchActionMove	= 1,
        VxTouchActionUp	= 2
    } 	VxTouchAction;

typedef 
enum _VxRawStylusActions
    {
        VxRawStylusActionsNone	= 0,
        VxRawStylusActionsActivate	= 1,
        VxRawStylusActionsDeactivate	= 2,
        VxRawStylusActionsDown	= 4,
        VxRawStylusActionsUp	= 8,
        VxRawStylusActionsMove	= 16,
        VxRawStylusActionsInAirMove	= 32,
        VxRawStylusActionsInRange	= 64,
        VxRawStylusActionsOutOfRange	= 128,
        VxRawStylusActionsSystemGesture	= 256
    } 	VxRawStylusActions;

typedef 
enum _VxStylusButtonState
    {
        VxStylusButtonStateUp	= 0,
        VxStylusButtonStateDown	= 1
    } 	VxStylusButtonState;

typedef 
enum _VxSystemGesture
    {
        VxSystemGestureNone	= 0,
        VxSystemGestureTap	= 16,
        VxSystemGestureRightTap	= 18,
        VxSystemGestureDrag	= 19,
        VxSystemGestureRightDrag	= 20,
        VxSystemGestureHoldEnter	= 21,
        VxSystemGestureHoldLeave	= 22,
        VxSystemGestureHoverEnter	= 23,
        VxSystemGestureHoverLeave	= 24,
        VxSystemGestureFlick	= 31,
        VxSystemGestureTwoFingerTap	= 4352
    } 	VxSystemGesture;

typedef 
enum _VxStylusPointPropertyUnit
    {
        VxStylusPointPropertyUnitNone	= 0,
        VxStylusPointPropertyUnitInches	= 1,
        VxStylusPointPropertyUnitCentimeters	= 2,
        VxStylusPointPropertyUnitDegrees	= 3,
        VxStylusPointPropertyUnitRadians	= 4,
        VxStylusPointPropertyUnitSeconds	= 5,
        VxStylusPointPropertyUnitPounds	= 6,
        VxStylusPointPropertyUnitGrams	= 7
    } 	VxStylusPointPropertyUnit;

typedef 
enum _VxTabletDeviceType
    {
        VxTabletDeviceTypeStylus	= 0,
        VxTabletDeviceTypeTouch	= 1
    } 	VxTabletDeviceType;

typedef 
enum _VxTabletHardwareCapabilities
    {
        VxTabletHardwareCapabilitiesNone	= 0,
        VxTabletHardwareCapabilitiesIntegrated	= 1,
        VxTabletHardwareCapabilitiesStylusMustTouch	= 2,
        VxTabletHardwareCapabilitiesHardProximity	= 4,
        VxTabletHardwareCapabilitiesStylusHasPhysicalIds	= 8,
        VxTabletHardwareCapabilitiesSupportsPressure	= 1073741824
    } 	VxTabletHardwareCapabilities;

typedef 
enum _VxTextCompositionAutoComplete
    {
        VxTextCompositionAutoCompleteOff	= 0,
        VxTextCompositionAutoCompleteOn	= 1
    } 	VxTextCompositionAutoComplete;

typedef 
enum _VxTextCompositionStage
    {
        VxTextCompositionStageNone	= 0,
        VxTextCompositionStageStarted	= 1,
        VxTextCompositionStageDone	= 2
    } 	VxTextCompositionStage;

typedef 
enum _VxAltNumpadConversionMode
    {
        VxAltNumpadConversionModeDefaultCodePage	= 0,
        VxAltNumpadConversionModeOEMCodePage	= 1,
        VxAltNumpadConversionModeHexDefaultCodePage	= 2,
        VxAltNumpadConversionModeHexUnicode	= 3
    } 	VxAltNumpadConversionMode;

typedef 
enum _VxKeyOp
    {
        VxKeyOpTestUp	= 0,
        VxKeyOpTestDown	= 1,
        VxKeyOpUp	= 2,
        VxKeyOpDown	= 3
    } 	VxKeyOp;

typedef 
enum _VxD3DResourceType
    {
        VxD3DResourceTypeIDirect3DSurface9	= 0
    } 	VxD3DResourceType;

typedef 
enum _VxRenderingMode
    {
        VxRenderingModeDefault	= 0,
        VxRenderingModeSoftware	= 1,
        VxRenderingModeHardware	= 2,
        VxRenderingModeHardwareReference	= 16777218
    } 	VxRenderingMode;

typedef 
enum _VxRenderMode
    {
        VxRenderModeDefault	= 0,
        VxRenderModeSoftwareOnly	= 1
    } 	VxRenderMode;

typedef 
enum _VxHostStateFlags
    {
        VxHostStateFlagsNone	= 0,
        VxHostStateFlagsWorldTransform	= 1,
        VxHostStateFlagsClipBounds	= 2
    } 	VxHostStateFlags;

typedef 
enum _VxSetCursorState
    {
        VxSetCursorStateSetCursorNotReceived	= 0,
        VxSetCursorStateSetCursorReceived	= 1,
        VxSetCursorStateSetCursorDisabled	= 2
    } 	VxSetCursorState;

typedef 
enum _VxOperatingSystemVersion
    {
        VxOperatingSystemVersionWindowsXPSP2	= 0,
        VxOperatingSystemVersionWindowsVista	= 1,
        VxOperatingSystemVersionWindows7	= 2,
        VxOperatingSystemVersionWindows8	= 3
    } 	VxOperatingSystemVersion;

typedef 
enum _VxClockFlags
    {
        VxClockFlagsIsTimeManager	= 1,
        VxClockFlagsIsRoot	= 2,
        VxClockFlagsIsBackwardsProgressingGlobal	= 4,
        VxClockFlagsIsInteractivelyPaused	= 8,
        VxClockFlagsIsInteractivelyStopped	= 16,
        VxClockFlagsPendingInteractivePause	= 32,
        VxClockFlagsPendingInteractiveResume	= 64,
        VxClockFlagsPendingInteractiveStop	= 128,
        VxClockFlagsPendingInteractiveRemove	= 256,
        VxClockFlagsCanGrow	= 512,
        VxClockFlagsCanSlip	= 1024,
        VxClockFlagsCurrentStateInvalidatedEventRaised	= 2048,
        VxClockFlagsCurrentTimeInvalidatedEventRaised	= 4096,
        VxClockFlagsCurrentGlobalSpeedInvalidatedEventRaised	= 8192,
        VxClockFlagsCompletedEventRaised	= 16384,
        VxClockFlagsRemoveRequestedEventRaised	= 32768,
        VxClockFlagsIsInEventQueue	= 65536,
        VxClockFlagsNeedsTicksWhenActive	= 131072,
        VxClockFlagsNeedsPostfixTraversal	= 262144,
        VxClockFlagsPauseStateChangedDuringTick	= 524288,
        VxClockFlagsRootBeginPending	= 1048576,
        VxClockFlagsHasControllableRoot	= 2097152,
        VxClockFlagsHasResolvedDuration	= 4194304,
        VxClockFlagsHasDesiredFrameRate	= 8388608,
        VxClockFlagsHasDiscontinuousTimeMovementOccured	= 16777216,
        VxClockFlagsHasDescendantsWithUnresolvedDuration	= 33554432,
        VxClockFlagsHasSeekOccuredAfterLastTick	= 67108864
    } 	VxClockFlags;

typedef 
enum _VxAnimationType
    {
        VxAnimationTypeAutomatic	= 0,
        VxAnimationTypeFrom	= 1,
        VxAnimationTypeTo	= 2,
        VxAnimationTypeBy	= 3,
        VxAnimationTypeFromTo	= 4,
        VxAnimationTypeFromBy	= 5
    } 	VxAnimationType;

typedef 
enum _VxClockState
    {
        VxClockStateActive	= 0,
        VxClockStateFilling	= 1,
        VxClockStateStopped	= 2
    } 	VxClockState;

typedef 
enum _VxTimeSeekOrigin
    {
        VxTimeSeekOriginBeginTime	= 0,
        VxTimeSeekOriginDuration	= 1
    } 	VxTimeSeekOrigin;

typedef 
enum _VxTimeState
    {
        VxTimeStateStopped	= 0,
        VxTimeStatePaused	= 1,
        VxTimeStateRunning	= 2
    } 	VxTimeState;

typedef 
enum _VxFillBehavior
    {
        VxFillBehaviorHoldEnd	= 0,
        VxFillBehaviorStop	= 1
    } 	VxFillBehavior;

typedef 
enum _VxHandoffBehavior
    {
        VxHandoffBehaviorSnapshotAndReplace	= 0,
        VxHandoffBehaviorCompose	= 1
    } 	VxHandoffBehavior;

typedef 
enum _VxKeyTimeType
    {
        VxKeyTimeTypeUniform	= 0,
        VxKeyTimeTypePercent	= 1,
        VxKeyTimeTypeTimeSpan	= 2,
        VxKeyTimeTypePaced	= 3
    } 	VxKeyTimeType;

typedef 
enum _VxPathAnimationSource
    {
        VxPathAnimationSourceX	= 0,
        VxPathAnimationSourceY	= 1,
        VxPathAnimationSourceAngle	= 2
    } 	VxPathAnimationSource;

typedef 
enum _VxRepeatBehaviorType
    {
        VxRepeatBehaviorTypeIterationCount	= 0,
        VxRepeatBehaviorTypeRepeatDuration	= 1,
        VxRepeatBehaviorTypeForever	= 2
    } 	VxRepeatBehaviorType;

typedef 
enum _VxSlipBehavior
    {
        VxSlipBehaviorGrow	= 0,
        VxSlipBehaviorSlip	= 1
    } 	VxSlipBehavior;

typedef 
enum _VxSubtreeFlag
    {
        VxSubtreeFlagReset	= 1,
        VxSubtreeFlagProcessRoot	= 2,
        VxSubtreeFlagSkipSubtree	= 4
    } 	VxSubtreeFlag;

typedef 
enum _VxPushType
    {
        VxPushTypeTransform	= 0,
        VxPushTypeClip	= 1,
        VxPushTypeOpacity	= 2,
        VxPushTypeOpacityMask	= 3,
        VxPushTypeGuidelines	= 4,
        VxPushTypeBitmapEffect	= 5
    } 	VxPushType;

typedef 
enum _VxInterlockState
    {
        VxInterlockStateDisabled	= 0,
        VxInterlockStateRequestedStart	= 1,
        VxInterlockStateIdle	= 2,
        VxInterlockStateWaitingForResponse	= 3,
        VxInterlockStateWaitingForNextFrame	= 4
    } 	VxInterlockState;

typedef 
enum _VxStandardColorSpace
    {
        VxStandardColorSpaceUnknown	= 0,
        VxStandardColorSpaceSrgb	= 1,
        VxStandardColorSpaceScRgb	= 2,
        VxStandardColorSpaceRgb	= 3,
        VxStandardColorSpaceCmyk	= 4,
        VxStandardColorSpaceGray	= 6,
        VxStandardColorSpaceMultichannel	= 7
    } 	VxStandardColorSpace;

typedef 
enum _VxSamplingMode
    {
        VxSamplingModeNearestNeighbor	= 0,
        VxSamplingModeBilinear	= 1,
        VxSamplingModeAuto	= 2
    } 	VxSamplingMode;

typedef 
enum _VxEdgeProfile
    {
        VxEdgeProfileLinear	= 0,
        VxEdgeProfileCurvedIn	= 1,
        VxEdgeProfileCurvedOut	= 2,
        VxEdgeProfileBulgedUp	= 3
    } 	VxEdgeProfile;

typedef 
enum _VxFontEmbeddingRight
    {
        VxFontEmbeddingRightInstallable	= 0,
        VxFontEmbeddingRightInstallableButNoSubsetting	= 1,
        VxFontEmbeddingRightInstallableButWithBitmapsOnly	= 2,
        VxFontEmbeddingRightInstallableButNoSubsettingAndWithBitmapsOnly	= 3,
        VxFontEmbeddingRightRestrictedLicense	= 4,
        VxFontEmbeddingRightPreviewAndPrint	= 5,
        VxFontEmbeddingRightPreviewAndPrintButNoSubsetting	= 6,
        VxFontEmbeddingRightPreviewAndPrintButWithBitmapsOnly	= 7,
        VxFontEmbeddingRightPreviewAndPrintButNoSubsettingAndWithBitmapsOnly	= 8,
        VxFontEmbeddingRightEditable	= 9,
        VxFontEmbeddingRightEditableButNoSubsetting	= 10,
        VxFontEmbeddingRightEditableButWithBitmapsOnly	= 11,
        VxFontEmbeddingRightEditableButNoSubsettingAndWithBitmapsOnly	= 12
    } 	VxFontEmbeddingRight;

typedef 
enum _VxRotation
    {
        VxRotationRotate0	= 0,
        VxRotationRotate90	= 1,
        VxRotationRotate180	= 2,
        VxRotationRotate270	= 3
    } 	VxRotation;

typedef 
enum _VxSerializationBrushType
    {
        VxSerializationBrushTypeUnknown	= 0,
        VxSerializationBrushTypeKnownSolidColor	= 1,
        VxSerializationBrushTypeOtherColor	= 2
    } 	VxSerializationBrushType;

typedef 
enum _VxSweepDirection
    {
        VxSweepDirectionCounterclockwise	= 0,
        VxSweepDirectionClockwise	= 1
    } 	VxSweepDirection;

typedef 
enum _VxToleranceType
    {
        VxToleranceTypeAbsolute	= 0,
        VxToleranceTypeRelative	= 1
    } 	VxToleranceType;

typedef 
enum _VxGlyphRunFlags
    {
        VxGlyphRunFlagsNone	= 0,
        VxGlyphRunFlagsIsSideways	= 1,
        VxGlyphRunFlagsIsInitialized	= 8,
        VxGlyphRunFlagsIsInitializing	= 16,
        VxGlyphRunFlagsCacheInkBounds	= 32
    } 	VxGlyphRunFlags;

typedef 
enum _VxInitializationState
    {
        VxInitializationStateUninitialized	= 0,
        VxInitializationStateIsInitializing	= 1,
        VxInitializationStateIsInitialized	= 2
    } 	VxInitializationState;

typedef 
enum _VxHitTestFilterBehavior
    {
        VxHitTestFilterBehaviorContinueSkipChildren	= 2,
        VxHitTestFilterBehaviorContinueSkipSelfAndChildren	= 0,
        VxHitTestFilterBehaviorContinueSkipSelf	= 4,
        VxHitTestFilterBehaviorContinue	= 6,
        VxHitTestFilterBehaviorStop	= 8
    } 	VxHitTestFilterBehavior;

typedef 
enum _VxHitTestResultBehavior
    {
        VxHitTestResultBehaviorStop	= 0,
        VxHitTestResultBehaviorContinue	= 1
    } 	VxHitTestResultBehavior;

typedef 
enum _VxBitmapCacheOption
    {
        VxBitmapCacheOptionDefault	= 0,
        VxBitmapCacheOptionOnDemand	= 0,
        VxBitmapCacheOptionOnLoad	= 1,
        VxBitmapCacheOptionNone	= 2
    } 	VxBitmapCacheOption;

typedef 
enum _VxBitmapCreateOptions
    {
        VxBitmapCreateOptionsNone	= 0,
        VxBitmapCreateOptionsPreservePixelFormat	= 1,
        VxBitmapCreateOptionsDelayCreation	= 2,
        VxBitmapCreateOptionsIgnoreColorProfile	= 4,
        VxBitmapCreateOptionsIgnoreImageCache	= 8
    } 	VxBitmapCreateOptions;

typedef 
enum _VxEncodeState
    {
        VxEncodeStateNone	= 0,
        VxEncodeStateEncoderInitialized	= 1,
        VxEncodeStateEncoderThumbnailSet	= 2,
        VxEncodeStateEncoderPaletteSet	= 3,
        VxEncodeStateEncoderCreatedNewFrame	= 4,
        VxEncodeStateFrameEncodeInitialized	= 5,
        VxEncodeStateFrameEncodeSizeSet	= 6,
        VxEncodeStateFrameEncodeResolutionSet	= 7,
        VxEncodeStateFrameEncodeThumbnailSet	= 8,
        VxEncodeStateFrameEncodeMetadataSet	= 9,
        VxEncodeStateFrameEncodeFormatSet	= 10,
        VxEncodeStateFrameEncodeSourceWritten	= 11,
        VxEncodeStateFrameEncodeCommitted	= 12,
        VxEncodeStateEncoderCommitted	= 13,
        VxEncodeStateFrameEncodeColorContextsSet	= 14
    } 	VxEncodeState;

typedef 
enum _VxPngInterlaceOption
    {
        VxPngInterlaceOptionDefault	= 0,
        VxPngInterlaceOptionOn	= 1,
        VxPngInterlaceOptionOff	= 2
    } 	VxPngInterlaceOption;

typedef 
enum _VxTiffCompressOption
    {
        VxTiffCompressOptionDefault	= 0,
        VxTiffCompressOptionNone	= 1,
        VxTiffCompressOptionCcitt3	= 2,
        VxTiffCompressOptionCcitt4	= 3,
        VxTiffCompressOptionLzw	= 4,
        VxTiffCompressOptionRle	= 5,
        VxTiffCompressOptionZip	= 6
    } 	VxTiffCompressOption;

typedef 
enum _VxIntersectionDetail
    {
        VxIntersectionDetailNotCalculated	= 0,
        VxIntersectionDetailEmpty	= 1,
        VxIntersectionDetailFullyInside	= 2,
        VxIntersectionDetailFullyContains	= 3,
        VxIntersectionDetailIntersects	= 4
    } 	VxIntersectionDetail;

typedef 
enum _VxKnownColor
    {
        VxKnownColorAliceBlue	= -984833,
        VxKnownColorAntiqueWhite	= -332841,
        VxKnownColorAqua	= -16711681,
        VxKnownColorAquamarine	= -8388652,
        VxKnownColorAzure	= -983041,
        VxKnownColorBeige	= -657956,
        VxKnownColorBisque	= -6972,
        VxKnownColorBlack	= -16777216,
        VxKnownColorBlanchedAlmond	= -5171,
        VxKnownColorBlue	= -16776961,
        VxKnownColorBlueViolet	= -7722014,
        VxKnownColorBrown	= -5952982,
        VxKnownColorBurlyWood	= -2180985,
        VxKnownColorCadetBlue	= -10510688,
        VxKnownColorChartreuse	= -8388864,
        VxKnownColorChocolate	= -2987746,
        VxKnownColorCoral	= -32944,
        VxKnownColorCornflowerBlue	= -10185235,
        VxKnownColorCornsilk	= -1828,
        VxKnownColorCrimson	= -2354116,
        VxKnownColorCyan	= -16711681,
        VxKnownColorDarkBlue	= -16777077,
        VxKnownColorDarkCyan	= -16741493,
        VxKnownColorDarkGoldenrod	= -4684277,
        VxKnownColorDarkGray	= -5658199,
        VxKnownColorDarkGreen	= -16751616,
        VxKnownColorDarkKhaki	= -4343957,
        VxKnownColorDarkMagenta	= -7667573,
        VxKnownColorDarkOliveGreen	= -11179217,
        VxKnownColorDarkOrange	= -29696,
        VxKnownColorDarkOrchid	= -6737204,
        VxKnownColorDarkRed	= -7667712,
        VxKnownColorDarkSalmon	= -1468806,
        VxKnownColorDarkSeaGreen	= -7357297,
        VxKnownColorDarkSlateBlue	= -12042869,
        VxKnownColorDarkSlateGray	= -13676721,
        VxKnownColorDarkTurquoise	= -16724271,
        VxKnownColorDarkViolet	= -7077677,
        VxKnownColorDeepPink	= -60269,
        VxKnownColorDeepSkyBlue	= -16728065,
        VxKnownColorDimGray	= -9868951,
        VxKnownColorDodgerBlue	= -14774017,
        VxKnownColorFirebrick	= -5103070,
        VxKnownColorFloralWhite	= -1296,
        VxKnownColorForestGreen	= -14513374,
        VxKnownColorFuchsia	= -65281,
        VxKnownColorGainsboro	= -2302756,
        VxKnownColorGhostWhite	= -460545,
        VxKnownColorGold	= -10496,
        VxKnownColorGoldenrod	= -2448096,
        VxKnownColorGray	= -8355712,
        VxKnownColorGreen	= -16744448,
        VxKnownColorGreenYellow	= -5374161,
        VxKnownColorHoneydew	= -983056,
        VxKnownColorHotPink	= -38476,
        VxKnownColorIndianRed	= -3318692,
        VxKnownColorIndigo	= -11861886,
        VxKnownColorIvory	= -16,
        VxKnownColorKhaki	= -989556,
        VxKnownColorLavender	= -1644806,
        VxKnownColorLavenderBlush	= -3851,
        VxKnownColorLawnGreen	= -8586240,
        VxKnownColorLemonChiffon	= -1331,
        VxKnownColorLightBlue	= -5383962,
        VxKnownColorLightCoral	= -1015680,
        VxKnownColorLightCyan	= -2031617,
        VxKnownColorLightGoldenrodYellow	= -329006,
        VxKnownColorLightGreen	= -7278960,
        VxKnownColorLightGray	= -2894893,
        VxKnownColorLightPink	= -18751,
        VxKnownColorLightSalmon	= -24454,
        VxKnownColorLightSeaGreen	= -14634326,
        VxKnownColorLightSkyBlue	= -7876870,
        VxKnownColorLightSlateGray	= -8943463,
        VxKnownColorLightSteelBlue	= -5192482,
        VxKnownColorLightYellow	= -32,
        VxKnownColorLime	= -16711936,
        VxKnownColorLimeGreen	= -13447886,
        VxKnownColorLinen	= -331546,
        VxKnownColorMagenta	= -65281,
        VxKnownColorMaroon	= -8388608,
        VxKnownColorMediumAquamarine	= -10039894,
        VxKnownColorMediumBlue	= -16777011,
        VxKnownColorMediumOrchid	= -4565549,
        VxKnownColorMediumPurple	= -7114533,
        VxKnownColorMediumSeaGreen	= -12799119,
        VxKnownColorMediumSlateBlue	= -8689426,
        VxKnownColorMediumSpringGreen	= -16713062,
        VxKnownColorMediumTurquoise	= -12004916,
        VxKnownColorMediumVioletRed	= -3730043,
        VxKnownColorMidnightBlue	= -15132304,
        VxKnownColorMintCream	= -655366,
        VxKnownColorMistyRose	= -6943,
        VxKnownColorMoccasin	= -6987,
        VxKnownColorNavajoWhite	= -8531,
        VxKnownColorNavy	= -16777088,
        VxKnownColorOldLace	= -133658,
        VxKnownColorOlive	= -8355840,
        VxKnownColorOliveDrab	= -9728477,
        VxKnownColorOrange	= -23296,
        VxKnownColorOrangeRed	= -47872,
        VxKnownColorOrchid	= -2461482,
        VxKnownColorPaleGoldenrod	= -1120086,
        VxKnownColorPaleGreen	= -6751336,
        VxKnownColorPaleTurquoise	= -5247250,
        VxKnownColorPaleVioletRed	= -2396013,
        VxKnownColorPapayaWhip	= -4139,
        VxKnownColorPeachPuff	= -9543,
        VxKnownColorPeru	= -3308225,
        VxKnownColorPink	= -16181,
        VxKnownColorPlum	= -2252579,
        VxKnownColorPowderBlue	= -5185306,
        VxKnownColorPurple	= -8388480,
        VxKnownColorRed	= -65536,
        VxKnownColorRosyBrown	= -4419697,
        VxKnownColorRoyalBlue	= -12490271,
        VxKnownColorSaddleBrown	= -7650029,
        VxKnownColorSalmon	= -360334,
        VxKnownColorSandyBrown	= -744352,
        VxKnownColorSeaGreen	= -13726889,
        VxKnownColorSeaShell	= -2578,
        VxKnownColorSienna	= -6270419,
        VxKnownColorSilver	= -4144960,
        VxKnownColorSkyBlue	= -7876885,
        VxKnownColorSlateBlue	= -9807155,
        VxKnownColorSlateGray	= -9404272,
        VxKnownColorSnow	= -1286,
        VxKnownColorSpringGreen	= -16711809,
        VxKnownColorSteelBlue	= -12156236,
        VxKnownColorTan	= -2968436,
        VxKnownColorTeal	= -16744320,
        VxKnownColorThistle	= -2572328,
        VxKnownColorTomato	= -40121,
        VxKnownColorTransparent	= 16777215,
        VxKnownColorTurquoise	= -12525360,
        VxKnownColorViolet	= -1146130,
        VxKnownColorWheat	= -663885,
        VxKnownColorWhite	= -1,
        VxKnownColorWhiteSmoke	= -657931,
        VxKnownColorYellow	= -256,
        VxKnownColorYellowGreen	= -6632142,
        VxKnownColorUnknownColor	= 1
    } 	VxKnownColor;

typedef 
enum _VxPathGeometryInternalFlags
    {
        VxPathGeometryInternalFlagsNone	= 0,
        VxPathGeometryInternalFlagsInvalid	= 1,
        VxPathGeometryInternalFlagsDirty	= 2,
        VxPathGeometryInternalFlagsBoundsValid	= 4
    } 	VxPathGeometryInternalFlags;

typedef 
enum _VxPixelFormatFlags
    {
        VxPixelFormatFlagsBitsPerPixelMask	= 255,
        VxPixelFormatFlagsBitsPerPixelUndefined	= 0,
        VxPixelFormatFlagsBitsPerPixel1	= 1,
        VxPixelFormatFlagsBitsPerPixel2	= 2,
        VxPixelFormatFlagsBitsPerPixel4	= 4,
        VxPixelFormatFlagsBitsPerPixel8	= 8,
        VxPixelFormatFlagsBitsPerPixel16	= 16,
        VxPixelFormatFlagsBitsPerPixel24	= 24,
        VxPixelFormatFlagsBitsPerPixel32	= 32,
        VxPixelFormatFlagsBitsPerPixel48	= 48,
        VxPixelFormatFlagsBitsPerPixel64	= 64,
        VxPixelFormatFlagsBitsPerPixel96	= 96,
        VxPixelFormatFlagsBitsPerPixel128	= 128,
        VxPixelFormatFlagsIsGray	= 256,
        VxPixelFormatFlagsIsCMYK	= 512,
        VxPixelFormatFlagsIsSRGB	= 1024,
        VxPixelFormatFlagsIsScRGB	= 2048,
        VxPixelFormatFlagsPremultiplied	= 4096,
        VxPixelFormatFlagsChannelOrderMask	= 122880,
        VxPixelFormatFlagsChannelOrderRGB	= 8192,
        VxPixelFormatFlagsChannelOrderBGR	= 16384,
        VxPixelFormatFlagsChannelOrderARGB	= 32768,
        VxPixelFormatFlagsChannelOrderABGR	= 65536,
        VxPixelFormatFlagsPalettized	= 131072,
        VxPixelFormatFlagsNChannelAlpha	= 262144,
        VxPixelFormatFlagsIsNChannel	= 524288
    } 	VxPixelFormatFlags;

typedef 
enum _VxStyleSimulations
    {
        VxStyleSimulationsNone	= 0,
        VxStyleSimulationsBoldSimulation	= 1,
        VxStyleSimulationsItalicSimulation	= 2,
        VxStyleSimulationsBoldItalicSimulation	= 3
    } 	VxStyleSimulations;

typedef 
enum _VxNumberCultureSource
    {
        VxNumberCultureSourceText	= 0,
        VxNumberCultureSourceUser	= 1,
        VxNumberCultureSourceOverride	= 2
    } 	VxNumberCultureSource;

typedef 
enum _VxNumberSubstitutionMethod
    {
        VxNumberSubstitutionMethodAsCulture	= 0,
        VxNumberSubstitutionMethodContext	= 1,
        VxNumberSubstitutionMethodEuropean	= 2,
        VxNumberSubstitutionMethodNativeNational	= 3,
        VxNumberSubstitutionMethodTraditional	= 4
    } 	VxNumberSubstitutionMethod;

typedef 
enum _VxTextCollapsingStyle
    {
        VxTextCollapsingStyleTrailingCharacter	= 0,
        VxTextCollapsingStyleTrailingWord	= 1
    } 	VxTextCollapsingStyle;

typedef 
enum _VxBreakStrategies
    {
        VxBreakStrategiesBreakCJK	= 0,
        VxBreakStrategiesKeepCJK	= 1,
        VxBreakStrategiesMax	= 2
    } 	VxBreakStrategies;

typedef 
enum _VxInvertAxes
    {
        VxInvertAxesNone	= 0,
        VxInvertAxesHorizontal	= 1,
        VxInvertAxesVertical	= 2,
        VxInvertAxesBoth	= 3
    } 	VxInvertAxes;

typedef 
enum _VxTextTabAlignment
    {
        VxTextTabAlignmentLeft	= 0,
        VxTextTabAlignmentCenter	= 1,
        VxTextTabAlignmentRight	= 2,
        VxTextTabAlignmentCharacter	= 3
    } 	VxTextTabAlignment;

typedef 
enum _VxWICColorContextType
    {
        VxWICColorContextTypeWICColorContextUninitialized	= 0,
        VxWICColorContextTypeWICColorContextProfile	= 1,
        VxWICColorContextTypeWICColorContextExifColorSpace	= 2
    } 	VxWICColorContextType;

typedef 
enum _VxVisualFlags
    {
        VxVisualFlagsNone	= 0,
        VxVisualFlagsIsSubtreeDirtyForPrecompute	= 1,
        VxVisualFlagsShouldPostRender	= 2,
        VxVisualFlagsIsUIElement	= 4,
        VxVisualFlagsIsLayoutSuspended	= 8,
        VxVisualFlagsIsVisualChildrenIterationInProgress	= 16,
        VxVisualFlagsAre3DContentBoundsValid	= 32,
        VxVisualFlagsFindCommonAncestor	= 64,
        VxVisualFlagsIsLayoutIslandRoot	= 128,
        VxVisualFlagsUseLayoutRounding	= 256,
        VxVisualFlagsVisibilityCache_Visible	= 512,
        VxVisualFlagsVisibilityCache_TakesSpace	= 1024,
        VxVisualFlagsRegisteredForAncestorChanged	= 2048,
        VxVisualFlagsSubTreeHoldsAncestorChanged	= 4096,
        VxVisualFlagsNodeIsCyclicBrushRoot	= 8192,
        VxVisualFlagsNodeHasEffect	= 16384,
        VxVisualFlagsIsViewport3DVisual	= 32768,
        VxVisualFlagsReentrancyFlag	= 65536,
        VxVisualFlagsHasChildren	= 131072,
        VxVisualFlagsBitmapEffectEmulationDisabled	= 262144,
        VxVisualFlagsTreeLevelBit0	= 2097152,
        VxVisualFlagsTreeLevelBit1	= 4194304,
        VxVisualFlagsTreeLevelBit2	= 8388608,
        VxVisualFlagsTreeLevelBit3	= 16777216,
        VxVisualFlagsTreeLevelBit4	= 33554432,
        VxVisualFlagsTreeLevelBit5	= 67108864,
        VxVisualFlagsTreeLevelBit6	= 134217728,
        VxVisualFlagsTreeLevelBit7	= 268435456,
        VxVisualFlagsTreeLevelBit8	= 536870912,
        VxVisualFlagsTreeLevelBit9	= 1073741824,
        VxVisualFlagsTreeLevelBit10	= 0x80000000
    } 	VxVisualFlags;

typedef 
enum _VxVisualProxyFlags
    {
        VxVisualProxyFlagsNone	= 0,
        VxVisualProxyFlagsIsSubtreeDirtyForRender	= 1,
        VxVisualProxyFlagsIsTransformDirty	= 2,
        VxVisualProxyFlagsIsClipDirty	= 4,
        VxVisualProxyFlagsIsContentDirty	= 8,
        VxVisualProxyFlagsIsOpacityDirty	= 16,
        VxVisualProxyFlagsIsOpacityMaskDirty	= 32,
        VxVisualProxyFlagsIsOffsetDirty	= 64,
        VxVisualProxyFlagsIsClearTypeHintDirty	= 128,
        VxVisualProxyFlagsIsGuidelineCollectionDirty	= 256,
        VxVisualProxyFlagsIsEdgeModeDirty	= 512,
        VxVisualProxyFlagsIsContentConnected	= 1024,
        VxVisualProxyFlagsIsContentNodeConnected	= 2048,
        VxVisualProxyFlagsIsConnectedToParent	= 4096,
        VxVisualProxyFlagsViewport3DVisual_IsCameraDirty	= 8192,
        VxVisualProxyFlagsViewport3DVisual_IsViewportDirty	= 16384,
        VxVisualProxyFlagsIsBitmapScalingModeDirty	= 32768,
        VxVisualProxyFlagsIsDeleteResourceInProgress	= 65536,
        VxVisualProxyFlagsIsChildrenZOrderDirty	= 131072,
        VxVisualProxyFlagsIsEffectDirty	= 262144,
        VxVisualProxyFlagsIsCacheModeDirty	= 524288,
        VxVisualProxyFlagsIsScrollableAreaClipDirty	= 1048576,
        VxVisualProxyFlagsIsTextRenderingModeDirty	= 2097152,
        VxVisualProxyFlagsIsTextHintingModeDirty	= 4194304
    } 	VxVisualProxyFlags;

typedef 
enum _VxEasingMode
    {
        VxEasingModeEaseIn	= 0,
        VxEasingModeEaseOut	= 1,
        VxEasingModeEaseInOut	= 2
    } 	VxEasingMode;

typedef 
enum _VxRectCompareResult
    {
        VxRectCompareResultRect1ContainsRect2	= 0,
        VxRectCompareResultRect2ContainsRect1	= 1,
        VxRectCompareResultNoItersection	= 2
    } 	VxRectCompareResult;

typedef 
enum _VxPenTip
    {
        VxPenTipCircle	= 0,
        VxPenTipRectangle	= 1,
        VxPenTipDefault	= 0
    } 	VxPenTip;

typedef 
enum _VxReadEvent
    {
        VxReadEventFullDownloadReadEvent	= 0,
        VxReadEventByteRangeReadEvent	= 1,
        VxReadEventMaxReadEventEnum	= 2
    } 	VxReadEvent;

typedef 
enum _VxPolygonSide
    {
        VxPolygonSideFRONT	= 0,
        VxPolygonSideBACK	= 1
    } 	VxPolygonSide;

typedef 
enum _VxOverrideClass
    {
        VxOverrideClassOverrideClassNeutral	= 0,
        VxOverrideClassOverrideClassLeft	= 1,
        VxOverrideClassOverrideClassRight	= 2
    } 	VxOverrideClass;

typedef 
enum _VxProcessKeyResult
    {
        VxProcessKeyResultNoMatch	= 0,
        VxProcessKeyResultMoreMatches	= 1,
        VxProcessKeyResultLastMatch	= 2
    } 	VxProcessKeyResult;

typedef 
enum _VxFieldIndex
    {
        VxFieldIndexBlackBoxWidth	= 0,
        VxFieldIndexBlackBoxHeight	= 1,
        VxFieldIndexBaseline	= 2,
        VxFieldIndexLeftSideBearing	= 3,
        VxFieldIndexRightSideBearing	= 4,
        VxFieldIndexTopSideBearing	= 5,
        VxFieldIndexBottomSideBearing	= 6
    } 	VxFieldIndex;

typedef 
enum _Vx_ImageAttributesFlags
    {
        Vx_ImageAttributesFlagsIAF_Size	= 1,
        Vx_ImageAttributesFlagsIAF_Type	= 2,
        Vx_ImageAttributesFlagsIAF_Format	= 4,
        Vx_ImageAttributesFlagsIAF_Dpi	= 8,
        Vx_ImageAttributesFlagsIAF_Background	= 0x80000000,
        Vx_ImageAttributesFlagsIAF_Grayscale	= 1073741824,
        Vx_ImageAttributesFlagsIAF_GrayscaleBiasColor	= 536870912,
        Vx_ImageAttributesFlagsIAF_HighContrast	= 268435456,
        Vx_ImageAttributesFlagsIAF_RequiredFlags	= 15,
        Vx_ImageAttributesFlagsIAF_OptionalFlags	= -268435456
    } 	Vx_ImageAttributesFlags;

typedef 
enum _Vx_UIDataFormat
    {
        Vx_UIDataFormatDF_Win32	= 1,
        Vx_UIDataFormatDF_WinForms	= 2,
        Vx_UIDataFormatDF_WPF	= 3
    } 	Vx_UIDataFormat;

typedef 
enum _Vx_UIImageType
    {
        Vx_UIImageTypeIT_Bitmap	= 1,
        Vx_UIImageTypeIT_Icon	= 2,
        Vx_UIImageTypeIT_ImageList	= 3
    } 	Vx_UIImageType;

typedef 
enum _Vx_ImageMonikerType
    {
        Vx_ImageMonikerTypeIMT_Unknown	= 0,
        Vx_ImageMonikerTypeIMT_LoadedFromManifest	= 1,
        Vx_ImageMonikerTypeIMT_Custom	= 2,
        Vx_ImageMonikerTypeIMT_System	= 3
    } 	Vx_ImageMonikerType;

typedef 
enum _Vx_UIImageHorizontalAlignment
    {
        Vx_UIImageHorizontalAlignmentIHA_Left	= 1,
        Vx_UIImageHorizontalAlignmentIHA_Center	= 2,
        Vx_UIImageHorizontalAlignmentIHA_Right	= 3
    } 	Vx_UIImageHorizontalAlignment;

typedef 
enum _Vx_UIImageVerticalAlignment
    {
        Vx_UIImageVerticalAlignmentIVA_Top	= 1,
        Vx_UIImageVerticalAlignmentIVA_Center	= 2,
        Vx_UIImageVerticalAlignmentIVA_Bottom	= 3
    } 	Vx_UIImageVerticalAlignment;

typedef 
enum _VxImageKind
    {
        VxImageKindBitmap	= 0,
        VxImageKindIcon	= 1,
        VxImageKindImageList	= 2
    } 	VxImageKind;

typedef 
enum _VxImageFormat
    {
        VxImageFormatWPF	= 0,
        VxImageFormatWinForms	= 1,
        VxImageFormatWin32	= 2
    } 	VxImageFormat;

typedef 
enum _VxNativeResourceKind
    {
        VxNativeResourceKindXAML	= 0,
        VxNativeResourceKindPNG	= 1,
        VxNativeResourceKindIcon	= 2
    } 	VxNativeResourceKind;

typedef 
enum _VxReferenceKind
    {
        VxReferenceKindWeak	= 0,
        VxReferenceKindStrong	= 1,
        VxReferenceKindDefault	= 0
    } 	VxReferenceKind;

typedef 
enum _VxSourceBackground
    {
        VxSourceBackgroundAny	= 0,
        VxSourceBackgroundLight	= 1,
        VxSourceBackgroundDark	= 2,
        VxSourceBackgroundHighContrast	= 3,
        VxSourceBackgroundHighContrastLight	= 4,
        VxSourceBackgroundHighContrastDark	= 5
    } 	VxSourceBackground;

typedef 
enum _VxST_SourceBackgroundType
    {
        VxST_SourceBackgroundTypeLight	= 0,
        VxST_SourceBackgroundTypeDark	= 1,
        VxST_SourceBackgroundTypeHighContrast	= 2,
        VxST_SourceBackgroundTypeHighContrastLight	= 3,
        VxST_SourceBackgroundTypeHighContrastDark	= 4
    } 	VxST_SourceBackgroundType;

typedef 
enum _VxILC
    {
        VxILCILC_MASK	= 1,
        VxILCILC_COLOR	= 0,
        VxILCILC_COLORDDB	= 254,
        VxILCILC_COLOR4	= 4,
        VxILCILC_COLOR8	= 8,
        VxILCILC_COLOR16	= 16,
        VxILCILC_COLOR24	= 24,
        VxILCILC_COLOR32	= 32,
        VxILCILC_PALETTE	= 2048,
        VxILCILC_MIRROR	= 8192,
        VxILCILC_PERITEMMIRROR	= 32768,
        VxILCILC_ORIGINALSIZE	= 65536,
        VxILCILC_HIGHQUALITYSCALE	= 131072
    } 	VxILC;

typedef 
enum _VxSHGFI
    {
        VxSHGFIIcon	= 256,
        VxSHGFIDisplayName	= 512,
        VxSHGFITypeName	= 1024,
        VxSHGFIAttributes	= 2048,
        VxSHGFIIconLocation	= 4096,
        VxSHGFIExeType	= 8192,
        VxSHGFISysIconIndex	= 16384,
        VxSHGFILinkOverlay	= 32768,
        VxSHGFISelected	= 65536,
        VxSHGFIAttr_Specified	= 131072,
        VxSHGFILargeIcon	= 0,
        VxSHGFISmallIcon	= 1,
        VxSHGFIOpenIcon	= 2,
        VxSHGFIShellIconSize	= 4,
        VxSHGFIPIDL	= 8,
        VxSHGFIUseFileAttributes	= 16,
        VxSHGFIAddOverlays	= 32,
        VxSHGFIOverlayIndex	= 64
    } 	VxSHGFI;

typedef 
enum _VxOLEIVERB
    {
        VxOLEIVERBOLEIVERB_PRIMARY	= 0,
        VxOLEIVERBOLEIVERB_SHOW	= -1,
        VxOLEIVERBOLEIVERB_OPEN	= -2,
        VxOLEIVERBOLEIVERB_HIDE	= -3,
        VxOLEIVERBOLEIVERB_UIACTIVATE	= -4,
        VxOLEIVERBOLEIVERB_INPLACEACTIVATE	= -5,
        VxOLEIVERBOLEIVERB_DISCARDUNDOSTATE	= -6
    } 	VxOLEIVERB;

typedef 
enum _VxVARTYPE
    {
        VxVARTYPEVT_EMPTY	= 0,
        VxVARTYPEVT_NULL	= 1,
        VxVARTYPEVT_I2	= 2,
        VxVARTYPEVT_I4	= 3,
        VxVARTYPEVT_R4	= 4,
        VxVARTYPEVT_R8	= 5,
        VxVARTYPEVT_CY	= 6,
        VxVARTYPEVT_DATE	= 7,
        VxVARTYPEVT_BSTR	= 8,
        VxVARTYPEVT_DISPATCH	= 9,
        VxVARTYPEVT_ERROR	= 10,
        VxVARTYPEVT_BOOL	= 11,
        VxVARTYPEVT_VARIANT	= 12,
        VxVARTYPEVT_UNKNOWN	= 13,
        VxVARTYPEVT_DECIMAL	= 14,
        VxVARTYPEVT_I1	= 16,
        VxVARTYPEVT_UI1	= 17,
        VxVARTYPEVT_UI2	= 18,
        VxVARTYPEVT_UI4	= 19,
        VxVARTYPEVT_I8	= 20,
        VxVARTYPEVT_UI8	= 21,
        VxVARTYPEVT_INT	= 22,
        VxVARTYPEVT_UINT	= 23,
        VxVARTYPEVT_VOID	= 24,
        VxVARTYPEVT_HRESULT	= 25,
        VxVARTYPEVT_PTR	= 26,
        VxVARTYPEVT_SAFEARRAY	= 27,
        VxVARTYPEVT_CARRAY	= 28,
        VxVARTYPEVT_USERDEFINED	= 29,
        VxVARTYPEVT_LPSTR	= 30,
        VxVARTYPEVT_LPWSTR	= 31,
        VxVARTYPEVT_RECORD	= 36,
        VxVARTYPEVT_INT_PTR	= 37,
        VxVARTYPEVT_UINT_PTR	= 38,
        VxVARTYPEVT_FILETIME	= 64,
        VxVARTYPEVT_BLOB	= 65,
        VxVARTYPEVT_STREAM	= 66,
        VxVARTYPEVT_STORAGE	= 67,
        VxVARTYPEVT_STREAMED_OBJECT	= 68,
        VxVARTYPEVT_STORED_OBJECT	= 69,
        VxVARTYPEVT_BLOB_OBJECT	= 70,
        VxVARTYPEVT_CF	= 71,
        VxVARTYPEVT_CLSID	= 72,
        VxVARTYPEVT_VERSIONED_STREAM	= 73,
        VxVARTYPEVT_BSTR_BLOB	= 4095,
        VxVARTYPEVT_VECTOR	= 4096,
        VxVARTYPEVT_ARRAY	= 8192,
        VxVARTYPEVT_BYREF	= 16384,
        VxVARTYPEVT_RESERVED	= 32768,
        VxVARTYPEVT_ILLEGAL	= 65535,
        VxVARTYPEVT_ILLEGALMASKED	= 4095,
        VxVARTYPEVT_TYPEMASK	= 4095
    } 	VxVARTYPE;

typedef 
enum _VxVARIANTFLAGS
    {
        VxVARIANTFLAGSNONE	= 0,
        VxVARIANTFLAGSVARIANT_NOVALUEPROP	= 1,
        VxVARIANTFLAGSVARIANT_ALPHABOOL	= 2,
        VxVARIANTFLAGSVARIANT_NOUSEROVERRIDE	= 4,
        VxVARIANTFLAGSVARIANT_LOCALBOOL	= 16
    } 	VxVARIANTFLAGS;

typedef 
enum _VxAlignment
    {
        VxAlignmentLeftOrTop	= 0,
        VxAlignmentCenter	= 1,
        VxAlignmentRightOrBottom	= 2
    } 	VxAlignment;

typedef 
enum _VxSerializedType
    {
        VxSerializedTypeSingleImageBundle	= 0,
        VxSerializedTypeImageListBundle	= 1
    } 	VxSerializedType;

typedef 
enum _VxLoadLibraryFlags
    {
        VxLoadLibraryFlagsDONT_RESOLVE_DLL_REFERENCES	= 1,
        VxLoadLibraryFlagsLOAD_LIBRARY_AS_DATAFILE	= 2,
        VxLoadLibraryFlagsLOAD_WITH_ALTERED_SEARCH_PATH	= 8,
        VxLoadLibraryFlagsLOAD_IGNORE_CODE_AUTHZ_LEVEL	= 16,
        VxLoadLibraryFlagsLOAD_LIBRARY_AS_IMAGE_RESOURCE	= 32,
        VxLoadLibraryFlagsLOAD_LIBRARY_AS_DATAFILE_EXCLUSIVE	= 64,
        VxLoadLibraryFlagsLOAD_LIBRARY_REQUIRE_SIGNED_TARGET	= 128
    } 	VxLoadLibraryFlags;

typedef 
enum _VxLoadImageType
    {
        VxLoadImageTypeIMAGE_BITMAP	= 0,
        VxLoadImageTypeIMAGE_ICON	= 1,
        VxLoadImageTypeIMAGE_CURSOR	= 2,
        VxLoadImageTypeIMAGE_ENHMETAFILE	= 3
    } 	VxLoadImageType;

typedef 
enum _VxLoadImageFlags
    {
        VxLoadImageFlagsLR_DEFAULTCOLOR	= 0,
        VxLoadImageFlagsLR_MONOCHROME	= 1,
        VxLoadImageFlagsLR_COLOR	= 2,
        VxLoadImageFlagsLR_COPYRETURNORG	= 4,
        VxLoadImageFlagsLR_COPYDELETEORG	= 8,
        VxLoadImageFlagsLR_LOADFROMFILE	= 16,
        VxLoadImageFlagsLR_LOADTRANSPARENT	= 32,
        VxLoadImageFlagsLR_DEFAULTSIZE	= 64,
        VxLoadImageFlagsLR_VGACOLOR	= 128,
        VxLoadImageFlagsLR_LOADMAP3DCOLORS	= 4096,
        VxLoadImageFlagsLR_CREATEDIBSECTION	= 8192,
        VxLoadImageFlagsLR_COPYFROMRESOURCE	= 16384,
        VxLoadImageFlagsLR_SHARED	= 32768
    } 	VxLoadImageFlags;

typedef 
enum _VxSyncObjectAccess
    {
        VxSyncObjectAccessDELETE	= 65536,
        VxSyncObjectAccessREAD_CONTROL	= 131072,
        VxSyncObjectAccessWRITE_DAC	= 262144,
        VxSyncObjectAccessWRITE_OWNER	= 524288,
        VxSyncObjectAccessSYNCHRONIZE	= 1048576,
        VxSyncObjectAccessEVENT_ALL_ACCESS	= 2031619,
        VxSyncObjectAccessEVENT_MODIFY_STATE	= 2,
        VxSyncObjectAccessMUTEX_ALL_ACCESS	= 2031617,
        VxSyncObjectAccessMUTEX_MODIFY_STATE	= 1,
        VxSyncObjectAccessSEMAPHORE_ALL_ACCESS	= 2031619,
        VxSyncObjectAccessSEMAPHORE_MODIFY_STATE	= 2,
        VxSyncObjectAccessTIMER_ALL_ACCESS	= 2031619,
        VxSyncObjectAccessTIMER_MODIFY_STATE	= 2,
        VxSyncObjectAccessTIMER_QUERY_STATE	= 1
    } 	VxSyncObjectAccess;

typedef 
enum _VxWindowsHookType
    {
        VxWindowsHookTypeWH_JOURNALRECORD	= 0,
        VxWindowsHookTypeWH_JOURNALPLAYBACK	= 1,
        VxWindowsHookTypeWH_KEYBOARD	= 2,
        VxWindowsHookTypeWH_GETMESSAGE	= 3,
        VxWindowsHookTypeWH_CALLWNDPROC	= 4,
        VxWindowsHookTypeWH_CBT	= 5,
        VxWindowsHookTypeWH_SYSMSGFILTER	= 6,
        VxWindowsHookTypeWH_MOUSE	= 7,
        VxWindowsHookTypeWH_HARDWARE	= 8,
        VxWindowsHookTypeWH_DEBUG	= 9,
        VxWindowsHookTypeWH_SHELL	= 10,
        VxWindowsHookTypeWH_FOREGROUNDIDLE	= 11,
        VxWindowsHookTypeWH_CALLWNDPROCRET	= 12,
        VxWindowsHookTypeWH_KEYBOARD_LL	= 13,
        VxWindowsHookTypeWH_MOUSE_LL	= 14
    } 	VxWindowsHookType;

typedef 
enum _VxCbtHookAction
    {
        VxCbtHookActionHCBT_MOVESIZE	= 0,
        VxCbtHookActionHCBT_MINMAX	= 1,
        VxCbtHookActionHCBT_QS	= 2,
        VxCbtHookActionHCBT_CREATEWND	= 3,
        VxCbtHookActionHCBT_DESTROYWND	= 4,
        VxCbtHookActionHCBT_ACTIVATE	= 5,
        VxCbtHookActionHCBT_CLICKSKIPPED	= 6,
        VxCbtHookActionHCBT_KEYSKIPPED	= 7,
        VxCbtHookActionHCBT_SYSCOMMAND	= 8,
        VxCbtHookActionHCBT_SETFOCUS	= 9
    } 	VxCbtHookAction;

typedef 
enum _VxPrintFlags
    {
        VxPrintFlagsPRF_CHECKVISIBLE	= 1,
        VxPrintFlagsPRF_NONCLIENT	= 2,
        VxPrintFlagsPRF_CLIENT	= 4,
        VxPrintFlagsPRF_ERASEBKGND	= 8,
        VxPrintFlagsPRF_CHILDREN	= 16,
        VxPrintFlagsPRF_OWNED	= 32
    } 	VxPrintFlags;

typedef 
enum _VxStockObjects
    {
        VxStockObjectsWHITE_BRUSH	= 0,
        VxStockObjectsLTGRAY_BRUSH	= 1,
        VxStockObjectsGRAY_BRUSH	= 2,
        VxStockObjectsDKGRAY_BRUSH	= 3,
        VxStockObjectsBLACK_BRUSH	= 4,
        VxStockObjectsNULL_BRUSH	= 5,
        VxStockObjectsHOLLOW_BRUSH	= 5,
        VxStockObjectsWHITE_PEN	= 6,
        VxStockObjectsBLACK_PEN	= 7,
        VxStockObjectsNULL_PEN	= 8,
        VxStockObjectsOEM_FIXED_FONT	= 10,
        VxStockObjectsANSI_FIXED_FONT	= 11,
        VxStockObjectsANSI_VAR_FONT	= 12,
        VxStockObjectsSYSTEM_FONT	= 13,
        VxStockObjectsDEVICE_DEFAULT_FONT	= 14,
        VxStockObjectsDEFAULT_PALETTE	= 15,
        VxStockObjectsSYSTEM_FIXED_FONT	= 16,
        VxStockObjectsDEFAULT_GUI_FONT	= 17,
        VxStockObjectsDC_BRUSH	= 18,
        VxStockObjectsDC_PEN	= 19
    } 	VxStockObjects;

typedef 
enum _VxFILE_INFO_BY_HANDLE_CLASS
    {
        VxFILE_INFO_BY_HANDLE_CLASSFileBasicInfo	= 0,
        VxFILE_INFO_BY_HANDLE_CLASSFileStandardInfo	= 1,
        VxFILE_INFO_BY_HANDLE_CLASSFileNameInfo	= 2,
        VxFILE_INFO_BY_HANDLE_CLASSFileRenameInfo	= 3,
        VxFILE_INFO_BY_HANDLE_CLASSFileDispositionInfo	= 4,
        VxFILE_INFO_BY_HANDLE_CLASSFileAllocationInfo	= 5,
        VxFILE_INFO_BY_HANDLE_CLASSFileEndOfFileInfo	= 6,
        VxFILE_INFO_BY_HANDLE_CLASSFileStreamInfo	= 7,
        VxFILE_INFO_BY_HANDLE_CLASSFileCompressionInfo	= 8,
        VxFILE_INFO_BY_HANDLE_CLASSFileAttributeTagInfo	= 9,
        VxFILE_INFO_BY_HANDLE_CLASSFileIdBothDirectoryInfo	= 10,
        VxFILE_INFO_BY_HANDLE_CLASSFileIdBothDirectoryRestartInfo	= 11,
        VxFILE_INFO_BY_HANDLE_CLASSFileIoPriorityHintInfo	= 12,
        VxFILE_INFO_BY_HANDLE_CLASSFileRemoteProtocolInfo	= 13,
        VxFILE_INFO_BY_HANDLE_CLASSFileFullDirectoryInfo	= 14,
        VxFILE_INFO_BY_HANDLE_CLASSFileFullDirectoryRestartInfo	= 15,
        VxFILE_INFO_BY_HANDLE_CLASSFileStorageInfo	= 16,
        VxFILE_INFO_BY_HANDLE_CLASSFileAlignmentInfo	= 17,
        VxFILE_INFO_BY_HANDLE_CLASSFileIdInfo	= 18,
        VxFILE_INFO_BY_HANDLE_CLASSFileIdExtdDirectoryInfo	= 19,
        VxFILE_INFO_BY_HANDLE_CLASSFileIdExtdDirectoryRestartInfo	= 20,
        VxFILE_INFO_BY_HANDLE_CLASSMaximumFileInfoByHandlesClass	= 21
    } 	VxFILE_INFO_BY_HANDLE_CLASS;

typedef 
enum _Vx_FILE_COMPRESSION_INFORMATION_COMPRESSION_FORMAT
    {
        Vx_FILE_COMPRESSION_INFORMATION_COMPRESSION_FORMATCOMPRESSION_FORMAT_NONE	= 0,
        Vx_FILE_COMPRESSION_INFORMATION_COMPRESSION_FORMATCOMPRESSION_FORMAT_DEFAULT	= 1,
        Vx_FILE_COMPRESSION_INFORMATION_COMPRESSION_FORMATCOMPRESSION_FORMAT_LZNT1	= 2
    } 	Vx_FILE_COMPRESSION_INFORMATION_COMPRESSION_FORMAT;

typedef 
enum _VxFileSystemFeature
    {
        VxFileSystemFeatureCaseSensitiveSearch	= 1,
        VxFileSystemFeatureCasePreservedNames	= 2,
        VxFileSystemFeatureUnicodeOnDisk	= 4,
        VxFileSystemFeaturePersistentACLS	= 8,
        VxFileSystemFeatureFileCompression	= 16,
        VxFileSystemFeatureVolumeQuotas	= 32,
        VxFileSystemFeatureSupportsSparseFiles	= 64,
        VxFileSystemFeatureSupportsReparsePoints	= 128,
        VxFileSystemFeatureVolumeIsCompressed	= 32768,
        VxFileSystemFeatureSupportsObjectIDs	= 65536,
        VxFileSystemFeatureSupportsEncryption	= 131072,
        VxFileSystemFeatureNamedStreams	= 262144,
        VxFileSystemFeatureReadOnlyVolume	= 524288,
        VxFileSystemFeatureSequentialWriteOnce	= 1048576,
        VxFileSystemFeatureSupportsTransactions	= 2097152
    } 	VxFileSystemFeature;

typedef 
enum _VxRedrawWindowFlags
    {
        VxRedrawWindowFlagsInvalidate	= 1,
        VxRedrawWindowFlagsInternalPaint	= 2,
        VxRedrawWindowFlagsErase	= 4,
        VxRedrawWindowFlagsValidate	= 8,
        VxRedrawWindowFlagsNoInternalPaint	= 16,
        VxRedrawWindowFlagsNoErase	= 32,
        VxRedrawWindowFlagsNoChildren	= 64,
        VxRedrawWindowFlagsAllChildren	= 128,
        VxRedrawWindowFlagsUpdateNow	= 256,
        VxRedrawWindowFlagsEraseNow	= 512,
        VxRedrawWindowFlagsFrame	= 1024,
        VxRedrawWindowFlagsNoFrame	= 2048
    } 	VxRedrawWindowFlags;

typedef 
enum _VxSHARD
    {
        VxSHARDPIDL	= 1,
        VxSHARDPATHA	= 2,
        VxSHARDPATHW	= 3,
        VxSHARDAPPIDINFO	= 4,
        VxSHARDAPPIDINFOIDLIST	= 5,
        VxSHARDLINK	= 6,
        VxSHARDAPPIDINFOLINK	= 7
    } 	VxSHARD;

typedef 
enum _VxGdiObjectType
    {
        VxGdiObjectTypeERROR	= 0,
        VxGdiObjectTypeOBJ_PEN	= 1,
        VxGdiObjectTypeOBJ_BRUSH	= 2,
        VxGdiObjectTypeOBJ_DC	= 3,
        VxGdiObjectTypeOBJ_PAL	= 5,
        VxGdiObjectTypeOBJ_FONT	= 6,
        VxGdiObjectTypeOBJ_BITMAP	= 7,
        VxGdiObjectTypeOBJ_REGION	= 8,
        VxGdiObjectTypeOBJ_MEMDC	= 10,
        VxGdiObjectTypeOBJ_ENHMETADC	= 12,
        VxGdiObjectTypeOBJ_ENHMETAFILE	= 13
    } 	VxGdiObjectType;

typedef 
enum _VxSizeStyle
    {
        VxSizeStyleSIZE_RESTORED	= 0,
        VxSizeStyleSIZE_MINIMIZED	= 1,
        VxSizeStyleSIZE_MAXIMIZED	= 2,
        VxSizeStyleSIZE_MAXSHOW	= 3,
        VxSizeStyleSIZE_MAXHIDE	= 4,
        VxSizeStyleSIZENORMAL	= 0,
        VxSizeStyleSIZEICONIC	= 1,
        VxSizeStyleSIZEFULLSCREEN	= 2,
        VxSizeStyleSIZEZOOMSHOW	= 3,
        VxSizeStyleSIZEZOOMHIDE	= 4
    } 	VxSizeStyle;

typedef 
enum _VxDialogResult
    {
        VxDialogResultIDOK	= 1,
        VxDialogResultIDCANCEL	= 2,
        VxDialogResultIDABORT	= 3,
        VxDialogResultIDRETRY	= 4,
        VxDialogResultIDIGNORE	= 5,
        VxDialogResultIDYES	= 6,
        VxDialogResultIDNO	= 7,
        VxDialogResultIDCLOSE	= 8,
        VxDialogResultIDHELP	= 9,
        VxDialogResultIDTRYAGAIN	= 10,
        VxDialogResultIDCONTINUE	= 11
    } 	VxDialogResult;

typedef 
enum _VxGWL
    {
        VxGWLSTYLE	= -16,
        VxGWLEXSTYLE	= -20
    } 	VxGWL;

typedef 
enum _VxGWLP
    {
        VxGWLPWNDPROC	= -4,
        VxGWLPHINSTANCE	= -6,
        VxGWLPHWNDPARENT	= -8,
        VxGWLPUSERDATA	= -21,
        VxGWLPID	= -12
    } 	VxGWLP;

typedef 
enum _VxCombineMode
    {
        VxCombineModeRGN_AND	= 1,
        VxCombineModeRGN_OR	= 2,
        VxCombineModeRGN_XOR	= 3,
        VxCombineModeRGN_DIFF	= 4,
        VxCombineModeRGN_COPY	= 5,
        VxCombineModeRGN_MIN	= 1,
        VxCombineModeRGN_MAX	= 5
    } 	VxCombineMode;

typedef 
enum _VxThreadPriority
    {
        VxThreadPriorityTHREAD_MODE_BACKGROUND_BEGIN	= 65536,
        VxThreadPriorityTHREAD_MODE_BACKGROUND_END	= 131072,
        VxThreadPriorityTHREAD_PRIORITY_ABOVE_NORMAL	= 1,
        VxThreadPriorityTHREAD_PRIORITY_BELOW_NORMAL	= -1,
        VxThreadPriorityTHREAD_PRIORITY_HIGHEST	= 2,
        VxThreadPriorityTHREAD_PRIORITY_IDLE	= -15,
        VxThreadPriorityTHREAD_PRIORITY_LOWEST	= -2,
        VxThreadPriorityTHREAD_PRIORITY_NORMAL	= 0,
        VxThreadPriorityTHREAD_PRIORITY_TIME_CRITICAL	= 15
    } 	VxThreadPriority;

typedef 
enum _VxReloadResult
    {
        VxReloadResultAborted	= 0,
        VxReloadResultSucceeded	= 1,
        VxReloadResultSucceededWithCharacterSubstitutions	= 2
    } 	VxReloadResult;

typedef 
enum _VxFileActionTypes
    {
        VxFileActionTypesContentSavedToDisk	= 1,
        VxFileActionTypesContentLoadedFromDisk	= 2,
        VxFileActionTypesDocumentRenamed	= 4
    } 	VxFileActionTypes;

typedef 
enum _VxEdgeInsertionMode
    {
        VxEdgeInsertionModeAllow	= 0,
        VxEdgeInsertionModeDeny	= 1
    } 	VxEdgeInsertionMode;

typedef 
enum _VxStringDifferenceTypes
    {
        VxStringDifferenceTypesLine	= 1,
        VxStringDifferenceTypesWord	= 2,
        VxStringDifferenceTypesCharacter	= 4
    } 	VxStringDifferenceTypes;

typedef 
enum _VxPointTrackingMode
    {
        VxPointTrackingModePositive	= 0,
        VxPointTrackingModeNegative	= 1
    } 	VxPointTrackingMode;

typedef 
enum _VxPositionAffinity
    {
        VxPositionAffinityPredecessor	= 0,
        VxPositionAffinitySuccessor	= 1
    } 	VxPositionAffinity;

typedef 
enum _VxSpanTrackingMode
    {
        VxSpanTrackingModeEdgeExclusive	= 0,
        VxSpanTrackingModeEdgeInclusive	= 1,
        VxSpanTrackingModeEdgePositive	= 2,
        VxSpanTrackingModeEdgeNegative	= 3,
        VxSpanTrackingModeCustom	= 4
    } 	VxSpanTrackingMode;

typedef 
enum _VxTrackingFidelityMode
    {
        VxTrackingFidelityModeForward	= 0,
        VxTrackingFidelityModeBackward	= 1,
        VxTrackingFidelityModeUndoRedo	= 2
    } 	VxTrackingFidelityMode;

typedef 
enum _VxElisionBufferOptions
    {
        VxElisionBufferOptionsNone	= 0,
        VxElisionBufferOptionsFillInMappingMode	= 1
    } 	VxElisionBufferOptions;

typedef 
enum _VxProjectionBufferOptions
    {
        VxProjectionBufferOptionsNone	= 0,
        VxProjectionBufferOptionsPermissiveEdgeInclusiveSourceSpans	= 1,
        VxProjectionBufferOptionsWritableLiteralSpans	= 2
    } 	VxProjectionBufferOptions;

typedef 
enum _VxDifferenceType
    {
        VxDifferenceTypeAdd	= 0,
        VxDifferenceTypeRemove	= 1,
        VxDifferenceTypeChange	= 2
    } 	VxDifferenceType;

typedef 
enum _VxWordSplitBehavior
    {
        VxWordSplitBehaviorDefault	= 0,
        VxWordSplitBehaviorCharacterClass	= 0,
        VxWordSplitBehaviorWhiteSpace	= 1,
        VxWordSplitBehaviorWhiteSpaceAndPunctuation	= 2,
        VxWordSplitBehaviorLanguageAppropriate	= 3
    } 	VxWordSplitBehavior;

typedef 
enum _VxChangeTypes
    {
        VxChangeTypesNone	= 0,
        VxChangeTypesChangedSinceOpened	= 1,
        VxChangeTypesChangedSinceSaved	= 2
    } 	VxChangeTypes;

typedef 
enum _VxTagAggregatorOptions
    {
        VxTagAggregatorOptionsNone	= 0,
        VxTagAggregatorOptionsMapByContentType	= 1
    } 	VxTagAggregatorOptions;

typedef 
enum _VxFindOptions
    {
        VxFindOptionsNone	= 0,
        VxFindOptionsMatchCase	= 1,
        VxFindOptionsUseRegularExpressions	= 2,
        VxFindOptionsWholeWord	= 4,
        VxFindOptionsSearchReverse	= 8,
        VxFindOptionsWrap	= 16,
        VxFindOptionsMultiline	= 32,
        VxFindOptionsOrdinalComparison	= 64,
        VxFindOptionsSingleLine	= 128
    } 	VxFindOptions;

typedef 
enum _VxTextUndoHistoryState
    {
        VxTextUndoHistoryStateIdle	= 0,
        VxTextUndoHistoryStateUndoing	= 1,
        VxTextUndoHistoryStateRedoing	= 2
    } 	VxTextUndoHistoryState;

typedef 
enum _VxTextUndoTransactionCompletionResult
    {
        VxTextUndoTransactionCompletionResultTransactionAdded	= 0,
        VxTextUndoTransactionCompletionResultTransactionMerged	= 1
    } 	VxTextUndoTransactionCompletionResult;

typedef 
enum _VxUndoTransactionState
    {
        VxUndoTransactionStateOpen	= 0,
        VxUndoTransactionStateCompleted	= 1,
        VxUndoTransactionStateCanceled	= 2,
        VxUndoTransactionStateRedoing	= 3,
        VxUndoTransactionStateUndoing	= 4,
        VxUndoTransactionStateUndone	= 5,
        VxUndoTransactionStateInvalid	= 6
    } 	VxUndoTransactionState;

typedef 
enum _VxDifferenceMappingMode
    {
        VxDifferenceMappingModeStart	= 0,
        VxDifferenceMappingModeLineColumn	= 1,
        VxDifferenceMappingModeEnd	= 2
    } 	VxDifferenceMappingMode;

typedef 
enum _VxIgnoreWhiteSpaceBehavior
    {
        VxIgnoreWhiteSpaceBehaviorNone	= 0,
        VxIgnoreWhiteSpaceBehaviorIgnoreTrimWhiteSpace	= 1,
        VxIgnoreWhiteSpaceBehaviorIgnoreAllWhiteSpace	= 2
    } 	VxIgnoreWhiteSpaceBehavior;

typedef 
enum _VxLineType
    {
        VxLineTypeAdded	= 0,
        VxLineTypeRemoved	= 1,
        VxLineTypeMatched	= 2
    } 	VxLineType;

typedef 
enum _VxSortStates
    {
        VxSortStatesNone	= 0,
        VxSortStatesAscending	= 1,
        VxSortStatesDescending	= 2
    } 	VxSortStates;

typedef 
enum _VxErrorRank
    {
        VxErrorRankLexical	= 0,
        VxErrorRankSyntactic	= 100,
        VxErrorRankDeclaration	= 200,
        VxErrorRankSemantic	= 300,
        VxErrorRankEmit	= 400,
        VxErrorRankPostBuild	= 500,
        VxErrorRankOther	= 2147483647
    } 	VxErrorRank;

typedef 
enum _VxAdornmentPositioningBehavior2
    {
        VxAdornmentPositioningBehavior2OwnerControlled	= 0,
        VxAdornmentPositioningBehavior2ViewportRelative	= 1,
        VxAdornmentPositioningBehavior2TextRelative	= 2,
        VxAdornmentPositioningBehavior2TextRelativeVerticalOnly	= 3
    } 	VxAdornmentPositioningBehavior2;

typedef 
enum _VxHowToShow
    {
        VxHowToShowAsIs	= 0,
        VxHowToShowCentered	= 1,
        VxHowToShowOnFirstLineOfView	= 2
    } 	VxHowToShow;

typedef 
enum _VxViewRelativePosition2
    {
        VxViewRelativePosition2Top	= 0,
        VxViewRelativePosition2Bottom	= 1,
        VxViewRelativePosition2TextTop	= 2,
        VxViewRelativePosition2TextBottom	= 3
    } 	VxViewRelativePosition2;

typedef 
enum _VxHorizontalPositioningMode
    {
        VxHorizontalPositioningModeTextRelative	= 0,
        VxHorizontalPositioningModeViewRelative	= 1,
        VxHorizontalPositioningModeAbsolute	= 2
    } 	VxHorizontalPositioningMode;

typedef 
enum _VxTagAggregatorOptions2
    {
        VxTagAggregatorOptions2None	= 0,
        VxTagAggregatorOptions2MapByContentType	= 1,
        VxTagAggregatorOptions2DeferTaggerCreation	= 2
    } 	VxTagAggregatorOptions2;

typedef 
enum _VxWaitIndicatorResult
    {
        VxWaitIndicatorResultCompleted	= 0,
        VxWaitIndicatorResultCanceled	= 1
    } 	VxWaitIndicatorResult;

typedef 
enum _VxFindResultType
    {
        VxFindResultTypeInner	= 0,
        VxFindResultTypeOuter	= 1
    } 	VxFindResultType;

typedef 
enum _VxUnicodeScript
    {
        VxUnicodeScriptNONE	= 0,
        VxUnicodeScriptLATIN	= 1,
        VxUnicodeScriptGREEK	= 2,
        VxUnicodeScriptCYRILLIC	= 3,
        VxUnicodeScriptARMENIAN	= 4,
        VxUnicodeScriptHEBREW	= 5,
        VxUnicodeScriptARABIC	= 6,
        VxUnicodeScriptDEVANAGARI	= 7,
        VxUnicodeScriptBANGLA	= 8,
        VxUnicodeScriptGURMUKHI	= 9,
        VxUnicodeScriptGUJARATI	= 10,
        VxUnicodeScriptODIA	= 11,
        VxUnicodeScriptTAMIL	= 12,
        VxUnicodeScriptTELUGU	= 13,
        VxUnicodeScriptKANNADA	= 14,
        VxUnicodeScriptMALAYALAM	= 15,
        VxUnicodeScriptTHAI	= 16,
        VxUnicodeScriptLAO	= 17,
        VxUnicodeScriptTIBETAN	= 18,
        VxUnicodeScriptGEORGIAN	= 19,
        VxUnicodeScriptCJK	= 20,
        VxUnicodeScriptBRAILLE	= 21,
        VxUnicodeScriptSYRIAC	= 22,
        VxUnicodeScriptTHAANA	= 23,
        VxUnicodeScriptSINHALA	= 24,
        VxUnicodeScriptMYANMAR	= 25,
        VxUnicodeScriptETHIOPIC	= 26,
        VxUnicodeScriptCHEROKEE	= 27,
        VxUnicodeScriptCANADIAN_ABORIGINAL	= 28,
        VxUnicodeScriptOGHAM	= 29,
        VxUnicodeScriptRUNIC	= 30,
        VxUnicodeScriptKHMER	= 31,
        VxUnicodeScriptMONGOLIAN	= 32,
        VxUnicodeScriptYI	= 33
    } 	VxUnicodeScript;

typedef 
enum _VxHangulJamoType
    {
        VxHangulJamoTypeOther	= 0,
        VxHangulJamoTypeLead	= 1,
        VxHangulJamoTypeVowel	= 2,
        VxHangulJamoTypeTrail	= 3
    } 	VxHangulJamoType;

typedef 
enum _VxIncrementalSearchDirection
    {
        VxIncrementalSearchDirectionForward	= 0,
        VxIncrementalSearchDirectionBackward	= 1
    } 	VxIncrementalSearchDirection;

typedef 
enum _VxTextViewLineChange
    {
        VxTextViewLineChangeNone	= 0,
        VxTextViewLineChangeNewOrReformatted	= 1,
        VxTextViewLineChangeTranslated	= 2
    } 	VxTextViewLineChange;

typedef 
enum _VxVisibilityState
    {
        VxVisibilityStateUnattached	= 0,
        VxVisibilityStateHidden	= 1,
        VxVisibilityStatePartiallyVisible	= 2,
        VxVisibilityStateFullyVisible	= 3
    } 	VxVisibilityState;

typedef 
enum _VxEnsureSpanVisibleOptions
    {
        VxEnsureSpanVisibleOptionsShowStart	= 1,
        VxEnsureSpanVisibleOptionsMinimumScroll	= 2,
        VxEnsureSpanVisibleOptionsAlwaysCenter	= 4,
        VxEnsureSpanVisibleOptionsNone	= 0
    } 	VxEnsureSpanVisibleOptions;

typedef 
enum _VxScrollDirection
    {
        VxScrollDirectionUp	= 0,
        VxScrollDirectionDown	= 1
    } 	VxScrollDirection;

typedef 
enum _VxTextSelectionMode
    {
        VxTextSelectionModeStream	= 0,
        VxTextSelectionModeBox	= 1
    } 	VxTextSelectionMode;

typedef 
enum _VxViewRelativePosition
    {
        VxViewRelativePositionTop	= 0,
        VxViewRelativePositionBottom	= 1
    } 	VxViewRelativePosition;

typedef 
enum _VxWordWrapStyles
    {
        VxWordWrapStylesNone	= 0,
        VxWordWrapStylesWordWrap	= 1,
        VxWordWrapStylesVisibleGlyphs	= 2,
        VxWordWrapStylesAutoIndent	= 4
    } 	VxWordWrapStyles;

typedef 
enum _VxDifferenceHighlightMode
    {
        VxDifferenceHighlightModeCodeContour	= 0,
        VxDifferenceHighlightModeWholeLine	= 1
    } 	VxDifferenceHighlightMode;

typedef 
enum _VxDifferenceHighlightMode2
    {
        VxDifferenceHighlightMode2CodeContour	= 0,
        VxDifferenceHighlightMode2WholeLine	= 1,
        VxDifferenceHighlightMode2BlockOutline	= 2
    } 	VxDifferenceHighlightMode2;

typedef 
enum _VxDifferenceViewMode
    {
        VxDifferenceViewModeInline	= 0,
        VxDifferenceViewModeLeftViewOnly	= 1,
        VxDifferenceViewModeRightViewOnly	= 2,
        VxDifferenceViewModeSideBySide	= 3
    } 	VxDifferenceViewMode;

typedef 
enum _VxDifferenceViewType
    {
        VxDifferenceViewTypeInlineView	= 0,
        VxDifferenceViewTypeLeftView	= 1,
        VxDifferenceViewTypeRightView	= 2
    } 	VxDifferenceViewType;

typedef 
enum _VxPopupStyles
    {
        VxPopupStylesNone	= 0,
        VxPopupStylesDismissOnMouseLeaveText	= 4,
        VxPopupStylesDismissOnMouseLeaveTextOrContent	= 8,
        VxPopupStylesPositionLeftOrRight	= 16,
        VxPopupStylesPreferLeftOrTopPosition	= 32,
        VxPopupStylesRightOrBottomJustify	= 64,
        VxPopupStylesPositionClosest	= 128
    } 	VxPopupStyles;

typedef 
enum _VxAdornmentPositioningBehavior
    {
        VxAdornmentPositioningBehaviorOwnerControlled	= 0,
        VxAdornmentPositioningBehaviorViewportRelative	= 1,
        VxAdornmentPositioningBehaviorTextRelative	= 2
    } 	VxAdornmentPositioningBehavior;

typedef 
enum _VxConnectionReason
    {
        VxConnectionReasonTextViewLifetime	= 0,
        VxConnectionReasonContentTypeChange	= 1,
        VxConnectionReasonBufferGraphChange	= 2
    } 	VxConnectionReason;

typedef 
enum _VxDragDropPointerEffects
    {
        VxDragDropPointerEffectsNone	= 0,
        VxDragDropPointerEffectsCopy	= 1,
        VxDragDropPointerEffectsLink	= 2,
        VxDragDropPointerEffectsMove	= 4,
        VxDragDropPointerEffectsScroll	= 8,
        VxDragDropPointerEffectsTrack	= 16,
        VxDragDropPointerEffectsAll	= 31
    } 	VxDragDropPointerEffects;

typedef 
enum _VxCompletionMatchType
    {
        VxCompletionMatchTypeMatchDisplayText	= 0,
        VxCompletionMatchTypeMatchInsertionText	= 1
    } 	VxCompletionMatchType;

typedef 
enum _VxIntellisenseKeyboardCommand
    {
        VxIntellisenseKeyboardCommandUp	= 0,
        VxIntellisenseKeyboardCommandDown	= 1,
        VxIntellisenseKeyboardCommandPageUp	= 2,
        VxIntellisenseKeyboardCommandPageDown	= 3,
        VxIntellisenseKeyboardCommandTopLine	= 4,
        VxIntellisenseKeyboardCommandBottomLine	= 5,
        VxIntellisenseKeyboardCommandHome	= 6,
        VxIntellisenseKeyboardCommandEnd	= 7,
        VxIntellisenseKeyboardCommandEnter	= 8,
        VxIntellisenseKeyboardCommandEscape	= 9,
        VxIntellisenseKeyboardCommandIncreaseFilterLevel	= 10,
        VxIntellisenseKeyboardCommandDecreaseFilterLevel	= 11
    } 	VxIntellisenseKeyboardCommand;

typedef 
enum _VxQuerySuggestedActionCompletionStatus
    {
        VxQuerySuggestedActionCompletionStatusCompleted	= 0,
        VxQuerySuggestedActionCompletionStatusCanceled	= 1
    } 	VxQuerySuggestedActionCompletionStatus;

typedef 
enum _VxSmartTagState
    {
        VxSmartTagStateCollapsed	= 0,
        VxSmartTagStateIntermediate	= 1,
        VxSmartTagStateExpanded	= 2
    } 	VxSmartTagState;

typedef 
enum _VxSmartTagType
    {
        VxSmartTagTypeFactoid	= 0,
        VxSmartTagTypeEphemeral	= 1
    } 	VxSmartTagType;

typedef 
enum _VxStandardGlyphGroup
    {
        VxStandardGlyphGroupGlyphGroupClass	= 0,
        VxStandardGlyphGroupGlyphGroupConstant	= 6,
        VxStandardGlyphGroupGlyphGroupDelegate	= 12,
        VxStandardGlyphGroupGlyphGroupEnum	= 18,
        VxStandardGlyphGroupGlyphGroupEnumMember	= 24,
        VxStandardGlyphGroupGlyphGroupEvent	= 30,
        VxStandardGlyphGroupGlyphGroupException	= 36,
        VxStandardGlyphGroupGlyphGroupField	= 42,
        VxStandardGlyphGroupGlyphGroupInterface	= 48,
        VxStandardGlyphGroupGlyphGroupMacro	= 54,
        VxStandardGlyphGroupGlyphGroupMap	= 60,
        VxStandardGlyphGroupGlyphGroupMapItem	= 66,
        VxStandardGlyphGroupGlyphGroupMethod	= 72,
        VxStandardGlyphGroupGlyphGroupOverload	= 78,
        VxStandardGlyphGroupGlyphGroupModule	= 84,
        VxStandardGlyphGroupGlyphGroupNamespace	= 90,
        VxStandardGlyphGroupGlyphGroupOperator	= 96,
        VxStandardGlyphGroupGlyphGroupProperty	= 102,
        VxStandardGlyphGroupGlyphGroupStruct	= 108,
        VxStandardGlyphGroupGlyphGroupTemplate	= 114,
        VxStandardGlyphGroupGlyphGroupTypedef	= 120,
        VxStandardGlyphGroupGlyphGroupType	= 126,
        VxStandardGlyphGroupGlyphGroupUnion	= 132,
        VxStandardGlyphGroupGlyphGroupVariable	= 138,
        VxStandardGlyphGroupGlyphGroupValueType	= 144,
        VxStandardGlyphGroupGlyphGroupIntrinsic	= 150,
        VxStandardGlyphGroupGlyphGroupJSharpMethod	= 156,
        VxStandardGlyphGroupGlyphGroupJSharpField	= 162,
        VxStandardGlyphGroupGlyphGroupJSharpClass	= 168,
        VxStandardGlyphGroupGlyphGroupJSharpNamespace	= 174,
        VxStandardGlyphGroupGlyphGroupJSharpInterface	= 180,
        VxStandardGlyphGroupGlyphGroupError	= 186,
        VxStandardGlyphGroupGlyphBscFile	= 191,
        VxStandardGlyphGroupGlyphAssembly	= 192,
        VxStandardGlyphGroupGlyphLibrary	= 193,
        VxStandardGlyphGroupGlyphVBProject	= 194,
        VxStandardGlyphGroupGlyphCoolProject	= 196,
        VxStandardGlyphGroupGlyphCppProject	= 199,
        VxStandardGlyphGroupGlyphDialogId	= 200,
        VxStandardGlyphGroupGlyphOpenFolder	= 201,
        VxStandardGlyphGroupGlyphClosedFolder	= 202,
        VxStandardGlyphGroupGlyphArrow	= 203,
        VxStandardGlyphGroupGlyphCSharpFile	= 204,
        VxStandardGlyphGroupGlyphCSharpExpansion	= 205,
        VxStandardGlyphGroupGlyphKeyword	= 206,
        VxStandardGlyphGroupGlyphInformation	= 207,
        VxStandardGlyphGroupGlyphReference	= 208,
        VxStandardGlyphGroupGlyphRecursion	= 209,
        VxStandardGlyphGroupGlyphXmlItem	= 210,
        VxStandardGlyphGroupGlyphJSharpProject	= 211,
        VxStandardGlyphGroupGlyphJSharpDocument	= 212,
        VxStandardGlyphGroupGlyphForwardType	= 213,
        VxStandardGlyphGroupGlyphCallersGraph	= 214,
        VxStandardGlyphGroupGlyphCallGraph	= 215,
        VxStandardGlyphGroupGlyphWarning	= 216,
        VxStandardGlyphGroupGlyphMaybeReference	= 217,
        VxStandardGlyphGroupGlyphMaybeCaller	= 218,
        VxStandardGlyphGroupGlyphMaybeCall	= 219,
        VxStandardGlyphGroupGlyphExtensionMethod	= 220,
        VxStandardGlyphGroupGlyphExtensionMethodInternal	= 221,
        VxStandardGlyphGroupGlyphExtensionMethodFriend	= 222,
        VxStandardGlyphGroupGlyphExtensionMethodProtected	= 223,
        VxStandardGlyphGroupGlyphExtensionMethodPrivate	= 224,
        VxStandardGlyphGroupGlyphExtensionMethodShortcut	= 225,
        VxStandardGlyphGroupGlyphXmlAttribute	= 226,
        VxStandardGlyphGroupGlyphXmlChild	= 227,
        VxStandardGlyphGroupGlyphXmlDescendant	= 228,
        VxStandardGlyphGroupGlyphXmlNamespace	= 229,
        VxStandardGlyphGroupGlyphXmlAttributeQuestion	= 230,
        VxStandardGlyphGroupGlyphXmlAttributeCheck	= 231,
        VxStandardGlyphGroupGlyphXmlChildQuestion	= 232,
        VxStandardGlyphGroupGlyphXmlChildCheck	= 233,
        VxStandardGlyphGroupGlyphXmlDescendantQuestion	= 234,
        VxStandardGlyphGroupGlyphXmlDescendantCheck	= 235,
        VxStandardGlyphGroupGlyphCompletionWarning	= 236,
        VxStandardGlyphGroupGlyphGroupUnknown	= 237
    } 	VxStandardGlyphGroup;

typedef 
enum _VxStandardGlyphItem
    {
        VxStandardGlyphItemGlyphItemPublic	= 0,
        VxStandardGlyphItemGlyphItemInternal	= 1,
        VxStandardGlyphItemGlyphItemFriend	= 2,
        VxStandardGlyphItemGlyphItemProtected	= 3,
        VxStandardGlyphItemGlyphItemPrivate	= 4,
        VxStandardGlyphItemGlyphItemShortcut	= 5,
        VxStandardGlyphItemTotalGlyphItems	= 6
    } 	VxStandardGlyphItem;

typedef 
enum _VxSuggestedActionSetPriority
    {
        VxSuggestedActionSetPriorityNone	= 0,
        VxSuggestedActionSetPriorityLow	= 1,
        VxSuggestedActionSetPriorityMedium	= 2,
        VxSuggestedActionSetPriorityHigh	= 3
    } 	VxSuggestedActionSetPriority;

typedef 
enum _VxUIElementType
    {
        VxUIElementTypeSmall	= 0,
        VxUIElementTypeLarge	= 1,
        VxUIElementTypeTooltip	= 2
    } 	VxUIElementType;

typedef 
enum _VxDiffChangeType
    {
        VxDiffChangeTypeInsert	= 0,
        VxDiffChangeTypeDelete	= 1,
        VxDiffChangeTypeChange	= 2
    } 	VxDiffChangeType;

typedef 
enum _VxEndOfLineTerminator
    {
        VxEndOfLineTerminatorNone	= 0,
        VxEndOfLineTerminatorLineFeed	= 1,
        VxEndOfLineTerminatorCarriageReturn	= 2,
        VxEndOfLineTerminatorCarriageReturnLineFeed	= 3,
        VxEndOfLineTerminatorLineSeparator	= 4,
        VxEndOfLineTerminatorParagraphSeparator	= 5,
        VxEndOfLineTerminatorNextLine	= 6
    } 	VxEndOfLineTerminator;

typedef 
enum _VxValidProtocolFound
    {
        VxValidProtocolFoundValidProtocol	= 0,
        VxValidProtocolFoundValidProtocolNoSlash	= 1,
        VxValidProtocolFoundInvalidProtocol	= 2
    } 	VxValidProtocolFound;

typedef 
enum _VxProjectionLineCalculationState
    {
        VxProjectionLineCalculationStatePrimary	= 0,
        VxProjectionLineCalculationStateAppend	= 1,
        VxProjectionLineCalculationStatePrepend	= 2,
        VxProjectionLineCalculationStateBipend	= 3
    } 	VxProjectionLineCalculationState;

typedef 
enum _VxLineBreakBoundaryConditions
    {
        VxLineBreakBoundaryConditionsNone	= 0,
        VxLineBreakBoundaryConditionsPrecedingReturn	= 1,
        VxLineBreakBoundaryConditionsSucceedingNewline	= 2
    } 	VxLineBreakBoundaryConditions;

typedef 
enum _VxTextEditAction
    {
        VxTextEditActionNone	= 0,
        VxTextEditActionType	= 1,
        VxTextEditActionDelete	= 2,
        VxTextEditActionBackspace	= 3,
        VxTextEditActionPaste	= 4,
        VxTextEditActionEnter	= 5,
        VxTextEditActionAutoIndent	= 6,
        VxTextEditActionReplace	= 7,
        VxTextEditActionProvisionalOverwrite	= 8
    } 	VxTextEditAction;

typedef 
enum _VxTextTransactionMergeDirections
    {
        VxTextTransactionMergeDirectionsForward	= 1,
        VxTextTransactionMergeDirectionsBackward	= 2
    } 	VxTextTransactionMergeDirections;

typedef 
enum _VxDragDropState
    {
        VxDragDropStateStart	= 0,
        VxDragDropStateMouseDown	= 1,
        VxDragDropStateDragging	= 2,
        VxDragDropStateCanceled	= 3,
        VxDragDropStateDropped	= 4
    } 	VxDragDropState;

typedef 
enum _VxLightBulbInvocationType
    {
        VxLightBulbInvocationTypeKeyboard	= 0,
        VxLightBulbInvocationTypeMouse	= 1,
        VxLightBulbInvocationTypeContextMenu	= 2
    } 	VxLightBulbInvocationType;

typedef 
enum _VxLightBulbLocationType
    {
        VxLightBulbLocationTypeMargin	= 0,
        VxLightBulbLocationTypeQuickInfo	= 1
    } 	VxLightBulbLocationType;

typedef 
enum _VxLightBulbState
    {
        VxLightBulbStateDefault	= 0,
        VxLightBulbStateHover	= 1,
        VxLightBulbStateExpanded	= 2,
        VxLightBulbStateDismissed	= 3
    } 	VxLightBulbState;

typedef 
enum _VxIMAGE_TYPE
    {
        VxIMAGE_TYPEIMAGE_BITMAP	= 0,
        VxIMAGE_TYPEIMAGE_ICON	= 1,
        VxIMAGE_TYPEIMAGE_CURSOR	= 2,
        VxIMAGE_TYPEIMAGE_ENHMETAFILE	= 3
    } 	VxIMAGE_TYPE;

typedef 
enum _VxIMAGE_FORMAT_REQUEST
    {
        VxIMAGE_FORMAT_REQUESTLR_DEFAULTCOLOR	= 0,
        VxIMAGE_FORMAT_REQUESTLR_MONOCHROME	= 1,
        VxIMAGE_FORMAT_REQUESTLR_COPYRETURNORG	= 4,
        VxIMAGE_FORMAT_REQUESTLR_COPYDELETEORG	= 8,
        VxIMAGE_FORMAT_REQUESTLR_LOADFROMFILE	= 16,
        VxIMAGE_FORMAT_REQUESTLR_DEFAULTSIZE	= 64,
        VxIMAGE_FORMAT_REQUESTLR_LOADMAP3DCOLORS	= 4096,
        VxIMAGE_FORMAT_REQUESTLR_CREATEDIBSECTION	= 8192,
        VxIMAGE_FORMAT_REQUESTLR_COPYFROMRESOURCE	= 16384,
        VxIMAGE_FORMAT_REQUESTLR_SHARED	= 32768
    } 	VxIMAGE_FORMAT_REQUEST;

typedef 
enum _VxLineSearchResult
    {
        VxLineSearchResultSingleCharLineBreak	= 0,
        VxLineSearchResultDoubleCharLineBreak	= 1,
        VxLineSearchResultNotLineBreak	= 2
    } 	VxLineSearchResult;

typedef 
enum _VxCaretMovementDirection
    {
        VxCaretMovementDirectionPrevious	= 0,
        VxCaretMovementDirectionNext	= 1
    } 	VxCaretMovementDirection;

typedef 
enum _VxLetterCase
    {
        VxLetterCaseUppercase	= 0,
        VxLetterCaseLowercase	= 1
    } 	VxLetterCase;

typedef 
enum _VxSelectionUpdate
    {
        VxSelectionUpdatePreserve	= 0,
        VxSelectionUpdateReset	= 1,
        VxSelectionUpdateResetUnlessEmptyBox	= 2,
        VxSelectionUpdateIgnore	= 3,
        VxSelectionUpdateClearVirtualSpace	= 4
    } 	VxSelectionUpdate;

typedef 
enum _VxCharacterType
    {
        VxCharacterTypeAlphaNumeric	= 0,
        VxCharacterTypeWhiteSpace	= 1,
        VxCharacterTypeSymbols	= 2
    } 	VxCharacterType;

typedef 
enum _VxSpanType
    {
        VxSpanTypeEmpty	= 0,
        VxSpanTypeMultipleCharacters	= 1,
        VxSpanTypeWord	= 2,
        VxSpanTypeMultipleWords	= 3,
        VxSpanTypeSentence	= 4,
        VxSpanTypeMultipleSentences	= 5,
        VxSpanTypeParagraph	= 6,
        VxSpanTypeMultipleParagraphs	= 7,
        VxSpanTypeDocument	= 8
    } 	VxSpanType;

typedef 
enum _VxTouchScrollMode
    {
        VxTouchScrollModeUnknown	= 0,
        VxTouchScrollModeHorizontal	= 1,
        VxTouchScrollModeVertical	= 2,
        VxTouchScrollModeDiagonal	= 3
    } 	VxTouchScrollMode;

typedef 
enum _VxNodeVisitState
    {
        VxNodeVisitStateNotVisited	= 0,
        VxNodeVisitStateVisiting	= 1,
        VxNodeVisitStateVisited	= 2
    } 	VxNodeVisitState;

typedef 
enum _VxQuickInfoState
    {
        VxQuickInfoStateInitialized	= 1,
        VxQuickInfoStateCalculating	= 2,
        VxQuickInfoStateStarted	= 4,
        VxQuickInfoStateDismissed	= 8
    } 	VxQuickInfoState;

typedef 
enum _VxDefaultSmartTagPresenterStates
    {
        VxDefaultSmartTagPresenterStatesInvisible	= 0,
        VxDefaultSmartTagPresenterStatesTickler	= 1,
        VxDefaultSmartTagPresenterStatesBareButton	= 2,
        VxDefaultSmartTagPresenterStatesGlowingButton	= 3,
        VxDefaultSmartTagPresenterStatesListMenu	= 4,
        VxDefaultSmartTagPresenterStatesOwnerDrawingTag	= 5
    } 	VxDefaultSmartTagPresenterStates;

typedef 
enum _VxInternalState
    {
        VxInternalStateInitialized	= 1,
        VxInternalStateCalculating	= 2,
        VxInternalStateStartedAndCalculating	= 4,
        VxInternalStateStarted	= 8,
        VxInternalStateDismissed	= 16
    } 	VxInternalState;

typedef 
enum _VxVisitState
    {
        VxVisitStateNotVisited	= 0,
        VxVisitStateVisiting	= 1,
        VxVisitStateVisited	= 2
    } 	VxVisitState;

typedef struct _VxStringDifferenceOptions
    {
    VxStringDifferenceTypes differenceType;
    int locality;
    BOOL ignoreTrimWhiteSpace;
    } 	VxStringDifferenceOptions;

typedef struct _VxEditOptions
    {
    BOOL computeMinimalChange;
    VxStringDifferenceOptions differenceOptions;
    } 	VxEditOptions;

typedef struct _VxSnapshotPoint
    {
    IVxTextSnapshot *snapshot;
    int position;
    } 	VxSnapshotPoint;

typedef struct _VxSnapshotSpan
    {
    VxSnapshotPoint start;
    int length;
    } 	VxSnapshotSpan;

typedef struct _VxSpan
    {
    int start;
    int length;
    } 	VxSpan;

typedef struct _VxFindData
    {
    BSTR _searchString;
    IVxTextSnapshot *_textSnapshotToSearch;
    VxFindOptions _findOptions;
    IVxTextStructureNavigator *_textStructureNavigator;
    } 	VxFindData;

typedef struct _VxTextExtent
    {
    VxSnapshotSpan _span;
    BOOL _isSignificant;
    } 	VxTextExtent;


EXTERN_C const IID LIBID_VSEditorLibrary;

#ifndef __IEnumeratorBSTR_INTERFACE_DEFINED__
#define __IEnumeratorBSTR_INTERFACE_DEFINED__

/* interface IEnumeratorBSTR */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumeratorBSTR;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("18a2071c-67fb-4543-bd62-d11e68a6785b")
    IEnumeratorBSTR : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumeratorBSTRVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumeratorBSTR * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumeratorBSTR * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumeratorBSTR * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            IEnumeratorBSTR * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            IEnumeratorBSTR * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumeratorBSTR * This);
        
        END_INTERFACE
    } IEnumeratorBSTRVtbl;

    interface IEnumeratorBSTR
    {
        CONST_VTBL struct IEnumeratorBSTRVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumeratorBSTR_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumeratorBSTR_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumeratorBSTR_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumeratorBSTR_GetCurrent(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCurrent(This,pRetVal) ) 

#define IEnumeratorBSTR_MoveNext(This,pRetVal)	\
    ( (This)->lpVtbl -> MoveNext(This,pRetVal) ) 

#define IEnumeratorBSTR_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumeratorBSTR_INTERFACE_DEFINED__ */


#ifndef __IEnumerableBSTR_INTERFACE_DEFINED__
#define __IEnumerableBSTR_INTERFACE_DEFINED__

/* interface IEnumerableBSTR */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumerableBSTR;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b887db4f-490c-415e-9ff4-f4657b757772")
    IEnumerableBSTR : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IEnumeratorBSTR **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumerableBSTRVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumerableBSTR * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumerableBSTR * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumerableBSTR * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IEnumerableBSTR * This,
            /* [retval][out] */ IEnumeratorBSTR **ppRetVal);
        
        END_INTERFACE
    } IEnumerableBSTRVtbl;

    interface IEnumerableBSTR
    {
        CONST_VTBL struct IEnumerableBSTRVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumerableBSTR_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumerableBSTR_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumerableBSTR_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumerableBSTR_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumerableBSTR_INTERFACE_DEFINED__ */


#ifndef __IVxEventArgsEvent_INTERFACE_DEFINED__
#define __IVxEventArgsEvent_INTERFACE_DEFINED__

/* interface IVxEventArgsEvent */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxEventArgsEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("765b3465-12be-4cfe-8bd1-85b27f2cb081")
    IVxEventArgsEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnEventArgs( 
            /* [in] */ IUnknown *pSender,
            /* [in] */ IUnknown *pE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxEventArgsEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxEventArgsEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxEventArgsEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxEventArgsEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnEventArgs )( 
            IVxEventArgsEvent * This,
            /* [in] */ IUnknown *pSender,
            /* [in] */ IUnknown *pE);
        
        END_INTERFACE
    } IVxEventArgsEventVtbl;

    interface IVxEventArgsEvent
    {
        CONST_VTBL struct IVxEventArgsEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxEventArgsEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxEventArgsEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxEventArgsEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxEventArgsEvent_OnEventArgs(This,pSender,pE)	\
    ( (This)->lpVtbl -> OnEventArgs(This,pSender,pE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxEventArgsEvent_INTERFACE_DEFINED__ */


#ifndef __IEnumeratorIVxContentType_INTERFACE_DEFINED__
#define __IEnumeratorIVxContentType_INTERFACE_DEFINED__

/* interface IEnumeratorIVxContentType */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumeratorIVxContentType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d92cce42-6e23-4ce3-a633-8b76ac0826f2")
    IEnumeratorIVxContentType : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumeratorIVxContentTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumeratorIVxContentType * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumeratorIVxContentType * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumeratorIVxContentType * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            IEnumeratorIVxContentType * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            IEnumeratorIVxContentType * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumeratorIVxContentType * This);
        
        END_INTERFACE
    } IEnumeratorIVxContentTypeVtbl;

    interface IEnumeratorIVxContentType
    {
        CONST_VTBL struct IEnumeratorIVxContentTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumeratorIVxContentType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumeratorIVxContentType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumeratorIVxContentType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumeratorIVxContentType_GetCurrent(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetCurrent(This,ppRetVal) ) 

#define IEnumeratorIVxContentType_MoveNext(This,pRetVal)	\
    ( (This)->lpVtbl -> MoveNext(This,pRetVal) ) 

#define IEnumeratorIVxContentType_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumeratorIVxContentType_INTERFACE_DEFINED__ */


#ifndef __IEnumerableIVxContentType_INTERFACE_DEFINED__
#define __IEnumerableIVxContentType_INTERFACE_DEFINED__

/* interface IEnumerableIVxContentType */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumerableIVxContentType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("acc50312-81c5-4da1-92b0-3f37acfa1106")
    IEnumerableIVxContentType : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IEnumeratorIVxContentType **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumerableIVxContentTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumerableIVxContentType * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumerableIVxContentType * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumerableIVxContentType * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IEnumerableIVxContentType * This,
            /* [retval][out] */ IEnumeratorIVxContentType **ppRetVal);
        
        END_INTERFACE
    } IEnumerableIVxContentTypeVtbl;

    interface IEnumerableIVxContentType
    {
        CONST_VTBL struct IEnumerableIVxContentTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumerableIVxContentType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumerableIVxContentType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumerableIVxContentType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumerableIVxContentType_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumerableIVxContentType_INTERFACE_DEFINED__ */


#ifndef __IVxTextDocumentFileActionEvent_INTERFACE_DEFINED__
#define __IVxTextDocumentFileActionEvent_INTERFACE_DEFINED__

/* interface IVxTextDocumentFileActionEvent */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextDocumentFileActionEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7598112a-a45e-4ec3-9b15-2536d26b1cab")
    IVxTextDocumentFileActionEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnTextDocumentFileAction( 
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxTextDocumentFileActionEventArgs *pE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextDocumentFileActionEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextDocumentFileActionEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextDocumentFileActionEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextDocumentFileActionEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnTextDocumentFileAction )( 
            IVxTextDocumentFileActionEvent * This,
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxTextDocumentFileActionEventArgs *pE);
        
        END_INTERFACE
    } IVxTextDocumentFileActionEventVtbl;

    interface IVxTextDocumentFileActionEvent
    {
        CONST_VTBL struct IVxTextDocumentFileActionEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextDocumentFileActionEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextDocumentFileActionEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextDocumentFileActionEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextDocumentFileActionEvent_OnTextDocumentFileAction(This,pSender,pE)	\
    ( (This)->lpVtbl -> OnTextDocumentFileAction(This,pSender,pE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextDocumentFileActionEvent_INTERFACE_DEFINED__ */


#ifndef __IVxTextDocumentEvent_INTERFACE_DEFINED__
#define __IVxTextDocumentEvent_INTERFACE_DEFINED__

/* interface IVxTextDocumentEvent */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextDocumentEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36811be1-5281-4eca-9a64-dacb86fabf66")
    IVxTextDocumentEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnTextDocument( 
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxTextDocumentEventArgs *pE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextDocumentEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextDocumentEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextDocumentEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextDocumentEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnTextDocument )( 
            IVxTextDocumentEvent * This,
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxTextDocumentEventArgs *pE);
        
        END_INTERFACE
    } IVxTextDocumentEventVtbl;

    interface IVxTextDocumentEvent
    {
        CONST_VTBL struct IVxTextDocumentEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextDocumentEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextDocumentEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextDocumentEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextDocumentEvent_OnTextDocument(This,pSender,pE)	\
    ( (This)->lpVtbl -> OnTextDocument(This,pSender,pE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextDocumentEvent_INTERFACE_DEFINED__ */


#ifndef __IVxSnapshotSpanEvent_INTERFACE_DEFINED__
#define __IVxSnapshotSpanEvent_INTERFACE_DEFINED__

/* interface IVxSnapshotSpanEvent */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxSnapshotSpanEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8b881e32-b5f3-47a1-b62d-1dd1f2ff7803")
    IVxSnapshotSpanEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnSnapshotSpan( 
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxSnapshotSpanEventArgs *pE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxSnapshotSpanEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxSnapshotSpanEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxSnapshotSpanEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxSnapshotSpanEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnSnapshotSpan )( 
            IVxSnapshotSpanEvent * This,
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxSnapshotSpanEventArgs *pE);
        
        END_INTERFACE
    } IVxSnapshotSpanEventVtbl;

    interface IVxSnapshotSpanEvent
    {
        CONST_VTBL struct IVxSnapshotSpanEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxSnapshotSpanEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxSnapshotSpanEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxSnapshotSpanEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxSnapshotSpanEvent_OnSnapshotSpan(This,pSender,pE)	\
    ( (This)->lpVtbl -> OnSnapshotSpan(This,pSender,pE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxSnapshotSpanEvent_INTERFACE_DEFINED__ */


#ifndef __IVxTextContentChangedEvent_INTERFACE_DEFINED__
#define __IVxTextContentChangedEvent_INTERFACE_DEFINED__

/* interface IVxTextContentChangedEvent */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextContentChangedEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5be64365-ae6e-4d88-b265-b22c5e743450")
    IVxTextContentChangedEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnTextContentChanged( 
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxTextContentChangedEventArgs *pE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextContentChangedEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextContentChangedEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextContentChangedEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextContentChangedEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnTextContentChanged )( 
            IVxTextContentChangedEvent * This,
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxTextContentChangedEventArgs *pE);
        
        END_INTERFACE
    } IVxTextContentChangedEventVtbl;

    interface IVxTextContentChangedEvent
    {
        CONST_VTBL struct IVxTextContentChangedEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextContentChangedEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextContentChangedEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextContentChangedEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextContentChangedEvent_OnTextContentChanged(This,pSender,pE)	\
    ( (This)->lpVtbl -> OnTextContentChanged(This,pSender,pE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextContentChangedEvent_INTERFACE_DEFINED__ */


#ifndef __IVxTextContentChangingEvent_INTERFACE_DEFINED__
#define __IVxTextContentChangingEvent_INTERFACE_DEFINED__

/* interface IVxTextContentChangingEvent */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextContentChangingEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5e12035a-0f79-408d-8d48-6896ff85bf7d")
    IVxTextContentChangingEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnTextContentChanging( 
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxTextContentChangingEventArgs *pE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextContentChangingEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextContentChangingEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextContentChangingEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextContentChangingEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnTextContentChanging )( 
            IVxTextContentChangingEvent * This,
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxTextContentChangingEventArgs *pE);
        
        END_INTERFACE
    } IVxTextContentChangingEventVtbl;

    interface IVxTextContentChangingEvent
    {
        CONST_VTBL struct IVxTextContentChangingEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextContentChangingEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextContentChangingEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextContentChangingEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextContentChangingEvent_OnTextContentChanging(This,pSender,pE)	\
    ( (This)->lpVtbl -> OnTextContentChanging(This,pSender,pE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextContentChangingEvent_INTERFACE_DEFINED__ */


#ifndef __IVxContentTypeChangedEvent_INTERFACE_DEFINED__
#define __IVxContentTypeChangedEvent_INTERFACE_DEFINED__

/* interface IVxContentTypeChangedEvent */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxContentTypeChangedEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b58ad157-69a4-4225-aa41-0e5547b6cda3")
    IVxContentTypeChangedEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnContentTypeChanged( 
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxContentTypeChangedEventArgs *pE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxContentTypeChangedEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxContentTypeChangedEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxContentTypeChangedEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxContentTypeChangedEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnContentTypeChanged )( 
            IVxContentTypeChangedEvent * This,
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxContentTypeChangedEventArgs *pE);
        
        END_INTERFACE
    } IVxContentTypeChangedEventVtbl;

    interface IVxContentTypeChangedEvent
    {
        CONST_VTBL struct IVxContentTypeChangedEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxContentTypeChangedEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxContentTypeChangedEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxContentTypeChangedEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxContentTypeChangedEvent_OnContentTypeChanged(This,pSender,pE)	\
    ( (This)->lpVtbl -> OnContentTypeChanged(This,pSender,pE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxContentTypeChangedEvent_INTERFACE_DEFINED__ */


#ifndef __IVxTextBufferCreatedEvent_INTERFACE_DEFINED__
#define __IVxTextBufferCreatedEvent_INTERFACE_DEFINED__

/* interface IVxTextBufferCreatedEvent */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextBufferCreatedEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7a45771d-7a36-4d18-9b81-c5daa88985b8")
    IVxTextBufferCreatedEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnTextBufferCreated( 
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxTextBufferCreatedEventArgs *pE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextBufferCreatedEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextBufferCreatedEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextBufferCreatedEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextBufferCreatedEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnTextBufferCreated )( 
            IVxTextBufferCreatedEvent * This,
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxTextBufferCreatedEventArgs *pE);
        
        END_INTERFACE
    } IVxTextBufferCreatedEventVtbl;

    interface IVxTextBufferCreatedEvent
    {
        CONST_VTBL struct IVxTextBufferCreatedEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextBufferCreatedEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextBufferCreatedEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextBufferCreatedEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextBufferCreatedEvent_OnTextBufferCreated(This,pSender,pE)	\
    ( (This)->lpVtbl -> OnTextBufferCreated(This,pSender,pE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextBufferCreatedEvent_INTERFACE_DEFINED__ */


#ifndef __IEnumeratorIVxTextSnapshotLine_INTERFACE_DEFINED__
#define __IEnumeratorIVxTextSnapshotLine_INTERFACE_DEFINED__

/* interface IEnumeratorIVxTextSnapshotLine */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumeratorIVxTextSnapshotLine;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5ba4ea24-9310-4284-9e86-6ebec3e1818e")
    IEnumeratorIVxTextSnapshotLine : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ IVxTextSnapshotLine **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumeratorIVxTextSnapshotLineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumeratorIVxTextSnapshotLine * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumeratorIVxTextSnapshotLine * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumeratorIVxTextSnapshotLine * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            IEnumeratorIVxTextSnapshotLine * This,
            /* [retval][out] */ IVxTextSnapshotLine **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            IEnumeratorIVxTextSnapshotLine * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumeratorIVxTextSnapshotLine * This);
        
        END_INTERFACE
    } IEnumeratorIVxTextSnapshotLineVtbl;

    interface IEnumeratorIVxTextSnapshotLine
    {
        CONST_VTBL struct IEnumeratorIVxTextSnapshotLineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumeratorIVxTextSnapshotLine_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumeratorIVxTextSnapshotLine_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumeratorIVxTextSnapshotLine_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumeratorIVxTextSnapshotLine_GetCurrent(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetCurrent(This,ppRetVal) ) 

#define IEnumeratorIVxTextSnapshotLine_MoveNext(This,pRetVal)	\
    ( (This)->lpVtbl -> MoveNext(This,pRetVal) ) 

#define IEnumeratorIVxTextSnapshotLine_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumeratorIVxTextSnapshotLine_INTERFACE_DEFINED__ */


#ifndef __IEnumerableIVxTextSnapshotLine_INTERFACE_DEFINED__
#define __IEnumerableIVxTextSnapshotLine_INTERFACE_DEFINED__

/* interface IEnumerableIVxTextSnapshotLine */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumerableIVxTextSnapshotLine;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("021b71e1-59bb-481a-9ac6-c9b4ad7b7446")
    IEnumerableIVxTextSnapshotLine : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IEnumeratorIVxTextSnapshotLine **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumerableIVxTextSnapshotLineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumerableIVxTextSnapshotLine * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumerableIVxTextSnapshotLine * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumerableIVxTextSnapshotLine * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IEnumerableIVxTextSnapshotLine * This,
            /* [retval][out] */ IEnumeratorIVxTextSnapshotLine **ppRetVal);
        
        END_INTERFACE
    } IEnumerableIVxTextSnapshotLineVtbl;

    interface IEnumerableIVxTextSnapshotLine
    {
        CONST_VTBL struct IEnumerableIVxTextSnapshotLineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumerableIVxTextSnapshotLine_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumerableIVxTextSnapshotLine_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumerableIVxTextSnapshotLine_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumerableIVxTextSnapshotLine_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumerableIVxTextSnapshotLine_INTERFACE_DEFINED__ */


#ifndef __IEnumeratorVxSpan_INTERFACE_DEFINED__
#define __IEnumeratorVxSpan_INTERFACE_DEFINED__

/* interface IEnumeratorVxSpan */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumeratorVxSpan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f5c3a3cb-442d-4abc-84b7-687611079c21")
    IEnumeratorVxSpan : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ VxSpan *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumeratorVxSpanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumeratorVxSpan * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumeratorVxSpan * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumeratorVxSpan * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            IEnumeratorVxSpan * This,
            /* [retval][out] */ VxSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            IEnumeratorVxSpan * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumeratorVxSpan * This);
        
        END_INTERFACE
    } IEnumeratorVxSpanVtbl;

    interface IEnumeratorVxSpan
    {
        CONST_VTBL struct IEnumeratorVxSpanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumeratorVxSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumeratorVxSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumeratorVxSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumeratorVxSpan_GetCurrent(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCurrent(This,pRetVal) ) 

#define IEnumeratorVxSpan_MoveNext(This,pRetVal)	\
    ( (This)->lpVtbl -> MoveNext(This,pRetVal) ) 

#define IEnumeratorVxSpan_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumeratorVxSpan_INTERFACE_DEFINED__ */


#ifndef __IListVxSpan_INTERFACE_DEFINED__
#define __IListVxSpan_INTERFACE_DEFINED__

/* interface IListVxSpan */
/* [uuid][object] */ 


EXTERN_C const IID IID_IListVxSpan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f265752d-e60c-4c02-a3d4-9200a936b1b4")
    IListVxSpan : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetElement( 
            /* [in] */ int index,
            /* [retval][out] */ VxSpan *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IEnumeratorVxSpan **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListVxSpanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListVxSpan * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListVxSpan * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListVxSpan * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IListVxSpan * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IListVxSpan * This,
            /* [in] */ int index,
            /* [retval][out] */ VxSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IListVxSpan * This,
            /* [retval][out] */ IEnumeratorVxSpan **ppRetVal);
        
        END_INTERFACE
    } IListVxSpanVtbl;

    interface IListVxSpan
    {
        CONST_VTBL struct IListVxSpanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListVxSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListVxSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListVxSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListVxSpan_GetCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCount(This,pRetVal) ) 

#define IListVxSpan_GetElement(This,index,pRetVal)	\
    ( (This)->lpVtbl -> GetElement(This,index,pRetVal) ) 

#define IListVxSpan_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListVxSpan_INTERFACE_DEFINED__ */


#ifndef __IEnumeratorIVxTextBuffer_INTERFACE_DEFINED__
#define __IEnumeratorIVxTextBuffer_INTERFACE_DEFINED__

/* interface IEnumeratorIVxTextBuffer */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumeratorIVxTextBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7a1e5f7c-6f1d-4e1e-b13d-8656b71f2f97")
    IEnumeratorIVxTextBuffer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumeratorIVxTextBufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumeratorIVxTextBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumeratorIVxTextBuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumeratorIVxTextBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            IEnumeratorIVxTextBuffer * This,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            IEnumeratorIVxTextBuffer * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumeratorIVxTextBuffer * This);
        
        END_INTERFACE
    } IEnumeratorIVxTextBufferVtbl;

    interface IEnumeratorIVxTextBuffer
    {
        CONST_VTBL struct IEnumeratorIVxTextBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumeratorIVxTextBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumeratorIVxTextBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumeratorIVxTextBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumeratorIVxTextBuffer_GetCurrent(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetCurrent(This,ppRetVal) ) 

#define IEnumeratorIVxTextBuffer_MoveNext(This,pRetVal)	\
    ( (This)->lpVtbl -> MoveNext(This,pRetVal) ) 

#define IEnumeratorIVxTextBuffer_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumeratorIVxTextBuffer_INTERFACE_DEFINED__ */


#ifndef __IListIVxTextBuffer_INTERFACE_DEFINED__
#define __IListIVxTextBuffer_INTERFACE_DEFINED__

/* interface IListIVxTextBuffer */
/* [uuid][object] */ 


EXTERN_C const IID IID_IListIVxTextBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("121811be-de48-4320-b7c6-1237c0d2ff3b")
    IListIVxTextBuffer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetElement( 
            /* [in] */ int index,
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IEnumeratorIVxTextBuffer **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListIVxTextBufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListIVxTextBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListIVxTextBuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListIVxTextBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IListIVxTextBuffer * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IListIVxTextBuffer * This,
            /* [in] */ int index,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IListIVxTextBuffer * This,
            /* [retval][out] */ IEnumeratorIVxTextBuffer **ppRetVal);
        
        END_INTERFACE
    } IListIVxTextBufferVtbl;

    interface IListIVxTextBuffer
    {
        CONST_VTBL struct IListIVxTextBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListIVxTextBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListIVxTextBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListIVxTextBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListIVxTextBuffer_GetCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCount(This,pRetVal) ) 

#define IListIVxTextBuffer_GetElement(This,index,ppRetVal)	\
    ( (This)->lpVtbl -> GetElement(This,index,ppRetVal) ) 

#define IListIVxTextBuffer_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListIVxTextBuffer_INTERFACE_DEFINED__ */


#ifndef __IVxGraphBuffersChangedEvent_INTERFACE_DEFINED__
#define __IVxGraphBuffersChangedEvent_INTERFACE_DEFINED__

/* interface IVxGraphBuffersChangedEvent */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxGraphBuffersChangedEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d1b54e5e-2782-4cd7-b6a0-2eff76c07dfb")
    IVxGraphBuffersChangedEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnGraphBuffersChanged( 
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxGraphBuffersChangedEventArgs *pE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxGraphBuffersChangedEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxGraphBuffersChangedEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxGraphBuffersChangedEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxGraphBuffersChangedEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnGraphBuffersChanged )( 
            IVxGraphBuffersChangedEvent * This,
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxGraphBuffersChangedEventArgs *pE);
        
        END_INTERFACE
    } IVxGraphBuffersChangedEventVtbl;

    interface IVxGraphBuffersChangedEvent
    {
        CONST_VTBL struct IVxGraphBuffersChangedEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxGraphBuffersChangedEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxGraphBuffersChangedEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxGraphBuffersChangedEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxGraphBuffersChangedEvent_OnGraphBuffersChanged(This,pSender,pE)	\
    ( (This)->lpVtbl -> OnGraphBuffersChanged(This,pSender,pE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxGraphBuffersChangedEvent_INTERFACE_DEFINED__ */


#ifndef __IVxGraphBufferContentTypeChangedEvent_INTERFACE_DEFINED__
#define __IVxGraphBufferContentTypeChangedEvent_INTERFACE_DEFINED__

/* interface IVxGraphBufferContentTypeChangedEvent */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxGraphBufferContentTypeChangedEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("566861da-0ce4-4f47-896f-133cfb73a62f")
    IVxGraphBufferContentTypeChangedEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnGraphBufferContentTypeChanged( 
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxGraphBufferContentTypeChangedEventArgs *pE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxGraphBufferContentTypeChangedEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxGraphBufferContentTypeChangedEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxGraphBufferContentTypeChangedEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxGraphBufferContentTypeChangedEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnGraphBufferContentTypeChanged )( 
            IVxGraphBufferContentTypeChangedEvent * This,
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxGraphBufferContentTypeChangedEventArgs *pE);
        
        END_INTERFACE
    } IVxGraphBufferContentTypeChangedEventVtbl;

    interface IVxGraphBufferContentTypeChangedEvent
    {
        CONST_VTBL struct IVxGraphBufferContentTypeChangedEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxGraphBufferContentTypeChangedEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxGraphBufferContentTypeChangedEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxGraphBufferContentTypeChangedEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxGraphBufferContentTypeChangedEvent_OnGraphBufferContentTypeChanged(This,pSender,pE)	\
    ( (This)->lpVtbl -> OnGraphBufferContentTypeChanged(This,pSender,pE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxGraphBufferContentTypeChangedEvent_INTERFACE_DEFINED__ */


#ifndef __IEnumeratorIUnknown_INTERFACE_DEFINED__
#define __IEnumeratorIUnknown_INTERFACE_DEFINED__

/* interface IEnumeratorIUnknown */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumeratorIUnknown;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("379d6c69-25b8-413d-b58c-015f2c7a942d")
    IEnumeratorIUnknown : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ IUnknown **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumeratorIUnknownVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumeratorIUnknown * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumeratorIUnknown * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumeratorIUnknown * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            IEnumeratorIUnknown * This,
            /* [retval][out] */ IUnknown **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            IEnumeratorIUnknown * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumeratorIUnknown * This);
        
        END_INTERFACE
    } IEnumeratorIUnknownVtbl;

    interface IEnumeratorIUnknown
    {
        CONST_VTBL struct IEnumeratorIUnknownVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumeratorIUnknown_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumeratorIUnknown_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumeratorIUnknown_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumeratorIUnknown_GetCurrent(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetCurrent(This,ppRetVal) ) 

#define IEnumeratorIUnknown_MoveNext(This,pRetVal)	\
    ( (This)->lpVtbl -> MoveNext(This,pRetVal) ) 

#define IEnumeratorIUnknown_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumeratorIUnknown_INTERFACE_DEFINED__ */


#ifndef __IListIUnknown_INTERFACE_DEFINED__
#define __IListIUnknown_INTERFACE_DEFINED__

/* interface IListIUnknown */
/* [uuid][object] */ 


EXTERN_C const IID IID_IListIUnknown;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fdc0603f-f733-49c9-aad2-ac3e0ae513bb")
    IListIUnknown : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetElement( 
            /* [in] */ int index,
            /* [retval][out] */ IUnknown **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IEnumeratorIUnknown **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListIUnknownVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListIUnknown * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListIUnknown * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListIUnknown * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IListIUnknown * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IListIUnknown * This,
            /* [in] */ int index,
            /* [retval][out] */ IUnknown **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IListIUnknown * This,
            /* [retval][out] */ IEnumeratorIUnknown **ppRetVal);
        
        END_INTERFACE
    } IListIUnknownVtbl;

    interface IListIUnknown
    {
        CONST_VTBL struct IListIUnknownVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListIUnknown_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListIUnknown_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListIUnknown_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListIUnknown_GetCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCount(This,pRetVal) ) 

#define IListIUnknown_GetElement(This,index,ppRetVal)	\
    ( (This)->lpVtbl -> GetElement(This,index,ppRetVal) ) 

#define IListIUnknown_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListIUnknown_INTERFACE_DEFINED__ */


#ifndef __IVxProjectionSourceSpansChangedEvent_INTERFACE_DEFINED__
#define __IVxProjectionSourceSpansChangedEvent_INTERFACE_DEFINED__

/* interface IVxProjectionSourceSpansChangedEvent */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxProjectionSourceSpansChangedEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6c6c11a3-ec8a-426d-9c73-180431dcf306")
    IVxProjectionSourceSpansChangedEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnProjectionSourceSpansChanged( 
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxProjectionSourceSpansChangedEventArgs *pE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxProjectionSourceSpansChangedEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxProjectionSourceSpansChangedEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxProjectionSourceSpansChangedEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxProjectionSourceSpansChangedEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnProjectionSourceSpansChanged )( 
            IVxProjectionSourceSpansChangedEvent * This,
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxProjectionSourceSpansChangedEventArgs *pE);
        
        END_INTERFACE
    } IVxProjectionSourceSpansChangedEventVtbl;

    interface IVxProjectionSourceSpansChangedEvent
    {
        CONST_VTBL struct IVxProjectionSourceSpansChangedEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxProjectionSourceSpansChangedEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxProjectionSourceSpansChangedEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxProjectionSourceSpansChangedEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxProjectionSourceSpansChangedEvent_OnProjectionSourceSpansChanged(This,pSender,pE)	\
    ( (This)->lpVtbl -> OnProjectionSourceSpansChanged(This,pSender,pE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxProjectionSourceSpansChangedEvent_INTERFACE_DEFINED__ */


#ifndef __IVxProjectionSourceBuffersChangedEvent_INTERFACE_DEFINED__
#define __IVxProjectionSourceBuffersChangedEvent_INTERFACE_DEFINED__

/* interface IVxProjectionSourceBuffersChangedEvent */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxProjectionSourceBuffersChangedEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5fd8dc1e-0c10-4026-8fde-a3f198815998")
    IVxProjectionSourceBuffersChangedEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnProjectionSourceBuffersChanged( 
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxProjectionSourceBuffersChangedEventArgs *pE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxProjectionSourceBuffersChangedEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxProjectionSourceBuffersChangedEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxProjectionSourceBuffersChangedEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxProjectionSourceBuffersChangedEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnProjectionSourceBuffersChanged )( 
            IVxProjectionSourceBuffersChangedEvent * This,
            /* [in] */ IUnknown *pSender,
            /* [in] */ IVxProjectionSourceBuffersChangedEventArgs *pE);
        
        END_INTERFACE
    } IVxProjectionSourceBuffersChangedEventVtbl;

    interface IVxProjectionSourceBuffersChangedEvent
    {
        CONST_VTBL struct IVxProjectionSourceBuffersChangedEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxProjectionSourceBuffersChangedEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxProjectionSourceBuffersChangedEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxProjectionSourceBuffersChangedEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxProjectionSourceBuffersChangedEvent_OnProjectionSourceBuffersChanged(This,pSender,pE)	\
    ( (This)->lpVtbl -> OnProjectionSourceBuffersChanged(This,pSender,pE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxProjectionSourceBuffersChangedEvent_INTERFACE_DEFINED__ */


#ifndef __IEnumeratorVxSnapshotPoint_INTERFACE_DEFINED__
#define __IEnumeratorVxSnapshotPoint_INTERFACE_DEFINED__

/* interface IEnumeratorVxSnapshotPoint */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumeratorVxSnapshotPoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30ddec83-f0b5-4bd7-a4d3-2d82d51d6d70")
    IEnumeratorVxSnapshotPoint : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumeratorVxSnapshotPointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumeratorVxSnapshotPoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumeratorVxSnapshotPoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumeratorVxSnapshotPoint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            IEnumeratorVxSnapshotPoint * This,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            IEnumeratorVxSnapshotPoint * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumeratorVxSnapshotPoint * This);
        
        END_INTERFACE
    } IEnumeratorVxSnapshotPointVtbl;

    interface IEnumeratorVxSnapshotPoint
    {
        CONST_VTBL struct IEnumeratorVxSnapshotPointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumeratorVxSnapshotPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumeratorVxSnapshotPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumeratorVxSnapshotPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumeratorVxSnapshotPoint_GetCurrent(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCurrent(This,pRetVal) ) 

#define IEnumeratorVxSnapshotPoint_MoveNext(This,pRetVal)	\
    ( (This)->lpVtbl -> MoveNext(This,pRetVal) ) 

#define IEnumeratorVxSnapshotPoint_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumeratorVxSnapshotPoint_INTERFACE_DEFINED__ */


#ifndef __IListVxSnapshotPoint_INTERFACE_DEFINED__
#define __IListVxSnapshotPoint_INTERFACE_DEFINED__

/* interface IListVxSnapshotPoint */
/* [uuid][object] */ 


EXTERN_C const IID IID_IListVxSnapshotPoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("587a5a1a-4b4e-43f8-896f-7d61716a33cb")
    IListVxSnapshotPoint : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetElement( 
            /* [in] */ int index,
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IEnumeratorVxSnapshotPoint **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListVxSnapshotPointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListVxSnapshotPoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListVxSnapshotPoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListVxSnapshotPoint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IListVxSnapshotPoint * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IListVxSnapshotPoint * This,
            /* [in] */ int index,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IListVxSnapshotPoint * This,
            /* [retval][out] */ IEnumeratorVxSnapshotPoint **ppRetVal);
        
        END_INTERFACE
    } IListVxSnapshotPointVtbl;

    interface IListVxSnapshotPoint
    {
        CONST_VTBL struct IListVxSnapshotPointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListVxSnapshotPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListVxSnapshotPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListVxSnapshotPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListVxSnapshotPoint_GetCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCount(This,pRetVal) ) 

#define IListVxSnapshotPoint_GetElement(This,index,pRetVal)	\
    ( (This)->lpVtbl -> GetElement(This,index,pRetVal) ) 

#define IListVxSnapshotPoint_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListVxSnapshotPoint_INTERFACE_DEFINED__ */


#ifndef __IEnumeratorVxSnapshotSpan_INTERFACE_DEFINED__
#define __IEnumeratorVxSnapshotSpan_INTERFACE_DEFINED__

/* interface IEnumeratorVxSnapshotSpan */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumeratorVxSnapshotSpan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fd6cb9a7-f2c2-450d-b14e-756b5a013591")
    IEnumeratorVxSnapshotSpan : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ VxSnapshotSpan *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumeratorVxSnapshotSpanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumeratorVxSnapshotSpan * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumeratorVxSnapshotSpan * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumeratorVxSnapshotSpan * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            IEnumeratorVxSnapshotSpan * This,
            /* [retval][out] */ VxSnapshotSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            IEnumeratorVxSnapshotSpan * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumeratorVxSnapshotSpan * This);
        
        END_INTERFACE
    } IEnumeratorVxSnapshotSpanVtbl;

    interface IEnumeratorVxSnapshotSpan
    {
        CONST_VTBL struct IEnumeratorVxSnapshotSpanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumeratorVxSnapshotSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumeratorVxSnapshotSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumeratorVxSnapshotSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumeratorVxSnapshotSpan_GetCurrent(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCurrent(This,pRetVal) ) 

#define IEnumeratorVxSnapshotSpan_MoveNext(This,pRetVal)	\
    ( (This)->lpVtbl -> MoveNext(This,pRetVal) ) 

#define IEnumeratorVxSnapshotSpan_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumeratorVxSnapshotSpan_INTERFACE_DEFINED__ */


#ifndef __IListVxSnapshotSpan_INTERFACE_DEFINED__
#define __IListVxSnapshotSpan_INTERFACE_DEFINED__

/* interface IListVxSnapshotSpan */
/* [uuid][object] */ 


EXTERN_C const IID IID_IListVxSnapshotSpan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("75970b1d-36b9-419b-bf43-ec2a66776955")
    IListVxSnapshotSpan : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetElement( 
            /* [in] */ int index,
            /* [retval][out] */ VxSnapshotSpan *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IEnumeratorVxSnapshotSpan **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListVxSnapshotSpanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListVxSnapshotSpan * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListVxSnapshotSpan * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListVxSnapshotSpan * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IListVxSnapshotSpan * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IListVxSnapshotSpan * This,
            /* [in] */ int index,
            /* [retval][out] */ VxSnapshotSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IListVxSnapshotSpan * This,
            /* [retval][out] */ IEnumeratorVxSnapshotSpan **ppRetVal);
        
        END_INTERFACE
    } IListVxSnapshotSpanVtbl;

    interface IListVxSnapshotSpan
    {
        CONST_VTBL struct IListVxSnapshotSpanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListVxSnapshotSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListVxSnapshotSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListVxSnapshotSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListVxSnapshotSpan_GetCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCount(This,pRetVal) ) 

#define IListVxSnapshotSpan_GetElement(This,index,pRetVal)	\
    ( (This)->lpVtbl -> GetElement(This,index,pRetVal) ) 

#define IListVxSnapshotSpan_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListVxSnapshotSpan_INTERFACE_DEFINED__ */


#ifndef __IEnumeratorIVxTextSnapshot_INTERFACE_DEFINED__
#define __IEnumeratorIVxTextSnapshot_INTERFACE_DEFINED__

/* interface IEnumeratorIVxTextSnapshot */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumeratorIVxTextSnapshot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("13dc5d4f-7e53-4180-8779-1364b6ae8322")
    IEnumeratorIVxTextSnapshot : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ IVxTextSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumeratorIVxTextSnapshotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumeratorIVxTextSnapshot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumeratorIVxTextSnapshot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumeratorIVxTextSnapshot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            IEnumeratorIVxTextSnapshot * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            IEnumeratorIVxTextSnapshot * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumeratorIVxTextSnapshot * This);
        
        END_INTERFACE
    } IEnumeratorIVxTextSnapshotVtbl;

    interface IEnumeratorIVxTextSnapshot
    {
        CONST_VTBL struct IEnumeratorIVxTextSnapshotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumeratorIVxTextSnapshot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumeratorIVxTextSnapshot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumeratorIVxTextSnapshot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumeratorIVxTextSnapshot_GetCurrent(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetCurrent(This,ppRetVal) ) 

#define IEnumeratorIVxTextSnapshot_MoveNext(This,pRetVal)	\
    ( (This)->lpVtbl -> MoveNext(This,pRetVal) ) 

#define IEnumeratorIVxTextSnapshot_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumeratorIVxTextSnapshot_INTERFACE_DEFINED__ */


#ifndef __IListIVxTextSnapshot_INTERFACE_DEFINED__
#define __IListIVxTextSnapshot_INTERFACE_DEFINED__

/* interface IListIVxTextSnapshot */
/* [uuid][object] */ 


EXTERN_C const IID IID_IListIVxTextSnapshot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b886572e-8f74-43c8-b8c1-f8bc0bdb5d1c")
    IListIVxTextSnapshot : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetElement( 
            /* [in] */ int index,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IEnumeratorIVxTextSnapshot **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListIVxTextSnapshotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListIVxTextSnapshot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListIVxTextSnapshot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListIVxTextSnapshot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IListIVxTextSnapshot * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IListIVxTextSnapshot * This,
            /* [in] */ int index,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IListIVxTextSnapshot * This,
            /* [retval][out] */ IEnumeratorIVxTextSnapshot **ppRetVal);
        
        END_INTERFACE
    } IListIVxTextSnapshotVtbl;

    interface IListIVxTextSnapshot
    {
        CONST_VTBL struct IListIVxTextSnapshotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListIVxTextSnapshot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListIVxTextSnapshot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListIVxTextSnapshot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListIVxTextSnapshot_GetCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCount(This,pRetVal) ) 

#define IListIVxTextSnapshot_GetElement(This,index,ppRetVal)	\
    ( (This)->lpVtbl -> GetElement(This,index,ppRetVal) ) 

#define IListIVxTextSnapshot_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListIVxTextSnapshot_INTERFACE_DEFINED__ */


#ifndef __IEnumeratorIVxTrackingSpan_INTERFACE_DEFINED__
#define __IEnumeratorIVxTrackingSpan_INTERFACE_DEFINED__

/* interface IEnumeratorIVxTrackingSpan */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumeratorIVxTrackingSpan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("496727c4-5622-4889-94ae-ddd857bacea7")
    IEnumeratorIVxTrackingSpan : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ IVxTrackingSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumeratorIVxTrackingSpanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumeratorIVxTrackingSpan * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumeratorIVxTrackingSpan * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumeratorIVxTrackingSpan * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            IEnumeratorIVxTrackingSpan * This,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            IEnumeratorIVxTrackingSpan * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumeratorIVxTrackingSpan * This);
        
        END_INTERFACE
    } IEnumeratorIVxTrackingSpanVtbl;

    interface IEnumeratorIVxTrackingSpan
    {
        CONST_VTBL struct IEnumeratorIVxTrackingSpanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumeratorIVxTrackingSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumeratorIVxTrackingSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumeratorIVxTrackingSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumeratorIVxTrackingSpan_GetCurrent(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetCurrent(This,ppRetVal) ) 

#define IEnumeratorIVxTrackingSpan_MoveNext(This,pRetVal)	\
    ( (This)->lpVtbl -> MoveNext(This,pRetVal) ) 

#define IEnumeratorIVxTrackingSpan_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumeratorIVxTrackingSpan_INTERFACE_DEFINED__ */


#ifndef __IListIVxTrackingSpan_INTERFACE_DEFINED__
#define __IListIVxTrackingSpan_INTERFACE_DEFINED__

/* interface IListIVxTrackingSpan */
/* [uuid][object] */ 


EXTERN_C const IID IID_IListIVxTrackingSpan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fb17674f-3e6c-4ad2-9d17-e605c3f45262")
    IListIVxTrackingSpan : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetElement( 
            /* [in] */ int index,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IEnumeratorIVxTrackingSpan **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListIVxTrackingSpanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListIVxTrackingSpan * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListIVxTrackingSpan * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListIVxTrackingSpan * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IListIVxTrackingSpan * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IListIVxTrackingSpan * This,
            /* [in] */ int index,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IListIVxTrackingSpan * This,
            /* [retval][out] */ IEnumeratorIVxTrackingSpan **ppRetVal);
        
        END_INTERFACE
    } IListIVxTrackingSpanVtbl;

    interface IListIVxTrackingSpan
    {
        CONST_VTBL struct IListIVxTrackingSpanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListIVxTrackingSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListIVxTrackingSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListIVxTrackingSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListIVxTrackingSpan_GetCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCount(This,pRetVal) ) 

#define IListIVxTrackingSpan_GetElement(This,index,ppRetVal)	\
    ( (This)->lpVtbl -> GetElement(This,index,ppRetVal) ) 

#define IListIVxTrackingSpan_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListIVxTrackingSpan_INTERFACE_DEFINED__ */


#ifndef __IEnumeratorIVxTextChange_INTERFACE_DEFINED__
#define __IEnumeratorIVxTextChange_INTERFACE_DEFINED__

/* interface IEnumeratorIVxTextChange */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumeratorIVxTextChange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a4728f3b-90ee-4783-a6af-0caeeea73147")
    IEnumeratorIVxTextChange : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ IVxTextChange **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumeratorIVxTextChangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumeratorIVxTextChange * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumeratorIVxTextChange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumeratorIVxTextChange * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            IEnumeratorIVxTextChange * This,
            /* [retval][out] */ IVxTextChange **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            IEnumeratorIVxTextChange * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumeratorIVxTextChange * This);
        
        END_INTERFACE
    } IEnumeratorIVxTextChangeVtbl;

    interface IEnumeratorIVxTextChange
    {
        CONST_VTBL struct IEnumeratorIVxTextChangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumeratorIVxTextChange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumeratorIVxTextChange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumeratorIVxTextChange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumeratorIVxTextChange_GetCurrent(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetCurrent(This,ppRetVal) ) 

#define IEnumeratorIVxTextChange_MoveNext(This,pRetVal)	\
    ( (This)->lpVtbl -> MoveNext(This,pRetVal) ) 

#define IEnumeratorIVxTextChange_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumeratorIVxTextChange_INTERFACE_DEFINED__ */


#ifndef __IListIVxTextChange_INTERFACE_DEFINED__
#define __IListIVxTextChange_INTERFACE_DEFINED__

/* interface IListIVxTextChange */
/* [uuid][object] */ 


EXTERN_C const IID IID_IListIVxTextChange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7627a97f-187f-428e-bba9-07183f73a088")
    IListIVxTextChange : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetElement( 
            /* [in] */ int index,
            /* [retval][out] */ IVxTextChange **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IEnumeratorIVxTextChange **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListIVxTextChangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListIVxTextChange * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListIVxTextChange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListIVxTextChange * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IListIVxTextChange * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IListIVxTextChange * This,
            /* [in] */ int index,
            /* [retval][out] */ IVxTextChange **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IListIVxTextChange * This,
            /* [retval][out] */ IEnumeratorIVxTextChange **ppRetVal);
        
        END_INTERFACE
    } IListIVxTextChangeVtbl;

    interface IListIVxTextChange
    {
        CONST_VTBL struct IListIVxTextChangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListIVxTextChange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListIVxTextChange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListIVxTextChange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListIVxTextChange_GetCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCount(This,pRetVal) ) 

#define IListIVxTextChange_GetElement(This,index,ppRetVal)	\
    ( (This)->lpVtbl -> GetElement(This,index,ppRetVal) ) 

#define IListIVxTextChange_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListIVxTextChange_INTERFACE_DEFINED__ */


#ifndef __IVxDisposable_INTERFACE_DEFINED__
#define __IVxDisposable_INTERFACE_DEFINED__

/* interface IVxDisposable */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxDisposable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00c8c1e7-de26-42cf-a058-5ccda2b42beb")
    IVxDisposable : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Dispose( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxDisposableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxDisposable * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxDisposable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxDisposable * This);
        
        HRESULT ( STDMETHODCALLTYPE *Dispose )( 
            IVxDisposable * This);
        
        END_INTERFACE
    } IVxDisposableVtbl;

    interface IVxDisposable
    {
        CONST_VTBL struct IVxDisposableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxDisposable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxDisposable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxDisposable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxDisposable_Dispose(This)	\
    ( (This)->lpVtbl -> Dispose(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxDisposable_INTERFACE_DEFINED__ */


#ifndef __IVxPropertyOwner_INTERFACE_DEFINED__
#define __IVxPropertyOwner_INTERFACE_DEFINED__

/* interface IVxPropertyOwner */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxPropertyOwner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b7b3e0d6-f9f3-415e-a977-a06cc723aff1")
    IVxPropertyOwner : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [retval][out] */ IVxPropertyCollection **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxPropertyOwnerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxPropertyOwner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxPropertyOwner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxPropertyOwner * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVxPropertyOwner * This,
            /* [retval][out] */ IVxPropertyCollection **ppRetVal);
        
        END_INTERFACE
    } IVxPropertyOwnerVtbl;

    interface IVxPropertyOwner
    {
        CONST_VTBL struct IVxPropertyOwnerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxPropertyOwner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxPropertyOwner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxPropertyOwner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxPropertyOwner_GetProperties(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetProperties(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxPropertyOwner_INTERFACE_DEFINED__ */


#ifndef __IVxPropertyCollection_INTERFACE_DEFINED__
#define __IVxPropertyCollection_INTERFACE_DEFINED__

/* interface IVxPropertyCollection */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxPropertyCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("275f2096-2f87-4886-bff7-a216f6decaab")
    IVxPropertyCollection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddProperty( 
            /* [in] */ IUnknown *pKey,
            /* [in] */ IUnknown *pProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ContainsProperty( 
            /* [in] */ IUnknown *pKey,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperty_2( 
            /* [in] */ IUnknown *pKey,
            /* [retval][out] */ IUnknown **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveProperty( 
            /* [in] */ IUnknown *pKey,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxPropertyCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxPropertyCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxPropertyCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxPropertyCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddProperty )( 
            IVxPropertyCollection * This,
            /* [in] */ IUnknown *pKey,
            /* [in] */ IUnknown *pProperty);
        
        HRESULT ( STDMETHODCALLTYPE *ContainsProperty )( 
            IVxPropertyCollection * This,
            /* [in] */ IUnknown *pKey,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperty_2 )( 
            IVxPropertyCollection * This,
            /* [in] */ IUnknown *pKey,
            /* [retval][out] */ IUnknown **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveProperty )( 
            IVxPropertyCollection * This,
            /* [in] */ IUnknown *pKey,
            /* [retval][out] */ BOOL *pRetVal);
        
        END_INTERFACE
    } IVxPropertyCollectionVtbl;

    interface IVxPropertyCollection
    {
        CONST_VTBL struct IVxPropertyCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxPropertyCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxPropertyCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxPropertyCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxPropertyCollection_AddProperty(This,pKey,pProperty)	\
    ( (This)->lpVtbl -> AddProperty(This,pKey,pProperty) ) 

#define IVxPropertyCollection_ContainsProperty(This,pKey,pRetVal)	\
    ( (This)->lpVtbl -> ContainsProperty(This,pKey,pRetVal) ) 

#define IVxPropertyCollection_GetProperty_2(This,pKey,ppRetVal)	\
    ( (This)->lpVtbl -> GetProperty_2(This,pKey,ppRetVal) ) 

#define IVxPropertyCollection_RemoveProperty(This,pKey,pRetVal)	\
    ( (This)->lpVtbl -> RemoveProperty(This,pKey,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxPropertyCollection_INTERFACE_DEFINED__ */


#ifndef __IVxContentTypeRegistryService_INTERFACE_DEFINED__
#define __IVxContentTypeRegistryService_INTERFACE_DEFINED__

/* interface IVxContentTypeRegistryService */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxContentTypeRegistryService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("aeefbb53-ff73-45d0-a826-4f978725d21e")
    IVxContentTypeRegistryService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddContentType( 
            /* [in] */ BSTR typeName,
            /* [in] */ IEnumerableBSTR *pBaseTypeNames,
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContentType( 
            /* [in] */ BSTR typeName,
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContentTypes( 
            /* [retval][out] */ IEnumerableIVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUnknownContentType( 
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveContentType( 
            /* [in] */ BSTR typeName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxContentTypeRegistryServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxContentTypeRegistryService * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxContentTypeRegistryService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxContentTypeRegistryService * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddContentType )( 
            IVxContentTypeRegistryService * This,
            /* [in] */ BSTR typeName,
            /* [in] */ IEnumerableBSTR *pBaseTypeNames,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetContentType )( 
            IVxContentTypeRegistryService * This,
            /* [in] */ BSTR typeName,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetContentTypes )( 
            IVxContentTypeRegistryService * This,
            /* [retval][out] */ IEnumerableIVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetUnknownContentType )( 
            IVxContentTypeRegistryService * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveContentType )( 
            IVxContentTypeRegistryService * This,
            /* [in] */ BSTR typeName);
        
        END_INTERFACE
    } IVxContentTypeRegistryServiceVtbl;

    interface IVxContentTypeRegistryService
    {
        CONST_VTBL struct IVxContentTypeRegistryServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxContentTypeRegistryService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxContentTypeRegistryService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxContentTypeRegistryService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxContentTypeRegistryService_AddContentType(This,typeName,pBaseTypeNames,ppRetVal)	\
    ( (This)->lpVtbl -> AddContentType(This,typeName,pBaseTypeNames,ppRetVal) ) 

#define IVxContentTypeRegistryService_GetContentType(This,typeName,ppRetVal)	\
    ( (This)->lpVtbl -> GetContentType(This,typeName,ppRetVal) ) 

#define IVxContentTypeRegistryService_GetContentTypes(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetContentTypes(This,ppRetVal) ) 

#define IVxContentTypeRegistryService_GetUnknownContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetUnknownContentType(This,ppRetVal) ) 

#define IVxContentTypeRegistryService_RemoveContentType(This,typeName)	\
    ( (This)->lpVtbl -> RemoveContentType(This,typeName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxContentTypeRegistryService_INTERFACE_DEFINED__ */


#ifndef __IVxContentType_INTERFACE_DEFINED__
#define __IVxContentType_INTERFACE_DEFINED__

/* interface IVxContentType */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxContentType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6faa3727-ed8f-4fc0-8032-82ad17394029")
    IVxContentType : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBaseTypes( 
            /* [retval][out] */ IEnumerableIVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDisplayName( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeName( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsOfType( 
            /* [in] */ BSTR type,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxContentTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxContentType * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxContentType * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxContentType * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBaseTypes )( 
            IVxContentType * This,
            /* [retval][out] */ IEnumerableIVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            IVxContentType * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IVxContentType * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IVxContentType * This,
            /* [in] */ BSTR type,
            /* [retval][out] */ BOOL *pRetVal);
        
        END_INTERFACE
    } IVxContentTypeVtbl;

    interface IVxContentType
    {
        CONST_VTBL struct IVxContentTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxContentType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxContentType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxContentType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxContentType_GetBaseTypes(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBaseTypes(This,ppRetVal) ) 

#define IVxContentType_GetDisplayName(This,pRetVal)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pRetVal) ) 

#define IVxContentType_GetTypeName(This,pRetVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pRetVal) ) 

#define IVxContentType_IsOfType(This,type,pRetVal)	\
    ( (This)->lpVtbl -> IsOfType(This,type,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxContentType_INTERFACE_DEFINED__ */


#ifndef __IVxTextDocument_INTERFACE_DEFINED__
#define __IVxTextDocument_INTERFACE_DEFINED__

/* interface IVxTextDocument */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5498337a-84b2-41bf-ab74-e5b88419079f")
    IVxTextDocument : public IVxDisposable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseDirtyStateChanged( 
            /* [in] */ IVxEventArgsEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseFileActionOccurred( 
            /* [in] */ IVxTextDocumentFileActionEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFilePath( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsDirty( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsReloading( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextBuffer( 
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reload( 
            /* [retval][out] */ VxReloadResult *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reload_2( 
            /* [in] */ VxEditOptions options,
            /* [retval][out] */ VxReloadResult *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Rename( 
            /* [in] */ BSTR newFilePath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveAs( 
            /* [in] */ BSTR filePath,
            /* [in] */ BOOL overwrite) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveAs_2( 
            /* [in] */ BSTR filePath,
            /* [in] */ BOOL overwrite,
            /* [in] */ BOOL createFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveAs_3( 
            /* [in] */ BSTR filePath,
            /* [in] */ BOOL overwrite,
            /* [in] */ IVxContentType *pNewContentType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveAs_4( 
            /* [in] */ BSTR filePath,
            /* [in] */ BOOL overwrite,
            /* [in] */ BOOL createFolder,
            /* [in] */ IVxContentType *pNewContentType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveCopy( 
            /* [in] */ BSTR filePath,
            /* [in] */ BOOL overwrite) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveCopy_2( 
            /* [in] */ BSTR filePath,
            /* [in] */ BOOL overwrite,
            /* [in] */ BOOL createFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseDirtyStateChanged( 
            /* [in] */ IVxEventArgsEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseFileActionOccurred( 
            /* [in] */ IVxTextDocumentFileActionEvent *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextDocumentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextDocument * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextDocument * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextDocument * This);
        
        HRESULT ( STDMETHODCALLTYPE *Dispose )( 
            IVxTextDocument * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseDirtyStateChanged )( 
            IVxTextDocument * This,
            /* [in] */ IVxEventArgsEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseFileActionOccurred )( 
            IVxTextDocument * This,
            /* [in] */ IVxTextDocumentFileActionEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetFilePath )( 
            IVxTextDocument * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IVxTextDocument * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsReloading )( 
            IVxTextDocument * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextBuffer )( 
            IVxTextDocument * This,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Reload )( 
            IVxTextDocument * This,
            /* [retval][out] */ VxReloadResult *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Reload_2 )( 
            IVxTextDocument * This,
            /* [in] */ VxEditOptions options,
            /* [retval][out] */ VxReloadResult *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Rename )( 
            IVxTextDocument * This,
            /* [in] */ BSTR newFilePath);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            IVxTextDocument * This);
        
        HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            IVxTextDocument * This,
            /* [in] */ BSTR filePath,
            /* [in] */ BOOL overwrite);
        
        HRESULT ( STDMETHODCALLTYPE *SaveAs_2 )( 
            IVxTextDocument * This,
            /* [in] */ BSTR filePath,
            /* [in] */ BOOL overwrite,
            /* [in] */ BOOL createFolder);
        
        HRESULT ( STDMETHODCALLTYPE *SaveAs_3 )( 
            IVxTextDocument * This,
            /* [in] */ BSTR filePath,
            /* [in] */ BOOL overwrite,
            /* [in] */ IVxContentType *pNewContentType);
        
        HRESULT ( STDMETHODCALLTYPE *SaveAs_4 )( 
            IVxTextDocument * This,
            /* [in] */ BSTR filePath,
            /* [in] */ BOOL overwrite,
            /* [in] */ BOOL createFolder,
            /* [in] */ IVxContentType *pNewContentType);
        
        HRESULT ( STDMETHODCALLTYPE *SaveCopy )( 
            IVxTextDocument * This,
            /* [in] */ BSTR filePath,
            /* [in] */ BOOL overwrite);
        
        HRESULT ( STDMETHODCALLTYPE *SaveCopy_2 )( 
            IVxTextDocument * This,
            /* [in] */ BSTR filePath,
            /* [in] */ BOOL overwrite,
            /* [in] */ BOOL createFolder);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseDirtyStateChanged )( 
            IVxTextDocument * This,
            /* [in] */ IVxEventArgsEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseFileActionOccurred )( 
            IVxTextDocument * This,
            /* [in] */ IVxTextDocumentFileActionEvent *pValue);
        
        END_INTERFACE
    } IVxTextDocumentVtbl;

    interface IVxTextDocument
    {
        CONST_VTBL struct IVxTextDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextDocument_Dispose(This)	\
    ( (This)->lpVtbl -> Dispose(This) ) 


#define IVxTextDocument_AdviseDirtyStateChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseDirtyStateChanged(This,pValue) ) 

#define IVxTextDocument_AdviseFileActionOccurred(This,pValue)	\
    ( (This)->lpVtbl -> AdviseFileActionOccurred(This,pValue) ) 

#define IVxTextDocument_GetFilePath(This,pRetVal)	\
    ( (This)->lpVtbl -> GetFilePath(This,pRetVal) ) 

#define IVxTextDocument_GetIsDirty(This,pRetVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pRetVal) ) 

#define IVxTextDocument_GetIsReloading(This,pRetVal)	\
    ( (This)->lpVtbl -> GetIsReloading(This,pRetVal) ) 

#define IVxTextDocument_GetTextBuffer(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetTextBuffer(This,ppRetVal) ) 

#define IVxTextDocument_Reload(This,pRetVal)	\
    ( (This)->lpVtbl -> Reload(This,pRetVal) ) 

#define IVxTextDocument_Reload_2(This,options,pRetVal)	\
    ( (This)->lpVtbl -> Reload_2(This,options,pRetVal) ) 

#define IVxTextDocument_Rename(This,newFilePath)	\
    ( (This)->lpVtbl -> Rename(This,newFilePath) ) 

#define IVxTextDocument_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#define IVxTextDocument_SaveAs(This,filePath,overwrite)	\
    ( (This)->lpVtbl -> SaveAs(This,filePath,overwrite) ) 

#define IVxTextDocument_SaveAs_2(This,filePath,overwrite,createFolder)	\
    ( (This)->lpVtbl -> SaveAs_2(This,filePath,overwrite,createFolder) ) 

#define IVxTextDocument_SaveAs_3(This,filePath,overwrite,pNewContentType)	\
    ( (This)->lpVtbl -> SaveAs_3(This,filePath,overwrite,pNewContentType) ) 

#define IVxTextDocument_SaveAs_4(This,filePath,overwrite,createFolder,pNewContentType)	\
    ( (This)->lpVtbl -> SaveAs_4(This,filePath,overwrite,createFolder,pNewContentType) ) 

#define IVxTextDocument_SaveCopy(This,filePath,overwrite)	\
    ( (This)->lpVtbl -> SaveCopy(This,filePath,overwrite) ) 

#define IVxTextDocument_SaveCopy_2(This,filePath,overwrite,createFolder)	\
    ( (This)->lpVtbl -> SaveCopy_2(This,filePath,overwrite,createFolder) ) 

#define IVxTextDocument_UnadviseDirtyStateChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseDirtyStateChanged(This,pValue) ) 

#define IVxTextDocument_UnadviseFileActionOccurred(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseFileActionOccurred(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextDocument_INTERFACE_DEFINED__ */


#ifndef __IVxTextDocumentFactoryService_INTERFACE_DEFINED__
#define __IVxTextDocumentFactoryService_INTERFACE_DEFINED__

/* interface IVxTextDocumentFactoryService */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextDocumentFactoryService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f4d19c93-7267-4509-9284-88e8c08be615")
    IVxTextDocumentFactoryService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseTextDocumentCreated( 
            /* [in] */ IVxTextDocumentEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseTextDocumentDisposed( 
            /* [in] */ IVxTextDocumentEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateAndLoadTextDocument( 
            /* [in] */ BSTR filePath,
            /* [in] */ IVxContentType *pContentType,
            /* [retval][out] */ IVxTextDocument **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTextDocument( 
            /* [in] */ IVxTextBuffer *pTextBuffer,
            /* [in] */ BSTR filePath,
            /* [retval][out] */ IVxTextDocument **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryGetTextDocument( 
            /* [in] */ IVxTextBuffer *pTextBuffer,
            /* [out] */ IVxTextDocument **ppTextDocument,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseTextDocumentCreated( 
            /* [in] */ IVxTextDocumentEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseTextDocumentDisposed( 
            /* [in] */ IVxTextDocumentEvent *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextDocumentFactoryServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextDocumentFactoryService * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextDocumentFactoryService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextDocumentFactoryService * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseTextDocumentCreated )( 
            IVxTextDocumentFactoryService * This,
            /* [in] */ IVxTextDocumentEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseTextDocumentDisposed )( 
            IVxTextDocumentFactoryService * This,
            /* [in] */ IVxTextDocumentEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndLoadTextDocument )( 
            IVxTextDocumentFactoryService * This,
            /* [in] */ BSTR filePath,
            /* [in] */ IVxContentType *pContentType,
            /* [retval][out] */ IVxTextDocument **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTextDocument )( 
            IVxTextDocumentFactoryService * This,
            /* [in] */ IVxTextBuffer *pTextBuffer,
            /* [in] */ BSTR filePath,
            /* [retval][out] */ IVxTextDocument **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *TryGetTextDocument )( 
            IVxTextDocumentFactoryService * This,
            /* [in] */ IVxTextBuffer *pTextBuffer,
            /* [out] */ IVxTextDocument **ppTextDocument,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseTextDocumentCreated )( 
            IVxTextDocumentFactoryService * This,
            /* [in] */ IVxTextDocumentEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseTextDocumentDisposed )( 
            IVxTextDocumentFactoryService * This,
            /* [in] */ IVxTextDocumentEvent *pValue);
        
        END_INTERFACE
    } IVxTextDocumentFactoryServiceVtbl;

    interface IVxTextDocumentFactoryService
    {
        CONST_VTBL struct IVxTextDocumentFactoryServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextDocumentFactoryService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextDocumentFactoryService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextDocumentFactoryService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextDocumentFactoryService_AdviseTextDocumentCreated(This,pValue)	\
    ( (This)->lpVtbl -> AdviseTextDocumentCreated(This,pValue) ) 

#define IVxTextDocumentFactoryService_AdviseTextDocumentDisposed(This,pValue)	\
    ( (This)->lpVtbl -> AdviseTextDocumentDisposed(This,pValue) ) 

#define IVxTextDocumentFactoryService_CreateAndLoadTextDocument(This,filePath,pContentType,ppRetVal)	\
    ( (This)->lpVtbl -> CreateAndLoadTextDocument(This,filePath,pContentType,ppRetVal) ) 

#define IVxTextDocumentFactoryService_CreateTextDocument(This,pTextBuffer,filePath,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTextDocument(This,pTextBuffer,filePath,ppRetVal) ) 

#define IVxTextDocumentFactoryService_TryGetTextDocument(This,pTextBuffer,ppTextDocument,pRetVal)	\
    ( (This)->lpVtbl -> TryGetTextDocument(This,pTextBuffer,ppTextDocument,pRetVal) ) 

#define IVxTextDocumentFactoryService_UnadviseTextDocumentCreated(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseTextDocumentCreated(This,pValue) ) 

#define IVxTextDocumentFactoryService_UnadviseTextDocumentDisposed(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseTextDocumentDisposed(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextDocumentFactoryService_INTERFACE_DEFINED__ */


#ifndef __IVxTextDocumentEventArgs_INTERFACE_DEFINED__
#define __IVxTextDocumentEventArgs_INTERFACE_DEFINED__

/* interface IVxTextDocumentEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextDocumentEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d85f080d-428e-4ac7-b478-dac2f0cb3a4e")
    IVxTextDocumentEventArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTextDocument( 
            /* [retval][out] */ IVxTextDocument **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextDocumentEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextDocumentEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextDocumentEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextDocumentEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextDocument )( 
            IVxTextDocumentEventArgs * This,
            /* [retval][out] */ IVxTextDocument **ppRetVal);
        
        END_INTERFACE
    } IVxTextDocumentEventArgsVtbl;

    interface IVxTextDocumentEventArgs
    {
        CONST_VTBL struct IVxTextDocumentEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextDocumentEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextDocumentEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextDocumentEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextDocumentEventArgs_GetTextDocument(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetTextDocument(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextDocumentEventArgs_INTERFACE_DEFINED__ */


#ifndef __IVxTextDocumentFileActionEventArgs_INTERFACE_DEFINED__
#define __IVxTextDocumentFileActionEventArgs_INTERFACE_DEFINED__

/* interface IVxTextDocumentFileActionEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextDocumentFileActionEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("dc0c964d-81ae-4d24-8d4f-9340cc78d6ae")
    IVxTextDocumentFileActionEventArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFileActionType( 
            /* [retval][out] */ VxFileActionTypes *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFilePath( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextDocumentFileActionEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextDocumentFileActionEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextDocumentFileActionEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextDocumentFileActionEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileActionType )( 
            IVxTextDocumentFileActionEventArgs * This,
            /* [retval][out] */ VxFileActionTypes *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetFilePath )( 
            IVxTextDocumentFileActionEventArgs * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        END_INTERFACE
    } IVxTextDocumentFileActionEventArgsVtbl;

    interface IVxTextDocumentFileActionEventArgs
    {
        CONST_VTBL struct IVxTextDocumentFileActionEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextDocumentFileActionEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextDocumentFileActionEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextDocumentFileActionEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextDocumentFileActionEventArgs_GetFileActionType(This,pRetVal)	\
    ( (This)->lpVtbl -> GetFileActionType(This,pRetVal) ) 

#define IVxTextDocumentFileActionEventArgs_GetFilePath(This,pRetVal)	\
    ( (This)->lpVtbl -> GetFilePath(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextDocumentFileActionEventArgs_INTERFACE_DEFINED__ */


#ifndef __IVxTextSnapshotChangedEventArgs_INTERFACE_DEFINED__
#define __IVxTextSnapshotChangedEventArgs_INTERFACE_DEFINED__

/* interface IVxTextSnapshotChangedEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextSnapshotChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ab1c7415-f8da-41f3-8262-221a2cf59cc4")
    IVxTextSnapshotChangedEventArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAfter( 
            /* [retval][out] */ IVxTextSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAfterVersion( 
            /* [retval][out] */ IVxTextVersion **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBefore( 
            /* [retval][out] */ IVxTextSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBeforeVersion( 
            /* [retval][out] */ IVxTextVersion **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEditTag( 
            /* [retval][out] */ IUnknown **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextSnapshotChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextSnapshotChangedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextSnapshotChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextSnapshotChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfter )( 
            IVxTextSnapshotChangedEventArgs * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfterVersion )( 
            IVxTextSnapshotChangedEventArgs * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBefore )( 
            IVxTextSnapshotChangedEventArgs * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBeforeVersion )( 
            IVxTextSnapshotChangedEventArgs * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEditTag )( 
            IVxTextSnapshotChangedEventArgs * This,
            /* [retval][out] */ IUnknown **ppRetVal);
        
        END_INTERFACE
    } IVxTextSnapshotChangedEventArgsVtbl;

    interface IVxTextSnapshotChangedEventArgs
    {
        CONST_VTBL struct IVxTextSnapshotChangedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextSnapshotChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextSnapshotChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextSnapshotChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextSnapshotChangedEventArgs_GetAfter(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfter(This,ppRetVal) ) 

#define IVxTextSnapshotChangedEventArgs_GetAfterVersion(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfterVersion(This,ppRetVal) ) 

#define IVxTextSnapshotChangedEventArgs_GetBefore(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBefore(This,ppRetVal) ) 

#define IVxTextSnapshotChangedEventArgs_GetBeforeVersion(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBeforeVersion(This,ppRetVal) ) 

#define IVxTextSnapshotChangedEventArgs_GetEditTag(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEditTag(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextSnapshotChangedEventArgs_INTERFACE_DEFINED__ */


#ifndef __IVxContentTypeChangedEventArgs_INTERFACE_DEFINED__
#define __IVxContentTypeChangedEventArgs_INTERFACE_DEFINED__

/* interface IVxContentTypeChangedEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxContentTypeChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e9ed1827-223d-4cf1-aa25-09c3a0ff6f67")
    IVxContentTypeChangedEventArgs : public IVxTextSnapshotChangedEventArgs
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAfterContentType( 
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBeforeContentType( 
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxContentTypeChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxContentTypeChangedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxContentTypeChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxContentTypeChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfter )( 
            IVxContentTypeChangedEventArgs * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfterVersion )( 
            IVxContentTypeChangedEventArgs * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBefore )( 
            IVxContentTypeChangedEventArgs * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBeforeVersion )( 
            IVxContentTypeChangedEventArgs * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEditTag )( 
            IVxContentTypeChangedEventArgs * This,
            /* [retval][out] */ IUnknown **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfterContentType )( 
            IVxContentTypeChangedEventArgs * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBeforeContentType )( 
            IVxContentTypeChangedEventArgs * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        END_INTERFACE
    } IVxContentTypeChangedEventArgsVtbl;

    interface IVxContentTypeChangedEventArgs
    {
        CONST_VTBL struct IVxContentTypeChangedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxContentTypeChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxContentTypeChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxContentTypeChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxContentTypeChangedEventArgs_GetAfter(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfter(This,ppRetVal) ) 

#define IVxContentTypeChangedEventArgs_GetAfterVersion(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfterVersion(This,ppRetVal) ) 

#define IVxContentTypeChangedEventArgs_GetBefore(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBefore(This,ppRetVal) ) 

#define IVxContentTypeChangedEventArgs_GetBeforeVersion(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBeforeVersion(This,ppRetVal) ) 

#define IVxContentTypeChangedEventArgs_GetEditTag(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEditTag(This,ppRetVal) ) 


#define IVxContentTypeChangedEventArgs_GetAfterContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfterContentType(This,ppRetVal) ) 

#define IVxContentTypeChangedEventArgs_GetBeforeContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBeforeContentType(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxContentTypeChangedEventArgs_INTERFACE_DEFINED__ */


#ifndef __IVxMappingPoint_INTERFACE_DEFINED__
#define __IVxMappingPoint_INTERFACE_DEFINED__

/* interface IVxMappingPoint */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxMappingPoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("446d7a04-48a5-4721-91a7-bf28c6653192")
    IVxMappingPoint : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAnchorBuffer( 
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBufferGraph( 
            /* [retval][out] */ IVxBufferGraph **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPoint( 
            /* [in] */ IVxTextBuffer *pTargetBuffer,
            /* [in] */ VxPositionAffinity affinity,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPoint_2( 
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [in] */ VxPositionAffinity affinity,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxMappingPointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxMappingPoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxMappingPoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxMappingPoint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAnchorBuffer )( 
            IVxMappingPoint * This,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBufferGraph )( 
            IVxMappingPoint * This,
            /* [retval][out] */ IVxBufferGraph **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetPoint )( 
            IVxMappingPoint * This,
            /* [in] */ IVxTextBuffer *pTargetBuffer,
            /* [in] */ VxPositionAffinity affinity,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetPoint_2 )( 
            IVxMappingPoint * This,
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [in] */ VxPositionAffinity affinity,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        END_INTERFACE
    } IVxMappingPointVtbl;

    interface IVxMappingPoint
    {
        CONST_VTBL struct IVxMappingPointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxMappingPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxMappingPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxMappingPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxMappingPoint_GetAnchorBuffer(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAnchorBuffer(This,ppRetVal) ) 

#define IVxMappingPoint_GetBufferGraph(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBufferGraph(This,ppRetVal) ) 

#define IVxMappingPoint_GetPoint(This,pTargetBuffer,affinity,pRetValHasValue,pRetVal)	\
    ( (This)->lpVtbl -> GetPoint(This,pTargetBuffer,affinity,pRetValHasValue,pRetVal) ) 

#define IVxMappingPoint_GetPoint_2(This,pTargetSnapshot,affinity,pRetValHasValue,pRetVal)	\
    ( (This)->lpVtbl -> GetPoint_2(This,pTargetSnapshot,affinity,pRetValHasValue,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxMappingPoint_INTERFACE_DEFINED__ */


#ifndef __IVxMappingSpan_INTERFACE_DEFINED__
#define __IVxMappingSpan_INTERFACE_DEFINED__

/* interface IVxMappingSpan */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxMappingSpan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("db0e4bfb-1747-494b-a4c6-1eb544fb9df7")
    IVxMappingSpan : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAnchorBuffer( 
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBufferGraph( 
            /* [retval][out] */ IVxBufferGraph **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnd( 
            /* [retval][out] */ IVxMappingPoint **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpans( 
            /* [in] */ IVxTextBuffer *pTargetBuffer,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpans_2( 
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStart( 
            /* [retval][out] */ IVxMappingPoint **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxMappingSpanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxMappingSpan * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxMappingSpan * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxMappingSpan * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAnchorBuffer )( 
            IVxMappingSpan * This,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBufferGraph )( 
            IVxMappingSpan * This,
            /* [retval][out] */ IVxBufferGraph **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnd )( 
            IVxMappingSpan * This,
            /* [retval][out] */ IVxMappingPoint **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpans )( 
            IVxMappingSpan * This,
            /* [in] */ IVxTextBuffer *pTargetBuffer,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpans_2 )( 
            IVxMappingSpan * This,
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetStart )( 
            IVxMappingSpan * This,
            /* [retval][out] */ IVxMappingPoint **ppRetVal);
        
        END_INTERFACE
    } IVxMappingSpanVtbl;

    interface IVxMappingSpan
    {
        CONST_VTBL struct IVxMappingSpanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxMappingSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxMappingSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxMappingSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxMappingSpan_GetAnchorBuffer(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAnchorBuffer(This,ppRetVal) ) 

#define IVxMappingSpan_GetBufferGraph(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBufferGraph(This,ppRetVal) ) 

#define IVxMappingSpan_GetEnd(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnd(This,ppRetVal) ) 

#define IVxMappingSpan_GetSpans(This,pTargetBuffer,ppRetVal)	\
    ( (This)->lpVtbl -> GetSpans(This,pTargetBuffer,ppRetVal) ) 

#define IVxMappingSpan_GetSpans_2(This,pTargetSnapshot,ppRetVal)	\
    ( (This)->lpVtbl -> GetSpans_2(This,pTargetSnapshot,ppRetVal) ) 

#define IVxMappingSpan_GetStart(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetStart(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxMappingSpan_INTERFACE_DEFINED__ */


#ifndef __IVxNormalizedTextChangeCollection_INTERFACE_DEFINED__
#define __IVxNormalizedTextChangeCollection_INTERFACE_DEFINED__

/* interface IVxNormalizedTextChangeCollection */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxNormalizedTextChangeCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cab6d7ae-e6a1-411d-ac94-bdc1629bb621")
    IVxNormalizedTextChangeCollection : public IListIVxTextChange
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIncludesLineChanges( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxNormalizedTextChangeCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxNormalizedTextChangeCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxNormalizedTextChangeCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxNormalizedTextChangeCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IVxNormalizedTextChangeCollection * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IVxNormalizedTextChangeCollection * This,
            /* [in] */ int index,
            /* [retval][out] */ IVxTextChange **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IVxNormalizedTextChangeCollection * This,
            /* [retval][out] */ IEnumeratorIVxTextChange **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetIncludesLineChanges )( 
            IVxNormalizedTextChangeCollection * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        END_INTERFACE
    } IVxNormalizedTextChangeCollectionVtbl;

    interface IVxNormalizedTextChangeCollection
    {
        CONST_VTBL struct IVxNormalizedTextChangeCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxNormalizedTextChangeCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxNormalizedTextChangeCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxNormalizedTextChangeCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxNormalizedTextChangeCollection_GetCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCount(This,pRetVal) ) 

#define IVxNormalizedTextChangeCollection_GetElement(This,index,ppRetVal)	\
    ( (This)->lpVtbl -> GetElement(This,index,ppRetVal) ) 

#define IVxNormalizedTextChangeCollection_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 


#define IVxNormalizedTextChangeCollection_GetIncludesLineChanges(This,pRetVal)	\
    ( (This)->lpVtbl -> GetIncludesLineChanges(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxNormalizedTextChangeCollection_INTERFACE_DEFINED__ */


#ifndef __IVxReadOnlyRegion_INTERFACE_DEFINED__
#define __IVxReadOnlyRegion_INTERFACE_DEFINED__

/* interface IVxReadOnlyRegion */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxReadOnlyRegion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ece504c9-946e-4dd0-b929-0315736f86e4")
    IVxReadOnlyRegion : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEdgeInsertionMode( 
            /* [retval][out] */ VxEdgeInsertionMode *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpan( 
            /* [retval][out] */ IVxTrackingSpan **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxReadOnlyRegionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxReadOnlyRegion * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxReadOnlyRegion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxReadOnlyRegion * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEdgeInsertionMode )( 
            IVxReadOnlyRegion * This,
            /* [retval][out] */ VxEdgeInsertionMode *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpan )( 
            IVxReadOnlyRegion * This,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        END_INTERFACE
    } IVxReadOnlyRegionVtbl;

    interface IVxReadOnlyRegion
    {
        CONST_VTBL struct IVxReadOnlyRegionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxReadOnlyRegion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxReadOnlyRegion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxReadOnlyRegion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxReadOnlyRegion_GetEdgeInsertionMode(This,pRetVal)	\
    ( (This)->lpVtbl -> GetEdgeInsertionMode(This,pRetVal) ) 

#define IVxReadOnlyRegion_GetSpan(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetSpan(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxReadOnlyRegion_INTERFACE_DEFINED__ */


#ifndef __IVxTextBufferEdit_INTERFACE_DEFINED__
#define __IVxTextBufferEdit_INTERFACE_DEFINED__

/* interface IVxTextBufferEdit */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextBufferEdit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ff1f08f7-7447-49e1-af8f-0a0929a21ac9")
    IVxTextBufferEdit : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Apply( 
            /* [retval][out] */ IVxTextSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanceled( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSnapshot( 
            /* [retval][out] */ IVxTextSnapshot **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextBufferEditVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextBufferEdit * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextBufferEdit * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextBufferEdit * This);
        
        HRESULT ( STDMETHODCALLTYPE *Apply )( 
            IVxTextBufferEdit * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IVxTextBufferEdit * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanceled )( 
            IVxTextBufferEdit * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSnapshot )( 
            IVxTextBufferEdit * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        END_INTERFACE
    } IVxTextBufferEditVtbl;

    interface IVxTextBufferEdit
    {
        CONST_VTBL struct IVxTextBufferEditVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextBufferEdit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextBufferEdit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextBufferEdit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextBufferEdit_Apply(This,ppRetVal)	\
    ( (This)->lpVtbl -> Apply(This,ppRetVal) ) 

#define IVxTextBufferEdit_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IVxTextBufferEdit_GetCanceled(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCanceled(This,pRetVal) ) 

#define IVxTextBufferEdit_GetSnapshot(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetSnapshot(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextBufferEdit_INTERFACE_DEFINED__ */


#ifndef __IVxReadOnlyRegionEdit_INTERFACE_DEFINED__
#define __IVxReadOnlyRegionEdit_INTERFACE_DEFINED__

/* interface IVxReadOnlyRegionEdit */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxReadOnlyRegionEdit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("93a8521c-26ec-44fc-9a8b-3f7af2974eaa")
    IVxReadOnlyRegionEdit : public IVxTextBufferEdit
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateReadOnlyRegion( 
            /* [in] */ VxSpan span,
            /* [retval][out] */ IVxReadOnlyRegion **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateReadOnlyRegion_2( 
            /* [in] */ VxSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ VxEdgeInsertionMode edgeInsertionMode,
            /* [retval][out] */ IVxReadOnlyRegion **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveReadOnlyRegion( 
            /* [in] */ IVxReadOnlyRegion *pReadOnlyRegion) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxReadOnlyRegionEditVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxReadOnlyRegionEdit * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxReadOnlyRegionEdit * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxReadOnlyRegionEdit * This);
        
        HRESULT ( STDMETHODCALLTYPE *Apply )( 
            IVxReadOnlyRegionEdit * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IVxReadOnlyRegionEdit * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanceled )( 
            IVxReadOnlyRegionEdit * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSnapshot )( 
            IVxReadOnlyRegionEdit * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateReadOnlyRegion )( 
            IVxReadOnlyRegionEdit * This,
            /* [in] */ VxSpan span,
            /* [retval][out] */ IVxReadOnlyRegion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateReadOnlyRegion_2 )( 
            IVxReadOnlyRegionEdit * This,
            /* [in] */ VxSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ VxEdgeInsertionMode edgeInsertionMode,
            /* [retval][out] */ IVxReadOnlyRegion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveReadOnlyRegion )( 
            IVxReadOnlyRegionEdit * This,
            /* [in] */ IVxReadOnlyRegion *pReadOnlyRegion);
        
        END_INTERFACE
    } IVxReadOnlyRegionEditVtbl;

    interface IVxReadOnlyRegionEdit
    {
        CONST_VTBL struct IVxReadOnlyRegionEditVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxReadOnlyRegionEdit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxReadOnlyRegionEdit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxReadOnlyRegionEdit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxReadOnlyRegionEdit_Apply(This,ppRetVal)	\
    ( (This)->lpVtbl -> Apply(This,ppRetVal) ) 

#define IVxReadOnlyRegionEdit_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IVxReadOnlyRegionEdit_GetCanceled(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCanceled(This,pRetVal) ) 

#define IVxReadOnlyRegionEdit_GetSnapshot(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetSnapshot(This,ppRetVal) ) 


#define IVxReadOnlyRegionEdit_CreateReadOnlyRegion(This,span,ppRetVal)	\
    ( (This)->lpVtbl -> CreateReadOnlyRegion(This,span,ppRetVal) ) 

#define IVxReadOnlyRegionEdit_CreateReadOnlyRegion_2(This,span,trackingMode,edgeInsertionMode,ppRetVal)	\
    ( (This)->lpVtbl -> CreateReadOnlyRegion_2(This,span,trackingMode,edgeInsertionMode,ppRetVal) ) 

#define IVxReadOnlyRegionEdit_RemoveReadOnlyRegion(This,pReadOnlyRegion)	\
    ( (This)->lpVtbl -> RemoveReadOnlyRegion(This,pReadOnlyRegion) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxReadOnlyRegionEdit_INTERFACE_DEFINED__ */


#ifndef __IVxTextBuffer_INTERFACE_DEFINED__
#define __IVxTextBuffer_INTERFACE_DEFINED__

/* interface IVxTextBuffer */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("df9ab9af-f07e-43c5-9106-eaf5849760d2")
    IVxTextBuffer : public IVxPropertyOwner
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseChanged( 
            /* [in] */ IVxTextContentChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseChangedHighPriority( 
            /* [in] */ IVxTextContentChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseChangedLowPriority( 
            /* [in] */ IVxTextContentChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseChanging( 
            /* [in] */ IVxTextContentChangingEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseContentTypeChanged( 
            /* [in] */ IVxContentTypeChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdvisePostChanged( 
            /* [in] */ IVxEventArgsEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseReadOnlyRegionsChanged( 
            /* [in] */ IVxSnapshotSpanEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ChangeContentType( 
            /* [in] */ IVxContentType *pNewContentType,
            /* [in] */ IUnknown *pEditTag) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CheckEditAccess( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateEdit_2( 
            /* [retval][out] */ IVxTextEdit **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateEdit( 
            /* [in] */ VxEditOptions options,
            /* [in] */ BOOL reiteratedVersionNumberHasValue,
            /* [in] */ int reiteratedVersionNumber,
            /* [in] */ IUnknown *pEditTag,
            /* [retval][out] */ IVxTextEdit **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateReadOnlyRegionEdit( 
            /* [retval][out] */ IVxReadOnlyRegionEdit **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ VxSpan deleteSpan,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContentType( 
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentSnapshot( 
            /* [retval][out] */ IVxTextSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEditInProgress( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReadOnlyExtents( 
            /* [in] */ VxSpan span,
            /* [retval][out] */ IVxNormalizedSpanCollection **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ int position,
            /* [in] */ BSTR text,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsReadOnly_3( 
            /* [in] */ int position,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsReadOnly( 
            /* [in] */ VxSpan span,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsReadOnly_4( 
            /* [in] */ int position,
            /* [in] */ BOOL isEdit,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsReadOnly_2( 
            /* [in] */ VxSpan span,
            /* [in] */ BOOL isEdit,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Replace( 
            /* [in] */ VxSpan replaceSpan,
            /* [in] */ BSTR replaceWith,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeThreadOwnership( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseChanged( 
            /* [in] */ IVxTextContentChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseChangedHighPriority( 
            /* [in] */ IVxTextContentChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseChangedLowPriority( 
            /* [in] */ IVxTextContentChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseChanging( 
            /* [in] */ IVxTextContentChangingEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseContentTypeChanged( 
            /* [in] */ IVxContentTypeChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadvisePostChanged( 
            /* [in] */ IVxEventArgsEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseReadOnlyRegionsChanged( 
            /* [in] */ IVxSnapshotSpanEvent *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextBufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextBuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVxTextBuffer * This,
            /* [retval][out] */ IVxPropertyCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseChanged )( 
            IVxTextBuffer * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseChangedHighPriority )( 
            IVxTextBuffer * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseChangedLowPriority )( 
            IVxTextBuffer * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseChanging )( 
            IVxTextBuffer * This,
            /* [in] */ IVxTextContentChangingEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseContentTypeChanged )( 
            IVxTextBuffer * This,
            /* [in] */ IVxContentTypeChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdvisePostChanged )( 
            IVxTextBuffer * This,
            /* [in] */ IVxEventArgsEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseReadOnlyRegionsChanged )( 
            IVxTextBuffer * This,
            /* [in] */ IVxSnapshotSpanEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *ChangeContentType )( 
            IVxTextBuffer * This,
            /* [in] */ IVxContentType *pNewContentType,
            /* [in] */ IUnknown *pEditTag);
        
        HRESULT ( STDMETHODCALLTYPE *CheckEditAccess )( 
            IVxTextBuffer * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEdit_2 )( 
            IVxTextBuffer * This,
            /* [retval][out] */ IVxTextEdit **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEdit )( 
            IVxTextBuffer * This,
            /* [in] */ VxEditOptions options,
            /* [in] */ BOOL reiteratedVersionNumberHasValue,
            /* [in] */ int reiteratedVersionNumber,
            /* [in] */ IUnknown *pEditTag,
            /* [retval][out] */ IVxTextEdit **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateReadOnlyRegionEdit )( 
            IVxTextBuffer * This,
            /* [retval][out] */ IVxReadOnlyRegionEdit **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IVxTextBuffer * This,
            /* [in] */ VxSpan deleteSpan,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetContentType )( 
            IVxTextBuffer * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSnapshot )( 
            IVxTextBuffer * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEditInProgress )( 
            IVxTextBuffer * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetReadOnlyExtents )( 
            IVxTextBuffer * This,
            /* [in] */ VxSpan span,
            /* [retval][out] */ IVxNormalizedSpanCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IVxTextBuffer * This,
            /* [in] */ int position,
            /* [in] */ BSTR text,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsReadOnly_3 )( 
            IVxTextBuffer * This,
            /* [in] */ int position,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsReadOnly )( 
            IVxTextBuffer * This,
            /* [in] */ VxSpan span,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsReadOnly_4 )( 
            IVxTextBuffer * This,
            /* [in] */ int position,
            /* [in] */ BOOL isEdit,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsReadOnly_2 )( 
            IVxTextBuffer * This,
            /* [in] */ VxSpan span,
            /* [in] */ BOOL isEdit,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Replace )( 
            IVxTextBuffer * This,
            /* [in] */ VxSpan replaceSpan,
            /* [in] */ BSTR replaceWith,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *TakeThreadOwnership )( 
            IVxTextBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseChanged )( 
            IVxTextBuffer * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseChangedHighPriority )( 
            IVxTextBuffer * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseChangedLowPriority )( 
            IVxTextBuffer * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseChanging )( 
            IVxTextBuffer * This,
            /* [in] */ IVxTextContentChangingEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseContentTypeChanged )( 
            IVxTextBuffer * This,
            /* [in] */ IVxContentTypeChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadvisePostChanged )( 
            IVxTextBuffer * This,
            /* [in] */ IVxEventArgsEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseReadOnlyRegionsChanged )( 
            IVxTextBuffer * This,
            /* [in] */ IVxSnapshotSpanEvent *pValue);
        
        END_INTERFACE
    } IVxTextBufferVtbl;

    interface IVxTextBuffer
    {
        CONST_VTBL struct IVxTextBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextBuffer_GetProperties(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetProperties(This,ppRetVal) ) 


#define IVxTextBuffer_AdviseChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseChanged(This,pValue) ) 

#define IVxTextBuffer_AdviseChangedHighPriority(This,pValue)	\
    ( (This)->lpVtbl -> AdviseChangedHighPriority(This,pValue) ) 

#define IVxTextBuffer_AdviseChangedLowPriority(This,pValue)	\
    ( (This)->lpVtbl -> AdviseChangedLowPriority(This,pValue) ) 

#define IVxTextBuffer_AdviseChanging(This,pValue)	\
    ( (This)->lpVtbl -> AdviseChanging(This,pValue) ) 

#define IVxTextBuffer_AdviseContentTypeChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseContentTypeChanged(This,pValue) ) 

#define IVxTextBuffer_AdvisePostChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdvisePostChanged(This,pValue) ) 

#define IVxTextBuffer_AdviseReadOnlyRegionsChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseReadOnlyRegionsChanged(This,pValue) ) 

#define IVxTextBuffer_ChangeContentType(This,pNewContentType,pEditTag)	\
    ( (This)->lpVtbl -> ChangeContentType(This,pNewContentType,pEditTag) ) 

#define IVxTextBuffer_CheckEditAccess(This,pRetVal)	\
    ( (This)->lpVtbl -> CheckEditAccess(This,pRetVal) ) 

#define IVxTextBuffer_CreateEdit_2(This,ppRetVal)	\
    ( (This)->lpVtbl -> CreateEdit_2(This,ppRetVal) ) 

#define IVxTextBuffer_CreateEdit(This,options,reiteratedVersionNumberHasValue,reiteratedVersionNumber,pEditTag,ppRetVal)	\
    ( (This)->lpVtbl -> CreateEdit(This,options,reiteratedVersionNumberHasValue,reiteratedVersionNumber,pEditTag,ppRetVal) ) 

#define IVxTextBuffer_CreateReadOnlyRegionEdit(This,ppRetVal)	\
    ( (This)->lpVtbl -> CreateReadOnlyRegionEdit(This,ppRetVal) ) 

#define IVxTextBuffer_Delete(This,deleteSpan,ppRetVal)	\
    ( (This)->lpVtbl -> Delete(This,deleteSpan,ppRetVal) ) 

#define IVxTextBuffer_GetContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetContentType(This,ppRetVal) ) 

#define IVxTextBuffer_GetCurrentSnapshot(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetCurrentSnapshot(This,ppRetVal) ) 

#define IVxTextBuffer_GetEditInProgress(This,pRetVal)	\
    ( (This)->lpVtbl -> GetEditInProgress(This,pRetVal) ) 

#define IVxTextBuffer_GetReadOnlyExtents(This,span,ppRetVal)	\
    ( (This)->lpVtbl -> GetReadOnlyExtents(This,span,ppRetVal) ) 

#define IVxTextBuffer_Insert(This,position,text,ppRetVal)	\
    ( (This)->lpVtbl -> Insert(This,position,text,ppRetVal) ) 

#define IVxTextBuffer_IsReadOnly_3(This,position,pRetVal)	\
    ( (This)->lpVtbl -> IsReadOnly_3(This,position,pRetVal) ) 

#define IVxTextBuffer_IsReadOnly(This,span,pRetVal)	\
    ( (This)->lpVtbl -> IsReadOnly(This,span,pRetVal) ) 

#define IVxTextBuffer_IsReadOnly_4(This,position,isEdit,pRetVal)	\
    ( (This)->lpVtbl -> IsReadOnly_4(This,position,isEdit,pRetVal) ) 

#define IVxTextBuffer_IsReadOnly_2(This,span,isEdit,pRetVal)	\
    ( (This)->lpVtbl -> IsReadOnly_2(This,span,isEdit,pRetVal) ) 

#define IVxTextBuffer_Replace(This,replaceSpan,replaceWith,ppRetVal)	\
    ( (This)->lpVtbl -> Replace(This,replaceSpan,replaceWith,ppRetVal) ) 

#define IVxTextBuffer_TakeThreadOwnership(This)	\
    ( (This)->lpVtbl -> TakeThreadOwnership(This) ) 

#define IVxTextBuffer_UnadviseChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseChanged(This,pValue) ) 

#define IVxTextBuffer_UnadviseChangedHighPriority(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseChangedHighPriority(This,pValue) ) 

#define IVxTextBuffer_UnadviseChangedLowPriority(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseChangedLowPriority(This,pValue) ) 

#define IVxTextBuffer_UnadviseChanging(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseChanging(This,pValue) ) 

#define IVxTextBuffer_UnadviseContentTypeChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseContentTypeChanged(This,pValue) ) 

#define IVxTextBuffer_UnadvisePostChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadvisePostChanged(This,pValue) ) 

#define IVxTextBuffer_UnadviseReadOnlyRegionsChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseReadOnlyRegionsChanged(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextBuffer_INTERFACE_DEFINED__ */


#ifndef __IVxTextBufferFactoryService_INTERFACE_DEFINED__
#define __IVxTextBufferFactoryService_INTERFACE_DEFINED__

/* interface IVxTextBufferFactoryService */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextBufferFactoryService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a8f4abb4-783f-462b-b5ee-384e63e63f5b")
    IVxTextBufferFactoryService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseTextBufferCreated( 
            /* [in] */ IVxTextBufferCreatedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTextBuffer( 
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTextBuffer_2( 
            /* [in] */ IVxContentType *pContentType,
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTextBuffer_4( 
            /* [in] */ IUnknown *pReader,
            /* [in] */ IVxContentType *pContentType,
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTextBuffer_3( 
            /* [in] */ BSTR text,
            /* [in] */ IVxContentType *pContentType,
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInertContentType( 
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPlaintextContentType( 
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextContentType( 
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseTextBufferCreated( 
            /* [in] */ IVxTextBufferCreatedEvent *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextBufferFactoryServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextBufferFactoryService * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextBufferFactoryService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextBufferFactoryService * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseTextBufferCreated )( 
            IVxTextBufferFactoryService * This,
            /* [in] */ IVxTextBufferCreatedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTextBuffer )( 
            IVxTextBufferFactoryService * This,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTextBuffer_2 )( 
            IVxTextBufferFactoryService * This,
            /* [in] */ IVxContentType *pContentType,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTextBuffer_4 )( 
            IVxTextBufferFactoryService * This,
            /* [in] */ IUnknown *pReader,
            /* [in] */ IVxContentType *pContentType,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTextBuffer_3 )( 
            IVxTextBufferFactoryService * This,
            /* [in] */ BSTR text,
            /* [in] */ IVxContentType *pContentType,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetInertContentType )( 
            IVxTextBufferFactoryService * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetPlaintextContentType )( 
            IVxTextBufferFactoryService * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextContentType )( 
            IVxTextBufferFactoryService * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseTextBufferCreated )( 
            IVxTextBufferFactoryService * This,
            /* [in] */ IVxTextBufferCreatedEvent *pValue);
        
        END_INTERFACE
    } IVxTextBufferFactoryServiceVtbl;

    interface IVxTextBufferFactoryService
    {
        CONST_VTBL struct IVxTextBufferFactoryServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextBufferFactoryService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextBufferFactoryService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextBufferFactoryService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextBufferFactoryService_AdviseTextBufferCreated(This,pValue)	\
    ( (This)->lpVtbl -> AdviseTextBufferCreated(This,pValue) ) 

#define IVxTextBufferFactoryService_CreateTextBuffer(This,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTextBuffer(This,ppRetVal) ) 

#define IVxTextBufferFactoryService_CreateTextBuffer_2(This,pContentType,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTextBuffer_2(This,pContentType,ppRetVal) ) 

#define IVxTextBufferFactoryService_CreateTextBuffer_4(This,pReader,pContentType,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTextBuffer_4(This,pReader,pContentType,ppRetVal) ) 

#define IVxTextBufferFactoryService_CreateTextBuffer_3(This,text,pContentType,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTextBuffer_3(This,text,pContentType,ppRetVal) ) 

#define IVxTextBufferFactoryService_GetInertContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetInertContentType(This,ppRetVal) ) 

#define IVxTextBufferFactoryService_GetPlaintextContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetPlaintextContentType(This,ppRetVal) ) 

#define IVxTextBufferFactoryService_GetTextContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetTextContentType(This,ppRetVal) ) 

#define IVxTextBufferFactoryService_UnadviseTextBufferCreated(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseTextBufferCreated(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextBufferFactoryService_INTERFACE_DEFINED__ */


#ifndef __IVxTextChange_INTERFACE_DEFINED__
#define __IVxTextChange_INTERFACE_DEFINED__

/* interface IVxTextChange */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextChange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9b3001b6-bc6d-4dfc-9b7e-0e6f2c776d8e")
    IVxTextChange : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDelta( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLineCountDelta( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNewEnd( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNewLength( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNewPosition( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNewSpan( 
            /* [retval][out] */ VxSpan *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNewText( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOldEnd( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOldLength( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOldPosition( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOldSpan( 
            /* [retval][out] */ VxSpan *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOldText( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextChangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextChange * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextChange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextChange * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDelta )( 
            IVxTextChange * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLineCountDelta )( 
            IVxTextChange * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetNewEnd )( 
            IVxTextChange * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetNewLength )( 
            IVxTextChange * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetNewPosition )( 
            IVxTextChange * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetNewSpan )( 
            IVxTextChange * This,
            /* [retval][out] */ VxSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetNewText )( 
            IVxTextChange * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetOldEnd )( 
            IVxTextChange * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetOldLength )( 
            IVxTextChange * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetOldPosition )( 
            IVxTextChange * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetOldSpan )( 
            IVxTextChange * This,
            /* [retval][out] */ VxSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetOldText )( 
            IVxTextChange * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        END_INTERFACE
    } IVxTextChangeVtbl;

    interface IVxTextChange
    {
        CONST_VTBL struct IVxTextChangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextChange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextChange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextChange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextChange_GetDelta(This,pRetVal)	\
    ( (This)->lpVtbl -> GetDelta(This,pRetVal) ) 

#define IVxTextChange_GetLineCountDelta(This,pRetVal)	\
    ( (This)->lpVtbl -> GetLineCountDelta(This,pRetVal) ) 

#define IVxTextChange_GetNewEnd(This,pRetVal)	\
    ( (This)->lpVtbl -> GetNewEnd(This,pRetVal) ) 

#define IVxTextChange_GetNewLength(This,pRetVal)	\
    ( (This)->lpVtbl -> GetNewLength(This,pRetVal) ) 

#define IVxTextChange_GetNewPosition(This,pRetVal)	\
    ( (This)->lpVtbl -> GetNewPosition(This,pRetVal) ) 

#define IVxTextChange_GetNewSpan(This,pRetVal)	\
    ( (This)->lpVtbl -> GetNewSpan(This,pRetVal) ) 

#define IVxTextChange_GetNewText(This,pRetVal)	\
    ( (This)->lpVtbl -> GetNewText(This,pRetVal) ) 

#define IVxTextChange_GetOldEnd(This,pRetVal)	\
    ( (This)->lpVtbl -> GetOldEnd(This,pRetVal) ) 

#define IVxTextChange_GetOldLength(This,pRetVal)	\
    ( (This)->lpVtbl -> GetOldLength(This,pRetVal) ) 

#define IVxTextChange_GetOldPosition(This,pRetVal)	\
    ( (This)->lpVtbl -> GetOldPosition(This,pRetVal) ) 

#define IVxTextChange_GetOldSpan(This,pRetVal)	\
    ( (This)->lpVtbl -> GetOldSpan(This,pRetVal) ) 

#define IVxTextChange_GetOldText(This,pRetVal)	\
    ( (This)->lpVtbl -> GetOldText(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextChange_INTERFACE_DEFINED__ */


#ifndef __IVxTextEdit_INTERFACE_DEFINED__
#define __IVxTextEdit_INTERFACE_DEFINED__

/* interface IVxTextEdit */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextEdit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("aaaa0268-3374-4d81-8c09-c130688ab1e8")
    IVxTextEdit : public IVxTextBufferEdit
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ VxSpan deleteSpan,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete_2( 
            /* [in] */ int startPosition,
            /* [in] */ int charsToDelete,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasEffectiveChanges( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasFailedChanges( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ int position,
            /* [in] */ BSTR text,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Replace( 
            /* [in] */ VxSpan replaceSpan,
            /* [in] */ BSTR replaceWith,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Replace_2( 
            /* [in] */ int startPosition,
            /* [in] */ int charsToReplace,
            /* [in] */ BSTR replaceWith,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextEditVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextEdit * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextEdit * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextEdit * This);
        
        HRESULT ( STDMETHODCALLTYPE *Apply )( 
            IVxTextEdit * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IVxTextEdit * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanceled )( 
            IVxTextEdit * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSnapshot )( 
            IVxTextEdit * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IVxTextEdit * This,
            /* [in] */ VxSpan deleteSpan,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Delete_2 )( 
            IVxTextEdit * This,
            /* [in] */ int startPosition,
            /* [in] */ int charsToDelete,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasEffectiveChanges )( 
            IVxTextEdit * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasFailedChanges )( 
            IVxTextEdit * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IVxTextEdit * This,
            /* [in] */ int position,
            /* [in] */ BSTR text,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Replace )( 
            IVxTextEdit * This,
            /* [in] */ VxSpan replaceSpan,
            /* [in] */ BSTR replaceWith,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Replace_2 )( 
            IVxTextEdit * This,
            /* [in] */ int startPosition,
            /* [in] */ int charsToReplace,
            /* [in] */ BSTR replaceWith,
            /* [retval][out] */ BOOL *pRetVal);
        
        END_INTERFACE
    } IVxTextEditVtbl;

    interface IVxTextEdit
    {
        CONST_VTBL struct IVxTextEditVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextEdit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextEdit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextEdit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextEdit_Apply(This,ppRetVal)	\
    ( (This)->lpVtbl -> Apply(This,ppRetVal) ) 

#define IVxTextEdit_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IVxTextEdit_GetCanceled(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCanceled(This,pRetVal) ) 

#define IVxTextEdit_GetSnapshot(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetSnapshot(This,ppRetVal) ) 


#define IVxTextEdit_Delete(This,deleteSpan,pRetVal)	\
    ( (This)->lpVtbl -> Delete(This,deleteSpan,pRetVal) ) 

#define IVxTextEdit_Delete_2(This,startPosition,charsToDelete,pRetVal)	\
    ( (This)->lpVtbl -> Delete_2(This,startPosition,charsToDelete,pRetVal) ) 

#define IVxTextEdit_GetHasEffectiveChanges(This,pRetVal)	\
    ( (This)->lpVtbl -> GetHasEffectiveChanges(This,pRetVal) ) 

#define IVxTextEdit_GetHasFailedChanges(This,pRetVal)	\
    ( (This)->lpVtbl -> GetHasFailedChanges(This,pRetVal) ) 

#define IVxTextEdit_Insert(This,position,text,pRetVal)	\
    ( (This)->lpVtbl -> Insert(This,position,text,pRetVal) ) 

#define IVxTextEdit_Replace(This,replaceSpan,replaceWith,pRetVal)	\
    ( (This)->lpVtbl -> Replace(This,replaceSpan,replaceWith,pRetVal) ) 

#define IVxTextEdit_Replace_2(This,startPosition,charsToReplace,replaceWith,pRetVal)	\
    ( (This)->lpVtbl -> Replace_2(This,startPosition,charsToReplace,replaceWith,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextEdit_INTERFACE_DEFINED__ */


#ifndef __IVxTextSnapshot_INTERFACE_DEFINED__
#define __IVxTextSnapshot_INTERFACE_DEFINED__

/* interface IVxTextSnapshot */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextSnapshot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f989d547-f569-495c-819b-9810e2bb6dd3")
    IVxTextSnapshot : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateTrackingPoint( 
            /* [in] */ int position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingPoint **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTrackingPoint_2( 
            /* [in] */ int position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingPoint **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTrackingSpan( 
            /* [in] */ VxSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTrackingSpan_2( 
            /* [in] */ VxSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTrackingSpan_3( 
            /* [in] */ int start,
            /* [in] */ int length,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTrackingSpan_4( 
            /* [in] */ int start,
            /* [in] */ int length,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContentType( 
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLength( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLineCount( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLineFromLineNumber( 
            /* [in] */ int lineNumber,
            /* [retval][out] */ IVxTextSnapshotLine **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLineFromPosition( 
            /* [in] */ int position,
            /* [retval][out] */ IVxTextSnapshotLine **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLineNumberFromPosition( 
            /* [in] */ int position,
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLines( 
            /* [retval][out] */ IEnumerableIVxTextSnapshotLine **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetText_3( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetText( 
            /* [in] */ VxSpan span,
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetText_2( 
            /* [in] */ int startIndex,
            /* [in] */ int length,
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextBuffer( 
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVersion( 
            /* [retval][out] */ IVxTextVersion **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Write_2( 
            /* [in] */ IUnknown *pWriter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Write( 
            /* [in] */ IUnknown *pWriter,
            /* [in] */ VxSpan span) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextSnapshotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextSnapshot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextSnapshot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextSnapshot * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingPoint )( 
            IVxTextSnapshot * This,
            /* [in] */ int position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingPoint **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingPoint_2 )( 
            IVxTextSnapshot * This,
            /* [in] */ int position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingPoint **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingSpan )( 
            IVxTextSnapshot * This,
            /* [in] */ VxSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingSpan_2 )( 
            IVxTextSnapshot * This,
            /* [in] */ VxSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingSpan_3 )( 
            IVxTextSnapshot * This,
            /* [in] */ int start,
            /* [in] */ int length,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingSpan_4 )( 
            IVxTextSnapshot * This,
            /* [in] */ int start,
            /* [in] */ int length,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetContentType )( 
            IVxTextSnapshot * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLength )( 
            IVxTextSnapshot * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLineCount )( 
            IVxTextSnapshot * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLineFromLineNumber )( 
            IVxTextSnapshot * This,
            /* [in] */ int lineNumber,
            /* [retval][out] */ IVxTextSnapshotLine **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLineFromPosition )( 
            IVxTextSnapshot * This,
            /* [in] */ int position,
            /* [retval][out] */ IVxTextSnapshotLine **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLineNumberFromPosition )( 
            IVxTextSnapshot * This,
            /* [in] */ int position,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLines )( 
            IVxTextSnapshot * This,
            /* [retval][out] */ IEnumerableIVxTextSnapshotLine **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetText_3 )( 
            IVxTextSnapshot * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            IVxTextSnapshot * This,
            /* [in] */ VxSpan span,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetText_2 )( 
            IVxTextSnapshot * This,
            /* [in] */ int startIndex,
            /* [in] */ int length,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextBuffer )( 
            IVxTextSnapshot * This,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IVxTextSnapshot * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Write_2 )( 
            IVxTextSnapshot * This,
            /* [in] */ IUnknown *pWriter);
        
        HRESULT ( STDMETHODCALLTYPE *Write )( 
            IVxTextSnapshot * This,
            /* [in] */ IUnknown *pWriter,
            /* [in] */ VxSpan span);
        
        END_INTERFACE
    } IVxTextSnapshotVtbl;

    interface IVxTextSnapshot
    {
        CONST_VTBL struct IVxTextSnapshotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextSnapshot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextSnapshot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextSnapshot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextSnapshot_CreateTrackingPoint(This,position,trackingMode,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingPoint(This,position,trackingMode,ppRetVal) ) 

#define IVxTextSnapshot_CreateTrackingPoint_2(This,position,trackingMode,trackingFidelity,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingPoint_2(This,position,trackingMode,trackingFidelity,ppRetVal) ) 

#define IVxTextSnapshot_CreateTrackingSpan(This,span,trackingMode,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingSpan(This,span,trackingMode,ppRetVal) ) 

#define IVxTextSnapshot_CreateTrackingSpan_2(This,span,trackingMode,trackingFidelity,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingSpan_2(This,span,trackingMode,trackingFidelity,ppRetVal) ) 

#define IVxTextSnapshot_CreateTrackingSpan_3(This,start,length,trackingMode,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingSpan_3(This,start,length,trackingMode,ppRetVal) ) 

#define IVxTextSnapshot_CreateTrackingSpan_4(This,start,length,trackingMode,trackingFidelity,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingSpan_4(This,start,length,trackingMode,trackingFidelity,ppRetVal) ) 

#define IVxTextSnapshot_GetContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetContentType(This,ppRetVal) ) 

#define IVxTextSnapshot_GetLength(This,pRetVal)	\
    ( (This)->lpVtbl -> GetLength(This,pRetVal) ) 

#define IVxTextSnapshot_GetLineCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetLineCount(This,pRetVal) ) 

#define IVxTextSnapshot_GetLineFromLineNumber(This,lineNumber,ppRetVal)	\
    ( (This)->lpVtbl -> GetLineFromLineNumber(This,lineNumber,ppRetVal) ) 

#define IVxTextSnapshot_GetLineFromPosition(This,position,ppRetVal)	\
    ( (This)->lpVtbl -> GetLineFromPosition(This,position,ppRetVal) ) 

#define IVxTextSnapshot_GetLineNumberFromPosition(This,position,pRetVal)	\
    ( (This)->lpVtbl -> GetLineNumberFromPosition(This,position,pRetVal) ) 

#define IVxTextSnapshot_GetLines(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetLines(This,ppRetVal) ) 

#define IVxTextSnapshot_GetText_3(This,pRetVal)	\
    ( (This)->lpVtbl -> GetText_3(This,pRetVal) ) 

#define IVxTextSnapshot_GetText(This,span,pRetVal)	\
    ( (This)->lpVtbl -> GetText(This,span,pRetVal) ) 

#define IVxTextSnapshot_GetText_2(This,startIndex,length,pRetVal)	\
    ( (This)->lpVtbl -> GetText_2(This,startIndex,length,pRetVal) ) 

#define IVxTextSnapshot_GetTextBuffer(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetTextBuffer(This,ppRetVal) ) 

#define IVxTextSnapshot_GetVersion(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetVersion(This,ppRetVal) ) 

#define IVxTextSnapshot_Write_2(This,pWriter)	\
    ( (This)->lpVtbl -> Write_2(This,pWriter) ) 

#define IVxTextSnapshot_Write(This,pWriter,span)	\
    ( (This)->lpVtbl -> Write(This,pWriter,span) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextSnapshot_INTERFACE_DEFINED__ */


#ifndef __IVxTextSnapshotLine_INTERFACE_DEFINED__
#define __IVxTextSnapshotLine_INTERFACE_DEFINED__

/* interface IVxTextSnapshotLine */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextSnapshotLine;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7b15e2bd-277b-42e8-869f-71b9fb79f962")
    IVxTextSnapshotLine : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEnd( 
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEndIncludingLineBreak( 
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExtent( 
            /* [retval][out] */ VxSnapshotSpan *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExtentIncludingLineBreak( 
            /* [retval][out] */ VxSnapshotSpan *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLength( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLengthIncludingLineBreak( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLineBreakLength( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLineBreakText( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLineNumber( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSnapshot( 
            /* [retval][out] */ IVxTextSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStart( 
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetText( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextIncludingLineBreak( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextSnapshotLineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextSnapshotLine * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextSnapshotLine * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextSnapshotLine * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnd )( 
            IVxTextSnapshotLine * This,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEndIncludingLineBreak )( 
            IVxTextSnapshotLine * This,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetExtent )( 
            IVxTextSnapshotLine * This,
            /* [retval][out] */ VxSnapshotSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetExtentIncludingLineBreak )( 
            IVxTextSnapshotLine * This,
            /* [retval][out] */ VxSnapshotSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLength )( 
            IVxTextSnapshotLine * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLengthIncludingLineBreak )( 
            IVxTextSnapshotLine * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLineBreakLength )( 
            IVxTextSnapshotLine * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLineBreakText )( 
            IVxTextSnapshotLine * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLineNumber )( 
            IVxTextSnapshotLine * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSnapshot )( 
            IVxTextSnapshotLine * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetStart )( 
            IVxTextSnapshotLine * This,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            IVxTextSnapshotLine * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextIncludingLineBreak )( 
            IVxTextSnapshotLine * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        END_INTERFACE
    } IVxTextSnapshotLineVtbl;

    interface IVxTextSnapshotLine
    {
        CONST_VTBL struct IVxTextSnapshotLineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextSnapshotLine_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextSnapshotLine_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextSnapshotLine_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextSnapshotLine_GetEnd(This,pRetVal)	\
    ( (This)->lpVtbl -> GetEnd(This,pRetVal) ) 

#define IVxTextSnapshotLine_GetEndIncludingLineBreak(This,pRetVal)	\
    ( (This)->lpVtbl -> GetEndIncludingLineBreak(This,pRetVal) ) 

#define IVxTextSnapshotLine_GetExtent(This,pRetVal)	\
    ( (This)->lpVtbl -> GetExtent(This,pRetVal) ) 

#define IVxTextSnapshotLine_GetExtentIncludingLineBreak(This,pRetVal)	\
    ( (This)->lpVtbl -> GetExtentIncludingLineBreak(This,pRetVal) ) 

#define IVxTextSnapshotLine_GetLength(This,pRetVal)	\
    ( (This)->lpVtbl -> GetLength(This,pRetVal) ) 

#define IVxTextSnapshotLine_GetLengthIncludingLineBreak(This,pRetVal)	\
    ( (This)->lpVtbl -> GetLengthIncludingLineBreak(This,pRetVal) ) 

#define IVxTextSnapshotLine_GetLineBreakLength(This,pRetVal)	\
    ( (This)->lpVtbl -> GetLineBreakLength(This,pRetVal) ) 

#define IVxTextSnapshotLine_GetLineBreakText(This,pRetVal)	\
    ( (This)->lpVtbl -> GetLineBreakText(This,pRetVal) ) 

#define IVxTextSnapshotLine_GetLineNumber(This,pRetVal)	\
    ( (This)->lpVtbl -> GetLineNumber(This,pRetVal) ) 

#define IVxTextSnapshotLine_GetSnapshot(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetSnapshot(This,ppRetVal) ) 

#define IVxTextSnapshotLine_GetStart(This,pRetVal)	\
    ( (This)->lpVtbl -> GetStart(This,pRetVal) ) 

#define IVxTextSnapshotLine_GetText(This,pRetVal)	\
    ( (This)->lpVtbl -> GetText(This,pRetVal) ) 

#define IVxTextSnapshotLine_GetTextIncludingLineBreak(This,pRetVal)	\
    ( (This)->lpVtbl -> GetTextIncludingLineBreak(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextSnapshotLine_INTERFACE_DEFINED__ */


#ifndef __IVxTextVersion_INTERFACE_DEFINED__
#define __IVxTextVersion_INTERFACE_DEFINED__

/* interface IVxTextVersion */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextVersion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("dc22e98b-dee1-4836-8fcc-ae137a47b89e")
    IVxTextVersion : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateTrackingPoint( 
            /* [in] */ int position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingPoint **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTrackingPoint_2( 
            /* [in] */ int position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingPoint **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTrackingSpan( 
            /* [in] */ VxSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTrackingSpan_2( 
            /* [in] */ VxSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTrackingSpan_3( 
            /* [in] */ int start,
            /* [in] */ int length,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTrackingSpan_4( 
            /* [in] */ int start,
            /* [in] */ int length,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChanges( 
            /* [retval][out] */ IVxNormalizedTextChangeCollection **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLength( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNext( 
            /* [retval][out] */ IVxTextVersion **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReiteratedVersionNumber( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextBuffer( 
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVersionNumber( 
            /* [retval][out] */ int *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextVersionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextVersion * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextVersion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextVersion * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingPoint )( 
            IVxTextVersion * This,
            /* [in] */ int position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingPoint **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingPoint_2 )( 
            IVxTextVersion * This,
            /* [in] */ int position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingPoint **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingSpan )( 
            IVxTextVersion * This,
            /* [in] */ VxSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingSpan_2 )( 
            IVxTextVersion * This,
            /* [in] */ VxSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingSpan_3 )( 
            IVxTextVersion * This,
            /* [in] */ int start,
            /* [in] */ int length,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingSpan_4 )( 
            IVxTextVersion * This,
            /* [in] */ int start,
            /* [in] */ int length,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetChanges )( 
            IVxTextVersion * This,
            /* [retval][out] */ IVxNormalizedTextChangeCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLength )( 
            IVxTextVersion * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetNext )( 
            IVxTextVersion * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetReiteratedVersionNumber )( 
            IVxTextVersion * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextBuffer )( 
            IVxTextVersion * This,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )( 
            IVxTextVersion * This,
            /* [retval][out] */ int *pRetVal);
        
        END_INTERFACE
    } IVxTextVersionVtbl;

    interface IVxTextVersion
    {
        CONST_VTBL struct IVxTextVersionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextVersion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextVersion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextVersion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextVersion_CreateTrackingPoint(This,position,trackingMode,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingPoint(This,position,trackingMode,ppRetVal) ) 

#define IVxTextVersion_CreateTrackingPoint_2(This,position,trackingMode,trackingFidelity,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingPoint_2(This,position,trackingMode,trackingFidelity,ppRetVal) ) 

#define IVxTextVersion_CreateTrackingSpan(This,span,trackingMode,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingSpan(This,span,trackingMode,ppRetVal) ) 

#define IVxTextVersion_CreateTrackingSpan_2(This,span,trackingMode,trackingFidelity,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingSpan_2(This,span,trackingMode,trackingFidelity,ppRetVal) ) 

#define IVxTextVersion_CreateTrackingSpan_3(This,start,length,trackingMode,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingSpan_3(This,start,length,trackingMode,ppRetVal) ) 

#define IVxTextVersion_CreateTrackingSpan_4(This,start,length,trackingMode,trackingFidelity,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingSpan_4(This,start,length,trackingMode,trackingFidelity,ppRetVal) ) 

#define IVxTextVersion_GetChanges(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetChanges(This,ppRetVal) ) 

#define IVxTextVersion_GetLength(This,pRetVal)	\
    ( (This)->lpVtbl -> GetLength(This,pRetVal) ) 

#define IVxTextVersion_GetNext(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetNext(This,ppRetVal) ) 

#define IVxTextVersion_GetReiteratedVersionNumber(This,pRetVal)	\
    ( (This)->lpVtbl -> GetReiteratedVersionNumber(This,pRetVal) ) 

#define IVxTextVersion_GetTextBuffer(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetTextBuffer(This,ppRetVal) ) 

#define IVxTextVersion_GetVersionNumber(This,pRetVal)	\
    ( (This)->lpVtbl -> GetVersionNumber(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextVersion_INTERFACE_DEFINED__ */


#ifndef __IVxTrackingPoint_INTERFACE_DEFINED__
#define __IVxTrackingPoint_INTERFACE_DEFINED__

/* interface IVxTrackingPoint */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTrackingPoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d59ac777-8bb7-4634-a566-2d812970f5f6")
    IVxTrackingPoint : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCharacter( 
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ USHORT *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPoint( 
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPosition( 
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPosition_2( 
            /* [in] */ IVxTextVersion *pVersion,
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextBuffer( 
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTrackingFidelity( 
            /* [retval][out] */ VxTrackingFidelityMode *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTrackingMode( 
            /* [retval][out] */ VxPointTrackingMode *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTrackingPointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTrackingPoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTrackingPoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTrackingPoint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCharacter )( 
            IVxTrackingPoint * This,
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ USHORT *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetPoint )( 
            IVxTrackingPoint * This,
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            IVxTrackingPoint * This,
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition_2 )( 
            IVxTrackingPoint * This,
            /* [in] */ IVxTextVersion *pVersion,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextBuffer )( 
            IVxTrackingPoint * This,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrackingFidelity )( 
            IVxTrackingPoint * This,
            /* [retval][out] */ VxTrackingFidelityMode *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrackingMode )( 
            IVxTrackingPoint * This,
            /* [retval][out] */ VxPointTrackingMode *pRetVal);
        
        END_INTERFACE
    } IVxTrackingPointVtbl;

    interface IVxTrackingPoint
    {
        CONST_VTBL struct IVxTrackingPointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTrackingPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTrackingPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTrackingPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTrackingPoint_GetCharacter(This,pSnapshot,pRetVal)	\
    ( (This)->lpVtbl -> GetCharacter(This,pSnapshot,pRetVal) ) 

#define IVxTrackingPoint_GetPoint(This,pSnapshot,pRetVal)	\
    ( (This)->lpVtbl -> GetPoint(This,pSnapshot,pRetVal) ) 

#define IVxTrackingPoint_GetPosition(This,pSnapshot,pRetVal)	\
    ( (This)->lpVtbl -> GetPosition(This,pSnapshot,pRetVal) ) 

#define IVxTrackingPoint_GetPosition_2(This,pVersion,pRetVal)	\
    ( (This)->lpVtbl -> GetPosition_2(This,pVersion,pRetVal) ) 

#define IVxTrackingPoint_GetTextBuffer(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetTextBuffer(This,ppRetVal) ) 

#define IVxTrackingPoint_GetTrackingFidelity(This,pRetVal)	\
    ( (This)->lpVtbl -> GetTrackingFidelity(This,pRetVal) ) 

#define IVxTrackingPoint_GetTrackingMode(This,pRetVal)	\
    ( (This)->lpVtbl -> GetTrackingMode(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTrackingPoint_INTERFACE_DEFINED__ */


#ifndef __IVxTrackingSpan_INTERFACE_DEFINED__
#define __IVxTrackingSpan_INTERFACE_DEFINED__

/* interface IVxTrackingSpan */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTrackingSpan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1ed17a9a-cc3f-4c10-aefb-92a19fee5abc")
    IVxTrackingSpan : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEndPoint( 
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpan( 
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ VxSnapshotSpan *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpan_2( 
            /* [in] */ IVxTextVersion *pVersion,
            /* [retval][out] */ VxSpan *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStartPoint( 
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetText( 
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextBuffer( 
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTrackingFidelity( 
            /* [retval][out] */ VxTrackingFidelityMode *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTrackingMode( 
            /* [retval][out] */ VxSpanTrackingMode *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTrackingSpanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTrackingSpan * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTrackingSpan * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTrackingSpan * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEndPoint )( 
            IVxTrackingSpan * This,
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpan )( 
            IVxTrackingSpan * This,
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ VxSnapshotSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpan_2 )( 
            IVxTrackingSpan * This,
            /* [in] */ IVxTextVersion *pVersion,
            /* [retval][out] */ VxSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetStartPoint )( 
            IVxTrackingSpan * This,
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            IVxTrackingSpan * This,
            /* [in] */ IVxTextSnapshot *pSnapshot,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextBuffer )( 
            IVxTrackingSpan * This,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrackingFidelity )( 
            IVxTrackingSpan * This,
            /* [retval][out] */ VxTrackingFidelityMode *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrackingMode )( 
            IVxTrackingSpan * This,
            /* [retval][out] */ VxSpanTrackingMode *pRetVal);
        
        END_INTERFACE
    } IVxTrackingSpanVtbl;

    interface IVxTrackingSpan
    {
        CONST_VTBL struct IVxTrackingSpanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTrackingSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTrackingSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTrackingSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTrackingSpan_GetEndPoint(This,pSnapshot,pRetVal)	\
    ( (This)->lpVtbl -> GetEndPoint(This,pSnapshot,pRetVal) ) 

#define IVxTrackingSpan_GetSpan(This,pSnapshot,pRetVal)	\
    ( (This)->lpVtbl -> GetSpan(This,pSnapshot,pRetVal) ) 

#define IVxTrackingSpan_GetSpan_2(This,pVersion,pRetVal)	\
    ( (This)->lpVtbl -> GetSpan_2(This,pVersion,pRetVal) ) 

#define IVxTrackingSpan_GetStartPoint(This,pSnapshot,pRetVal)	\
    ( (This)->lpVtbl -> GetStartPoint(This,pSnapshot,pRetVal) ) 

#define IVxTrackingSpan_GetText(This,pSnapshot,pRetVal)	\
    ( (This)->lpVtbl -> GetText(This,pSnapshot,pRetVal) ) 

#define IVxTrackingSpan_GetTextBuffer(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetTextBuffer(This,ppRetVal) ) 

#define IVxTrackingSpan_GetTrackingFidelity(This,pRetVal)	\
    ( (This)->lpVtbl -> GetTrackingFidelity(This,pRetVal) ) 

#define IVxTrackingSpan_GetTrackingMode(This,pRetVal)	\
    ( (This)->lpVtbl -> GetTrackingMode(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTrackingSpan_INTERFACE_DEFINED__ */


#ifndef __IVxNormalizedSnapshotSpanCollection_INTERFACE_DEFINED__
#define __IVxNormalizedSnapshotSpanCollection_INTERFACE_DEFINED__

/* interface IVxNormalizedSnapshotSpanCollection */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxNormalizedSnapshotSpanCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("df81e2df-b253-4859-9429-bb9712cf7f2b")
    IVxNormalizedSnapshotSpanCollection : public IListVxSnapshotSpan
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CloneAndTrackTo( 
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [in] */ VxSpanTrackingMode mode,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IntersectsWith( 
            /* [in] */ IVxNormalizedSnapshotSpanCollection *pSet,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IntersectsWith_2( 
            /* [in] */ VxSnapshotSpan span,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OverlapsWith( 
            /* [in] */ IVxNormalizedSnapshotSpanCollection *pSet,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OverlapsWith_2( 
            /* [in] */ VxSnapshotSpan span,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxNormalizedSnapshotSpanCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxNormalizedSnapshotSpanCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxNormalizedSnapshotSpanCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxNormalizedSnapshotSpanCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IVxNormalizedSnapshotSpanCollection * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IVxNormalizedSnapshotSpanCollection * This,
            /* [in] */ int index,
            /* [retval][out] */ VxSnapshotSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IVxNormalizedSnapshotSpanCollection * This,
            /* [retval][out] */ IEnumeratorVxSnapshotSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CloneAndTrackTo )( 
            IVxNormalizedSnapshotSpanCollection * This,
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [in] */ VxSpanTrackingMode mode,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IntersectsWith )( 
            IVxNormalizedSnapshotSpanCollection * This,
            /* [in] */ IVxNormalizedSnapshotSpanCollection *pSet,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IntersectsWith_2 )( 
            IVxNormalizedSnapshotSpanCollection * This,
            /* [in] */ VxSnapshotSpan span,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *OverlapsWith )( 
            IVxNormalizedSnapshotSpanCollection * This,
            /* [in] */ IVxNormalizedSnapshotSpanCollection *pSet,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *OverlapsWith_2 )( 
            IVxNormalizedSnapshotSpanCollection * This,
            /* [in] */ VxSnapshotSpan span,
            /* [retval][out] */ BOOL *pRetVal);
        
        END_INTERFACE
    } IVxNormalizedSnapshotSpanCollectionVtbl;

    interface IVxNormalizedSnapshotSpanCollection
    {
        CONST_VTBL struct IVxNormalizedSnapshotSpanCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxNormalizedSnapshotSpanCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxNormalizedSnapshotSpanCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxNormalizedSnapshotSpanCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxNormalizedSnapshotSpanCollection_GetCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCount(This,pRetVal) ) 

#define IVxNormalizedSnapshotSpanCollection_GetElement(This,index,pRetVal)	\
    ( (This)->lpVtbl -> GetElement(This,index,pRetVal) ) 

#define IVxNormalizedSnapshotSpanCollection_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 


#define IVxNormalizedSnapshotSpanCollection_CloneAndTrackTo(This,pTargetSnapshot,mode,ppRetVal)	\
    ( (This)->lpVtbl -> CloneAndTrackTo(This,pTargetSnapshot,mode,ppRetVal) ) 

#define IVxNormalizedSnapshotSpanCollection_IntersectsWith(This,pSet,pRetVal)	\
    ( (This)->lpVtbl -> IntersectsWith(This,pSet,pRetVal) ) 

#define IVxNormalizedSnapshotSpanCollection_IntersectsWith_2(This,span,pRetVal)	\
    ( (This)->lpVtbl -> IntersectsWith_2(This,span,pRetVal) ) 

#define IVxNormalizedSnapshotSpanCollection_OverlapsWith(This,pSet,pRetVal)	\
    ( (This)->lpVtbl -> OverlapsWith(This,pSet,pRetVal) ) 

#define IVxNormalizedSnapshotSpanCollection_OverlapsWith_2(This,span,pRetVal)	\
    ( (This)->lpVtbl -> OverlapsWith_2(This,span,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxNormalizedSnapshotSpanCollection_INTERFACE_DEFINED__ */


#ifndef __IVxNormalizedSpanCollection_INTERFACE_DEFINED__
#define __IVxNormalizedSpanCollection_INTERFACE_DEFINED__

/* interface IVxNormalizedSpanCollection */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxNormalizedSpanCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f12c3b51-b3c2-42ea-86b0-6185c6f712a8")
    IVxNormalizedSpanCollection : public IListVxSpan
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Equals( 
            /* [in] */ IUnknown *pObj,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHashCode( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IntersectsWith( 
            /* [in] */ IVxNormalizedSpanCollection *pSet,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IntersectsWith_2( 
            /* [in] */ VxSpan span,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OverlapsWith( 
            /* [in] */ IVxNormalizedSpanCollection *pSet,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OverlapsWith_2( 
            /* [in] */ VxSpan span,
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ToString( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxNormalizedSpanCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxNormalizedSpanCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxNormalizedSpanCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxNormalizedSpanCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IVxNormalizedSpanCollection * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IVxNormalizedSpanCollection * This,
            /* [in] */ int index,
            /* [retval][out] */ VxSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IVxNormalizedSpanCollection * This,
            /* [retval][out] */ IEnumeratorVxSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Equals )( 
            IVxNormalizedSpanCollection * This,
            /* [in] */ IUnknown *pObj,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetHashCode )( 
            IVxNormalizedSpanCollection * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IntersectsWith )( 
            IVxNormalizedSpanCollection * This,
            /* [in] */ IVxNormalizedSpanCollection *pSet,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IntersectsWith_2 )( 
            IVxNormalizedSpanCollection * This,
            /* [in] */ VxSpan span,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *OverlapsWith )( 
            IVxNormalizedSpanCollection * This,
            /* [in] */ IVxNormalizedSpanCollection *pSet,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *OverlapsWith_2 )( 
            IVxNormalizedSpanCollection * This,
            /* [in] */ VxSpan span,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *ToString )( 
            IVxNormalizedSpanCollection * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        END_INTERFACE
    } IVxNormalizedSpanCollectionVtbl;

    interface IVxNormalizedSpanCollection
    {
        CONST_VTBL struct IVxNormalizedSpanCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxNormalizedSpanCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxNormalizedSpanCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxNormalizedSpanCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxNormalizedSpanCollection_GetCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCount(This,pRetVal) ) 

#define IVxNormalizedSpanCollection_GetElement(This,index,pRetVal)	\
    ( (This)->lpVtbl -> GetElement(This,index,pRetVal) ) 

#define IVxNormalizedSpanCollection_GetEnumerator(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppRetVal) ) 


#define IVxNormalizedSpanCollection_Equals(This,pObj,pRetVal)	\
    ( (This)->lpVtbl -> Equals(This,pObj,pRetVal) ) 

#define IVxNormalizedSpanCollection_GetHashCode(This,pRetVal)	\
    ( (This)->lpVtbl -> GetHashCode(This,pRetVal) ) 

#define IVxNormalizedSpanCollection_IntersectsWith(This,pSet,pRetVal)	\
    ( (This)->lpVtbl -> IntersectsWith(This,pSet,pRetVal) ) 

#define IVxNormalizedSpanCollection_IntersectsWith_2(This,span,pRetVal)	\
    ( (This)->lpVtbl -> IntersectsWith_2(This,span,pRetVal) ) 

#define IVxNormalizedSpanCollection_OverlapsWith(This,pSet,pRetVal)	\
    ( (This)->lpVtbl -> OverlapsWith(This,pSet,pRetVal) ) 

#define IVxNormalizedSpanCollection_OverlapsWith_2(This,span,pRetVal)	\
    ( (This)->lpVtbl -> OverlapsWith_2(This,span,pRetVal) ) 

#define IVxNormalizedSpanCollection_ToString(This,pRetVal)	\
    ( (This)->lpVtbl -> ToString(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxNormalizedSpanCollection_INTERFACE_DEFINED__ */


#ifndef __IVxSnapshotSpanEventArgs_INTERFACE_DEFINED__
#define __IVxSnapshotSpanEventArgs_INTERFACE_DEFINED__

/* interface IVxSnapshotSpanEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxSnapshotSpanEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("521a6cf3-58c3-4f05-be86-64871c7e7787")
    IVxSnapshotSpanEventArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSpan( 
            /* [retval][out] */ VxSnapshotSpan *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxSnapshotSpanEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxSnapshotSpanEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxSnapshotSpanEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxSnapshotSpanEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpan )( 
            IVxSnapshotSpanEventArgs * This,
            /* [retval][out] */ VxSnapshotSpan *pRetVal);
        
        END_INTERFACE
    } IVxSnapshotSpanEventArgsVtbl;

    interface IVxSnapshotSpanEventArgs
    {
        CONST_VTBL struct IVxSnapshotSpanEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxSnapshotSpanEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxSnapshotSpanEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxSnapshotSpanEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxSnapshotSpanEventArgs_GetSpan(This,pRetVal)	\
    ( (This)->lpVtbl -> GetSpan(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxSnapshotSpanEventArgs_INTERFACE_DEFINED__ */


#ifndef __IVxTextBufferCreatedEventArgs_INTERFACE_DEFINED__
#define __IVxTextBufferCreatedEventArgs_INTERFACE_DEFINED__

/* interface IVxTextBufferCreatedEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextBufferCreatedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("318855de-0da5-4d1d-9cce-481d99b75f16")
    IVxTextBufferCreatedEventArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTextBuffer( 
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextBufferCreatedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextBufferCreatedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextBufferCreatedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextBufferCreatedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextBuffer )( 
            IVxTextBufferCreatedEventArgs * This,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        END_INTERFACE
    } IVxTextBufferCreatedEventArgsVtbl;

    interface IVxTextBufferCreatedEventArgs
    {
        CONST_VTBL struct IVxTextBufferCreatedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextBufferCreatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextBufferCreatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextBufferCreatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextBufferCreatedEventArgs_GetTextBuffer(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetTextBuffer(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextBufferCreatedEventArgs_INTERFACE_DEFINED__ */


#ifndef __IVxTextContentChangedEventArgs_INTERFACE_DEFINED__
#define __IVxTextContentChangedEventArgs_INTERFACE_DEFINED__

/* interface IVxTextContentChangedEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextContentChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0fe2e653-3d0b-43db-b76f-12c5e04db756")
    IVxTextContentChangedEventArgs : public IVxTextSnapshotChangedEventArgs
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetChanges( 
            /* [retval][out] */ IVxNormalizedTextChangeCollection **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOptions( 
            /* [retval][out] */ VxEditOptions *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextContentChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextContentChangedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextContentChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextContentChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfter )( 
            IVxTextContentChangedEventArgs * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfterVersion )( 
            IVxTextContentChangedEventArgs * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBefore )( 
            IVxTextContentChangedEventArgs * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBeforeVersion )( 
            IVxTextContentChangedEventArgs * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEditTag )( 
            IVxTextContentChangedEventArgs * This,
            /* [retval][out] */ IUnknown **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetChanges )( 
            IVxTextContentChangedEventArgs * This,
            /* [retval][out] */ IVxNormalizedTextChangeCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            IVxTextContentChangedEventArgs * This,
            /* [retval][out] */ VxEditOptions *pRetVal);
        
        END_INTERFACE
    } IVxTextContentChangedEventArgsVtbl;

    interface IVxTextContentChangedEventArgs
    {
        CONST_VTBL struct IVxTextContentChangedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextContentChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextContentChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextContentChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextContentChangedEventArgs_GetAfter(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfter(This,ppRetVal) ) 

#define IVxTextContentChangedEventArgs_GetAfterVersion(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfterVersion(This,ppRetVal) ) 

#define IVxTextContentChangedEventArgs_GetBefore(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBefore(This,ppRetVal) ) 

#define IVxTextContentChangedEventArgs_GetBeforeVersion(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBeforeVersion(This,ppRetVal) ) 

#define IVxTextContentChangedEventArgs_GetEditTag(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEditTag(This,ppRetVal) ) 


#define IVxTextContentChangedEventArgs_GetChanges(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetChanges(This,ppRetVal) ) 

#define IVxTextContentChangedEventArgs_GetOptions(This,pRetVal)	\
    ( (This)->lpVtbl -> GetOptions(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextContentChangedEventArgs_INTERFACE_DEFINED__ */


#ifndef __IVxTextContentChangingEventArgs_INTERFACE_DEFINED__
#define __IVxTextContentChangingEventArgs_INTERFACE_DEFINED__

/* interface IVxTextContentChangingEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextContentChangingEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f26e15b3-89f8-4d5e-9bff-3d95c0101499")
    IVxTextContentChangingEventArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBefore( 
            /* [retval][out] */ IVxTextSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBeforeVersion( 
            /* [retval][out] */ IVxTextVersion **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanceled( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEditTag( 
            /* [retval][out] */ IUnknown **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextContentChangingEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextContentChangingEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextContentChangingEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextContentChangingEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IVxTextContentChangingEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBefore )( 
            IVxTextContentChangingEventArgs * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBeforeVersion )( 
            IVxTextContentChangingEventArgs * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanceled )( 
            IVxTextContentChangingEventArgs * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEditTag )( 
            IVxTextContentChangingEventArgs * This,
            /* [retval][out] */ IUnknown **ppRetVal);
        
        END_INTERFACE
    } IVxTextContentChangingEventArgsVtbl;

    interface IVxTextContentChangingEventArgs
    {
        CONST_VTBL struct IVxTextContentChangingEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextContentChangingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextContentChangingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextContentChangingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextContentChangingEventArgs_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IVxTextContentChangingEventArgs_GetBefore(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBefore(This,ppRetVal) ) 

#define IVxTextContentChangingEventArgs_GetBeforeVersion(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBeforeVersion(This,ppRetVal) ) 

#define IVxTextContentChangingEventArgs_GetCanceled(This,pRetVal)	\
    ( (This)->lpVtbl -> GetCanceled(This,pRetVal) ) 

#define IVxTextContentChangingEventArgs_GetEditTag(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEditTag(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextContentChangingEventArgs_INTERFACE_DEFINED__ */


#ifndef __IVxGraphBufferContentTypeChangedEventArgs_INTERFACE_DEFINED__
#define __IVxGraphBufferContentTypeChangedEventArgs_INTERFACE_DEFINED__

/* interface IVxGraphBufferContentTypeChangedEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxGraphBufferContentTypeChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("020c7be6-00fe-43e1-ba03-e62fb81eb8f9")
    IVxGraphBufferContentTypeChangedEventArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAfterContentType( 
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBeforeContentType( 
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextBuffer( 
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxGraphBufferContentTypeChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxGraphBufferContentTypeChangedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxGraphBufferContentTypeChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxGraphBufferContentTypeChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfterContentType )( 
            IVxGraphBufferContentTypeChangedEventArgs * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBeforeContentType )( 
            IVxGraphBufferContentTypeChangedEventArgs * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextBuffer )( 
            IVxGraphBufferContentTypeChangedEventArgs * This,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        END_INTERFACE
    } IVxGraphBufferContentTypeChangedEventArgsVtbl;

    interface IVxGraphBufferContentTypeChangedEventArgs
    {
        CONST_VTBL struct IVxGraphBufferContentTypeChangedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxGraphBufferContentTypeChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxGraphBufferContentTypeChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxGraphBufferContentTypeChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxGraphBufferContentTypeChangedEventArgs_GetAfterContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfterContentType(This,ppRetVal) ) 

#define IVxGraphBufferContentTypeChangedEventArgs_GetBeforeContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBeforeContentType(This,ppRetVal) ) 

#define IVxGraphBufferContentTypeChangedEventArgs_GetTextBuffer(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetTextBuffer(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxGraphBufferContentTypeChangedEventArgs_INTERFACE_DEFINED__ */


#ifndef __IVxGraphBuffersChangedEventArgs_INTERFACE_DEFINED__
#define __IVxGraphBuffersChangedEventArgs_INTERFACE_DEFINED__

/* interface IVxGraphBuffersChangedEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxGraphBuffersChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("395bd869-ffa5-4eea-97bf-8ce42a7b3fcd")
    IVxGraphBuffersChangedEventArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAddedBuffers( 
            /* [retval][out] */ IListIVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRemovedBuffers( 
            /* [retval][out] */ IListIVxTextBuffer **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxGraphBuffersChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxGraphBuffersChangedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxGraphBuffersChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxGraphBuffersChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAddedBuffers )( 
            IVxGraphBuffersChangedEventArgs * This,
            /* [retval][out] */ IListIVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetRemovedBuffers )( 
            IVxGraphBuffersChangedEventArgs * This,
            /* [retval][out] */ IListIVxTextBuffer **ppRetVal);
        
        END_INTERFACE
    } IVxGraphBuffersChangedEventArgsVtbl;

    interface IVxGraphBuffersChangedEventArgs
    {
        CONST_VTBL struct IVxGraphBuffersChangedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxGraphBuffersChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxGraphBuffersChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxGraphBuffersChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxGraphBuffersChangedEventArgs_GetAddedBuffers(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAddedBuffers(This,ppRetVal) ) 

#define IVxGraphBuffersChangedEventArgs_GetRemovedBuffers(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetRemovedBuffers(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxGraphBuffersChangedEventArgs_INTERFACE_DEFINED__ */


#ifndef __IVxBufferGraph_INTERFACE_DEFINED__
#define __IVxBufferGraph_INTERFACE_DEFINED__

/* interface IVxBufferGraph */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxBufferGraph;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("125ae4f6-7cca-4756-a175-a2ca5e7f60da")
    IVxBufferGraph : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseGraphBufferContentTypeChanged( 
            /* [in] */ IVxGraphBufferContentTypeChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseGraphBuffersChanged( 
            /* [in] */ IVxGraphBuffersChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateMappingPoint( 
            /* [in] */ VxSnapshotPoint point,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [retval][out] */ IVxMappingPoint **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateMappingSpan( 
            /* [in] */ VxSnapshotSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [retval][out] */ IVxMappingSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTopBuffer( 
            /* [retval][out] */ IVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapDownToBuffer_2( 
            /* [in] */ VxSnapshotSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ IVxTextBuffer *pTargetBuffer,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapDownToBuffer( 
            /* [in] */ VxSnapshotPoint position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [in] */ IVxTextBuffer *pTargetBuffer,
            /* [in] */ VxPositionAffinity affinity,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapDownToSnapshot_2( 
            /* [in] */ VxSnapshotSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapDownToSnapshot( 
            /* [in] */ VxSnapshotPoint position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [in] */ VxPositionAffinity affinity,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapUpToBuffer_2( 
            /* [in] */ VxSnapshotSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ IVxTextBuffer *pTargetBuffer,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapUpToBuffer( 
            /* [in] */ VxSnapshotPoint point,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [in] */ VxPositionAffinity affinity,
            /* [in] */ IVxTextBuffer *pTargetBuffer,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapUpToSnapshot_2( 
            /* [in] */ VxSnapshotSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapUpToSnapshot( 
            /* [in] */ VxSnapshotPoint point,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [in] */ VxPositionAffinity affinity,
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseGraphBufferContentTypeChanged( 
            /* [in] */ IVxGraphBufferContentTypeChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseGraphBuffersChanged( 
            /* [in] */ IVxGraphBuffersChangedEvent *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxBufferGraphVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxBufferGraph * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxBufferGraph * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxBufferGraph * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseGraphBufferContentTypeChanged )( 
            IVxBufferGraph * This,
            /* [in] */ IVxGraphBufferContentTypeChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseGraphBuffersChanged )( 
            IVxBufferGraph * This,
            /* [in] */ IVxGraphBuffersChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateMappingPoint )( 
            IVxBufferGraph * This,
            /* [in] */ VxSnapshotPoint point,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [retval][out] */ IVxMappingPoint **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateMappingSpan )( 
            IVxBufferGraph * This,
            /* [in] */ VxSnapshotSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [retval][out] */ IVxMappingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTopBuffer )( 
            IVxBufferGraph * This,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapDownToBuffer_2 )( 
            IVxBufferGraph * This,
            /* [in] */ VxSnapshotSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ IVxTextBuffer *pTargetBuffer,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapDownToBuffer )( 
            IVxBufferGraph * This,
            /* [in] */ VxSnapshotPoint position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [in] */ IVxTextBuffer *pTargetBuffer,
            /* [in] */ VxPositionAffinity affinity,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapDownToSnapshot_2 )( 
            IVxBufferGraph * This,
            /* [in] */ VxSnapshotSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapDownToSnapshot )( 
            IVxBufferGraph * This,
            /* [in] */ VxSnapshotPoint position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [in] */ VxPositionAffinity affinity,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapUpToBuffer_2 )( 
            IVxBufferGraph * This,
            /* [in] */ VxSnapshotSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ IVxTextBuffer *pTargetBuffer,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapUpToBuffer )( 
            IVxBufferGraph * This,
            /* [in] */ VxSnapshotPoint point,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [in] */ VxPositionAffinity affinity,
            /* [in] */ IVxTextBuffer *pTargetBuffer,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapUpToSnapshot_2 )( 
            IVxBufferGraph * This,
            /* [in] */ VxSnapshotSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [retval][out] */ IVxNormalizedSnapshotSpanCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapUpToSnapshot )( 
            IVxBufferGraph * This,
            /* [in] */ VxSnapshotPoint point,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [in] */ VxPositionAffinity affinity,
            /* [in] */ IVxTextSnapshot *pTargetSnapshot,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseGraphBufferContentTypeChanged )( 
            IVxBufferGraph * This,
            /* [in] */ IVxGraphBufferContentTypeChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseGraphBuffersChanged )( 
            IVxBufferGraph * This,
            /* [in] */ IVxGraphBuffersChangedEvent *pValue);
        
        END_INTERFACE
    } IVxBufferGraphVtbl;

    interface IVxBufferGraph
    {
        CONST_VTBL struct IVxBufferGraphVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxBufferGraph_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxBufferGraph_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxBufferGraph_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxBufferGraph_AdviseGraphBufferContentTypeChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseGraphBufferContentTypeChanged(This,pValue) ) 

#define IVxBufferGraph_AdviseGraphBuffersChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseGraphBuffersChanged(This,pValue) ) 

#define IVxBufferGraph_CreateMappingPoint(This,point,trackingMode,ppRetVal)	\
    ( (This)->lpVtbl -> CreateMappingPoint(This,point,trackingMode,ppRetVal) ) 

#define IVxBufferGraph_CreateMappingSpan(This,span,trackingMode,ppRetVal)	\
    ( (This)->lpVtbl -> CreateMappingSpan(This,span,trackingMode,ppRetVal) ) 

#define IVxBufferGraph_GetTopBuffer(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetTopBuffer(This,ppRetVal) ) 

#define IVxBufferGraph_MapDownToBuffer_2(This,span,trackingMode,pTargetBuffer,ppRetVal)	\
    ( (This)->lpVtbl -> MapDownToBuffer_2(This,span,trackingMode,pTargetBuffer,ppRetVal) ) 

#define IVxBufferGraph_MapDownToBuffer(This,position,trackingMode,pTargetBuffer,affinity,pRetValHasValue,pRetVal)	\
    ( (This)->lpVtbl -> MapDownToBuffer(This,position,trackingMode,pTargetBuffer,affinity,pRetValHasValue,pRetVal) ) 

#define IVxBufferGraph_MapDownToSnapshot_2(This,span,trackingMode,pTargetSnapshot,ppRetVal)	\
    ( (This)->lpVtbl -> MapDownToSnapshot_2(This,span,trackingMode,pTargetSnapshot,ppRetVal) ) 

#define IVxBufferGraph_MapDownToSnapshot(This,position,trackingMode,pTargetSnapshot,affinity,pRetValHasValue,pRetVal)	\
    ( (This)->lpVtbl -> MapDownToSnapshot(This,position,trackingMode,pTargetSnapshot,affinity,pRetValHasValue,pRetVal) ) 

#define IVxBufferGraph_MapUpToBuffer_2(This,span,trackingMode,pTargetBuffer,ppRetVal)	\
    ( (This)->lpVtbl -> MapUpToBuffer_2(This,span,trackingMode,pTargetBuffer,ppRetVal) ) 

#define IVxBufferGraph_MapUpToBuffer(This,point,trackingMode,affinity,pTargetBuffer,pRetValHasValue,pRetVal)	\
    ( (This)->lpVtbl -> MapUpToBuffer(This,point,trackingMode,affinity,pTargetBuffer,pRetValHasValue,pRetVal) ) 

#define IVxBufferGraph_MapUpToSnapshot_2(This,span,trackingMode,pTargetSnapshot,ppRetVal)	\
    ( (This)->lpVtbl -> MapUpToSnapshot_2(This,span,trackingMode,pTargetSnapshot,ppRetVal) ) 

#define IVxBufferGraph_MapUpToSnapshot(This,point,trackingMode,affinity,pTargetSnapshot,pRetValHasValue,pRetVal)	\
    ( (This)->lpVtbl -> MapUpToSnapshot(This,point,trackingMode,affinity,pTargetSnapshot,pRetValHasValue,pRetVal) ) 

#define IVxBufferGraph_UnadviseGraphBufferContentTypeChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseGraphBufferContentTypeChanged(This,pValue) ) 

#define IVxBufferGraph_UnadviseGraphBuffersChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseGraphBuffersChanged(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxBufferGraph_INTERFACE_DEFINED__ */


#ifndef __IVxProjectionBufferBase_INTERFACE_DEFINED__
#define __IVxProjectionBufferBase_INTERFACE_DEFINED__

/* interface IVxProjectionBufferBase */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxProjectionBufferBase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("dc35621d-2318-46d3-88cd-ca026f95b9c1")
    IVxProjectionBufferBase : public IVxTextBuffer
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Delete_2( 
            /* [in] */ VxSpan deleteSpan,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentSnapshot_2( 
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSourceBuffers( 
            /* [retval][out] */ IListIVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Insert_2( 
            /* [in] */ int position,
            /* [in] */ BSTR text,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Replace_2( 
            /* [in] */ VxSpan replaceSpan,
            /* [in] */ BSTR replaceWith,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxProjectionBufferBaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxProjectionBufferBase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxProjectionBufferBase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxProjectionBufferBase * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVxProjectionBufferBase * This,
            /* [retval][out] */ IVxPropertyCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseChanged )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseChangedHighPriority )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseChangedLowPriority )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseChanging )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxTextContentChangingEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseContentTypeChanged )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxContentTypeChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdvisePostChanged )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxEventArgsEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseReadOnlyRegionsChanged )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxSnapshotSpanEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *ChangeContentType )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxContentType *pNewContentType,
            /* [in] */ IUnknown *pEditTag);
        
        HRESULT ( STDMETHODCALLTYPE *CheckEditAccess )( 
            IVxProjectionBufferBase * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEdit_2 )( 
            IVxProjectionBufferBase * This,
            /* [retval][out] */ IVxTextEdit **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEdit )( 
            IVxProjectionBufferBase * This,
            /* [in] */ VxEditOptions options,
            /* [in] */ BOOL reiteratedVersionNumberHasValue,
            /* [in] */ int reiteratedVersionNumber,
            /* [in] */ IUnknown *pEditTag,
            /* [retval][out] */ IVxTextEdit **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateReadOnlyRegionEdit )( 
            IVxProjectionBufferBase * This,
            /* [retval][out] */ IVxReadOnlyRegionEdit **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IVxProjectionBufferBase * This,
            /* [in] */ VxSpan deleteSpan,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetContentType )( 
            IVxProjectionBufferBase * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSnapshot )( 
            IVxProjectionBufferBase * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEditInProgress )( 
            IVxProjectionBufferBase * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetReadOnlyExtents )( 
            IVxProjectionBufferBase * This,
            /* [in] */ VxSpan span,
            /* [retval][out] */ IVxNormalizedSpanCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IVxProjectionBufferBase * This,
            /* [in] */ int position,
            /* [in] */ BSTR text,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsReadOnly_3 )( 
            IVxProjectionBufferBase * This,
            /* [in] */ int position,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsReadOnly )( 
            IVxProjectionBufferBase * This,
            /* [in] */ VxSpan span,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsReadOnly_4 )( 
            IVxProjectionBufferBase * This,
            /* [in] */ int position,
            /* [in] */ BOOL isEdit,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsReadOnly_2 )( 
            IVxProjectionBufferBase * This,
            /* [in] */ VxSpan span,
            /* [in] */ BOOL isEdit,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Replace )( 
            IVxProjectionBufferBase * This,
            /* [in] */ VxSpan replaceSpan,
            /* [in] */ BSTR replaceWith,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *TakeThreadOwnership )( 
            IVxProjectionBufferBase * This);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseChanged )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseChangedHighPriority )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseChangedLowPriority )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseChanging )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxTextContentChangingEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseContentTypeChanged )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxContentTypeChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadvisePostChanged )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxEventArgsEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseReadOnlyRegionsChanged )( 
            IVxProjectionBufferBase * This,
            /* [in] */ IVxSnapshotSpanEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *Delete_2 )( 
            IVxProjectionBufferBase * This,
            /* [in] */ VxSpan deleteSpan,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSnapshot_2 )( 
            IVxProjectionBufferBase * This,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSourceBuffers )( 
            IVxProjectionBufferBase * This,
            /* [retval][out] */ IListIVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Insert_2 )( 
            IVxProjectionBufferBase * This,
            /* [in] */ int position,
            /* [in] */ BSTR text,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Replace_2 )( 
            IVxProjectionBufferBase * This,
            /* [in] */ VxSpan replaceSpan,
            /* [in] */ BSTR replaceWith,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        END_INTERFACE
    } IVxProjectionBufferBaseVtbl;

    interface IVxProjectionBufferBase
    {
        CONST_VTBL struct IVxProjectionBufferBaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxProjectionBufferBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxProjectionBufferBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxProjectionBufferBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxProjectionBufferBase_GetProperties(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetProperties(This,ppRetVal) ) 


#define IVxProjectionBufferBase_AdviseChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseChanged(This,pValue) ) 

#define IVxProjectionBufferBase_AdviseChangedHighPriority(This,pValue)	\
    ( (This)->lpVtbl -> AdviseChangedHighPriority(This,pValue) ) 

#define IVxProjectionBufferBase_AdviseChangedLowPriority(This,pValue)	\
    ( (This)->lpVtbl -> AdviseChangedLowPriority(This,pValue) ) 

#define IVxProjectionBufferBase_AdviseChanging(This,pValue)	\
    ( (This)->lpVtbl -> AdviseChanging(This,pValue) ) 

#define IVxProjectionBufferBase_AdviseContentTypeChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseContentTypeChanged(This,pValue) ) 

#define IVxProjectionBufferBase_AdvisePostChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdvisePostChanged(This,pValue) ) 

#define IVxProjectionBufferBase_AdviseReadOnlyRegionsChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseReadOnlyRegionsChanged(This,pValue) ) 

#define IVxProjectionBufferBase_ChangeContentType(This,pNewContentType,pEditTag)	\
    ( (This)->lpVtbl -> ChangeContentType(This,pNewContentType,pEditTag) ) 

#define IVxProjectionBufferBase_CheckEditAccess(This,pRetVal)	\
    ( (This)->lpVtbl -> CheckEditAccess(This,pRetVal) ) 

#define IVxProjectionBufferBase_CreateEdit_2(This,ppRetVal)	\
    ( (This)->lpVtbl -> CreateEdit_2(This,ppRetVal) ) 

#define IVxProjectionBufferBase_CreateEdit(This,options,reiteratedVersionNumberHasValue,reiteratedVersionNumber,pEditTag,ppRetVal)	\
    ( (This)->lpVtbl -> CreateEdit(This,options,reiteratedVersionNumberHasValue,reiteratedVersionNumber,pEditTag,ppRetVal) ) 

#define IVxProjectionBufferBase_CreateReadOnlyRegionEdit(This,ppRetVal)	\
    ( (This)->lpVtbl -> CreateReadOnlyRegionEdit(This,ppRetVal) ) 

#define IVxProjectionBufferBase_Delete(This,deleteSpan,ppRetVal)	\
    ( (This)->lpVtbl -> Delete(This,deleteSpan,ppRetVal) ) 

#define IVxProjectionBufferBase_GetContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetContentType(This,ppRetVal) ) 

#define IVxProjectionBufferBase_GetCurrentSnapshot(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetCurrentSnapshot(This,ppRetVal) ) 

#define IVxProjectionBufferBase_GetEditInProgress(This,pRetVal)	\
    ( (This)->lpVtbl -> GetEditInProgress(This,pRetVal) ) 

#define IVxProjectionBufferBase_GetReadOnlyExtents(This,span,ppRetVal)	\
    ( (This)->lpVtbl -> GetReadOnlyExtents(This,span,ppRetVal) ) 

#define IVxProjectionBufferBase_Insert(This,position,text,ppRetVal)	\
    ( (This)->lpVtbl -> Insert(This,position,text,ppRetVal) ) 

#define IVxProjectionBufferBase_IsReadOnly_3(This,position,pRetVal)	\
    ( (This)->lpVtbl -> IsReadOnly_3(This,position,pRetVal) ) 

#define IVxProjectionBufferBase_IsReadOnly(This,span,pRetVal)	\
    ( (This)->lpVtbl -> IsReadOnly(This,span,pRetVal) ) 

#define IVxProjectionBufferBase_IsReadOnly_4(This,position,isEdit,pRetVal)	\
    ( (This)->lpVtbl -> IsReadOnly_4(This,position,isEdit,pRetVal) ) 

#define IVxProjectionBufferBase_IsReadOnly_2(This,span,isEdit,pRetVal)	\
    ( (This)->lpVtbl -> IsReadOnly_2(This,span,isEdit,pRetVal) ) 

#define IVxProjectionBufferBase_Replace(This,replaceSpan,replaceWith,ppRetVal)	\
    ( (This)->lpVtbl -> Replace(This,replaceSpan,replaceWith,ppRetVal) ) 

#define IVxProjectionBufferBase_TakeThreadOwnership(This)	\
    ( (This)->lpVtbl -> TakeThreadOwnership(This) ) 

#define IVxProjectionBufferBase_UnadviseChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseChanged(This,pValue) ) 

#define IVxProjectionBufferBase_UnadviseChangedHighPriority(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseChangedHighPriority(This,pValue) ) 

#define IVxProjectionBufferBase_UnadviseChangedLowPriority(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseChangedLowPriority(This,pValue) ) 

#define IVxProjectionBufferBase_UnadviseChanging(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseChanging(This,pValue) ) 

#define IVxProjectionBufferBase_UnadviseContentTypeChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseContentTypeChanged(This,pValue) ) 

#define IVxProjectionBufferBase_UnadvisePostChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadvisePostChanged(This,pValue) ) 

#define IVxProjectionBufferBase_UnadviseReadOnlyRegionsChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseReadOnlyRegionsChanged(This,pValue) ) 


#define IVxProjectionBufferBase_Delete_2(This,deleteSpan,ppRetVal)	\
    ( (This)->lpVtbl -> Delete_2(This,deleteSpan,ppRetVal) ) 

#define IVxProjectionBufferBase_GetCurrentSnapshot_2(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetCurrentSnapshot_2(This,ppRetVal) ) 

#define IVxProjectionBufferBase_GetSourceBuffers(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetSourceBuffers(This,ppRetVal) ) 

#define IVxProjectionBufferBase_Insert_2(This,position,text,ppRetVal)	\
    ( (This)->lpVtbl -> Insert_2(This,position,text,ppRetVal) ) 

#define IVxProjectionBufferBase_Replace_2(This,replaceSpan,replaceWith,ppRetVal)	\
    ( (This)->lpVtbl -> Replace_2(This,replaceSpan,replaceWith,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxProjectionBufferBase_INTERFACE_DEFINED__ */


#ifndef __IVxProjectionBuffer_INTERFACE_DEFINED__
#define __IVxProjectionBuffer_INTERFACE_DEFINED__

/* interface IVxProjectionBuffer */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxProjectionBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d8a38847-94af-4919-aa4e-be760e66905d")
    IVxProjectionBuffer : public IVxProjectionBufferBase
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseSourceBuffersChanged( 
            /* [in] */ IVxProjectionSourceBuffersChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseSourceSpansChanged( 
            /* [in] */ IVxProjectionSourceSpansChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteSpans( 
            /* [in] */ int position,
            /* [in] */ int spansToDelete,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertSpan_2( 
            /* [in] */ int position,
            /* [in] */ BSTR literalSpanToInsert,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertSpan( 
            /* [in] */ int position,
            /* [in] */ IVxTrackingSpan *pSpanToInsert,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertSpans( 
            /* [in] */ int position,
            /* [in] */ IListIUnknown *pSpansToInsert,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceSpans( 
            /* [in] */ int position,
            /* [in] */ int spansToReplace,
            /* [in] */ IListIUnknown *pSpansToInsert,
            /* [in] */ VxEditOptions options,
            /* [in] */ IUnknown *pEditTag,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseSourceBuffersChanged( 
            /* [in] */ IVxProjectionSourceBuffersChangedEvent *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseSourceSpansChanged( 
            /* [in] */ IVxProjectionSourceSpansChangedEvent *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxProjectionBufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxProjectionBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxProjectionBuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxProjectionBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IVxProjectionBuffer * This,
            /* [retval][out] */ IVxPropertyCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseChanged )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseChangedHighPriority )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseChangedLowPriority )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseChanging )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxTextContentChangingEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseContentTypeChanged )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxContentTypeChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdvisePostChanged )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxEventArgsEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseReadOnlyRegionsChanged )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxSnapshotSpanEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *ChangeContentType )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxContentType *pNewContentType,
            /* [in] */ IUnknown *pEditTag);
        
        HRESULT ( STDMETHODCALLTYPE *CheckEditAccess )( 
            IVxProjectionBuffer * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEdit_2 )( 
            IVxProjectionBuffer * This,
            /* [retval][out] */ IVxTextEdit **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEdit )( 
            IVxProjectionBuffer * This,
            /* [in] */ VxEditOptions options,
            /* [in] */ BOOL reiteratedVersionNumberHasValue,
            /* [in] */ int reiteratedVersionNumber,
            /* [in] */ IUnknown *pEditTag,
            /* [retval][out] */ IVxTextEdit **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateReadOnlyRegionEdit )( 
            IVxProjectionBuffer * This,
            /* [retval][out] */ IVxReadOnlyRegionEdit **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IVxProjectionBuffer * This,
            /* [in] */ VxSpan deleteSpan,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetContentType )( 
            IVxProjectionBuffer * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSnapshot )( 
            IVxProjectionBuffer * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEditInProgress )( 
            IVxProjectionBuffer * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetReadOnlyExtents )( 
            IVxProjectionBuffer * This,
            /* [in] */ VxSpan span,
            /* [retval][out] */ IVxNormalizedSpanCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IVxProjectionBuffer * This,
            /* [in] */ int position,
            /* [in] */ BSTR text,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsReadOnly_3 )( 
            IVxProjectionBuffer * This,
            /* [in] */ int position,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsReadOnly )( 
            IVxProjectionBuffer * This,
            /* [in] */ VxSpan span,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsReadOnly_4 )( 
            IVxProjectionBuffer * This,
            /* [in] */ int position,
            /* [in] */ BOOL isEdit,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsReadOnly_2 )( 
            IVxProjectionBuffer * This,
            /* [in] */ VxSpan span,
            /* [in] */ BOOL isEdit,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Replace )( 
            IVxProjectionBuffer * This,
            /* [in] */ VxSpan replaceSpan,
            /* [in] */ BSTR replaceWith,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *TakeThreadOwnership )( 
            IVxProjectionBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseChanged )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseChangedHighPriority )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseChangedLowPriority )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxTextContentChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseChanging )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxTextContentChangingEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseContentTypeChanged )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxContentTypeChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadvisePostChanged )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxEventArgsEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseReadOnlyRegionsChanged )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxSnapshotSpanEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *Delete_2 )( 
            IVxProjectionBuffer * This,
            /* [in] */ VxSpan deleteSpan,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSnapshot_2 )( 
            IVxProjectionBuffer * This,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSourceBuffers )( 
            IVxProjectionBuffer * This,
            /* [retval][out] */ IListIVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Insert_2 )( 
            IVxProjectionBuffer * This,
            /* [in] */ int position,
            /* [in] */ BSTR text,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Replace_2 )( 
            IVxProjectionBuffer * This,
            /* [in] */ VxSpan replaceSpan,
            /* [in] */ BSTR replaceWith,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseSourceBuffersChanged )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxProjectionSourceBuffersChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseSourceSpansChanged )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxProjectionSourceSpansChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteSpans )( 
            IVxProjectionBuffer * This,
            /* [in] */ int position,
            /* [in] */ int spansToDelete,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *InsertSpan_2 )( 
            IVxProjectionBuffer * This,
            /* [in] */ int position,
            /* [in] */ BSTR literalSpanToInsert,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *InsertSpan )( 
            IVxProjectionBuffer * This,
            /* [in] */ int position,
            /* [in] */ IVxTrackingSpan *pSpanToInsert,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *InsertSpans )( 
            IVxProjectionBuffer * This,
            /* [in] */ int position,
            /* [in] */ IListIUnknown *pSpansToInsert,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *ReplaceSpans )( 
            IVxProjectionBuffer * This,
            /* [in] */ int position,
            /* [in] */ int spansToReplace,
            /* [in] */ IListIUnknown *pSpansToInsert,
            /* [in] */ VxEditOptions options,
            /* [in] */ IUnknown *pEditTag,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseSourceBuffersChanged )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxProjectionSourceBuffersChangedEvent *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseSourceSpansChanged )( 
            IVxProjectionBuffer * This,
            /* [in] */ IVxProjectionSourceSpansChangedEvent *pValue);
        
        END_INTERFACE
    } IVxProjectionBufferVtbl;

    interface IVxProjectionBuffer
    {
        CONST_VTBL struct IVxProjectionBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxProjectionBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxProjectionBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxProjectionBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxProjectionBuffer_GetProperties(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetProperties(This,ppRetVal) ) 


#define IVxProjectionBuffer_AdviseChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseChanged(This,pValue) ) 

#define IVxProjectionBuffer_AdviseChangedHighPriority(This,pValue)	\
    ( (This)->lpVtbl -> AdviseChangedHighPriority(This,pValue) ) 

#define IVxProjectionBuffer_AdviseChangedLowPriority(This,pValue)	\
    ( (This)->lpVtbl -> AdviseChangedLowPriority(This,pValue) ) 

#define IVxProjectionBuffer_AdviseChanging(This,pValue)	\
    ( (This)->lpVtbl -> AdviseChanging(This,pValue) ) 

#define IVxProjectionBuffer_AdviseContentTypeChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseContentTypeChanged(This,pValue) ) 

#define IVxProjectionBuffer_AdvisePostChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdvisePostChanged(This,pValue) ) 

#define IVxProjectionBuffer_AdviseReadOnlyRegionsChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseReadOnlyRegionsChanged(This,pValue) ) 

#define IVxProjectionBuffer_ChangeContentType(This,pNewContentType,pEditTag)	\
    ( (This)->lpVtbl -> ChangeContentType(This,pNewContentType,pEditTag) ) 

#define IVxProjectionBuffer_CheckEditAccess(This,pRetVal)	\
    ( (This)->lpVtbl -> CheckEditAccess(This,pRetVal) ) 

#define IVxProjectionBuffer_CreateEdit_2(This,ppRetVal)	\
    ( (This)->lpVtbl -> CreateEdit_2(This,ppRetVal) ) 

#define IVxProjectionBuffer_CreateEdit(This,options,reiteratedVersionNumberHasValue,reiteratedVersionNumber,pEditTag,ppRetVal)	\
    ( (This)->lpVtbl -> CreateEdit(This,options,reiteratedVersionNumberHasValue,reiteratedVersionNumber,pEditTag,ppRetVal) ) 

#define IVxProjectionBuffer_CreateReadOnlyRegionEdit(This,ppRetVal)	\
    ( (This)->lpVtbl -> CreateReadOnlyRegionEdit(This,ppRetVal) ) 

#define IVxProjectionBuffer_Delete(This,deleteSpan,ppRetVal)	\
    ( (This)->lpVtbl -> Delete(This,deleteSpan,ppRetVal) ) 

#define IVxProjectionBuffer_GetContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetContentType(This,ppRetVal) ) 

#define IVxProjectionBuffer_GetCurrentSnapshot(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetCurrentSnapshot(This,ppRetVal) ) 

#define IVxProjectionBuffer_GetEditInProgress(This,pRetVal)	\
    ( (This)->lpVtbl -> GetEditInProgress(This,pRetVal) ) 

#define IVxProjectionBuffer_GetReadOnlyExtents(This,span,ppRetVal)	\
    ( (This)->lpVtbl -> GetReadOnlyExtents(This,span,ppRetVal) ) 

#define IVxProjectionBuffer_Insert(This,position,text,ppRetVal)	\
    ( (This)->lpVtbl -> Insert(This,position,text,ppRetVal) ) 

#define IVxProjectionBuffer_IsReadOnly_3(This,position,pRetVal)	\
    ( (This)->lpVtbl -> IsReadOnly_3(This,position,pRetVal) ) 

#define IVxProjectionBuffer_IsReadOnly(This,span,pRetVal)	\
    ( (This)->lpVtbl -> IsReadOnly(This,span,pRetVal) ) 

#define IVxProjectionBuffer_IsReadOnly_4(This,position,isEdit,pRetVal)	\
    ( (This)->lpVtbl -> IsReadOnly_4(This,position,isEdit,pRetVal) ) 

#define IVxProjectionBuffer_IsReadOnly_2(This,span,isEdit,pRetVal)	\
    ( (This)->lpVtbl -> IsReadOnly_2(This,span,isEdit,pRetVal) ) 

#define IVxProjectionBuffer_Replace(This,replaceSpan,replaceWith,ppRetVal)	\
    ( (This)->lpVtbl -> Replace(This,replaceSpan,replaceWith,ppRetVal) ) 

#define IVxProjectionBuffer_TakeThreadOwnership(This)	\
    ( (This)->lpVtbl -> TakeThreadOwnership(This) ) 

#define IVxProjectionBuffer_UnadviseChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseChanged(This,pValue) ) 

#define IVxProjectionBuffer_UnadviseChangedHighPriority(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseChangedHighPriority(This,pValue) ) 

#define IVxProjectionBuffer_UnadviseChangedLowPriority(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseChangedLowPriority(This,pValue) ) 

#define IVxProjectionBuffer_UnadviseChanging(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseChanging(This,pValue) ) 

#define IVxProjectionBuffer_UnadviseContentTypeChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseContentTypeChanged(This,pValue) ) 

#define IVxProjectionBuffer_UnadvisePostChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadvisePostChanged(This,pValue) ) 

#define IVxProjectionBuffer_UnadviseReadOnlyRegionsChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseReadOnlyRegionsChanged(This,pValue) ) 


#define IVxProjectionBuffer_Delete_2(This,deleteSpan,ppRetVal)	\
    ( (This)->lpVtbl -> Delete_2(This,deleteSpan,ppRetVal) ) 

#define IVxProjectionBuffer_GetCurrentSnapshot_2(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetCurrentSnapshot_2(This,ppRetVal) ) 

#define IVxProjectionBuffer_GetSourceBuffers(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetSourceBuffers(This,ppRetVal) ) 

#define IVxProjectionBuffer_Insert_2(This,position,text,ppRetVal)	\
    ( (This)->lpVtbl -> Insert_2(This,position,text,ppRetVal) ) 

#define IVxProjectionBuffer_Replace_2(This,replaceSpan,replaceWith,ppRetVal)	\
    ( (This)->lpVtbl -> Replace_2(This,replaceSpan,replaceWith,ppRetVal) ) 


#define IVxProjectionBuffer_AdviseSourceBuffersChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseSourceBuffersChanged(This,pValue) ) 

#define IVxProjectionBuffer_AdviseSourceSpansChanged(This,pValue)	\
    ( (This)->lpVtbl -> AdviseSourceSpansChanged(This,pValue) ) 

#define IVxProjectionBuffer_DeleteSpans(This,position,spansToDelete,ppRetVal)	\
    ( (This)->lpVtbl -> DeleteSpans(This,position,spansToDelete,ppRetVal) ) 

#define IVxProjectionBuffer_InsertSpan_2(This,position,literalSpanToInsert,ppRetVal)	\
    ( (This)->lpVtbl -> InsertSpan_2(This,position,literalSpanToInsert,ppRetVal) ) 

#define IVxProjectionBuffer_InsertSpan(This,position,pSpanToInsert,ppRetVal)	\
    ( (This)->lpVtbl -> InsertSpan(This,position,pSpanToInsert,ppRetVal) ) 

#define IVxProjectionBuffer_InsertSpans(This,position,pSpansToInsert,ppRetVal)	\
    ( (This)->lpVtbl -> InsertSpans(This,position,pSpansToInsert,ppRetVal) ) 

#define IVxProjectionBuffer_ReplaceSpans(This,position,spansToReplace,pSpansToInsert,options,pEditTag,ppRetVal)	\
    ( (This)->lpVtbl -> ReplaceSpans(This,position,spansToReplace,pSpansToInsert,options,pEditTag,ppRetVal) ) 

#define IVxProjectionBuffer_UnadviseSourceBuffersChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseSourceBuffersChanged(This,pValue) ) 

#define IVxProjectionBuffer_UnadviseSourceSpansChanged(This,pValue)	\
    ( (This)->lpVtbl -> UnadviseSourceSpansChanged(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxProjectionBuffer_INTERFACE_DEFINED__ */


#ifndef __IVxProjectionSnapshot_INTERFACE_DEFINED__
#define __IVxProjectionSnapshot_INTERFACE_DEFINED__

/* interface IVxProjectionSnapshot */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxProjectionSnapshot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ea74bbf4-8acb-4c36-a3ef-f05d9e14ca9e")
    IVxProjectionSnapshot : public IVxTextSnapshot
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMatchingSnapshot( 
            /* [in] */ IVxTextBuffer *pTextBuffer,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSourceSnapshots( 
            /* [retval][out] */ IListIVxTextSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSourceSpans_2( 
            /* [retval][out] */ IListVxSnapshotSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSourceSpans( 
            /* [in] */ int startSpanIndex,
            /* [in] */ int count,
            /* [retval][out] */ IListVxSnapshotSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpanCount( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextBuffer_2( 
            /* [retval][out] */ IVxProjectionBufferBase **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapFromSourceSnapshot_2( 
            /* [in] */ VxSnapshotSpan span,
            /* [retval][out] */ IListVxSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapFromSourceSnapshot( 
            /* [in] */ VxSnapshotPoint point,
            /* [in] */ VxPositionAffinity affinity,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapToSourceSnapshot_2( 
            /* [in] */ int position,
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapToSourceSnapshot( 
            /* [in] */ int position,
            /* [in] */ VxPositionAffinity affinity,
            /* [retval][out] */ VxSnapshotPoint *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapToSourceSnapshots( 
            /* [in] */ int position,
            /* [retval][out] */ IListVxSnapshotPoint **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapToSourceSnapshots_2( 
            /* [in] */ VxSpan span,
            /* [retval][out] */ IListVxSnapshotSpan **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxProjectionSnapshotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxProjectionSnapshot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxProjectionSnapshot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxProjectionSnapshot * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingPoint )( 
            IVxProjectionSnapshot * This,
            /* [in] */ int position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingPoint **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingPoint_2 )( 
            IVxProjectionSnapshot * This,
            /* [in] */ int position,
            /* [in] */ VxPointTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingPoint **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingSpan )( 
            IVxProjectionSnapshot * This,
            /* [in] */ VxSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingSpan_2 )( 
            IVxProjectionSnapshot * This,
            /* [in] */ VxSpan span,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingSpan_3 )( 
            IVxProjectionSnapshot * This,
            /* [in] */ int start,
            /* [in] */ int length,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrackingSpan_4 )( 
            IVxProjectionSnapshot * This,
            /* [in] */ int start,
            /* [in] */ int length,
            /* [in] */ VxSpanTrackingMode trackingMode,
            /* [in] */ VxTrackingFidelityMode trackingFidelity,
            /* [retval][out] */ IVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetContentType )( 
            IVxProjectionSnapshot * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLength )( 
            IVxProjectionSnapshot * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLineCount )( 
            IVxProjectionSnapshot * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLineFromLineNumber )( 
            IVxProjectionSnapshot * This,
            /* [in] */ int lineNumber,
            /* [retval][out] */ IVxTextSnapshotLine **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLineFromPosition )( 
            IVxProjectionSnapshot * This,
            /* [in] */ int position,
            /* [retval][out] */ IVxTextSnapshotLine **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLineNumberFromPosition )( 
            IVxProjectionSnapshot * This,
            /* [in] */ int position,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLines )( 
            IVxProjectionSnapshot * This,
            /* [retval][out] */ IEnumerableIVxTextSnapshotLine **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetText_3 )( 
            IVxProjectionSnapshot * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            IVxProjectionSnapshot * This,
            /* [in] */ VxSpan span,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetText_2 )( 
            IVxProjectionSnapshot * This,
            /* [in] */ int startIndex,
            /* [in] */ int length,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextBuffer )( 
            IVxProjectionSnapshot * This,
            /* [retval][out] */ IVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IVxProjectionSnapshot * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *Write_2 )( 
            IVxProjectionSnapshot * This,
            /* [in] */ IUnknown *pWriter);
        
        HRESULT ( STDMETHODCALLTYPE *Write )( 
            IVxProjectionSnapshot * This,
            /* [in] */ IUnknown *pWriter,
            /* [in] */ VxSpan span);
        
        HRESULT ( STDMETHODCALLTYPE *GetMatchingSnapshot )( 
            IVxProjectionSnapshot * This,
            /* [in] */ IVxTextBuffer *pTextBuffer,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSourceSnapshots )( 
            IVxProjectionSnapshot * This,
            /* [retval][out] */ IListIVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSourceSpans_2 )( 
            IVxProjectionSnapshot * This,
            /* [retval][out] */ IListVxSnapshotSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSourceSpans )( 
            IVxProjectionSnapshot * This,
            /* [in] */ int startSpanIndex,
            /* [in] */ int count,
            /* [retval][out] */ IListVxSnapshotSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpanCount )( 
            IVxProjectionSnapshot * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextBuffer_2 )( 
            IVxProjectionSnapshot * This,
            /* [retval][out] */ IVxProjectionBufferBase **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapFromSourceSnapshot_2 )( 
            IVxProjectionSnapshot * This,
            /* [in] */ VxSnapshotSpan span,
            /* [retval][out] */ IListVxSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapFromSourceSnapshot )( 
            IVxProjectionSnapshot * This,
            /* [in] */ VxSnapshotPoint point,
            /* [in] */ VxPositionAffinity affinity,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapToSourceSnapshot_2 )( 
            IVxProjectionSnapshot * This,
            /* [in] */ int position,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapToSourceSnapshot )( 
            IVxProjectionSnapshot * This,
            /* [in] */ int position,
            /* [in] */ VxPositionAffinity affinity,
            /* [retval][out] */ VxSnapshotPoint *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapToSourceSnapshots )( 
            IVxProjectionSnapshot * This,
            /* [in] */ int position,
            /* [retval][out] */ IListVxSnapshotPoint **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MapToSourceSnapshots_2 )( 
            IVxProjectionSnapshot * This,
            /* [in] */ VxSpan span,
            /* [retval][out] */ IListVxSnapshotSpan **ppRetVal);
        
        END_INTERFACE
    } IVxProjectionSnapshotVtbl;

    interface IVxProjectionSnapshot
    {
        CONST_VTBL struct IVxProjectionSnapshotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxProjectionSnapshot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxProjectionSnapshot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxProjectionSnapshot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxProjectionSnapshot_CreateTrackingPoint(This,position,trackingMode,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingPoint(This,position,trackingMode,ppRetVal) ) 

#define IVxProjectionSnapshot_CreateTrackingPoint_2(This,position,trackingMode,trackingFidelity,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingPoint_2(This,position,trackingMode,trackingFidelity,ppRetVal) ) 

#define IVxProjectionSnapshot_CreateTrackingSpan(This,span,trackingMode,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingSpan(This,span,trackingMode,ppRetVal) ) 

#define IVxProjectionSnapshot_CreateTrackingSpan_2(This,span,trackingMode,trackingFidelity,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingSpan_2(This,span,trackingMode,trackingFidelity,ppRetVal) ) 

#define IVxProjectionSnapshot_CreateTrackingSpan_3(This,start,length,trackingMode,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingSpan_3(This,start,length,trackingMode,ppRetVal) ) 

#define IVxProjectionSnapshot_CreateTrackingSpan_4(This,start,length,trackingMode,trackingFidelity,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTrackingSpan_4(This,start,length,trackingMode,trackingFidelity,ppRetVal) ) 

#define IVxProjectionSnapshot_GetContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetContentType(This,ppRetVal) ) 

#define IVxProjectionSnapshot_GetLength(This,pRetVal)	\
    ( (This)->lpVtbl -> GetLength(This,pRetVal) ) 

#define IVxProjectionSnapshot_GetLineCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetLineCount(This,pRetVal) ) 

#define IVxProjectionSnapshot_GetLineFromLineNumber(This,lineNumber,ppRetVal)	\
    ( (This)->lpVtbl -> GetLineFromLineNumber(This,lineNumber,ppRetVal) ) 

#define IVxProjectionSnapshot_GetLineFromPosition(This,position,ppRetVal)	\
    ( (This)->lpVtbl -> GetLineFromPosition(This,position,ppRetVal) ) 

#define IVxProjectionSnapshot_GetLineNumberFromPosition(This,position,pRetVal)	\
    ( (This)->lpVtbl -> GetLineNumberFromPosition(This,position,pRetVal) ) 

#define IVxProjectionSnapshot_GetLines(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetLines(This,ppRetVal) ) 

#define IVxProjectionSnapshot_GetText_3(This,pRetVal)	\
    ( (This)->lpVtbl -> GetText_3(This,pRetVal) ) 

#define IVxProjectionSnapshot_GetText(This,span,pRetVal)	\
    ( (This)->lpVtbl -> GetText(This,span,pRetVal) ) 

#define IVxProjectionSnapshot_GetText_2(This,startIndex,length,pRetVal)	\
    ( (This)->lpVtbl -> GetText_2(This,startIndex,length,pRetVal) ) 

#define IVxProjectionSnapshot_GetTextBuffer(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetTextBuffer(This,ppRetVal) ) 

#define IVxProjectionSnapshot_GetVersion(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetVersion(This,ppRetVal) ) 

#define IVxProjectionSnapshot_Write_2(This,pWriter)	\
    ( (This)->lpVtbl -> Write_2(This,pWriter) ) 

#define IVxProjectionSnapshot_Write(This,pWriter,span)	\
    ( (This)->lpVtbl -> Write(This,pWriter,span) ) 


#define IVxProjectionSnapshot_GetMatchingSnapshot(This,pTextBuffer,ppRetVal)	\
    ( (This)->lpVtbl -> GetMatchingSnapshot(This,pTextBuffer,ppRetVal) ) 

#define IVxProjectionSnapshot_GetSourceSnapshots(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetSourceSnapshots(This,ppRetVal) ) 

#define IVxProjectionSnapshot_GetSourceSpans_2(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetSourceSpans_2(This,ppRetVal) ) 

#define IVxProjectionSnapshot_GetSourceSpans(This,startSpanIndex,count,ppRetVal)	\
    ( (This)->lpVtbl -> GetSourceSpans(This,startSpanIndex,count,ppRetVal) ) 

#define IVxProjectionSnapshot_GetSpanCount(This,pRetVal)	\
    ( (This)->lpVtbl -> GetSpanCount(This,pRetVal) ) 

#define IVxProjectionSnapshot_GetTextBuffer_2(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetTextBuffer_2(This,ppRetVal) ) 

#define IVxProjectionSnapshot_MapFromSourceSnapshot_2(This,span,ppRetVal)	\
    ( (This)->lpVtbl -> MapFromSourceSnapshot_2(This,span,ppRetVal) ) 

#define IVxProjectionSnapshot_MapFromSourceSnapshot(This,point,affinity,pRetValHasValue,pRetVal)	\
    ( (This)->lpVtbl -> MapFromSourceSnapshot(This,point,affinity,pRetValHasValue,pRetVal) ) 

#define IVxProjectionSnapshot_MapToSourceSnapshot_2(This,position,pRetVal)	\
    ( (This)->lpVtbl -> MapToSourceSnapshot_2(This,position,pRetVal) ) 

#define IVxProjectionSnapshot_MapToSourceSnapshot(This,position,affinity,pRetVal)	\
    ( (This)->lpVtbl -> MapToSourceSnapshot(This,position,affinity,pRetVal) ) 

#define IVxProjectionSnapshot_MapToSourceSnapshots(This,position,ppRetVal)	\
    ( (This)->lpVtbl -> MapToSourceSnapshots(This,position,ppRetVal) ) 

#define IVxProjectionSnapshot_MapToSourceSnapshots_2(This,span,ppRetVal)	\
    ( (This)->lpVtbl -> MapToSourceSnapshots_2(This,span,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxProjectionSnapshot_INTERFACE_DEFINED__ */


#ifndef __IVxProjectionSourceSpansChangedEventArgs_INTERFACE_DEFINED__
#define __IVxProjectionSourceSpansChangedEventArgs_INTERFACE_DEFINED__

/* interface IVxProjectionSourceSpansChangedEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxProjectionSourceSpansChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9ef0e53c-b564-46d9-8616-d28034ac48c9")
    IVxProjectionSourceSpansChangedEventArgs : public IVxTextContentChangedEventArgs
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAfter_2( 
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBefore_2( 
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeletedSpans( 
            /* [retval][out] */ IListIVxTrackingSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInsertedSpans( 
            /* [retval][out] */ IListIVxTrackingSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpanPosition( 
            /* [retval][out] */ int *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxProjectionSourceSpansChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxProjectionSourceSpansChangedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxProjectionSourceSpansChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxProjectionSourceSpansChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfter )( 
            IVxProjectionSourceSpansChangedEventArgs * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfterVersion )( 
            IVxProjectionSourceSpansChangedEventArgs * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBefore )( 
            IVxProjectionSourceSpansChangedEventArgs * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBeforeVersion )( 
            IVxProjectionSourceSpansChangedEventArgs * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEditTag )( 
            IVxProjectionSourceSpansChangedEventArgs * This,
            /* [retval][out] */ IUnknown **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetChanges )( 
            IVxProjectionSourceSpansChangedEventArgs * This,
            /* [retval][out] */ IVxNormalizedTextChangeCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            IVxProjectionSourceSpansChangedEventArgs * This,
            /* [retval][out] */ VxEditOptions *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfter_2 )( 
            IVxProjectionSourceSpansChangedEventArgs * This,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBefore_2 )( 
            IVxProjectionSourceSpansChangedEventArgs * This,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeletedSpans )( 
            IVxProjectionSourceSpansChangedEventArgs * This,
            /* [retval][out] */ IListIVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetInsertedSpans )( 
            IVxProjectionSourceSpansChangedEventArgs * This,
            /* [retval][out] */ IListIVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpanPosition )( 
            IVxProjectionSourceSpansChangedEventArgs * This,
            /* [retval][out] */ int *pRetVal);
        
        END_INTERFACE
    } IVxProjectionSourceSpansChangedEventArgsVtbl;

    interface IVxProjectionSourceSpansChangedEventArgs
    {
        CONST_VTBL struct IVxProjectionSourceSpansChangedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxProjectionSourceSpansChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxProjectionSourceSpansChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxProjectionSourceSpansChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxProjectionSourceSpansChangedEventArgs_GetAfter(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfter(This,ppRetVal) ) 

#define IVxProjectionSourceSpansChangedEventArgs_GetAfterVersion(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfterVersion(This,ppRetVal) ) 

#define IVxProjectionSourceSpansChangedEventArgs_GetBefore(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBefore(This,ppRetVal) ) 

#define IVxProjectionSourceSpansChangedEventArgs_GetBeforeVersion(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBeforeVersion(This,ppRetVal) ) 

#define IVxProjectionSourceSpansChangedEventArgs_GetEditTag(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEditTag(This,ppRetVal) ) 


#define IVxProjectionSourceSpansChangedEventArgs_GetChanges(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetChanges(This,ppRetVal) ) 

#define IVxProjectionSourceSpansChangedEventArgs_GetOptions(This,pRetVal)	\
    ( (This)->lpVtbl -> GetOptions(This,pRetVal) ) 


#define IVxProjectionSourceSpansChangedEventArgs_GetAfter_2(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfter_2(This,ppRetVal) ) 

#define IVxProjectionSourceSpansChangedEventArgs_GetBefore_2(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBefore_2(This,ppRetVal) ) 

#define IVxProjectionSourceSpansChangedEventArgs_GetDeletedSpans(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetDeletedSpans(This,ppRetVal) ) 

#define IVxProjectionSourceSpansChangedEventArgs_GetInsertedSpans(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetInsertedSpans(This,ppRetVal) ) 

#define IVxProjectionSourceSpansChangedEventArgs_GetSpanPosition(This,pRetVal)	\
    ( (This)->lpVtbl -> GetSpanPosition(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxProjectionSourceSpansChangedEventArgs_INTERFACE_DEFINED__ */


#ifndef __IVxProjectionSourceBuffersChangedEventArgs_INTERFACE_DEFINED__
#define __IVxProjectionSourceBuffersChangedEventArgs_INTERFACE_DEFINED__

/* interface IVxProjectionSourceBuffersChangedEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxProjectionSourceBuffersChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d058cf17-7aa6-41da-8816-90b93250e998")
    IVxProjectionSourceBuffersChangedEventArgs : public IVxProjectionSourceSpansChangedEventArgs
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAddedBuffers( 
            /* [retval][out] */ IListIVxTextBuffer **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRemovedBuffers( 
            /* [retval][out] */ IListIVxTextBuffer **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxProjectionSourceBuffersChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxProjectionSourceBuffersChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxProjectionSourceBuffersChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfter )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfterVersion )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBefore )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ IVxTextSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBeforeVersion )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ IVxTextVersion **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetEditTag )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ IUnknown **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetChanges )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ IVxNormalizedTextChangeCollection **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ VxEditOptions *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetAfter_2 )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetBefore_2 )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ IVxProjectionSnapshot **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeletedSpans )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ IListIVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetInsertedSpans )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ IListIVxTrackingSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpanPosition )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ int *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetAddedBuffers )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ IListIVxTextBuffer **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetRemovedBuffers )( 
            IVxProjectionSourceBuffersChangedEventArgs * This,
            /* [retval][out] */ IListIVxTextBuffer **ppRetVal);
        
        END_INTERFACE
    } IVxProjectionSourceBuffersChangedEventArgsVtbl;

    interface IVxProjectionSourceBuffersChangedEventArgs
    {
        CONST_VTBL struct IVxProjectionSourceBuffersChangedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxProjectionSourceBuffersChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxProjectionSourceBuffersChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxProjectionSourceBuffersChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxProjectionSourceBuffersChangedEventArgs_GetAfter(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfter(This,ppRetVal) ) 

#define IVxProjectionSourceBuffersChangedEventArgs_GetAfterVersion(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfterVersion(This,ppRetVal) ) 

#define IVxProjectionSourceBuffersChangedEventArgs_GetBefore(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBefore(This,ppRetVal) ) 

#define IVxProjectionSourceBuffersChangedEventArgs_GetBeforeVersion(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBeforeVersion(This,ppRetVal) ) 

#define IVxProjectionSourceBuffersChangedEventArgs_GetEditTag(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetEditTag(This,ppRetVal) ) 


#define IVxProjectionSourceBuffersChangedEventArgs_GetChanges(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetChanges(This,ppRetVal) ) 

#define IVxProjectionSourceBuffersChangedEventArgs_GetOptions(This,pRetVal)	\
    ( (This)->lpVtbl -> GetOptions(This,pRetVal) ) 


#define IVxProjectionSourceBuffersChangedEventArgs_GetAfter_2(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAfter_2(This,ppRetVal) ) 

#define IVxProjectionSourceBuffersChangedEventArgs_GetBefore_2(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetBefore_2(This,ppRetVal) ) 

#define IVxProjectionSourceBuffersChangedEventArgs_GetDeletedSpans(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetDeletedSpans(This,ppRetVal) ) 

#define IVxProjectionSourceBuffersChangedEventArgs_GetInsertedSpans(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetInsertedSpans(This,ppRetVal) ) 

#define IVxProjectionSourceBuffersChangedEventArgs_GetSpanPosition(This,pRetVal)	\
    ( (This)->lpVtbl -> GetSpanPosition(This,pRetVal) ) 


#define IVxProjectionSourceBuffersChangedEventArgs_GetAddedBuffers(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetAddedBuffers(This,ppRetVal) ) 

#define IVxProjectionSourceBuffersChangedEventArgs_GetRemovedBuffers(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetRemovedBuffers(This,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxProjectionSourceBuffersChangedEventArgs_INTERFACE_DEFINED__ */


#ifndef __IVxTextSearchService_INTERFACE_DEFINED__
#define __IVxTextSearchService_INTERFACE_DEFINED__

/* interface IVxTextSearchService */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextSearchService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30d6bd3f-c415-42a6-b6e2-fad40ba8ab35")
    IVxTextSearchService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FindAll( 
            /* [in] */ VxFindData findData,
            /* [retval][out] */ IListVxSnapshotSpan **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindNext( 
            /* [in] */ int startIndex,
            /* [in] */ BOOL wraparound,
            /* [in] */ VxFindData findData,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotSpan *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextSearchServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextSearchService * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextSearchService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextSearchService * This);
        
        HRESULT ( STDMETHODCALLTYPE *FindAll )( 
            IVxTextSearchService * This,
            /* [in] */ VxFindData findData,
            /* [retval][out] */ IListVxSnapshotSpan **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *FindNext )( 
            IVxTextSearchService * This,
            /* [in] */ int startIndex,
            /* [in] */ BOOL wraparound,
            /* [in] */ VxFindData findData,
            /* [out] */ BOOL *pRetValHasValue,
            /* [retval][out] */ VxSnapshotSpan *pRetVal);
        
        END_INTERFACE
    } IVxTextSearchServiceVtbl;

    interface IVxTextSearchService
    {
        CONST_VTBL struct IVxTextSearchServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextSearchService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextSearchService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextSearchService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextSearchService_FindAll(This,findData,ppRetVal)	\
    ( (This)->lpVtbl -> FindAll(This,findData,ppRetVal) ) 

#define IVxTextSearchService_FindNext(This,startIndex,wraparound,findData,pRetValHasValue,pRetVal)	\
    ( (This)->lpVtbl -> FindNext(This,startIndex,wraparound,findData,pRetValHasValue,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextSearchService_INTERFACE_DEFINED__ */


#ifndef __IVxTextStructureNavigator_INTERFACE_DEFINED__
#define __IVxTextStructureNavigator_INTERFACE_DEFINED__

/* interface IVxTextStructureNavigator */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxTextStructureNavigator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("112990cb-72c0-43a9-ab89-bca935c4806f")
    IVxTextStructureNavigator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContentType( 
            /* [retval][out] */ IVxContentType **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExtentOfWord( 
            /* [in] */ VxSnapshotPoint currentPosition,
            /* [retval][out] */ VxTextExtent *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpanOfEnclosing( 
            /* [in] */ VxSnapshotSpan activeSpan,
            /* [retval][out] */ VxSnapshotSpan *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpanOfFirstChild( 
            /* [in] */ VxSnapshotSpan activeSpan,
            /* [retval][out] */ VxSnapshotSpan *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpanOfNextSibling( 
            /* [in] */ VxSnapshotSpan activeSpan,
            /* [retval][out] */ VxSnapshotSpan *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpanOfPreviousSibling( 
            /* [in] */ VxSnapshotSpan activeSpan,
            /* [retval][out] */ VxSnapshotSpan *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxTextStructureNavigatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxTextStructureNavigator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxTextStructureNavigator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxTextStructureNavigator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContentType )( 
            IVxTextStructureNavigator * This,
            /* [retval][out] */ IVxContentType **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetExtentOfWord )( 
            IVxTextStructureNavigator * This,
            /* [in] */ VxSnapshotPoint currentPosition,
            /* [retval][out] */ VxTextExtent *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpanOfEnclosing )( 
            IVxTextStructureNavigator * This,
            /* [in] */ VxSnapshotSpan activeSpan,
            /* [retval][out] */ VxSnapshotSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpanOfFirstChild )( 
            IVxTextStructureNavigator * This,
            /* [in] */ VxSnapshotSpan activeSpan,
            /* [retval][out] */ VxSnapshotSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpanOfNextSibling )( 
            IVxTextStructureNavigator * This,
            /* [in] */ VxSnapshotSpan activeSpan,
            /* [retval][out] */ VxSnapshotSpan *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpanOfPreviousSibling )( 
            IVxTextStructureNavigator * This,
            /* [in] */ VxSnapshotSpan activeSpan,
            /* [retval][out] */ VxSnapshotSpan *pRetVal);
        
        END_INTERFACE
    } IVxTextStructureNavigatorVtbl;

    interface IVxTextStructureNavigator
    {
        CONST_VTBL struct IVxTextStructureNavigatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxTextStructureNavigator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxTextStructureNavigator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxTextStructureNavigator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxTextStructureNavigator_GetContentType(This,ppRetVal)	\
    ( (This)->lpVtbl -> GetContentType(This,ppRetVal) ) 

#define IVxTextStructureNavigator_GetExtentOfWord(This,currentPosition,pRetVal)	\
    ( (This)->lpVtbl -> GetExtentOfWord(This,currentPosition,pRetVal) ) 

#define IVxTextStructureNavigator_GetSpanOfEnclosing(This,activeSpan,pRetVal)	\
    ( (This)->lpVtbl -> GetSpanOfEnclosing(This,activeSpan,pRetVal) ) 

#define IVxTextStructureNavigator_GetSpanOfFirstChild(This,activeSpan,pRetVal)	\
    ( (This)->lpVtbl -> GetSpanOfFirstChild(This,activeSpan,pRetVal) ) 

#define IVxTextStructureNavigator_GetSpanOfNextSibling(This,activeSpan,pRetVal)	\
    ( (This)->lpVtbl -> GetSpanOfNextSibling(This,activeSpan,pRetVal) ) 

#define IVxTextStructureNavigator_GetSpanOfPreviousSibling(This,activeSpan,pRetVal)	\
    ( (This)->lpVtbl -> GetSpanOfPreviousSibling(This,activeSpan,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxTextStructureNavigator_INTERFACE_DEFINED__ */


#ifndef __IVxThumbnailSupport_INTERFACE_DEFINED__
#define __IVxThumbnailSupport_INTERFACE_DEFINED__

/* interface IVxThumbnailSupport */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxThumbnailSupport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d83723ad-977d-4bf0-8534-1f1f72f5ac00")
    IVxThumbnailSupport : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRemoveVisualsWhenHidden( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRemoveVisualsWhenHidden( 
            /* [in] */ BOOL value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxThumbnailSupportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxThumbnailSupport * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxThumbnailSupport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxThumbnailSupport * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRemoveVisualsWhenHidden )( 
            IVxThumbnailSupport * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *SetRemoveVisualsWhenHidden )( 
            IVxThumbnailSupport * This,
            /* [in] */ BOOL value);
        
        END_INTERFACE
    } IVxThumbnailSupportVtbl;

    interface IVxThumbnailSupport
    {
        CONST_VTBL struct IVxThumbnailSupportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxThumbnailSupport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxThumbnailSupport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxThumbnailSupport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxThumbnailSupport_GetRemoveVisualsWhenHidden(This,pRetVal)	\
    ( (This)->lpVtbl -> GetRemoveVisualsWhenHidden(This,pRetVal) ) 

#define IVxThumbnailSupport_SetRemoveVisualsWhenHidden(This,value)	\
    ( (This)->lpVtbl -> SetRemoveVisualsWhenHidden(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxThumbnailSupport_INTERFACE_DEFINED__ */


#ifndef __IVxPlatformFactory_INTERFACE_DEFINED__
#define __IVxPlatformFactory_INTERFACE_DEFINED__

/* interface IVxPlatformFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID_IVxPlatformFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a5596e43-5f0e-4dec-83e9-45f8fe64c64f")
    IVxPlatformFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateContentTypeRegistryService( 
            /* [in] */ IUnknown *pServiceProvider,
            /* [retval][out] */ IVxContentTypeRegistryService **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTextBufferFactoryService( 
            /* [in] */ IUnknown *pServiceProvider,
            /* [retval][out] */ IVxTextBufferFactoryService **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTextDocumentFactoryService( 
            /* [in] */ IUnknown *pServiceProvider,
            /* [retval][out] */ IVxTextDocumentFactoryService **ppRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTextSearchService( 
            /* [in] */ IUnknown *pServiceProvider,
            /* [retval][out] */ IVxTextSearchService **ppRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVxPlatformFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVxPlatformFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVxPlatformFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVxPlatformFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateContentTypeRegistryService )( 
            IVxPlatformFactory * This,
            /* [in] */ IUnknown *pServiceProvider,
            /* [retval][out] */ IVxContentTypeRegistryService **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTextBufferFactoryService )( 
            IVxPlatformFactory * This,
            /* [in] */ IUnknown *pServiceProvider,
            /* [retval][out] */ IVxTextBufferFactoryService **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTextDocumentFactoryService )( 
            IVxPlatformFactory * This,
            /* [in] */ IUnknown *pServiceProvider,
            /* [retval][out] */ IVxTextDocumentFactoryService **ppRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTextSearchService )( 
            IVxPlatformFactory * This,
            /* [in] */ IUnknown *pServiceProvider,
            /* [retval][out] */ IVxTextSearchService **ppRetVal);
        
        END_INTERFACE
    } IVxPlatformFactoryVtbl;

    interface IVxPlatformFactory
    {
        CONST_VTBL struct IVxPlatformFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVxPlatformFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVxPlatformFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVxPlatformFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVxPlatformFactory_CreateContentTypeRegistryService(This,pServiceProvider,ppRetVal)	\
    ( (This)->lpVtbl -> CreateContentTypeRegistryService(This,pServiceProvider,ppRetVal) ) 

#define IVxPlatformFactory_CreateTextBufferFactoryService(This,pServiceProvider,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTextBufferFactoryService(This,pServiceProvider,ppRetVal) ) 

#define IVxPlatformFactory_CreateTextDocumentFactoryService(This,pServiceProvider,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTextDocumentFactoryService(This,pServiceProvider,ppRetVal) ) 

#define IVxPlatformFactory_CreateTextSearchService(This,pServiceProvider,ppRetVal)	\
    ( (This)->lpVtbl -> CreateTextSearchService(This,pServiceProvider,ppRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVxPlatformFactory_INTERFACE_DEFINED__ */

#endif /* __VSEditorLibrary_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_VSEditor_0000_0001 */
/* [local] */ 

struct CVxStringDifferenceOptions : public VxStringDifferenceOptions
{
    CVxStringDifferenceOptions()
    {
        Init();
    }
    CVxStringDifferenceOptions(const VxStringDifferenceOptions &source)
    {
        *this = source;
    }
    CVxStringDifferenceOptions(VxStringDifferenceTypes _differenceType, int _locality, BOOL _ignoreTrimWhiteSpace)
    {
        differenceType = _differenceType;
        locality = _locality;
        ignoreTrimWhiteSpace = _ignoreTrimWhiteSpace;
    }
    void Init()
    {
        CVxStringDifferenceOptions::Init(*this);
    }
    static void Init(VxStringDifferenceOptions &obj)
    {
        obj.differenceType = static_cast<VxStringDifferenceTypes>(0);
        obj.locality = 0;
        obj.ignoreTrimWhiteSpace = FALSE;
    }
};
struct CVxEditOptions : public VxEditOptions
{
    CVxEditOptions()
    {
        Init();
    }
    CVxEditOptions(const VxEditOptions &source)
    {
        *this = source;
    }
    CVxEditOptions(BOOL _computeMinimalChange, const VxStringDifferenceOptions &_differenceOptions)
    {
        computeMinimalChange = _computeMinimalChange;
        differenceOptions = _differenceOptions;
    }
    void Init()
    {
        CVxEditOptions::Init(*this);
    }
    static void Init(VxEditOptions &obj)
    {
        obj.computeMinimalChange = FALSE;
        CVxStringDifferenceOptions::Init(obj.differenceOptions);
    }
};
struct CVxSnapshotPoint : public VxSnapshotPoint
{
    CVxSnapshotPoint()
    {
        Init();
    }
    CVxSnapshotPoint(const VxSnapshotPoint &source)
    {
        InitFrom(source);
    }
    CVxSnapshotPoint(IVxTextSnapshot* _snapshot, int _position)
    {
        if (_snapshot != NULL)
            _snapshot->AddRef();
        snapshot = _snapshot;
        position = _position;
    }
    void Init()
    {
        CVxSnapshotPoint::Init(*this);
    }
    static void Init(VxSnapshotPoint &obj)
    {
        obj.snapshot = 0;
        obj.position = 0;
    }
    void InitFrom(const VxSnapshotPoint &source)
    {
        CVxSnapshotPoint::InitFrom(*this, source);
    }
    static void InitFrom(VxSnapshotPoint &dest, const VxSnapshotPoint &source)
    {
        if (source.snapshot != NULL)
            source.snapshot->AddRef();
        dest.snapshot = source.snapshot;
        dest.position = source.position;
    }
    CVxSnapshotPoint* operator&()
    {
#ifdef _DEBUG
        AssertIsReleased();
#endif
        return this;
    }
    ~CVxSnapshotPoint()
    {
        Release();
    }
    CVxSnapshotPoint& operator=(const VxSnapshotPoint &source)
    {
        CVxSnapshotPoint::CopyTo(source, *this);
        return *this;
    }
    void CopyTo(VxSnapshotPoint &dest) const
    {
        CVxSnapshotPoint::CopyTo(*this, dest);
    }
    static void CopyTo(const VxSnapshotPoint &source, VxSnapshotPoint &dest)
    {
        if (&source == &dest)
            return;
        if (source.snapshot != NULL)
            source.snapshot->AddRef();
        if (dest.snapshot != NULL)
            dest.snapshot->Release();
        dest.snapshot = source.snapshot;
        dest.position = source.position;
    }
#ifdef _DEBUG
    void AssertIsReleased() const
    {
        CVxSnapshotPoint::AssertIsReleased(*this);
    }
    static void AssertIsReleased(const VxSnapshotPoint &obj)
    {
        VSASSERT(obj.snapshot == NULL, L"'obj.snapshot' is not NULL; potential memory leak.");
    }
#endif
    void Release()
    {
        CVxSnapshotPoint::Release(*this);
    }
    static void Release(VxSnapshotPoint &obj)
    {
        if (obj.snapshot != NULL)
        {
            obj.snapshot->Release();
            obj.snapshot = NULL;
        }
    }
};
struct CVxSnapshotSpan : public VxSnapshotSpan
{
    CVxSnapshotSpan()
    {
        Init();
    }
    CVxSnapshotSpan(const VxSnapshotSpan &source)
    {
        InitFrom(source);
    }
    CVxSnapshotSpan(const VxSnapshotPoint &_start, int _length)
    {
        CVxSnapshotPoint::InitFrom(start, _start);
        length = _length;
    }
    void Init()
    {
        CVxSnapshotSpan::Init(*this);
    }
    static void Init(VxSnapshotSpan &obj)
    {
        CVxSnapshotPoint::Init(obj.start);
        obj.length = 0;
    }
    void InitFrom(const VxSnapshotSpan &source)
    {
        CVxSnapshotSpan::InitFrom(*this, source);
    }
    static void InitFrom(VxSnapshotSpan &dest, const VxSnapshotSpan &source)
    {
        CVxSnapshotPoint::InitFrom(dest.start, source.start);
        dest.length = source.length;
    }
    CVxSnapshotSpan* operator&()
    {
#ifdef _DEBUG
        AssertIsReleased();
#endif
        return this;
    }
    ~CVxSnapshotSpan()
    {
        Release();
    }
    CVxSnapshotSpan& operator=(const VxSnapshotSpan &source)
    {
        CVxSnapshotSpan::CopyTo(source, *this);
        return *this;
    }
    void CopyTo(VxSnapshotSpan &dest) const
    {
        CVxSnapshotSpan::CopyTo(*this, dest);
    }
    static void CopyTo(const VxSnapshotSpan &source, VxSnapshotSpan &dest)
    {
        if (&source == &dest)
            return;
        CVxSnapshotPoint::CopyTo(source.start, dest.start);
        dest.length = source.length;
    }
#ifdef _DEBUG
    void AssertIsReleased() const
    {
        CVxSnapshotSpan::AssertIsReleased(*this);
    }
    static void AssertIsReleased(const VxSnapshotSpan &obj)
    {
        CVxSnapshotPoint::AssertIsReleased(obj.start);
    }
#endif
    void Release()
    {
        CVxSnapshotSpan::Release(*this);
    }
    static void Release(VxSnapshotSpan &obj)
    {
        CVxSnapshotPoint::Release(obj.start);
    }
};
struct CVxSpan : public VxSpan
{
    CVxSpan()
    {
        Init();
    }
    CVxSpan(const VxSpan &source)
    {
        *this = source;
    }
    CVxSpan(int _start, int _length)
    {
        start = _start;
        length = _length;
    }
    void Init()
    {
        CVxSpan::Init(*this);
    }
    static void Init(VxSpan &obj)
    {
        obj.start = 0;
        obj.length = 0;
    }
};
struct CVxFindData : public VxFindData
{
    CVxFindData()
    {
        Init();
    }
    CVxFindData(const VxFindData &source)
    {
        InitFrom(source);
    }
    CVxFindData(LPCWSTR __searchString, IVxTextSnapshot* __textSnapshotToSearch, VxFindOptions __findOptions, IVxTextStructureNavigator* __textStructureNavigator)
    {
        _searchString = (__searchString == NULL) ? NULL : SysAllocString(__searchString);
        if (__textSnapshotToSearch != NULL)
            __textSnapshotToSearch->AddRef();
        _textSnapshotToSearch = __textSnapshotToSearch;
        _findOptions = __findOptions;
        if (__textStructureNavigator != NULL)
            __textStructureNavigator->AddRef();
        _textStructureNavigator = __textStructureNavigator;
    }
    void Init()
    {
        CVxFindData::Init(*this);
    }
    static void Init(VxFindData &obj)
    {
        obj._searchString = NULL;
        obj._textSnapshotToSearch = 0;
        obj._findOptions = static_cast<VxFindOptions>(0);
        obj._textStructureNavigator = 0;
    }
    void InitFrom(const VxFindData &source)
    {
        CVxFindData::InitFrom(*this, source);
    }
    static void InitFrom(VxFindData &dest, const VxFindData &source)
    {
        dest._searchString = (source._searchString == NULL) ? NULL : SysAllocString(source._searchString);
        if (source._textSnapshotToSearch != NULL)
            source._textSnapshotToSearch->AddRef();
        dest._textSnapshotToSearch = source._textSnapshotToSearch;
        dest._findOptions = source._findOptions;
        if (source._textStructureNavigator != NULL)
            source._textStructureNavigator->AddRef();
        dest._textStructureNavigator = source._textStructureNavigator;
    }
    CVxFindData* operator&()
    {
#ifdef _DEBUG
        AssertIsReleased();
#endif
        return this;
    }
    ~CVxFindData()
    {
        Release();
    }
    CVxFindData& operator=(const VxFindData &source)
    {
        CVxFindData::CopyTo(source, *this);
        return *this;
    }
    void CopyTo(VxFindData &dest) const
    {
        CVxFindData::CopyTo(*this, dest);
    }
    static void CopyTo(const VxFindData &source, VxFindData &dest)
    {
        if (&source == &dest)
            return;
        if (dest._searchString != source._searchString)
        {
            SysFreeString(dest._searchString);
            dest._searchString = (source._searchString == NULL) ? NULL : SysAllocString(source._searchString);
        }
        if (source._textSnapshotToSearch != NULL)
            source._textSnapshotToSearch->AddRef();
        if (dest._textSnapshotToSearch != NULL)
            dest._textSnapshotToSearch->Release();
        dest._textSnapshotToSearch = source._textSnapshotToSearch;
        dest._findOptions = source._findOptions;
        if (source._textStructureNavigator != NULL)
            source._textStructureNavigator->AddRef();
        if (dest._textStructureNavigator != NULL)
            dest._textStructureNavigator->Release();
        dest._textStructureNavigator = source._textStructureNavigator;
    }
#ifdef _DEBUG
    void AssertIsReleased() const
    {
        CVxFindData::AssertIsReleased(*this);
    }
    static void AssertIsReleased(const VxFindData &obj)
    {
        VSASSERT(obj._searchString == NULL, L"'obj._searchString' is not NULL; potential memory leak.");
        VSASSERT(obj._textSnapshotToSearch == NULL, L"'obj._textSnapshotToSearch' is not NULL; potential memory leak.");
        VSASSERT(obj._textStructureNavigator == NULL, L"'obj._textStructureNavigator' is not NULL; potential memory leak.");
    }
#endif
    void Release()
    {
        CVxFindData::Release(*this);
    }
    static void Release(VxFindData &obj)
    {
        if (obj._searchString != NULL)
        {
            SysFreeString(obj._searchString);
            obj._searchString = NULL;
        }
        if (obj._textSnapshotToSearch != NULL)
        {
            obj._textSnapshotToSearch->Release();
            obj._textSnapshotToSearch = NULL;
        }
        if (obj._textStructureNavigator != NULL)
        {
            obj._textStructureNavigator->Release();
            obj._textStructureNavigator = NULL;
        }
    }
};
struct CVxTextExtent : public VxTextExtent
{
    CVxTextExtent()
    {
        Init();
    }
    CVxTextExtent(const VxTextExtent &source)
    {
        InitFrom(source);
    }
    CVxTextExtent(const VxSnapshotSpan &__span, BOOL __isSignificant)
    {
        CVxSnapshotSpan::InitFrom(_span, __span);
        _isSignificant = __isSignificant;
    }
    void Init()
    {
        CVxTextExtent::Init(*this);
    }
    static void Init(VxTextExtent &obj)
    {
        CVxSnapshotSpan::Init(obj._span);
        obj._isSignificant = FALSE;
    }
    void InitFrom(const VxTextExtent &source)
    {
        CVxTextExtent::InitFrom(*this, source);
    }
    static void InitFrom(VxTextExtent &dest, const VxTextExtent &source)
    {
        CVxSnapshotSpan::InitFrom(dest._span, source._span);
        dest._isSignificant = source._isSignificant;
    }
    CVxTextExtent* operator&()
    {
#ifdef _DEBUG
        AssertIsReleased();
#endif
        return this;
    }
    ~CVxTextExtent()
    {
        Release();
    }
    CVxTextExtent& operator=(const VxTextExtent &source)
    {
        CVxTextExtent::CopyTo(source, *this);
        return *this;
    }
    void CopyTo(VxTextExtent &dest) const
    {
        CVxTextExtent::CopyTo(*this, dest);
    }
    static void CopyTo(const VxTextExtent &source, VxTextExtent &dest)
    {
        if (&source == &dest)
            return;
        CVxSnapshotSpan::CopyTo(source._span, dest._span);
        dest._isSignificant = source._isSignificant;
    }
#ifdef _DEBUG
    void AssertIsReleased() const
    {
        CVxTextExtent::AssertIsReleased(*this);
    }
    static void AssertIsReleased(const VxTextExtent &obj)
    {
        CVxSnapshotSpan::AssertIsReleased(obj._span);
    }
#endif
    void Release()
    {
        CVxTextExtent::Release(*this);
    }
    static void Release(VxTextExtent &obj)
    {
        CVxSnapshotSpan::Release(obj._span);
    }
};


extern RPC_IF_HANDLE __MIDL_itf_VSEditor_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSEditor_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


