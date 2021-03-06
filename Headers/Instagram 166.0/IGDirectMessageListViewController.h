//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGAnalyticsModule-Protocol.h>
#import <InstagramAppCoreFramework/IGBugReportingProtocol-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectMessageListDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectMessageMenuControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectMessageMenuItemTarget-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectThreadCollectionViewLayoutDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectThreadMessageListDisplayStateProviding-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectThreadViewTimestampAnimatorDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectVisualMessageViewerPresentationManagerContextDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGScreenshotObserverDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTransitionZoomFromCapable-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class IGDirectMessageCell, IGDirectMessageFooterTextManager, IGDirectMessageMenuController, IGDirectScrollCoordinator, IGDirectThreadAnalyticsLogger, IGDirectThreadCollectionViewLayout, IGDirectThreadKey, IGDirectThreadLastSeenMessageTracker, IGDirectThreadNewMessageIndicator, IGDirectThreadNullStateViewModel, IGDirectThreadViewMessagesClientStateManager, IGDirectThreadViewOutgoingMessageSendAttributionFactory, IGDirectThreadViewTimestampAnimator, IGListAdapter, IGScreenshotObserver, IGScrollPerfLogger, IGUserSession, NSArray, NSMutableArray, NSString, UICollectionView;
@protocol IGDirectMessageCellSwipeToReplyHandler, IGDirectMessageListDataSource, IGDirectMessageListViewControllerDelegate, IGDirectMessageReplying, IGListDiffable;

@interface IGDirectMessageListViewController : UIViewController <IGDirectMessageMenuControllerDelegate, IGDirectMessageMenuItemTarget, IGDirectMessageListDataSourceDelegate, IGDirectThreadCollectionViewLayoutDelegate, IGDirectThreadViewTimestampAnimatorDelegate, IGListAdapterDelegate, IGTransitionZoomFromCapable, IGScreenshotObserverDelegate, UICollectionViewDelegate, UIScrollViewDelegate, IGAnalyticsModule, IGBugReportingProtocol, IGDirectVisualMessageViewerPresentationManagerContextDelegate, IGDirectThreadMessageListDisplayStateProviding>
{
    IGUserSession *_userSession;
    IGDirectThreadKey *_threadKey;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGDirectMessageMenuController *_menuController;
    IGDirectThreadViewMessagesClientStateManager *_clientStateManager;
    IGDirectThreadAnalyticsLogger *_analyticsLogger;
    IGDirectThreadViewOutgoingMessageSendAttributionFactory *_sendAttributionFactory;
    IGDirectScrollCoordinator *_scrollCoordinator;
    IGDirectThreadNewMessageIndicator *_messageIndicator;
    IGDirectThreadLastSeenMessageTracker *_lastSeenMessageTracker;
    IGScrollPerfLogger *_scrollPerfLogger;
    _Bool _detectedRubberBanding;
    _Bool _isFirstAppearance;
    _Bool _isViewVisible;
    double _navigationBarHeight;
    double _maximumTextViewWidth;
    id <IGDirectMessageReplying> _messageReplyHandler;
    id <IGDirectMessageCellSwipeToReplyHandler> _swipeToReplyHandler;
    IGDirectThreadViewTimestampAnimator *_timestampAnimator;
    id <IGDirectMessageListDataSource> _messageListDataSource;
    NSArray *_nonHighlightedCells;
    NSMutableArray *_updateReasonsSincePaused;
    _Bool _isPerformingListKitUpdates;
    IGDirectThreadCollectionViewLayout *_collectionViewLayout;
    id <IGListDiffable> _pendingMessageViewModel;
    IGDirectMessageCell *_pendingMessageCellToShow;
    _Bool _isPerformingSendAnimation;
    IGDirectMessageFooterTextManager *_footerTextPromotionManager;
    long long _threadAppearance;
    IGScreenshotObserver *_screenshotObserver;
    id <IGListDiffable> _pendingPowerupTextMessageViewModel;
    _Bool _isScreenRecording;
    _Bool _isPaused;
    _Bool _willScrollToTop;
    id <IGDirectMessageListViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool willScrollToTop; // @synthesize willScrollToTop=_willScrollToTop;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) __weak id <IGDirectMessageListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_hasShhModeMessageVisible;
- (void)_notifyScreenRecordingIfNecessary;
- (void)_setCountToMaxForNuxTypeIfNecessary:(long long)arg1;
- (void)_incrementNuxCountAndSetTimestampForNuxTypeIfNecessary:(long long)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_loadPreviousMessages;
- (_Bool)isMessageListScrolling;
- (_Bool)_threadIsAtBottom;
- (void)_layoutStaticBackgroundGradientIfNecessary;
- (void)_scrollToBottomAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_displayAlertBarWithMessage:(id)arg1 style:(long long)arg2;
- (void)_displayFailedToLoadEarlierMessagesError;
- (void)_displayFailedToLoadAnyMessagesError;
- (_Bool)_shouldUpdatePendingMessageViewModelForInsert:(id)arg1;
- (void)_cleanUpSendAnimationIfNecessary;
- (void)_completeSendAnimationIfNecessary;
- (double)_additionalInsetForTypingIndicatorViewModel:(id)arg1;
- (id)_typingViewModelAsLastObject;
- (void)_performSendAnimationWithShouldPerformScrollPositionRestoration:(_Bool)arg1 duration:(double)arg2;
- (void)_setUpSendAnimationIfNecessaryWithDiffResult:(id)arg1 updateReason:(unsigned long long)arg2;
- (void)_playTextMessagePowerupIfNecessaryWithDelay:(double)arg1;
- (void)_setUpPowerUpSendAnimationWithDiffResult:(id)arg1 updateReason:(unsigned long long)arg2;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)hasSpacerAtIndexPath:(id)arg1;
- (_Bool)hasTopSeparatorAtIndexPath:(id)arg1;
- (_Bool)hasBottomSeparatorAtIndexPath:(id)arg1;
- (_Bool)hasSeparatorAtIndexPath:(id)arg1;
- (id)bottomColorForSeparatorAtIndexPath:(id)arg1;
- (void)threadCollectionViewLayoutWillFinalizeCollectionViewUpdates:(id)arg1;
- (void)threadCollectionViewLayoutWillPrepareCollectionViewUpdates:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)_performTapAnimationForTextMessagePowerup:(id)arg1 messageCell:(id)arg2 useHapticFeedback:(_Bool)arg3;
- (void)menuControllerWillHandleTap:(id)arg1 forTextMessagePowerup:(id)arg2 messageCell:(id)arg3 useHapticFeedback:(_Bool)arg4;
- (void)menuControllerWillDismissKeyboard:(id)arg1;
- (void)menuControllerWillPerformFloatingReactionAnimation:(id)arg1 liveRect:(CDUnknownBlockType)arg2 emojiUnicode:(id)arg3;
- (void)menuControllerDidStopMessageScaleAnimation:(id)arg1;
- (void)menuControllerWillStartMessageScaleAnimation:(id)arg1;
- (_Bool)menuControllerShouldStartMessageScaleAnimation:(id)arg1;
- (void)menuControllerWillAdjustOpacityToFocusMessage:(id)arg1;
- (void)menuControllerWillResetOpacity:(id)arg1 animated:(_Bool)arg2;
- (void)menuControllerWillDismissEmojiPickerTray:(id)arg1 selectionMode:(long long)arg2;
- (void)menuControllerWillPresentOrAdjustEmojiPickerTray:(id)arg1 selectionMode:(long long)arg2;
- (void)menuControllerWillDismiss:(id)arg1 actionsBar:(id)arg2 reactionsOverlay:(id)arg3 reactionBlock:(CDUnknownBlockType)arg4 messageCell:(id)arg5 animated:(_Bool)arg6;
- (void)menuControllerWillPresent:(id)arg1 actionsBar:(id)arg2 reactionsOverlay:(id)arg3;
- (void)menuControllerDidSetVisible:(id)arg1;
- (_Bool)menuControllerShouldPresent:(id)arg1;
- (id)messageViewModelForMessageKey:(id)arg1;
- (id)presentingViewControllerForAlertView;
- (id)currentThread;
- (id)visualMessageViewerPresentationManagerContextDelegate;
- (void)menuController:(id)arg1 didReplyWithMessageViewModel:(id)arg2;
- (void)menuController:(id)arg1 didSaveText:(id)arg2;
- (void)menuController:(id)arg1 didLookForCreatorWithName:(id)arg2 isSticker:(_Bool)arg3;
- (void)quotedReply:(id)arg1;
- (void)forward:(id)arg1;
- (void)lookupCreator:(id)arg1;
- (void)viewDetails:(id)arg1;
- (void)replay:(id)arg1;
- (void)save:(id)arg1;
- (void)report:(id)arg1;
- (void)copy:(id)arg1;
- (void)unlike:(id)arg1;
- (void)unsend:(id)arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)additionalBugReportMetadata;
- (id)bugReportDescription;
- (_Bool)timestampAnimatorShouldRespectOtherGestureRecognizers:(id)arg1;
- (_Bool)timestampAnimatorShouldReceiveTouchWithIndexPath:(id)arg1;
- (_Bool)timestampAnimator:(id)arg1 shouldSlideCell:(id)arg2 atIndexPath:(id)arg3;
- (void)timestampAnimatorDidBeginSliding:(id)arg1;
- (id)messageListDisplayState;
- (id)visualMessageViewerPresentationContextForIdentifier:(id)arg1;
- (void)_autoscrollToNewMessagesSeparatorIfNecessary;
- (void)_loadPreviousMessagesIfSpinnerIsVisible;
- (void)_didCompleteFirstListKitUpdate;
- (_Bool)_shouldToggleMessageIndicatorWithUpdateReason:(unsigned long long)arg1;
- (_Bool)_shouldAutoScrollToBottomForSendingMessageWithUpdateReason:(unsigned long long)arg1;
- (void)_didPerformListKitUpdatesWithUpdateReason:(unsigned long long)arg1;
- (void)messageListDataSource:(id)arg1 didUpdateWithDiffResult:(id)arg2 isInitialLoad:(_Bool)arg3 updateReason:(unsigned long long)arg4;
- (void)_updateMessageListWithIsInitialLoad:(_Bool)arg1 updateReason:(unsigned long long)arg2 unpaused:(_Bool)arg3;
- (void)messageListDataSource:(id)arg1 didEncounterError:(id)arg2;
- (id)createMessageSectionComponentsWithLastSeenShhMessageIdForCurrentUserWhenEnteringShhMode:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)screenshotObserverDidSeeActiveScreenCapture:(id)arg1 event:(long long)arg2;
- (void)screenshotObserverDidSeeScreenshotTaken:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)analyticsModule;
- (void)dismissReactionsMenuControllerAndCleanUpIfNeeded:(_Bool)arg1;
- (void)_resetOpacityAnimated:(_Bool)arg1;
- (void)adjustOpacityForHighlightedMessage;
- (id)newMessagesIndicator;
- (void)setUpNewMessagesIndicatorWithContainerView:(id)arg1 referenceView:(id)arg2;
- (_Bool)isAtBottom;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (id)scrollView;
- (void)viewDidLayoutSubviews;
- (void)_setupCollectionViewAndListAdapter;
- (void)_setUp;
@property(readonly, nonatomic) IGDirectThreadNullStateViewModel *nullStateViewModel;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 threadKey:(id)arg2 messageListDataSource:(id)arg3 analyticsLogger:(id)arg4 navigationBarHeight:(double)arg5 maximumTextViewWidth:(double)arg6 messageReplyHandler:(id)arg7 swipeToReplyHandler:(id)arg8 messagesClientStateManager:(id)arg9 sendAttributionFactory:(id)arg10 footerTextPromotionManager:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

