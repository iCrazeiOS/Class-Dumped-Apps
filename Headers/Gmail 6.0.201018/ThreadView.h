//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTThreadNestedLayoutView.h"

#import "GBTKeyboardHelperListener-Protocol.h"
#import "GBTReplyActionsViewDelegate-Protocol.h"
#import "GBTSmartReplyViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class ActionHandler, GBTAddonButton, GBTAddonButtonsCarousel, GBTReplyActionsView, GBTSmartReplyView, NSArray, NSString, UIButton, UIScrollView, UIView;
@protocol GBTClient, ThreadViewDataSource, ThreadViewDelegate;

@interface ThreadView : GBTThreadNestedLayoutView <GBTReplyActionsViewDelegate, GBTSmartReplyViewDelegate, GBTKeyboardHelperListener, UIGestureRecognizerDelegate>
{
    ActionHandler *_actionHandler;
    _Bool _animatingKeyboardShow;
    _Bool _animatingKeyboardHide;
    id <GBTClient> _client;
    _Bool _animateKeyboardDismissal;
    _Bool _isReplyActionsViewHidden;
    GBTReplyActionsView *_replyActionsView;
    GBTAddonButtonsCarousel *_addonButtonsCarousel;
    UIScrollView *_scrollView;
    GBTSmartReplyView *_smartReplyView;
    UIView *_overlayView;
    _Bool _bottomReplyViewEnabled;
    _Bool _addonsCarouselFloating;
    _Bool _firstMessagesLoaded;
    NSString *_messageContent;
    id <ThreadViewDelegate> _threadViewDelegate;
    UIButton *_messagesButton;
    id <ThreadViewDataSource> _threadDataSource;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool firstMessagesLoaded; // @synthesize firstMessagesLoaded=_firstMessagesLoaded;
@property(readonly, nonatomic) GBTAddonButtonsCarousel *addonButtonsCarousel; // @synthesize addonButtonsCarousel=_addonButtonsCarousel;
@property(nonatomic) _Bool addonsCarouselFloating; // @synthesize addonsCarouselFloating=_addonsCarouselFloating;
@property(nonatomic) __weak id <ThreadViewDataSource> threadDataSource; // @synthesize threadDataSource=_threadDataSource;
@property(readonly, nonatomic) UIButton *messagesButton; // @synthesize messagesButton=_messagesButton;
@property(nonatomic) _Bool bottomReplyViewEnabled; // @synthesize bottomReplyViewEnabled=_bottomReplyViewEnabled;
@property(nonatomic) __weak id <ThreadViewDelegate> threadViewDelegate; // @synthesize threadViewDelegate=_threadViewDelegate;
@property(readonly, nonatomic) GBTReplyActionsView *replyActionsView; // @synthesize replyActionsView=_replyActionsView;
@property(copy, nonatomic) NSString *messageContent; // @synthesize messageContent=_messageContent;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)updateBottomActionsViewAndResetIfEmpty;
- (void)performKeyboardWillShowAnimation:(CDUnknownBlockType)arg1;
- (void)keyboardWillShow:(id)arg1 withRetryCount:(long long)arg2;
- (void)keyboardWillShow:(id)arg1;
- (void)setupKeyboard;
- (void)smartReplyView:(id)arg1 didProduceContinuationEvent:(id)arg2 indicesList:(id)arg3;
- (void)smartReplyView:(id)arg1 didProduceSmartReplyEvent:(id)arg2 forSuggestion:(id)arg3;
- (void)smartReplyViewDidTapBadSuggestions:(id)arg1;
- (void)smartReplyView:(id)arg1 didTapSuggestion:(id)arg2 isContinued:(_Bool)arg3;
- (void)replyActionsViewDidChangeSize:(id)arg1;
- (void)replyActionsViewForwardButtonTapped:(id)arg1 withTriggeringView:(id)arg2;
- (void)replyActionsViewReplyAllButtonTapped:(id)arg1 withTriggeringView:(id)arg2;
- (void)replyActionsViewReplyOneButtonTapped:(id)arg1 withTriggeringView:(id)arg2;
- (void)safeAreaInsetsDidChange;
- (void)logTapOnVisualElement:(id)arg1 tag:(CDStruct_a9c8ee48)arg2;
- (double)calculateBottomInset;
- (id)messageViewAtIndex:(long long)arg1;
- (void)adjustScrollYOffsetByDistance:(double)arg1;
- (_Bool)isScrolledToBottom;
- (_Bool)isOverscrolledPastBottom;
- (_Bool)isSmartReplyNearBottom;
- (_Bool)isPastScrollBoundary;
- (_Bool)isAnimatingKeyboard;
- (struct CGSize)contentSize;
- (double)bottomOffset;
- (double)normalizedYOffset;
- (double)bottomInset;
- (double)bottomMargin;
- (double)topMargin;
- (void)updateBottomContentInset:(double)arg1;
- (double)yOffsetForNewMessages;
- (double)yOffsetForReplyActions;
- (double)yOffsetForBottomActions;
- (double)yOffsetForSmartReply;
- (void)updateOverlayPosition;
- (void)updateReplyActionsOrigin;
- (void)updateReplyActionsSize;
- (void)updateAddonsOrigin;
- (void)updateAddonsSize;
- (void)updateSmartReplyOrigin;
- (void)updateSmartReplySize;
- (void)updateSubviewsPositions;
- (_Bool)isSmartReplyVisible;
- (void)hideSmartReply;
- (void)updateReplyActionsViewButtonsWithDefaultReplySetting:(_Bool)arg1;
- (void)scrollToBottom;
- (void)stopAddonButtonsLoadingAnimation;
- (void)startAddonButtonsLoadingAnimation;
@property(nonatomic) _Bool shouldDisplayAddons;
@property(retain, nonatomic) GBTAddonButton *selectedAddonButton;
@property(copy, nonatomic) NSArray *universalAddonButtons;
@property(copy, nonatomic) NSArray *contextualAddonButtons;
@property(readonly, nonatomic) _Bool presentingOverlayView;
- (void)setOverlayView:(id)arg1;
- (void)setReplyActionsViewHidden:(_Bool)arg1;
- (void)logSeenSuggestions;
- (void)updateSmartreply:(id)arg1 dropCandidateIndex:(int)arg2 shouldShowDebugButton:(_Bool)arg3;
- (void)updateConversationWithConversationMessageList:(id)arg1 client:(id)arg2;
- (void)dismissOverlayView;
- (void)presentOverlayView:(id)arg1;
- (void)didScroll;
- (void)senderContactsFetchedForMessageIds:(id)arg1 client:(id)arg2;
- (struct CGPoint)convertPointToContainerView:(struct CGPoint)arg1 fromView:(id)arg2;
- (id)cardCarouselViewAtIndexPath:(id)arg1;
- (void)reset;
- (void)deviceOrientationDidChange;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 scrollView:(id)arg2 actionHandler:(id)arg3 client:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

