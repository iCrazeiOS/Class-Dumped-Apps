//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NRMAMeasurements : NSObject
{
}

+ (void)setBroadcastNewMeasurements:(_Bool)arg1;
+ (id)httpTransactionMeasurementProducer;
+ (id)activityTraceMeasurementProducer;
+ (void)processCurrentSummaryMetricsWithTotalTime:(double)arg1 activityName:(id)arg2;
+ (void)removeMeasurementProducer:(id)arg1;
+ (void)addMeasurementProducer:(id)arg1;
+ (void)removeMeasurementConsumer:(id)arg1;
+ (void)addMeasurementConsumer:(id)arg1;
+ (void)process;
+ (void)broadcastMeasurements;
+ (void)recordHTTPTransactionWithURL:(id)arg1 httpMethod:(id)arg2 startTime:(double)arg3 totalTime:(double)arg4 bytesSent:(long long)arg5 bytesReceived:(long long)arg6 statusCode:(int)arg7 failureCode:(int)arg8 appData:(id)arg9 wanType:(id)arg10 threadInfo:(id)arg11;
+ (void)recordHTTPTransaction:(id)arg1;
+ (void)recordHTTPError:(id)arg1 httpMethod:(id)arg2 timeOfError:(double)arg3 statusCode:(int)arg4 responseBody:(id)arg5 parameters:(id)arg6 wanType:(id)arg7 appData:(id)arg8 threadInfo:(id)arg9;
+ (void)recordHTTPError:(id)arg1;
+ (void)recordSummaryMeasurements:(id)arg1;
+ (void)recordActivityTrace:(id)arg1;
+ (void)recordSessionStartMetric;
+ (void)recordMetric:(id)arg1;
+ (id)recordAndScopeMetricNamed:(id)arg1 value:(id)arg2;
+ (void)recordNetworkMetricsFromMetrics:(id)arg1 forActivity:(id)arg2;
+ (id)recordBackgroundScopedMetricNamed:(id)arg1 value:(id)arg2;
+ (void)shutdown;
+ (void)initializeMeasurements;
+ (id)engine;

@end

