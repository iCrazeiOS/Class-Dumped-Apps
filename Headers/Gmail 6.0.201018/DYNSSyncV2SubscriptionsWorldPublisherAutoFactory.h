//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JavaxInjectProvider;

@interface DYNSSyncV2SubscriptionsWorldPublisherAutoFactory : NSObject
{
    id <JavaxInjectProvider> buildTypeProvider_;
    id <JavaxInjectProvider> appFocusStateTrackerProvider_;
    id <JavaxInjectProvider> lifecycleProvider_;
    id <JavaxInjectProvider> clearcutStreamzLoggerProvider_;
    id <JavaxInjectProvider> conversationSuggestionsStorageControllerProviderProvider_;
    id <JavaxInjectProvider> debugManagerProvider_;
    id <JavaxInjectProvider> dynamiteClockProvider_;
    id <JavaxInjectProvider> dbThrottlerFactoryProvider_;
    id <JavaxInjectProvider> executorProviderProvider_;
    id <JavaxInjectProvider> filterProvider_;
    id <JavaxInjectProvider> groupSummaryFreshnessOrderComparatorProvider_;
    id <JavaxInjectProvider> localGroupViewedEventObservableProvider_;
    id <JavaxInjectProvider> serverTimeProvider_;
    id <JavaxInjectProvider> uiGroupSummariesConverterProvider_;
    id <JavaxInjectProvider> worldDataUpdatedEventObservableProvider_;
    id <JavaxInjectProvider> worldSubscriptionShouldRefreshEventObservableProvider_;
    id <JavaxInjectProvider> worldStorageCoordinatorProvider_;
    id <JavaxInjectProvider> worldSyncEngineProvider_;
}

- (void)dealloc;
- (id)createWithComGoogleAppsXplatObserveSettable:(id)arg1 withDYNSUIModelsWorldConfig:(id)arg2;

@end

