//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCPartnerSharingAutoSaveSettingsMask, PhotosMCPartnerSharingIncomingInfoMask_ViewStateMask, PhotosMCPartnerSharingIncomingNotificationSettingsMask, PhotosMCPartnerSharingStatusMask;

@interface PhotosMCPartnerSharingIncomingInfoMask : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCPartnerSharingAutoSaveSettingsMask *autoSaveSettings; // @dynamic autoSaveSettings;
@property(nonatomic) _Bool hasAutoSaveSettings; // @dynamic hasAutoSaveSettings;
@property(nonatomic) _Bool hasNotificationSettings; // @dynamic hasNotificationSettings;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasViewState; // @dynamic hasViewState;
@property(retain, nonatomic) PhotosMCPartnerSharingIncomingNotificationSettingsMask *notificationSettings; // @dynamic notificationSettings;
@property(retain, nonatomic) PhotosMCPartnerSharingStatusMask *status; // @dynamic status;
@property(retain, nonatomic) PhotosMCPartnerSharingIncomingInfoMask_ViewStateMask *viewState; // @dynamic viewState;

@end

