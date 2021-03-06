//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTPrimesMonitoringService-Protocol.h"

@class GBTSapiMetricsListener, NSString, PRMMetricKitContinuousCollectible;
@protocol GBTPrimesMonitoringServiceImplDeps;

@interface GBTPrimesMonitoringServiceImpl : NSObject <GBTPrimesMonitoringService>
{
    id <GBTPrimesMonitoringServiceImplDeps> _deps;
    _Bool _metricKitCollectorStarted;
    PRMMetricKitContinuousCollectible *_metricKitContinuousCollectible;
    GBTSapiMetricsListener *_sapiMetricsListener;
    _Bool _memoryUsageMonitoringStarted;
}

+ (void)load;
- (void).cxx_destruct;
@property(nonatomic) _Bool memoryUsageMonitoringStarted; // @synthesize memoryUsageMonitoringStarted=_memoryUsageMonitoringStarted;
- (id)eventNameForBatteryMetrics;
- (void)collectMemoryUsageWithEventName:(id)arg1;
- (void)setupAndStartMemoryUsageCollector;
- (void)startMemoryUsageMonitoring;
- (void)startMetricKitUsageCollector;
- (void)collectCPUUsageWithEventName:(id)arg1;
- (void)collectLaunchTimeWithEventName:(id)arg1;
- (void)setupPrimesMonitoring;
- (id)initWithDeps:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

