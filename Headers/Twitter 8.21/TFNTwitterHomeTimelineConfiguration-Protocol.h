//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString;
@protocol TNUNetworkQualityProvider;

@protocol TFNTwitterHomeTimelineConfiguration <NSObject>
@property(nonatomic, readonly) _Bool isHomeConversationHoistingPreventionEnabled;
@property(nonatomic, readonly) _Bool isEmptyChunkClearingEnabled;
@property(nonatomic, readonly) id <TNUNetworkQualityProvider> networkQualityProvider;
@property(nonatomic, readonly) unsigned long long clientDedupingMaxRecentCacheEntries;
@property(nonatomic, readonly) _Bool isClientDedupingUsingImpressionCacheEnabled;
@property(nonatomic, readonly) long long progressiveAPISegmentSize;
- (_Bool)isProgressiveAPIEnabled;
@property(nonatomic, readonly) unsigned long long homeRequestMaxSeenIDs;
@property(nonatomic, readonly) NSString *scribePage;
@property(nonatomic, readonly) _Bool isModuleItemTreeDisplayTreesEnabled;
@property(nonatomic, readonly) _Bool isThreadedHomeConversationsEnabled;
@property(nonatomic, readonly) _Bool isTopCursorPrefetchEnabled;
@property(nonatomic, readonly) _Bool isLatestHomeTimelineOptionAvailable;
@property(nonatomic, readonly) _Bool enableHomeTimelineRequestWithSeenIDs;
@property(nonatomic, readonly) _Bool includeBlockingInfo;
@property(nonatomic, readonly) _Bool enableAutoplay;
@property(nonatomic, readonly) _Bool enableLatestTweetsTimeline;
@property(nonatomic, readonly) NSString *username;
@property(nonatomic, readonly) long long userID;
@property(nonatomic, readonly) unsigned long long streamOptions;

// Remaining properties
@property(nonatomic, readonly) _Bool progressiveAPIEnabled;
@end

