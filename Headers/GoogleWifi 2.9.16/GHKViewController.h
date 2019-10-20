//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GHKBaseViewController.h"

#import "FKFeedbackServiceDelegate-Protocol.h"
#import "GHKChatViewControllerDelegate-Protocol.h"
#import "GHKEscalationOptionsSectionDelegate-Protocol.h"
#import "GHKOfflineManagerDelegate-Protocol.h"
#import "GHKRequestCallbackViewControllerDelegate-Protocol.h"
#import "GHKRequestChatViewControllerDelegate-Protocol.h"
#import "GHKSearchViewControllerDelegate-Protocol.h"
#import "GHKURLOpenerDelegate-Protocol.h"
#import "SUPActivityIndicationViewDelegate-Protocol.h"

@class GHKCache, GHKChatFetcher, GHKChatSessionData, GHKConfig, GHKConfigurationsFetcher, GHKConnectivity, GHKEmailEscalationOption, GHKEscalationOptionsFetcher, GHKEscalationOptionsSection, GHKIndexCounter, GHKOfflineBarView, GHKOfflineBundleManager, GHKOfflineManager, GHKReceiverConfig, GHKRecommendationsFetcher, GHKRecommendationsSection, GHKSearchInputButton, GHKSessionDataManager, GHKURLOpener, GHKUserStates, NSArray, NSMutableDictionary, NSString, SUPActionManager, SUPActivityIndicationView, SUPMetricsReporter, SUPSupportContentService, SUPSupportContentUnit, UIView;
@protocol GHKViewControllerDelegate, GHKViewControllerInternalDelegate;

@interface GHKViewController : GHKBaseViewController <FKFeedbackServiceDelegate, GHKEscalationOptionsSectionDelegate, GHKChatViewControllerDelegate, GHKOfflineManagerDelegate, GHKRequestCallbackViewControllerDelegate, GHKRequestChatViewControllerDelegate, GHKSearchViewControllerDelegate, GHKURLOpenerDelegate, SUPActivityIndicationViewDelegate>
{
    GHKRecommendationsSection *_recommendationsSection;
    GHKEscalationOptionsSection *_escalationOptionsSection;
    NSMutableDictionary *_viewSectionLookup;
    NSMutableDictionary *_loadConditions;
    NSArray *_contextualRecommendations;
    NSArray *_escalationOptions;
    GHKIndexCounter *_indexCounter;
    SUPSupportContentUnit *_feelingLuckyArticle;
    GHKChatSessionData *_chatSessionData;
    GHKEmailEscalationOption *_prefecthEmailFormOption;
    GHKOfflineManager *_offlineManager;
    _Bool _contextualRecommendationsMetricsSent;
    _Bool _escalationOptionsMetricsSent;
    _Bool _requestingChat;
    SUPActivityIndicationView *_activityIndicationView;
    GHKOfflineBarView *_offlineBarView;
    _Bool _contentInsetNeedsAdjustment;
    UIView *_statusBarBackgroudView;
    _Bool _showingBundledRecommendations;
    _Bool _showingBundledFeelingLuckyArticle;
    id <GHKViewControllerDelegate> _delegate;
    id <GHKViewControllerInternalDelegate> _internalDelegate;
    SUPActionManager *_actionManager;
    GHKChatFetcher *_chatFetcher;
    GHKCache *_cache;
    GHKConfig *_config;
    GHKConfigurationsFetcher *_configurationsFetcher;
    GHKConnectivity *_connectivity;
    GHKEscalationOptionsFetcher *_escalationsFetcher;
    SUPMetricsReporter *_metricsReporter;
    GHKOfflineBundleManager *_offlineBundleManager;
    GHKReceiverConfig *_receiverConfig;
    GHKRecommendationsFetcher *_recommendationsFetcher;
    GHKSessionDataManager *_sessionDataManager;
    GHKURLOpener *_URLOpener;
    GHKUserStates *_userStates;
    SUPSupportContentService *_contentService;
    GHKSearchInputButton *_searchInputButton;
    UIView *_searchInputButtonContainerView;
}

+ (id)objectionRequires;
@property(retain, nonatomic) UIView *searchInputButtonContainerView; // @synthesize searchInputButtonContainerView=_searchInputButtonContainerView;
@property(retain, nonatomic) GHKSearchInputButton *searchInputButton; // @synthesize searchInputButton=_searchInputButton;
@property(nonatomic) _Bool showingBundledFeelingLuckyArticle; // @synthesize showingBundledFeelingLuckyArticle=_showingBundledFeelingLuckyArticle;
@property(nonatomic) _Bool showingBundledRecommendations; // @synthesize showingBundledRecommendations=_showingBundledRecommendations;
@property(retain, nonatomic) SUPSupportContentService *contentService; // @synthesize contentService=_contentService;
@property(retain, nonatomic) GHKUserStates *userStates; // @synthesize userStates=_userStates;
@property(retain, nonatomic) GHKURLOpener *URLOpener; // @synthesize URLOpener=_URLOpener;
@property(retain, nonatomic) GHKSessionDataManager *sessionDataManager; // @synthesize sessionDataManager=_sessionDataManager;
@property(retain, nonatomic) GHKRecommendationsFetcher *recommendationsFetcher; // @synthesize recommendationsFetcher=_recommendationsFetcher;
@property(retain, nonatomic) GHKReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) GHKOfflineBundleManager *offlineBundleManager; // @synthesize offlineBundleManager=_offlineBundleManager;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) GHKEscalationOptionsFetcher *escalationsFetcher; // @synthesize escalationsFetcher=_escalationsFetcher;
@property(retain, nonatomic) GHKConnectivity *connectivity; // @synthesize connectivity=_connectivity;
@property(retain, nonatomic) GHKConfigurationsFetcher *configurationsFetcher; // @synthesize configurationsFetcher=_configurationsFetcher;
@property(retain, nonatomic) GHKConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) GHKCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) GHKChatFetcher *chatFetcher; // @synthesize chatFetcher=_chatFetcher;
@property(retain, nonatomic) SUPActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(nonatomic) __weak id <GHKViewControllerInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) __weak id <GHKViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateSearchInputViewPosition;
- (void)updateStatusBarBackground;
- (void)onOrientationChanged;
- (_Bool)shouldRestoreChat;
- (void)exitFromHelpKit:(unsigned long long)arg1 exitStatus:(long long)arg2;
- (void)sendContactUsClickedMetrics:(long long)arg1 subUserAction:(int)arg2 contactMode:(int)arg3;
- (void)updateEscalationOptionsSubView:(id)arg1;
- (void)updateContextualRecommendationsSubView:(id)arg1;
- (void)updateView;
- (void)showOfflineBar;
- (void)updateRecommendationsSectionWithHelpUnits:(id)arg1;
- (void)openChatView;
- (void)handleFeelingLuckyArticle:(id)arg1;
- (void)removeLoadingConditions;
- (void)processLoadConditionStatesAndUpdateView;
- (void)updateLoadConditionWithKey:(id)arg1 state:(long long)arg2;
- (void)openFallbackURLAndCloseHelpKit;
- (void)GHK_didTapSearchButton;
- (void)GHK_didTapBackButton;
- (void)configureSupportContentConfig;
- (void)configureFlowAndSessionID;
- (void)prefetchEmailFormIfNecessary;
- (void)fetchEscalationOptions;
- (void)fetchSupportConfigurations;
- (void)fetchContextualRecommendations;
- (void)updateEscalationOptionsSectionWithEscalationOptions:(id)arg1;
- (void)updateFeelingLuckyArticle:(id)arg1;
- (void)updateEscalationOptions:(id)arg1;
- (void)updateContextualRecommendations:(id)arg1;
- (void)showToastMessageAndExitHelpKit:(id)arg1;
- (void)handleOpenDirectEmailRequest;
- (void)handleOpenDirectChatRequest;
- (void)restoreChatSession;
- (id)feedbackViewController;
- (void)handleTapOnSendFeedbackEscalationOption:(id)arg1 reportMetrics:(_Bool)arg2;
- (void)handleTapOnRequestChatEscalationOption:(id)arg1 clickRank:(long long)arg2 reportMetrics:(_Bool)arg3;
- (void)handleTapOnRequestCallbackEscalationOption:(id)arg1 clickRank:(long long)arg2 reportMetrics:(_Bool)arg3;
- (void)handleTapOnEmailEscalationOption:(id)arg1 clickRank:(long long)arg2 reportMetrics:(_Bool)arg3;
- (void)handleInvalidPhoneNumber:(id)arg1;
- (void)handleTapOnPhoneEscalationOption:(id)arg1 clickRank:(long long)arg2 reportMetrics:(_Bool)arg3;
- (_Bool)openDirectEscalationOption;
- (void)handleEscalationOptionAtClickRank:(long long)arg1 reportMetrics:(_Bool)arg2;
- (_Bool)handleEscalationOption:(id)arg1 clickRank:(long long)arg2 reportMetrics:(_Bool)arg3;
- (void)handleRecommendationAtClickRank:(long long)arg1;
- (void)nativeEmailContactFormViewControllerQuickExit:(unsigned long long)arg1 exitStatus:(long long)arg2;
- (void)didTapCancelButton;
- (_Bool)feedbackKitShouldOpenURLInExternalBrowser:(id)arg1;
- (_Bool)shouldOpenURL:(id)arg1;
- (void)attemptOfflineRecovery;
- (void)chatViewQuickExit:(unsigned long long)arg1;
- (void)GCMToken:(CDUnknownBlockType)arg1;
- (void)transitionToChatView:(unsigned long long)arg1;
- (void)requestChatViewQuickExit:(unsigned long long)arg1 exitStatus:(long long)arg2;
- (void)requestCallbackViewQuickExit:(unsigned long long)arg1 exitStatus:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onSearchInputAttempt;
- (void)onSectionUpdated;
- (void)webViewQuickExit:(unsigned long long)arg1 exitStatus:(long long)arg2;
- (void)webViewControllerBackButtonTapped:(unsigned long long)arg1;
- (void)searchViewQuickExit:(unsigned long long)arg1 exitStatus:(long long)arg2;
- (void)searchViewControllerBackButtonTapped:(unsigned long long)arg1;
- (void)searchViewCUFHelpUnitTapped:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDebugToastMessaging:(_Bool)arg1;
- (void)setCheckCellularService:(_Bool)arg1;
- (void)setSupportContentHostURLOverride:(id)arg1;
- (void)setHelpReceiverHostURL:(id)arg1;
- (void)setHelpAppBundleID:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewWillLayoutSubviews;
- (_Bool)prefersStatusBarHidden;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithProductID:(id)arg1 fetcherService:(id)arg2;
- (id)initWithAPIConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

