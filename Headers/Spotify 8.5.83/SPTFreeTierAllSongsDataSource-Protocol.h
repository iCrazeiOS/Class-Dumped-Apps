//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, NSURL, UIView;
@protocol SPTFreeTierAllSongsDataSourceAddedBy, SPTFreeTierAllSongsDataSourceDelegate, SPTFreeTierAllSongsHeaderEntityViewModel;

@protocol SPTFreeTierAllSongsDataSource <NSObject>
@property(nonatomic) __weak id <SPTFreeTierAllSongsDataSourceDelegate> dataSourceDelegate;
- (void)trackContextMenuDataForIndexPath:(NSIndexPath *)arg1 completion:(void (^)(id <SPTFreeTierAllSongsTrackContextMenuData>))arg2;
- (NSString *)albumNameForIndexPath:(NSIndexPath *)arg1;
- (NSURL *)trackURIForIndexPath:(NSIndexPath *)arg1;
- (_Bool)isTrackPremiumOnlyForIndexPath:(NSIndexPath *)arg1;
- (_Bool)isTrackExplicitForIndexPath:(NSIndexPath *)arg1;
- (_Bool)isTrackEnabledForIndexPath:(NSIndexPath *)arg1;
- (_Bool)isSongLikedForIndexPath:(NSIndexPath *)arg1;
- (id <SPTFreeTierAllSongsDataSourceAddedBy>)addedByForIndexPath:(NSIndexPath *)arg1;
- (_Bool)isSongBannedForIndexPath:(NSIndexPath *)arg1;
- (NSString *)trackPreviewIdentifierForIndexPath:(NSIndexPath *)arg1;
- (NSURL *)imageURLForIndexPath:(NSIndexPath *)arg1;
- (UIView *)trackSubtitleAccessoryViewForIndexPath:(NSIndexPath *)arg1;
- (NSString *)artistNameForIndexPath:(NSIndexPath *)arg1;
- (NSString *)trackNameForIndexPath:(NSIndexPath *)arg1;
- (NSString *)titleForSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSectionsForAllSongs;
- (_Bool)shouldShowAddedByAsFaceInAllSongs;
- (_Bool)shouldShowHeadersInAllSongss;
- (NSString *)titleForAllSongs;
- (_Bool)hasDataSourceLoadedForAllSongs;
- (void)allSongsDataSourceLoads;

@optional
@property(readonly, nonatomic) id <SPTFreeTierAllSongsHeaderEntityViewModel> headerEntityViewModel;
@property(readonly, nonatomic) _Bool hasHeader;
- (void)playlistContainsTrackURL:(NSURL *)arg1 completion:(void (^)(_Bool))arg2;
- (NSString *)toggleNegativeFeedbackForIndexPath:(NSIndexPath *)arg1;
- (NSString *)togglePositiveFeedbackForIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)trackFeedbackTypeForIndexPath:(NSIndexPath *)arg1;
@end

