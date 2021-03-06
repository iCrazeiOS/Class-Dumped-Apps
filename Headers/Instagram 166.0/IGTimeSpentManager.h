//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGVideoCallListener-Protocol.h>

@class FBTimer, IGTimeInAppControllerWrapper, IGUserDefaults, IGUserSession, NSString;
@protocol IGConcurrentSessionHandling;

@interface IGTimeSpentManager : NSObject <IGVideoCallListener>
{
    IGTimeInAppControllerWrapper *_controllerWrapper;
    CDUnknownBlockType _reminderBlock;
    NSString *_userPk;
    id <IGConcurrentSessionHandling> _concurrentSessionHandling;
    IGUserSession *_userSession;
    IGUserDefaults *_sessionUserDefaults;
    FBTimer *_triggerReminderTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBTimer *triggerReminderTimer; // @synthesize triggerReminderTimer=_triggerReminderTimer;
@property(readonly, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)_resizeTimePerDayForWeek:(id)arg1;
- (void)videoCallEnded;
- (void)videoCallJoined;
- (void)_triggerTimeSpentReminderDialog;
- (void)_scheduleTimeSpentReminder:(id)arg1;
- (void)_scheduleTimeSpentReminderIfExists;
- (void)clearTimeSpentReminder;
- (void)storeTimeSpentReminder:(id)arg1;
- (id)fetchTimeSpentReminder;
- (id)_reminderKey;
- (id)fetchDailyTimeSpentForToday;
- (id)fetchDailyTimeSpentForWeek;
- (void)stopTracking;
- (void)startTracking;
- (id)initWithUserPk:(id)arg1 concurrentSessionHandling:(id)arg2 videoCallListenerAccouncer:(id)arg3 userDefaults:(id)arg4 analyticsLogger:(id)arg5 experimentSetProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

