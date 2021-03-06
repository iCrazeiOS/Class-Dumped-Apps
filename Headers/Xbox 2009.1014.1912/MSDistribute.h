//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSServiceAbstract.h"

#import "MSServiceInternal-Protocol.h"

@class MSAlertController, MSChannelUnitConfiguration, MSDistributeInfoTracker, MSDistributeIngestion, MSReleaseDetails, NSString, UIViewController;
@protocol MSChannelGroupProtocol, MSChannelUnitProtocol, MSCustomApplicationDelegate, MSDistributeDelegate;

@interface MSDistribute : MSServiceAbstract <MSServiceInternal>
{
    MSChannelUnitConfiguration *_channelUnitConfiguration;
    UIViewController *_safariHostingViewController;
    MSAlertController *_updateAlertController;
    MSReleaseDetails *_releaseDetails;
    id <MSDistributeDelegate> _delegate;
    id <MSCustomApplicationDelegate> _appDelegate;
    id _authenticationSession;
    MSDistributeInfoTracker *_distributeInfoTracker;
    NSString *_installUrl;
    NSString *_apiUrl;
    MSDistributeIngestion *_ingestion;
}

+ (void)setDelegate:(id)arg1;
+ (void)notifyUpdateAction:(long long)arg1;
+ (_Bool)openURL:(id)arg1;
+ (void)setInstallUrl:(id)arg1;
+ (void)setApiUrl:(id)arg1;
+ (id)logTag;
+ (id)serviceName;
+ (id)sharedInstance;
@property(retain, nonatomic) MSDistributeIngestion *ingestion; // @synthesize ingestion=_ingestion;
@property(copy, nonatomic) NSString *apiUrl; // @synthesize apiUrl=_apiUrl;
@property(copy, nonatomic) NSString *installUrl; // @synthesize installUrl=_installUrl;
@property(retain, nonatomic) MSDistributeInfoTracker *distributeInfoTracker; // @synthesize distributeInfoTracker=_distributeInfoTracker;
@property(retain, nonatomic) id authenticationSession; // @synthesize authenticationSession=_authenticationSession;
@property(retain, nonatomic) id <MSCustomApplicationDelegate> appDelegate; // @synthesize appDelegate=_appDelegate;
@property(nonatomic) __weak id <MSDistributeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MSReleaseDetails *releaseDetails; // @synthesize releaseDetails=_releaseDetails;
@property(retain, nonatomic) MSAlertController *updateAlertController; // @synthesize updateAlertController=_updateAlertController;
@property(retain, nonatomic) UIViewController *safariHostingViewController; // @synthesize safariHostingViewController=_safariHostingViewController;
@property(retain, nonatomic) MSChannelUnitConfiguration *channelUnitConfiguration; // @synthesize channelUnitConfiguration=_channelUnitConfiguration;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (_Bool)openURL:(id)arg1;
- (void)closeApp;
- (void)startDownload:(id)arg1;
- (void)showUpdateSetupFailedAlert:(id)arg1;
- (void)showDistributeDisabledAlert;
- (void)showConfirmationAlert:(id)arg1;
- (void)changeDistributionGroupIdAfterAppUpdateIfNeeded:(id)arg1;
- (id)getReportingParametersForUpdatedRelease:(id)arg1 currentInstalledReleaseHash:(id)arg2 distributionGroupId:(id)arg3;
- (void)removeDownloadedReleaseDetailsIfUpdated:(id)arg1;
- (void)storeDownloadedReleaseDetails:(id)arg1;
- (_Bool)isNewerVersion:(id)arg1;
- (_Bool)checkForUpdatesAllowed;
- (_Bool)handleUpdate:(id)arg1;
- (void)dismissEmbeddedSafari;
- (void)openURLInSafariViewControllerWith:(id)arg1 fromClass:(Class)arg2;
- (void)openURLInAuthenticationSessionWith:(id)arg1;
- (void)openUrlInAuthenticationSessionOrSafari:(id)arg1;
- (_Bool)openUrlUsingSharedApp:(id)arg1;
- (id)buildTokenRequestURLWithAppSecret:(id)arg1 releaseHash:(id)arg2 isTesterApp:(_Bool)arg3;
- (_Bool)checkURLSchemeRegistered:(id)arg1;
- (void)checkLatestRelease:(id)arg1 distributionGroupId:(id)arg2 releaseHash:(id)arg3;
- (void)requestInstallInformationWith:(id)arg1;
- (void)startUpdate;
- (void)sendFirstSessionUpdateLog;
- (void)startWithChannelGroup:(id)arg1 appSecret:(id)arg2 transmissionTargetToken:(id)arg3 fromApplication:(_Bool)arg4;
- (void)notifyUpdateAction:(long long)arg1;
- (void)applyEnabledState:(_Bool)arg1;
@property(readonly, nonatomic) long long initializationPriority;
@property(readonly, copy, nonatomic) NSString *groupId;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *appSecret;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
@property(retain, nonatomic) id <MSChannelGroupProtocol> channelGroup;
@property(retain, nonatomic) id <MSChannelUnitProtocol> channelUnit;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSString *defaultTransmissionTargetToken;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

