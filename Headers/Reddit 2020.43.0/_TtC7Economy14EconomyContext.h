//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Account, ExperimentManager, InAppPurchaseManager, VisibilityTracker, _TtC7Economy12CoinsService, _TtC7Economy14ServiceLocator, _TtC7Economy15AwardingService, _TtC7Economy15PowerupsService, _TtC7Economy17PredictionService, _TtC7Economy19EconProductsService, _TtC7Economy24AwardsLeaderboardService, _TtC7Economy27WebViewAuthorizationService;
@protocol _TtP18AnalyticsFramework15AnalyticsLogger_, _TtP7Economy11EconConfigs_, _TtP7Economy15EconAppSettings_, _TtP7Economy19EconAccountSettings_, _TtP7Economy19EconAnalyticsLogger_, _TtP7Economy24EconomyExternalUIFactory_;

@interface _TtC7Economy14EconomyContext : NSObject
{
    // Error parsing type: , name: accountId
    // Error parsing type: , name: serviceLocator
    // Error parsing type: , name: externalUIFactory
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) ExperimentManager *experimentManager;
@property(nonatomic, readonly) _TtC7Economy27WebViewAuthorizationService *webViewAuthorizationService;
@property(nonatomic, readonly) _TtC7Economy17PredictionService *predictionsService;
@property(nonatomic, readonly) _TtC7Economy24AwardsLeaderboardService *awardsLeaderboardService;
@property(nonatomic, readonly) id <_TtP7Economy19EconAnalyticsLogger_> econAnalyticsLogger;
@property(nonatomic, readonly) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(nonatomic, readonly) id <_TtP7Economy15EconAppSettings_> econAppSettings;
@property(nonatomic, readonly) Account *account;
- (id)snoovatarEventsLoggerWithCorrelationID:(id)arg1;
- (id)powerupsEventsLoggerWithCorrelationID:(id)arg1;
@property(nonatomic, readonly) id <_TtP7Economy11EconConfigs_> configs;
@property(nonatomic, readonly) id <_TtP7Economy19EconAccountSettings_> econAccountSettings;
@property(nonatomic, readonly) VisibilityTracker *visibilityTracker;
@property(nonatomic, readonly) _TtC7Economy19EconProductsService *econProductsService;
@property(nonatomic, readonly) _TtC7Economy15PowerupsService *powerupsService;
@property(nonatomic, readonly) _TtC7Economy15AwardingService *awardingService;
@property(nonatomic, readonly) _TtC7Economy12CoinsService *coinsService;
@property(nonatomic, readonly) InAppPurchaseManager *inAppPurchaseManager;
- (id)initWithAccountPK:(id)arg1;
@property(nonatomic, retain) id <_TtP7Economy24EconomyExternalUIFactory_> externalUIFactory; // @synthesize externalUIFactory;
@property(nonatomic, readonly) _TtC7Economy14ServiceLocator *serviceLocator; // @synthesize serviceLocator;
- (id)awardDetailsEventLoggerWithPost:(id)arg1 comment:(id)arg2 correlationID:(id)arg3;
- (id)econGlobalEventLoggerWithCorrelationID:(id)arg1;
- (id)coinMarketingEventLoggerWithStorefrontOffer:(long long)arg1 correlationID:(id)arg2;
- (id)premiumMarketingEventLoggerWithCorrelationID:(id)arg1;

@end

