//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WJMetricsHelper;

@interface WJWIFIConfigurationMetrics : NSObject
{
    WJMetricsHelper *_metricsHelper;
    NSMutableArray *_stack;
}

@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
@property(retain, nonatomic) WJMetricsHelper *metricsHelper; // @synthesize metricsHelper=_metricsHelper;
- (void).cxx_destruct;
- (void)onConfiguredNetworkConnected;
- (void)trackNetworkConfigurationSaved:(id)arg1;
- (void)trackNetworkConfigurationFailure:(id)arg1;
- (void)trackNetworkConfigurationSuccess:(id)arg1;
- (void)trackDiscoveredNetwork:(id)arg1;
- (id)initWithMetricsHelper:(id)arg1;

@end

