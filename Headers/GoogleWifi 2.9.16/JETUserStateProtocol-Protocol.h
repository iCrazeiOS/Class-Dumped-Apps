//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTLRAccesspoints_UserPreferences, GTMSessionFetcherService, JETAccessPointGroup, JETContactsClient, JETFactoryResettingGroup, JETGroupStateCache, JETInsightsDataCache, JETNotificationsClient, JETPersistentStorageManager, JETUsageWindow, JETUserUpdateGroupOperationQueue, NSArray, NSDictionary, NSString, SSOIdentity;
@protocol JETConsentLoggingService, JETHalfcourtClient;

@protocol JETUserStateProtocol <NSObject>

@optional
- (_Bool)isSingleOptInForEmails;
- (_Bool)isDoubleOptInForEmails;
- (long long)offersEmailNotificationOptInStatus;
- (long long)updatesEmailNotificationOptInStatus;
- (JETGroupStateCache *)groupStatusCacheForGroup:(NSString *)arg1;
- (JETInsightsDataCache *)insightsDataCacheForGroup:(NSString *)arg1;
- (void)invalidateHalfcourtState;
- (void)refreshUserPreferencesWithCompletion:(void (^)(GTLRAccesspoints_UserPreferences *, NSError *))arg1;
- (JETAccessPointGroup *)findGroupWithIdentifier:(NSString *)arg1;
- (void)selectAccessPointGroupWithID:(NSString *)arg1;
- (void)refreshGroup:(NSString *)arg1 withCallback:(void (^)(JETAccessPointGroup *, NSError *))arg2;
- (void)refreshGroupListWithCallback:(void (^)(NSError *))arg1;
- (NSArray *)loadCachedGroupListFromStorageManager:(JETPersistentStorageManager *)arg1;
- (void)forceRefreshGroupListWithCallback:(void (^)(NSError *))arg1;
@property(nonatomic, readonly) int maxAllowedDevices;
@property(nonatomic) _Bool usingCachedGroupList;
@property(nonatomic, readonly) GTLRAccesspoints_UserPreferences *userPreferences;
@property(nonatomic, retain) JETUsageWindow *usageWindow;
@property(nonatomic, readonly) JETUserUpdateGroupOperationQueue *updateOperationQueue;
@property(nonatomic) _Bool signInCompleted;
@property(nonatomic) _Bool showMACAddressInNetworkDetails;
@property(nonatomic, readonly) NSString *selectedAccessPointGroupID;
@property(nonatomic, readonly) JETNotificationsClient *notificationsClient;
@property(nonatomic, copy) NSDictionary *latestMeshTestResults;
@property(nonatomic, retain) SSOIdentity *identity;
@property(nonatomic, readonly) GTMSessionFetcherService *helpKitFetcherService;
@property(nonatomic, readonly) id <JETHalfcourtClient> halfcourtClient;
@property(nonatomic) long long GUNSRegistrationState;
@property(nonatomic) long long groupListRefreshState;
@property(nonatomic, retain) JETFactoryResettingGroup *factoryResettingGroup;
@property(nonatomic, readonly) JETContactsClient *contactsClient;
@property(nonatomic, readonly) id <JETConsentLoggingService> consentLoggingService;
@property(nonatomic, readonly) NSArray *availableGroups;
@end

