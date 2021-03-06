//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGSnapshotProtcol-Protocol.h>

@class IBGCountLimitedArray, NSRecursiveLock, NSString;
@protocol IBGEventLoggerObserver;

@interface IBGEventLogger : NSObject <IBGSnapshotProtcol>
{
    id <IBGEventLoggerObserver> _observer;
    IBGCountLimitedArray *_stateEventLogs;
    NSRecursiveLock *_lock;
}

+ (id)dataLayerService;
+ (void)destroy;
+ (id)sharedInstance;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) IBGCountLimitedArray *stateEventLogs; // @synthesize stateEventLogs=_stateEventLogs;
@property(nonatomic) __weak id <IBGEventLoggerObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)eventLogsQueue;
- (void)waitForAllAsyncTasksToFinish;
- (void)loadSnapshotAsyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadSnapshotSynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearOldLogs;
- (void)clearAllLogs;
- (void)loadSnapshotSynchronously:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)stateLogs;
- (void)clearAllStateEventLogs;
- (void)deleteEventsForUserWithUUID:(id)arg1;
- (void)migrateEventsFromUUID:(id)arg1 toUUID:(id)arg2;
- (void)migrateEventsToUserWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addEventLogWithName:(id)arg1 params:(id)arg2 date:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addEventLogWithName:(id)arg1 params:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addEventLogWithName:(id)arg1 params:(id)arg2 date:(id)arg3;
- (void)addEventLogWithName:(id)arg1 params:(id)arg2;
- (void)purgeOldLogs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

