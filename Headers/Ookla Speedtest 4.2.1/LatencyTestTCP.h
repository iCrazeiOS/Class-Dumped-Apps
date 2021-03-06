//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpeedTestEngine/ProgressListenerDelegate-Protocol.h>
#import <SpeedTestEngine/StageHTTP-Protocol.h>

@class NSString, TestParametersLatency;
@protocol SuiteRunnerDelegate;

@interface LatencyTestTCP : NSObject <ProgressListenerDelegate, StageHTTP>
{
    NSString *_host;
    unsigned short _port;
    TestParametersLatency *_testParameters;
    _Bool _complete;
    shared_ptr_a6dec8be _suite;
    unsigned long long _numPings;
    unsigned char _threadId;
    double _timeOutSeconds;
    id <SuiteRunnerDelegate> _delegate;
}

@property(nonatomic) __weak id <SuiteRunnerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double timeOutSeconds; // @synthesize timeOutSeconds=_timeOutSeconds;
@property(readonly, nonatomic) unsigned char threadId; // @synthesize threadId=_threadId;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)suite:(shared_ptr_a6dec8be)arg1 didResolveServerIp:(id)arg2 withLocalIpInfo:(const struct IpInfo *)arg3;
- (void)suite:(shared_ptr_a6dec8be)arg1 didFailWithError:(id)arg2;
- (void)suite:(shared_ptr_a6dec8be)arg1 didCompleteWithReading:(const struct Reading *)arg2;
- (void)suite:(shared_ptr_a6dec8be)arg1 gotReading:(const struct Reading *)arg2;
- (void)updateTestParamsWithReading:(const struct Reading *)arg1;
- (void)cancel;
- (_Bool)isComplete;
- (void)startTest;
- (id)initWithDelegate:(id)arg1 host:(id)arg2 size:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

