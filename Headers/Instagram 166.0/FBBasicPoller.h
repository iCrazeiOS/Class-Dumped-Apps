//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBPoller-Protocol.h>

@class NSString;
@protocol FBPollerTarget, OS_dispatch_source;

@interface FBBasicPoller : NSObject <FBPoller>
{
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _suspensionReasons;
    unsigned long long _interval;
    NSString *_logCounter;
    NSString *_eventName;
    id <FBPollerTarget> _target;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPollerTarget> target; // @synthesize target=_target;
- (void)_timerFired;
- (void)_updateTimer;
- (void)removeSuspensionReason:(unsigned long long)arg1;
- (void)addSuspensionReason:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithPollingInterval:(unsigned long long)arg1 logCounter:(id)arg2 eventName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

