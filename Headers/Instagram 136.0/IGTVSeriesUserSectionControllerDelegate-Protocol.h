//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGTVSeriesUserSectionController, IGUser;

@protocol IGTVSeriesUserSectionControllerDelegate <NSObject>
- (void)seriesUserSectionController:(IGTVSeriesUserSectionController *)arg1 didTapProfileImageOrNameForUser:(IGUser *)arg2;
- (void)seriesUserSectionController:(IGTVSeriesUserSectionController *)arg1 didFollowUser:(IGUser *)arg2;
@end

