//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectInboxServiceListener-Protocol.h>

@class IGDirectInboxFetchPerformanceLogger, IGDirectIrisNewContentPerformanceLogger, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGDirectInboxServiceFetchLogger : NSObject <IGDirectInboxServiceListener>
{
    IGDirectIrisNewContentPerformanceLogger *_irisNewContentPerformanceLogger;
    IGDirectInboxFetchPerformanceLogger *_fetchPerformanceLogger;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
}

- (void).cxx_destruct;
- (void)_logSuccessRateForFetchAction:(id)arg1 fetchInput:(id)arg2 extra:(id)arg3;
- (void)directInboxServiceFetchResultWasIgnoredDueToSnapshotFetchWithFetchInput:(id)arg1;
- (void)directInboxServiceFetchFailedWithFetchInput:(id)arg1 httpStatusCode:(long long)arg2 error:(id)arg3 willAutoRetry:(_Bool)arg4;
- (void)directInboxServiceFetchSucceededWithFetchInput:(id)arg1 fetchOutput:(id)arg2;
- (void)directInboxServiceDidReceiveInboxFetchPayloadFromNetwork;
- (void)directInboxServiceWillFetchInboxDataWithFetchInput:(id)arg1;
- (void)directInboxServiceWillIgnoreInboxFetchDueToAlreadyRunningFetchWithFetchInput:(id)arg1;
- (id)initWithIrisNewContentPerformanceLogger:(id)arg1 fetchPerformanceLogger:(id)arg2 analyticsLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

