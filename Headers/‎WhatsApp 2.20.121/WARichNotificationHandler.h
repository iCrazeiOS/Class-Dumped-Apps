//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WANotificationHandler.h"

#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSString;

@interface WARichNotificationHandler : WANotificationHandler <UNUserNotificationCenterDelegate>
{
}

- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)registerUserNotificationSettingsWithActions:(unsigned long long)arg1;
- (id)incomingPendingCallNotificationCategoriesWithActionsEnabled:(_Bool)arg1 categoryOptions:(unsigned long long)arg2;
- (id)notificationActionsForIncomingPendingWithActionsEnabled:(_Bool)arg1;
- (id)incomingCallNotificationCategoriesWithActionsEnabled:(_Bool)arg1 categoryOptions:(unsigned long long)arg2;
- (id)notificationActionsForIncomingWithActionsEnabled:(_Bool)arg1 joinable:(_Bool)arg2;
- (id)initWithChatStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

