//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, NSURL;

@protocol SPTPodcastLogger <NSObject>
- (void)logUIImpressionForFeatureID:(NSString *)arg1 pageURI:(NSString *)arg2 section:(NSString *)arg3 itemIndex:(long long)arg4 targetURI:(NSString *)arg5;
- (void)logNavigateBrowsePodcastsPageInViewURL:(NSURL *)arg1 featureId:(NSString *)arg2;
- (void)logNavigateToShowPageInViewURL:(NSURL *)arg1 targetURL:(NSURL *)arg2;
- (void)logLoadShowViewURL:(NSURL *)arg1;
- (void)logOpenContextMenuShowInViewURL:(NSURL *)arg1;
- (void)logOpenContextMenuEpisodeInViewURL:(NSURL *)arg1 episodeURI:(NSURL *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)logShowFollowInViewURL:(NSURL *)arg1 didFollow:(_Bool)arg2 fromContextMenu:(_Bool)arg3 autoFollow:(_Bool)arg4;
- (void)logEpisodeSortingInViewURL:(NSURL *)arg1 sorting:(unsigned long long)arg2;
- (void)logEpisodeFilterResetInViewURL:(NSURL *)arg1;
- (void)logEpisodeFilterSetInViewURL:(NSURL *)arg1 filter:(NSString *)arg2 previousFilter:(NSString *)arg3;
@end

