//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGTVChannelResponse, IGUser, IGViewController;

@protocol IGTVMetaSearchViewControllerDelegate <NSObject>
- (void)searchViewControllerDidTapCancelButton:(IGViewController *)arg1;
- (void)searchViewController:(IGViewController *)arg1 didSelectUser:(IGUser *)arg2 channel:(IGTVChannelResponse *)arg3;
@end

