//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAMDSyncEngine-Protocol.h"

@class NSMutableSet;
@protocol WAMDSyncEngineDelegate, WAMDSyncKeyFormatting, WAMDSyncServerProxy, WAMDSyncStore;

@interface WAMDServerSyncEngine : NSObject <WAMDSyncEngine>
{
    NSMutableSet *_collectionsBeingUpdated;
    NSMutableSet *_collectionsThatNeedUpdate;
    id <WAMDSyncStore> _syncStore;
    id <WAMDSyncServerProxy> _syncServer;
    id <WAMDSyncKeyFormatting> _keyFormatter;
    id <WAMDSyncEngineDelegate> _delegate;
}

+ (id)serialSyncQueue;
@property(nonatomic) __weak id <WAMDSyncEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)actionFromMutation:(id)arg1;
- (id)collectionNameForMutation:(id)arg1;
- (_Bool)applyRemotePatch:(id)arg1;
- (id)flattenPatches:(id)arg1;
- (void)applyPatchesInCollectionWithResponse:(id)arg1;
- (void)handleGetResponse:(id)arg1 error:(id)arg2 collections:(id)arg3;
- (void)getCollectionsWithNames:(id)arg1;
- (void)updatePendingCollectionsIfNeeded;
- (void)updateCollections:(id)arg1;
- (void)updateAllCollections;
- (void)handleSetResponse:(id)arg1 error:(id)arg2 update:(id)arg3 requests:(id)arg4 clearLocalPendingMutations:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)sendPatches:(id)arg1 clearLocalPendingMutations:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncPendingMutationsIfNeeded;
- (void)updateCollectionsWithNamesIfPossible:(id)arg1;
- (void)storeAndSyncActionsIfPossible:(id)arg1;
- (void)syncActions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)syncAndPaginateActions:(id)arg1 pageSize:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)resume;
- (id)initWithSyncStore:(id)arg1 syncServer:(id)arg2;

@end

