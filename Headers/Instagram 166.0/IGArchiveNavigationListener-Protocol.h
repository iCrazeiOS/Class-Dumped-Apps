//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGMedia, NSArray;

@protocol IGArchiveNavigationListener <NSObject>

@optional
- (void)didLoadDayReelInfos:(NSArray *)arg1 feedItems:(NSArray *)arg2;
- (void)didChangeActiveMapFeedItem:(IGMedia *)arg1;
- (void)shouldViewMapWithMedia:(IGMedia *)arg1;
@end

