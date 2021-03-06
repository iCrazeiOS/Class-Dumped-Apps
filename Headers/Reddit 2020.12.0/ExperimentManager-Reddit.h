//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/ExperimentManager.h>

@class NSString;

@interface ExperimentManager (Reddit)
- (_Bool)shouldPinActionBarToBottom;
- (_Bool)isImposterHeaderEmbedEnabled;
- (_Bool)isImposterMainTabNavigationEnabled;
@property(readonly, nonatomic) _Bool isPollCreationEnabled;
- (void)exposeAnonymousBrowsingMode;
@property(nonatomic) _Bool isInAnonymousBrowsing;
- (id)anonymousBrowsingExperimentName;
@property(readonly, nonatomic) _Bool isAnonymousBrowsingEnabled;
@property(readonly, nonatomic) _Bool isCollectionInFeedEnabled;
@property(readonly, nonatomic) long long sharePausePromptVariant;
@property(readonly, nonatomic) long long redditSharesVariant;
@property(readonly, nonatomic) _Bool isSeparationFromAdsEnabled;
@property(readonly, nonatomic) _Bool isRPANMetalHKViewEnabled;
@property(readonly, nonatomic) long long rpanEntryPointUIVariant;
@property(readonly, nonatomic) long long rpanSuperScrubberVariant;
@property(readonly, nonatomic) long long rpanEntryPointCopyVariant;
@property(readonly, nonatomic) _Bool isRPANBroadcasterPromptEnabled;
@property(readonly, nonatomic) _Bool isRPANBroadcasterUIRefreshEnabled;
@property(readonly, nonatomic) _Bool isRPANViewerUIRefreshEnabled;
@property(readonly, nonatomic) _Bool isStreamingInSubredditsEnabled;
@property(readonly, nonatomic) _Bool isLiveStreamingEntryPointEnabled;
@property(readonly, nonatomic) _Bool isUserProfilesStartChatButtonAnimationEnabled;
@property(readonly, nonatomic) long long chatPostRulesVariant;
@property(readonly, nonatomic) _Bool shouldEnableReplyFeatureForChatPosts;
- (long long)customShareActionsVariant;
- (void)exposeCustomShareActions;
- (void)exposeFeedChaining;
@property(readonly, nonatomic) long long feedChainingVariant;
- (id)feedChainingExperimentName;
@property(readonly, nonatomic) long long shareCardsVariant;
- (long long)shareMessageActionVariant;
- (void)exposeShareMessageAction;
@property(readonly, nonatomic) _Bool isChatPostViewLastMessageEventEnabled;
- (void)exposePostingDifficulty;
@property(readonly, nonatomic) long long postingDifficultyVariant;
@property(readonly, nonatomic) _Bool isSubredditMentionsEnabled;
- (void)exposeUserProfilesStartChatButtonAnimation;
- (void)exposeHybridVideoTap;
@property(readonly, nonatomic) _Bool isHybridVideoTapEnabled;
- (void)exposeDeferredPixel;
@property(readonly, nonatomic) _Bool isDeferredPixelEnabled;
@property(readonly, nonatomic) long long emailPermissionTextVariant;
- (void)exposeEmailPermissionText;
- (void)exposeForYouOnboarding;
@property(readonly, nonatomic) long long forYouOnboardingVariant;
- (_Bool)isForYouOnboardingEnabled;
- (void)exposeForYouFeed;
@property(readonly, nonatomic) NSString *forYouFeedVariantName;
@property(readonly, nonatomic) long long forYouFeedVariant;
- (id)forYouFeedExperimentName;
@property(readonly, nonatomic) _Bool areNewMediaTransitionsEnabled;
@property(readonly, nonatomic) _Bool isStayHomeFeedEnabled;
- (void)exposeCategoryScroller;
@property(readonly, nonatomic) long long categoryScrollerVariant;
- (id)categoryScrollerExperimentName;
@property(readonly, nonatomic) long long initialNotificationsPromptVariant;
@property(readonly, nonatomic) _Bool isGQLBadgesExperimentEnabled;
- (void)exposeDisableTheatreMode;
@property(readonly, nonatomic) _Bool shouldDisableTheatreMode;
- (id)disableTheatreModeExperimentName;
@property(readonly, nonatomic) _Bool isRedditVideoV2Enabled;
@property(readonly, nonatomic) _Bool isReportUserProfileIntegrationEnabled;
@property(readonly, nonatomic) _Bool isCrisisTextLineIntegrationEnabled;
@property(readonly, nonatomic) _Bool isNewPushNotificationRegistrationEnabled;
@property(readonly, nonatomic) _Bool isHideBestOfCommunitiesEnabled;
@property(readonly, nonatomic) _Bool isErrorReportingEnabled;
@property(readonly, nonatomic) _Bool isClientTracingEnabled;
@property(readonly, nonatomic) _Bool isDownToChatEnabled;
- (void)exposeChatPostCreationExperimentForSubreddit:(id)arg1;
- (_Bool)isChatPostCreationExperimentEnabledForSubreddit:(id)arg1;
@property(readonly, nonatomic) _Bool isChatPostQuickNavigationEnabled;
@property(readonly, nonatomic) _Bool isInChatPostHoldout;
@property(readonly, nonatomic) long long chatPostVariant;
@property(readonly, nonatomic) _Bool isMemeGeneratorEnabled;
- (_Bool)isExperimentEnabled:(id)arg1;
- (_Bool)wasAppInstalledAfterDateString:(id)arg1;
- (id)dividerFormatter;
- (void)setupEmployeeOverridesAndTestingBlacklist;
@end

