//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/TAVAnalyticsTracker-Protocol.h>

@class NSMutableDictionary, NSString, TAVAnalyticsHeartbeatTrackerPlaythroughState;
@protocol OS_dispatch_queue, TAVAnalyticsEventSink, TAVPlaythroughID;

@interface TAVAnalyticsHeartbeatTracker : NSObject <TAVAnalyticsTracker>
{
    id <TAVAnalyticsEventSink> _sink;
    double _programDateTimeDriftTolerance;
    NSMutableDictionary *_playthroughStates;
    TAVAnalyticsHeartbeatTrackerPlaythroughState *_lastPlaythrough;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    id <TAVPlaythroughID> _lastPlaythroughID;
    CDUnknownBlockType _wallTimeFactory;
    CDUnknownBlockType _timeProvider;
    CDUnknownBlockType _timerFactory;
    CDStruct_1b6d18a9 _discontinuityTolerance;
    CDStruct_1b6d18a9 _heartbeatInterval;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType timerFactory; // @synthesize timerFactory=_timerFactory;
@property(copy, nonatomic) CDUnknownBlockType timeProvider; // @synthesize timeProvider=_timeProvider;
@property(copy, nonatomic) CDUnknownBlockType wallTimeFactory; // @synthesize wallTimeFactory=_wallTimeFactory;
@property(retain, nonatomic) id <TAVPlaythroughID> lastPlaythroughID; // @synthesize lastPlaythroughID=_lastPlaythroughID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(retain, nonatomic) TAVAnalyticsHeartbeatTrackerPlaythroughState *lastPlaythrough; // @synthesize lastPlaythrough=_lastPlaythrough;
@property(retain, nonatomic) NSMutableDictionary *playthroughStates; // @synthesize playthroughStates=_playthroughStates;
@property(readonly, nonatomic) CDStruct_1b6d18a9 heartbeatInterval; // @synthesize heartbeatInterval=_heartbeatInterval;
@property(readonly, nonatomic) double programDateTimeDriftTolerance; // @synthesize programDateTimeDriftTolerance=_programDateTimeDriftTolerance;
@property(readonly, nonatomic) CDStruct_1b6d18a9 discontinuityTolerance; // @synthesize discontinuityTolerance=_discontinuityTolerance;
@property(retain, nonatomic) id <TAVAnalyticsEventSink> sink; // @synthesize sink=_sink;
- (void)private_restartTimerForPlaythrough:(id)arg1;
- (void)setupWithConfiguration:(id)arg1;
- (void)private_fireHeartbeatWithPlaythrough:(id)arg1 isWaiting:(_Bool)arg2;
- (id)private_playthroughStateForPlaybackState:(id)arg1;
- (void)finish;
- (void)processState:(id)arg1;
- (id)initWithDiscontinuityTolerance:(CDStruct_1b6d18a9)arg1 heartbeatInterval:(CDStruct_1b6d18a9)arg2 programDateTimeDriftTolerance:(double)arg3 timerFactory:(CDUnknownBlockType)arg4 wallTimeFactory:(CDUnknownBlockType)arg5;
- (id)initWithHeartbeatInterval:(CDStruct_1b6d18a9)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

