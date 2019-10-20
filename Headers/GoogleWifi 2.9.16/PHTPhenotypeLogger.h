//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCTClearcutAutoCountersDelegate-Protocol.h"

@class CCTClearcutAutoCounters, GIPPseudonymousIDStore, NSString, NSURL;
@protocol CCTClockProtocol, PHTPhenotypeFlagsProtocol;

@interface PHTPhenotypeLogger : NSObject <CCTClearcutAutoCountersDelegate>
{
    id <PHTPhenotypeFlagsProtocol> _flags;
    id <CCTClockProtocol> _clock;
    GIPPseudonymousIDStore *_pseudonymousIDStore;
    NSURL *_clearcutLogDirectory;
    CCTClearcutAutoCounters *_autoCounters;
}

@property(retain, nonatomic) CCTClearcutAutoCounters *autoCounters; // @synthesize autoCounters=_autoCounters;
@property(retain, nonatomic) NSURL *clearcutLogDirectory; // @synthesize clearcutLogDirectory=_clearcutLogDirectory;
@property(retain, nonatomic) GIPPseudonymousIDStore *pseudonymousIDStore; // @synthesize pseudonymousIDStore=_pseudonymousIDStore;
@property(retain, nonatomic) id <CCTClockProtocol> clock; // @synthesize clock=_clock;
@property(retain, nonatomic) id <PHTPhenotypeFlagsProtocol> flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (void)logWithLogSource:(long long)arg1 extension:(id)arg2 eventCode:(id)arg3;
- (_Bool)logEvents;
- (void)flushCountersToLogger;
- (void)logOperationEventWithExtension:(id)arg1 eventCode:(id)arg2;
- (void)increaseCounterWithName:(id)arg1 bucket:(long long)arg2 amount:(long long)arg3;
- (void)increaseCounterWithName:(id)arg1;
- (void)logCounters:(id)arg1;
- (long long)maxCounterCount;
- (_Bool)shouldLogCounters;
- (id)initWithClock:(id)arg1 clearcutLogDirectory:(id)arg2 pseudonymousIDStore:(id)arg3 flags:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

