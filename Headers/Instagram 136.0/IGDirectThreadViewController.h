//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGBugReportingProtocol-Protocol.h>
#import <InstagramAppCoreFramework/IGDeviceMotionManagerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectAtMentionSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectBannerActionViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectCacheListener-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectCameraPresentationManagerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectComposerButtonDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectComposerMediaPasteDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectComposerQuickReplyDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectComposerSizingDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectComposerTextListener-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectComposerViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectGalleryComponentsDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectGroupNamingViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectLeftAlignedTitleViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectMessageListViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectOutgoingUpdateListener-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectQuotedPublishedMessageProvider-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectStoryStickerViewControllerAdapterDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectThreadDetailViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectThreadDisabledComposerViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectThreadMessageEmojiEffectSelectorViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectThreadPendingRequestViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectThreadReportActionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectThreadViewControllerViewModelProvidingDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectVisualMessageViewerPresentationManagerContextDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectVoiceRecordViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGKeyboardInputManagerListener-Protocol.h>
#import <InstagramAppCoreFramework/IGUserBlockingListener-Protocol.h>
#import <InstagramAppCoreFramework/IGVideoCallStatusStoreListener-Protocol.h>
#import <InstagramAppCoreFramework/THComposerStatusAccessoryViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class IGBadgeButton, IGDeviceMotionManager, IGDirectAtMentionListViewController, IGDirectBannerActionViewController, IGDirectCameraPresentationManager, IGDirectComposer, IGDirectComposerOverflowTrayPresenter, IGDirectComposerViewController, IGDirectGalleryComponents, IGDirectGroupNamingViewController, IGDirectLeftAlignedTitleView, IGDirectMessageListViewController, IGDirectNUXManager, IGDirectSendAnimationView, IGDirectThreadAnalyticsLogger, IGDirectThreadAudioPlaybackService, IGDirectThreadDisabledComposerViewController, IGDirectThreadFlagController, IGDirectThreadMessageEmojiEffectSelectorView, IGDirectThreadNavigationPerfComponents, IGDirectThreadPendingRequestViewController, IGDirectThreadQuickReplyController, IGDirectThreadService, IGDirectThreadSyncStatusPerfLogger, IGDirectThreadViewContext, IGDirectThreadViewControllerViewModel, IGDirectUserBlockAlertPresenter, IGDirectVoiceRecordViewController, IGKeyboardInputManager, IGKeyboardObserver, IGPulsatingShimmeringView, IGStoryViewerPresentationController, IGTallNavigationBarView, IGUserSession, IGUserStore, NSArray, NSString, THComposerStatusAccessoryViewController, UIBarButtonItem, UIImpactFeedbackGenerator, UISelectionFeedbackGenerator, UITapGestureRecognizer, UIViewController;
@protocol IGDirectComposerDraftSaving, IGDirectMessageSending, IGDirectThreadViewControllerViewModelProviding, IGDirectTypingStatusSending, IGGiphyDataStoreReading, IGGiphyDataStoreUpdating;

@interface IGDirectThreadViewController : IGViewController <IGDirectAtMentionSectionControllerDelegate, IGDirectCameraPresentationManagerDelegate, IGDirectCacheListener, IGDirectComposerViewControllerDelegate, IGDirectGalleryComponentsDataSource, IGDirectGroupNamingViewControllerDelegate, IGDirectBannerActionViewControllerDelegate, IGDirectLeftAlignedTitleViewDelegate, IGDirectMessageListViewControllerDelegate, IGDirectOutgoingUpdateListener, IGDirectThreadDetailViewControllerDelegate, IGDirectComposerButtonDelegate, IGDirectComposerTextListener, IGDirectComposerMediaPasteDelegate, IGDirectComposerQuickReplyDelegate, IGDirectComposerSizingDelegate, IGDeviceMotionManagerDelegate, IGDirectQuotedPublishedMessageProvider, IGDirectStoryStickerViewControllerAdapterDelegate, IGDirectThreadDisabledComposerViewControllerDelegate, IGDirectThreadPendingRequestViewControllerDelegate, IGDirectThreadReportActionControllerDelegate, IGDirectThreadViewControllerViewModelProvidingDelegate, IGDirectVoiceRecordViewControllerDelegate, IGDirectThreadMessageEmojiEffectSelectorViewDelegate, IGKeyboardInputManagerListener, IGVideoCallStatusStoreListener, IGUserBlockingListener, THComposerStatusAccessoryViewControllerDelegate, UIScrollViewDelegate, IGBugReportingProtocol, IGDirectVisualMessageViewerPresentationManagerContextDelegate>
{
    IGUserSession *_userSession;
    IGDirectThreadService *_threadService;
    IGUserStore *_userStore;
    id <IGDirectMessageSending> _messageSender;
    id <IGDirectTypingStatusSending> _typingStatusSender;
    IGKeyboardInputManager *_keyboardInputManager;
    IGStoryViewerPresentationController *_storyPresentationController;
    IGDirectGalleryComponents *_galleryComponents;
    IGDirectCameraPresentationManager *_cameraPresentationManager;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    IGDirectNUXManager *_nuxManager;
    IGDirectThreadQuickReplyController *_quickReplyController;
    UITapGestureRecognizer *_tapToDismissGestureRecognizer;
    IGDeviceMotionManager *_motionManager;
    IGDirectThreadFlagController *_flagController;
    IGDirectThreadAudioPlaybackService *_threadPlaybackService;
    IGDirectThreadAnalyticsLogger *_analyticsLogger;
    IGDirectThreadNavigationPerfComponents *_perfComponents;
    NSArray *_users;
    IGDirectUserBlockAlertPresenter *_blockAlertPresenter;
    IGDirectThreadSyncStatusPerfLogger *_syncStatusLogger;
    id <IGDirectThreadViewControllerViewModelProviding> _viewControllerViewModelDataSource;
    IGDirectThreadViewControllerViewModel *_viewModel;
    id <IGDirectComposerDraftSaving> _draftService;
    UIViewController *_debugVC;
    IGDirectGroupNamingViewController *_groupNamingController;
    IGDirectBannerActionViewController *_bannerController;
    IGDirectThreadPendingRequestViewController *_pendingRequestsController;
    IGDirectComposerViewController *_composerViewController;
    IGDirectVoiceRecordViewController *_voiceRecordViewController;
    IGDirectAtMentionListViewController *_atMentionViewController;
    IGDirectThreadDisabledComposerViewController *_disabledComposerViewController;
    THComposerStatusAccessoryViewController *_statusAccessoryViewController;
    IGDirectComposer *_composerView;
    IGTallNavigationBarView *_customHeaderView;
    IGPulsatingShimmeringView *_videoCallPulsatingView;
    IGDirectLeftAlignedTitleView *_titleView;
    IGBadgeButton *_threadDetailBadgeButton;
    UIBarButtonItem *_threadDetailButton;
    IGDirectThreadMessageEmojiEffectSelectorView *_emojiEffectSelectorView;
    _Bool _isFirstAppearance;
    _Bool _shouldClearInputViewAfterCameraSend;
    _Bool _isViewVisible;
    _Bool _threadInputIsDisabled;
    _Bool _hasSetupInitialThreadInputMode;
    double _keyboardInsetNeededForVoiceRecord;
    id <IGGiphyDataStoreUpdating> _giphyDataStoreUpdater;
    id <IGGiphyDataStoreReading> _giphyDataStoreReader;
    IGDirectComposerOverflowTrayPresenter *_composerTrayPresenter;
    _Bool _hasPerformedInitialLoad;
    long long _threadAppearance;
    NSString *_entryPoint;
    IGDirectMessageListViewController *_messageListViewController;
    IGDirectThreadViewContext *_threadViewContext;
    IGKeyboardObserver *_keyboardObserver;
    _Bool _mostRecentlyOpenedCameraIsGroupStoryCamera;
    double _previousKeyboardInputManagerAdditionalBottomInset;
    _Bool _isPresentingEmojiPickerTray;
    _Bool _keyboardInputManagerContentAdjustmentsDisabled;
    IGDirectSendAnimationView *_sendAnimationView;
    NSString *_threadId;
}

@property(readonly, copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
- (void).cxx_destruct;
- (_Bool)_hasActiveCall;
- (id)_leftAlignedStyleLayoutConfig;
- (void)_showInputViewTooltipOfTypeIfNecessary:(unsigned long long)arg1 anchoredAboveView:(id)arg2;
- (void)_hideVoiceRecordTooltipIfNecessaryAnimated:(_Bool)arg1;
- (void)_showVoiceRecordTooltipAnchoredAboveView:(id)arg1;
- (void)_updateVideoCallAccessibilityHints;
- (void)_updateVideoCallTintColor;
- (void)_updatePulsingAnimationView;
- (void)_updatePulsingAnimationViewIfNeeded;
- (void)_deleteChat;
- (void)_displayUserPrivacyAlertIfNeeded;
- (void)_adjustKeyboardInputManagerAdditionalBottomInsetForVoiceRecord:(_Bool)arg1;
- (void)_scrollThreadIfNeededForWillHideVoiceRecord;
- (void)_scrollThreadIfNeededForWillShowVoiceRecord;
- (void)_didTapSendButtonWithText:(id)arg1 quotedPublishedMessage:(id)arg2;
- (id)_outgoingMessageThreadIdentifer;
- (void)_didTapLikeButton;
- (void)_didTapGalleryButton;
- (void)_didTapView;
- (void)_didLeaveAndDisappearFromThread;
- (void)_didFailToDeleteMessageInThreadWithId:(id)arg1;
- (_Bool)_threadTitleViewAvatarIsInteractable;
- (void)_showThreadsAppStatusUpsellWithStatus:(id)arg1;
- (void)_launchStoriesViewerFromAvatarView:(id)arg1;
- (void)_handleTapOnStoryAvatarView:(id)arg1 avatarStoryState:(id)arg2 withCurrentlyDisplayedStatus:(id)arg3;
- (void)_handleTapOnHeaderAvatar:(id)arg1 contextDelegate:(id)arg2;
- (id)_currentlyDisplayedStatus;
- (void)_updateComposerWithDraftMessage:(id)arg1;
- (id)quotedPublishedMessageForMessageId:(id)arg1;
- (void)messageListViewControllerWillPerformFloatingReactionAnimation:(id)arg1 liveRect:(CDUnknownBlockType)arg2 emojiUnicode:(id)arg3;
- (void)messageListViewControllerDidUpdateThreadAppearance:(long long)arg1;
- (void)_enableKeyboardInputManagerContentAdjustmentsIfNeeded;
- (void)_disableKeyboardInputManagerContentAdjustmentsIfNeeded;
- (void)messageListViewControllerWillCleanUpSendAnimation:(id)arg1;
- (void)messageListViewControllerWillClearComposerText:(id)arg1;
- (void)messageListViewControllerWillPerformSendAnimation:(id)arg1 collectionView:(id)arg2 oldCollectionViewBounds:(struct CGRect)arg3 shouldPerformScrollPositionRestoration:(_Bool)arg4;
- (void)messageListViewControllerWillSetUpSendAnimation:(id)arg1 messageCellViewModel:(id)arg2 textMessageBubbleViewModel:(id)arg3 additionalInset:(double)arg4;
- (void)messageListViewControllerScrollViewDidScroll:(id)arg1;
- (void)messageListViewControllerWillDismissEmojiPickerTray:(id)arg1;
- (void)messageListViewControllerWillPresentEmojiPickerTray:(id)arg1;
- (void)messageListViewControllerWillDismiss:(id)arg1 actionsBar:(id)arg2 reactionsOverlay:(id)arg3 reactionBlock:(CDUnknownBlockType)arg4 animated:(_Bool)arg5;
- (void)messageListViewControllerWillPresent:(id)arg1 actionsBar:(id)arg2 reactionsOverlay:(id)arg3;
- (_Bool)messageListViewControllerShouldPresent:(id)arg1;
- (id)presentingViewControllerForAlertView;
- (void)messageListViewController:(id)arg1 didLookupCreatorWithName:(id)arg2 isSticker:(_Bool)arg3;
- (void)messageListViewController:(id)arg1 didTapReplyToMessage:(id)arg2;
- (void)messageListViewController:(id)arg1 didSaveText:(id)arg2;
- (void)messageListViewControllerNeedsUpdateContentInsets:(id)arg1;
- (void)messageListViewControllerDidShowMessageList:(id)arg1;
- (void)threadViewControllerViewModelUpdateDidEncounterError:(id)arg1;
- (void)threadViewControllerViewModelDidUpdate:(id)arg1;
- (void)videoCallStore:(id)arg1 didUpdateVideoCallId:(id)arg2 newStatus:(long long)arg3;
- (void)keyboardInputManagerWillChangeKeyboardFrame;
- (void)keyboardInputManagerWillScrollToBottom:(_Bool)arg1;
- (void)keyboardInputManagerDidUpdateKeyboardPercentPresented:(double)arg1;
- (void)keyboardInputManagerDidUpdateBottomInsetY:(double)arg1;
- (void)leftAlignedTitleView:(id)arg1 didTapAvatar:(id)arg2;
- (void)leftAlignedTitleViewDidTapBackButton:(id)arg1;
- (void)leftAlignedTitleViewDidTapSubtitle:(id)arg1;
- (void)leftAlignedTitleViewDidTapTitle:(id)arg1;
- (void)directThreadOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directThreadOutgoingUpdateDidSucceed:(id)arg1;
- (void)directMessageOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directMessageOutgoingUpdateDidSucceed:(id)arg1;
- (void)_sendLikeIfNeeded;
- (void)_sendMessageContent:(id)arg1;
- (_Bool)_threadIsAtBottom;
- (void)_scrollThreadToBottomAnimated:(_Bool)arg1;
- (void)_videoCallWillDisappearFullscreen:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_displayAlertBarWithMessage:(id)arg1 style:(long long)arg2;
- (void)_displayFailedToLoadEarlierMessagesError;
- (void)_displayFailedToLoadAnyMessagesError;
- (void)didDismissBannerActionViewController:(id)arg1;
- (void)bannerViewControllerActionDidCall:(id)arg1;
- (void)_showBannerControllerIfNeeded;
- (void)groupNamingViewControllerDidCancel:(id)arg1;
- (void)groupNamingViewController:(id)arg1 didUpdateToThreadName:(id)arg2;
- (void)_dismissGroupNamingController;
- (_Bool)_showGroupNamingControllerIfNeeded;
- (void)motionManagerDidDetectDeviceLowered:(id)arg1;
- (void)motionManagerDidDetectDeviceRaised:(id)arg1;
- (void)voiceRecordViewControllerDidPressCancelButton:(id)arg1;
- (void)voiceRecordViewController:(id)arg1 didRecordAudioClipWithURL:(id)arg2 waveform:(id)arg3;
- (void)voiceRecordViewControllerWillHideRecordingNux:(id)arg1;
- (void)voiceRecordViewControllerWillShowRecordingNux:(id)arg1;
- (void)voiceRecordViewControllerWillHideRecordingView:(id)arg1;
- (void)voiceRecordViewControllerWillShowRecordingView:(id)arg1;
- (id)_threadBackgroundColor;
- (void)composerViewControllerDidCloseQuotedReply:(id)arg1;
- (void)composerViewController:(id)arg1 didSelectGiphyModel:(id)arg2 isRandom:(_Bool)arg3;
- (id)threadKey;
- (id)threadIdentifier;
- (void)presentationManagerDidDismiss:(id)arg1 withDirectRecipients:(id)arg2;
- (void)dismissalDestinationViewForRecipients:(id)arg1 sourceIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)presentationManagerWillDismiss:(id)arg1 withDirectRecipients:(id)arg2;
- (void)presentationManagerWillSend:(id)arg1 withDirectRecipients:(id)arg2;
- (id)visualMessageViewerPresentationContextForIdentifier:(id)arg1;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)didDismissThreadDetailViewController:(id)arg1;
- (void)threadDetailViewController:(id)arg1 didRenameThreadWithId:(id)arg2 toName:(id)arg3;
- (void)threadDetailViewControllerDidTerminateThread:(id)arg1;
- (void)threadDetailViewControllerDidLeaveThread:(id)arg1;
- (void)threadDetailViewControllerDidDismissDueToRemovedThread:(id)arg1;
- (void)_updateTypingStatusToActive:(_Bool)arg1 typingStatusType:(long long)arg2;
- (void)_markThreadAsReadIfNecessary;
- (void)_threadDidDisplayInitialContent;
- (void)_updateUserBlockListening;
- (void)_startUserBlockListening;
- (void)_stopUserBlockListening;
- (void)blockingStatusForUser:(id)arg1 didUpdateWithBlockingStatus:(_Bool)arg2;
- (void)_restoreComposerFirstResponderStatusIfEligible;
- (void)_setupDisabledComposerViewController;
- (void)_updateComposerTypeIfNeeded;
- (void)_updateGroupNamingViewOnInputModeChangeIfNeeded;
- (void)_updateThreadEditibility;
- (void)didTapDeleteThreadOnDisabledComposerViewController:(id)arg1;
- (void)storyStickerViewControllerAdapterDidSelectLike:(id)arg1;
- (void)storyStickerViewControllerAdapter:(id)arg1 didSelectStaticSticker:(id)arg2;
- (void)storyStickerViewControllerAdapter:(id)arg1 didSelectAnimatedMedia:(id)arg2;
- (void)storyStickerViewControllerAdapterDidSelectPollSticker:(id)arg1;
- (void)storyStickerViewControllerAdapter:(id)arg1 didSelectSelfieSticker:(id)arg2;
- (void)storyStickerViewControllerAdapter:(id)arg1 didRecordVideo:(id)arg2 capturedEffect:(id)arg3;
- (void)_performFirstTimeThreadLoadedSetup;
- (void)pendingRequestViewController:(id)arg1 didAllowWithFolderType:(long long)arg2;
- (void)didDismissPendingRequestsController:(id)arg1 action:(long long)arg2;
- (void)threadReportControllerDidRestrictAndShouldExitThreadContext:(id)arg1;
- (void)threadReportControllerDidReportAndShouldExitThreadContext:(id)arg1;
- (void)threadReportControllerDidBlockAndShouldExitThreadContext:(id)arg1;
- (id)bugReportDescription;
- (void)_dismissPendingRequestsController;
- (void)_presentCameraFromAnchorView:(id)arg1 entryPoint:(unsigned long long)arg2 storyCreationConfiguration:(id)arg3 switcherMode:(long long)arg4;
- (id)_storyCreationConfigurationForPollSticker;
- (id)_storyCreationConfigurationForGroupStoryCamera:(_Bool)arg1;
- (id)_directShareRecipient;
- (void)_presentPendingRequestsController;
- (void)_presentVideoCallViewControllerFromView:(id)arg1;
- (void)_presentProfileScreenIfSupported;
- (void)_presentProfileOrInfoScreen;
- (void)_presentThreadInfoViewControllerFromEntryPoint:(id)arg1;
- (void)messageEmojiEffectSelectorView:(id)arg1 didSelectMessageEffect:(id)arg2;
- (void)messageEmojiEffectSelectorView:(id)arg1 didDragToUnhighlightMessageEffect:(id)arg2;
- (void)messageEmojiEffectSelectorView:(id)arg1 didDragToHighlightMessageEffect:(id)arg2;
- (void)messageEmojiEffectSelectorView:(id)arg1 didTouchDownMessageEffect:(id)arg2;
- (void)_hideEmojiEffectSelectorViewIfNecessary;
- (void)_showEmojiEffectSelectorViewFromSendButton:(id)arg1 currentText:(id)arg2;
- (void)_didTapFlagButton:(id)arg1;
- (void)_didTapVideoButton:(id)arg1;
- (void)_didTapInfoButton:(id)arg1;
- (_Bool)_shouldKeyboardInputManagerManageCollectionViewBottomInsets;
- (struct UIEdgeInsets)_adjustedInsetsForCollectionView;
- (void)_updateCollectionViewInsets;
- (struct UIEdgeInsets)preferredMinimizableInsets;
- (struct UIEdgeInsets)preferredContentInsets;
- (double)_accessoryYPos;
- (void)_animateAccessoryToHidden:(_Bool)arg1;
- (void)_sendContent:(id)arg1 withStatus:(id)arg2;
- (void)composerStatusAccessoryViewDidReceiveSingleTap:(id)arg1;
- (void)composerStatusAccessoryViewDidReceiveDoubleTap:(id)arg1;
- (void)composerStatusAccessoryViewController:(id)arg1 didUpdateToState:(id)arg2;
- (id)composer;
- (_Bool)inputViewShouldShowHighlightedQuickReplyButtonForText:(id)arg1;
- (void)inputView:(id)arg1 didPasteImage:(id)arg2;
- (void)inputViewDidInvalidateIntrinsicContentSize:(id)arg1 needsImmediateLayout:(_Bool)arg2;
- (void)inputView:(id)arg1 didTapSelfieStickerButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapStickerSearchButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapStickerButton:(id)arg2;
- (void)inputView:(id)arg1 voiceMessageLongPressGestureRecognizerDidUpdate:(id)arg2;
- (void)inputView:(id)arg1 didLongPressSendButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapVoiceMessageButton:(id)arg2;
- (void)inputView:(id)arg1 didTapAnimatedMediaButton:(id)arg2;
- (void)inputView:(id)arg1 didTapQuickReplyButton:(id)arg2 isHighlighted:(_Bool)arg3 text:(id)arg4;
- (void)inputView:(id)arg1 didTapMoreButton:(id)arg2;
- (void)inputView:(id)arg1 didTapGalleryButton:(id)arg2;
- (void)inputView:(id)arg1 didTapCameraButton:(id)arg2;
- (void)inputView:(id)arg1 didTapLikeButton:(id)arg2;
- (_Bool)inputViewShouldAutomaticallyClearTextOnSend:(id)arg1;
- (void)inputView:(id)arg1 didTapSendButtonWithText:(id)arg2 quotedMessageId:(id)arg3;
- (void)inputView:(id)arg1 didLongPressCameraButtonWithGesture:(id)arg2;
- (void)composerDidEndEditing:(id)arg1;
- (void)composerDidBeginEditing:(id)arg1;
- (void)composerDidTapOnTextArea:(id)arg1;
- (void)composerDidReachMaxTextLength:(id)arg1;
- (void)composer:(id)arg1 didChangeToText:(id)arg2 mode:(id)arg3;
- (void)atMentionSectionController:(id)arg1 didSelectResult:(id)arg2;
- (void)_updateDisabledComposerView;
- (void)_updateAtMentionViewFrame;
- (void)_initializeMentionViewIfNeeded;
- (void)_updateAtMentionViewControllerIfNeeded;
- (void)_updateThreadNavigationBar;
- (void)_updateHeaderWithTitleViewModel:(id)arg1;
- (id)_navigationBarTheme;
- (void)_updateThreadTitleView;
- (_Bool)extendedLayoutIncludesOpaqueBars;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)_updatePendingControllerFrameWithContentWidth:(double)arg1 leftInset:(double)arg2;
- (void)_updateBannerControllerFrameWithContentWidth:(double)arg1 leftInset:(double)arg2;
- (void)_updateGroupNamingControllerFrameWithContentWidth:(double)arg1 leftInset:(double)arg2;
- (void)_displayThreadTitleAvatarGroupStoryNuxIfNeeded;
- (void)_displayThreadDetailsNuxForBigGroupsIfNeeded;
- (void)_displayThreadDetailsAdminNuxIfNeeded;
- (void)_displayThreadDetailsNuxIfNeeded:(unsigned long long)arg1;
- (void)_displayGroupSizeIncreaseNuxIfNeeded;
- (void)_displayComposerNuxElementsIfNeeded;
- (void)_layoutComposer;
- (void)viewDidLayoutSubviews;
- (void)directCacheDidUpdateThread:(id)arg1 withAppliedUpdates:(id)arg2;
- (void)directCacheDidRemoveThreadsWithIds:(id)arg1;
- (void)directCacheDidUpdateThreads:(id)arg1;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersTabBarHidden;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_presentPendingRequestsControllerIfNeeded;
- (void)_setupDebugViewControllerIfNeeded;
- (id)_createRightBarButtonItems;
- (double)_additionalKeyboardBottomInset;
- (_Bool)_isPresentedModally;
- (void)_dismissCurrentViewController;
- (void)_didTapBackButton;
- (void)_setUpRightBarButtonItems;
- (void)_insertCustomHeaderViewIntoViewHierarchy;
- (void)_setUpHeaderWithLayoutConfig:(id)arg1;
- (void)_setupNavigationItems;
- (void)_setupStatusAccessoryIfNecessary;
- (void)_setupComposer:(double)arg1;
- (void)_setupKeyboardInputManager;
- (void)_setupVoiceRecordViewController:(double)arg1;
- (void)_setupDataSource;
- (void)_setupMessagesListViewController;
- (void)_setup;
- (id)initWithUserSession:(id)arg1 threadId:(id)arg2 threadViewContext:(id)arg3 analyticsLogger:(id)arg4 giphyDataStoreReader:(id)arg5 giphyDataStoreUpdater:(id)arg6 threadService:(id)arg7 entryPoint:(id)arg8 perfComponents:(id)arg9 draftService:(id)arg10;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 thread:(id)arg2 entryPoint:(id)arg3 searchContext:(id)arg4 perfComponents:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

