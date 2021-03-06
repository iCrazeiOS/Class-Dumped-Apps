//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSSyncV2SubscriptionsTypingStatePublisher_TypingStatePublisherFactoryInterface-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface DYNSSyncV2SubscriptionsTypingStatePublisherFactory : NSObject <DYNSSyncV2SubscriptionsTypingStatePublisher_TypingStatePublisherFactoryInterface>
{
    id <JavaxInjectProvider> accountUserProvider_;
    id <JavaxInjectProvider> dynamiteClockProvider_;
    id <JavaxInjectProvider> executorProvider_;
    id <JavaxInjectProvider> subscriptionsLifecycleProvider_;
    id <JavaxInjectProvider> typingStateChangedObservableProvider_;
    id <JavaxInjectProvider> serverTimeProvider_;
    id <JavaxInjectProvider> scheduledExecutorServiceProvider_;
    id <JavaxInjectProvider> typingStateSubscriptionTrackerProvider_;
}

- (void)dealloc;
- (id)createWithComGoogleAppsXplatObserveSettable:(id)arg1 withJavaUtilOptional:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

