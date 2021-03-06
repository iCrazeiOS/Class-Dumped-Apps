//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSActionsGetLocalTopicWithMessagesAction, DYNSDataUiMessageConverter, DYNSNetworkConnectivityOfflineExceptionHandler, DYNSSyncV2EntitiesCacheResultVerifier, DYNSSyncV2EntitiesEntityManagerUtils, DYNSSyncV2EntitiesGroupEntityManagerRegistry, DYNSSyncV2GetGroupSyncLauncher, DYNSSyncV2SingleTopicSyncLauncher, DYNSSyncV2SubscriptionsUiSubscriptionManager;
@protocol DYNSAnalyticsClearcutEventsLogger, DYNSAnalyticsStopwatchFactory, DYNSNetworkConnectivityNetworkConnectionState, DYNSStorageApiGroupStorageCoordinator, DYNSStorageApiTopicStorageController, DYNSSyncApiSmartReplyManager, JavaxInjectProvider;

@interface DYNSActionsGetTopicWithLatestMessagesAction : NSObject
{
    DYNSSyncV2EntitiesCacheResultVerifier *cacheResultVerifier_;
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    DYNSSyncV2EntitiesEntityManagerUtils *entityManagerUtils_;
    id <JavaxInjectProvider> executorProvider_;
    DYNSSyncV2GetGroupSyncLauncher *getGroupSyncLauncher_;
    DYNSActionsGetLocalTopicWithMessagesAction *getLocalTopicWithMessagesAction_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
    id <DYNSNetworkConnectivityNetworkConnectionState> networkConnectionState_;
    DYNSNetworkConnectivityOfflineExceptionHandler *offlineExceptionHandler_;
    DYNSSyncV2SingleTopicSyncLauncher *singleTopicSyncLauncher_;
    id <DYNSSyncApiSmartReplyManager> smartReplyManager_;
    id <DYNSStorageApiGroupStorageCoordinator> groupStorageCoordinator_;
    id <DYNSAnalyticsStopwatchFactory> stopwatchFactory_;
    id <DYNSStorageApiTopicStorageController> topicStorageController_;
    DYNSDataUiMessageConverter *uiMessageConverter_;
    DYNSSyncV2SubscriptionsUiSubscriptionManager *uiSubscriptionManager_;
}

- (void)dealloc;
- (id)executeWithDYNSCommonTopicId:(id)arg1;

@end

