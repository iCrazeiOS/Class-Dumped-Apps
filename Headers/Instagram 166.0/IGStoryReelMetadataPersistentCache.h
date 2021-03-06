//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFeedItemUpdatedForAllListener-Protocol.h>

@class IGObjectCacheConsolidator, IGStoryReelStore, IGTimeBoundCache, NSDictionary, NSString;
@protocol IGFeedItemUpdatedForAllAnnouncer, IGStoryReelMetadataPersistentCacheDelegate, OS_dispatch_queue;

@interface IGStoryReelMetadataPersistentCache : NSObject <IGFeedItemUpdatedForAllListener>
{
    IGTimeBoundCache *_persistedReelMetadataCache;
    IGObjectCacheConsolidator *_cacheConsolidator;
    NSObject<OS_dispatch_queue> *_serialQueue;
    IGStoryReelStore *_reelStore;
    _Bool _useSyncDispatchForTesting;
    _Bool _isReelsMediaIncrementalSyncEnabled;
    long long _maxReelsToPopulate;
    NSString *_userPk;
    id <IGFeedItemUpdatedForAllAnnouncer> _feedItemUpdatedForAllAnnouncer;
    id <IGStoryReelMetadataPersistentCacheDelegate> _reelUpdateDelegate;
    NSDictionary *_recentlyValidatedReelsByPk;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *recentlyValidatedReelsByPk; // @synthesize recentlyValidatedReelsByPk=_recentlyValidatedReelsByPk;
- (void)setupForUnitTestInjectingCache:(id)arg1;
- (void)feedItemWasUpdated:(id)arg1 feedItemChange:(long long)arg2;
- (void)_removeReelFromRecentlyValidatedReels:(id)arg1;
- (void)_addReelToRecentlyValidatedReels:(id)arg1;
- (_Bool)_isRecentlyValidatedReel:(id)arg1;
- (void)_forceUpdateOfStoryReelInCache:(id)arg1;
- (void)_saveMedatadataFromReels:(id)arg1;
- (void)_populateReelsWithSavedMetadata:(id)arg1;
- (void)_initTimeboundCacheWithTtl:(double)arg1;
- (void)populateReelsWithSavedMetadata:(id)arg1;
- (void)saveMedatadataFromReels:(id)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 reelStore:(id)arg2 feedItemUpdatedForAllAnnouncer:(id)arg3 reelUpdateListener:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

