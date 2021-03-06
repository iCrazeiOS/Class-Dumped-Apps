//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplCommonInteractionRecorder-Protocol.h"

@class ComGoogleAppsBigtopServicesSearchSearchMetricsProto_SearchClick_ResultSource, ComGoogleAppsBigtopServicesSearchSearchMetricsProto_Section, ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, NSString;
@protocol ComGoogleAppsBigtopDataNetworkSyncserverApiClickMetricsSender, DaggerLazy, JBTId;

@interface ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchInteractionRecorder : NSObject <ComGoogleAppsBigtopSyncClientImplCommonInteractionRecorder>
{
    id <ComGoogleAppsBigtopDataNetworkSyncserverApiClickMetricsSender> metricsRequestSender_;
    id <DaggerLazy> zeroStateSuggestionsCache_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    id <JBTId> itemId_;
    NSString *sessionId_;
    int indexInSection_;
    ComGoogleAppsBigtopServicesSearchSearchMetricsProto_SearchClick_ResultSource *resultSource_;
    ComGoogleAppsBigtopServicesSearchSearchMetricsProto_Section *section_;
    NSString *serializedEventId_;
}

+ (void)initialize;
- (void)dealloc;
- (void)logInteractionWithJBTInteractionType:(id)arg1;
- (void)logFeedbackWithJavaUtilSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

