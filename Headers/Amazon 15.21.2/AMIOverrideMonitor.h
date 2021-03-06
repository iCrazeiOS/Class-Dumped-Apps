//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMIMonitor.h"

@class NSMutableDictionary;

@interface AMIOverrideMonitor : AMIMonitor
{
    AMIMonitor *_monitor;
    NSMutableDictionary *_defaultParameters;
}

@property(readonly, nonatomic) NSMutableDictionary *defaultParameters; // @synthesize defaultParameters=_defaultParameters;
@property(readonly, nonatomic) AMIMonitor *monitor; // @synthesize monitor=_monitor;
- (void).cxx_destruct;
- (void)stopQueueingEvents;
- (void)startQueueingEvents;
- (void)stopBuffering;
- (void)startBuffering;
- (unsigned long long)maxBufferEventCount;
- (void)setMaxBufferEventCount:(unsigned long long)arg1;
- (void)removeObserver:(id)arg1;
- (id)addObserverForEventsWithTrigger:(id)arg1 includePriorEvents:(_Bool)arg2 observer:(CDUnknownBlockType)arg3;
- (void)logEvent:(id)arg1;
- (id)initWithMonitor:(id)arg1;
- (id)AMIMonitor_ClassificationFiltering_urlFilter;
- (void)setAMIMonitor_ClassificationFiltering_urlFilter:(id)arg1;

@end

