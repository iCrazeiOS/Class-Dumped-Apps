//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC8libFunny27IFNotificationBannerService : NSObject
{
    // Error parsing type: , name: notificationController
    // Error parsing type: , name: notificationBannerContainer
    // Error parsing type: , name: onCloseNotificationBanner
    // Error parsing type: , name: onHideNotificationBanner
    // Error parsing type: , name: onClickNotificationBanner
}

- (void).cxx_destruct;
- (id)init;
- (void)onHideNotification;
- (void)onClickNotification;
- (void)onCloseNotification;
- (void)showMapNotificationWithText:(id)arg1 openMapAction:(CDUnknownBlockType)arg2;
- (void)showLocationRequestWithUserId:(id)arg1 text:(id)arg2 openAction:(CDUnknownBlockType)arg3;
- (void)showRateAppNotificationWithText:(id)arg1 onClick:(CDUnknownBlockType)arg2 onClose:(CDUnknownBlockType)arg3 onHide:(CDUnknownBlockType)arg4;
- (void)showSubscribersContentUploadedNotificationWithText:(id)arg1 image:(id)arg2 onClick:(CDUnknownBlockType)arg3;
- (void)showContentUploadedNotificationWithText:(id)arg1 image:(id)arg2 onClick:(CDUnknownBlockType)arg3;
- (void)showNewFeaturedNotificationWithText:(id)arg1 onClick:(CDUnknownBlockType)arg2;
- (void)showProlongatorNotificationWithText:(id)arg1 onClick:(CDUnknownBlockType)arg2;
- (void)showInfoNotificationViewWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)showChatNotificationWithContext:(id)arg1 onClick:(CDUnknownBlockType)arg2;
- (void)showChatInviteNotificationWithContext:(id)arg1 onClick:(CDUnknownBlockType)arg2 onAcceptInvite:(CDUnknownBlockType)arg3 onRejectInvite:(CDUnknownBlockType)arg4;
- (void)hideVisibleNotificationWithAnimated:(_Bool)arg1;

@end

