//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKItemsLiveList-Protocol.h"
#import "GDKUploadLiveListDelegate-Protocol.h"

@class GDKUploadLiveList, NSArray, NSString;
@protocol GDKItemsLiveListDelegate, OS_dispatch_queue;

@interface GDKGroupedLiveList : NSObject <GDKUploadLiveListDelegate, GDKItemsLiveList>
{
    id <GDKItemsLiveListDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_celloPlatformQueue;
    GDKUploadLiveList *_uploadLiveList;
    NSArray *_uploadInitialResults;
    shared_ptr_0e8f3181 _cppLivelist;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *uploadInitialResults; // @synthesize uploadInitialResults=_uploadInitialResults;
@property(retain, nonatomic) GDKUploadLiveList *uploadLiveList; // @synthesize uploadLiveList=_uploadLiveList;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *celloPlatformQueue; // @synthesize celloPlatformQueue=_celloPlatformQueue;
@property(nonatomic) shared_ptr_0e8f3181 cppLivelist; // @synthesize cppLivelist=_cppLivelist;
@property(nonatomic) __weak id <GDKItemsLiveListDelegate> delegate; // @synthesize delegate=_delegate;
- (void)liveList:(id)arg1 itemsDidChange:(id)arg2 error:(id)arg3;
- (void)liveList:(id)arg1 didFetchResults:(id)arg2 error:(id)arg3;
- (void)addUploadingFolderID:(id)arg1;
- (id)querySuggestions;
- (unsigned long long)offsetGroupIndexForUploads:(unsigned long long)arg1;
- (id)listDeltasFromInitialItems;
- (void)sendOutDeltaItems;
- (void)logDeltas:(id)arg1;
- (void)onLiveListCreated:(int)arg1 errorMessage:(const basic_string_90719d97 *)arg2 livelist:(shared_ptr_0e8f3181)arg3;
- (function_01043bf5)makeRefreshOrLoadMoreCallback:(CDUnknownBlockType)arg1;
- (void)loadMoreFilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadMoreFilesWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasMoreFiles;
- (void)refreshWithSharedDriveID:(id)arg1 shouldRefreshSharedDrives:(_Bool)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithCello:(id)arg1 query:(id)arg2 groupConstraints:(id)arg3 delegate:(id)arg4 uploadService:(id)arg5 onCreated:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

