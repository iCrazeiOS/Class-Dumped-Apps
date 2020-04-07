//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MXMetricManagerSubscriber-Protocol.h"

@class MXMetricManager, NSString;

@interface SPTMetricCollector : NSObject <MXMetricManagerSubscriber>
{
    MXMetricManager *_metricManager;
    CDUnknownBlockType _callbackHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType callbackHandler; // @synthesize callbackHandler=_callbackHandler;
@property(readonly, nonatomic) MXMetricManager *metricManager; // @synthesize metricManager=_metricManager;
- (void).cxx_destruct;
- (void)didReceiveMetricPayloads:(id)arg1;
- (void)stopCollecting;
- (void)startCollecting;
- (id)initWithMetricManager:(id)arg1 callbackHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

