//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FBSharedFramework/IGAnalyticsModule-Protocol.h>
#import <FBSharedFramework/IGMentionStickerViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryMentionSearchViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryMentionsViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryMentionsViewSearchDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryStickerEditingViewControllerProtocol-Protocol.h>

@class IGKeyboardObserver, IGMentionStickerView, IGStickerBundleView, IGStoryMentionsView, IGUserSession, NSArray, NSSet, NSString, UIButton, UIView;
@protocol IGMentionStickerCreationViewControllerDelegate;

@interface IGMentionStickerCreationViewController : UIViewController <IGMentionStickerViewDelegate, IGStoryMentionsViewDelegate, IGStoryMentionSearchViewControllerDelegate, IGStoryMentionsViewSearchDelegate, IGAnalyticsModule, IGStoryStickerEditingViewControllerProtocol>
{
    IGUserSession *_userSession;
    NSSet *_alreadyMentionedUsers;
    UIView *_dimmingView;
    UIButton *_doneButton;
    UIView *_clippingContainerView;
    IGMentionStickerView *_mentionStickerView;
    IGStoryMentionsView *_mentionSuggestionsView;
    IGKeyboardObserver *_keyboardObserver;
    IGStickerBundleView *_stickerBundleView;
    double _contentRegionCornerRadius;
    id <IGMentionStickerCreationViewControllerDelegate> _delegate;
    struct CGRect _contentRegion;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGMentionStickerCreationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double contentRegionCornerRadius; // @synthesize contentRegionCornerRadius=_contentRegionCornerRadius;
@property(nonatomic) struct CGRect contentRegion; // @synthesize contentRegion=_contentRegion;
- (_Bool)canRespondToGesture:(id)arg1;
@property(readonly, nonatomic) _Bool shouldDiscardStickerOnDismissal;
@property(readonly, nonatomic) _Bool editableStickerViewIsNewlyCreated;
@property(readonly, nonatomic) double editableStickerScaleWhileEditing;
@property(readonly, nonatomic) UIView *editableStickerView;
@property(readonly, nonatomic) NSArray *backgroundViews;
- (void)storyMentionSearchViewController:(id)arg1 didCompleteWithSelectedUsers:(id)arg2;
- (void)storyMentionsView:(id)arg1 didSelectSearchItem:(id)arg2;
- (void)storyMentionsView:(id)arg1 didSelectUser:(id)arg2;
- (void)mentionStickerViewDidEndEditing:(id)arg1;
- (void)mentionStickerView:(id)arg1 didUpdateText:(id)arg2;
- (id)analyticsModule;
- (void)_dismissSelf;
- (void)_didTapBackground;
- (void)_didTapDoneButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 alreadyMentionedUsers:(id)arg2 cameraEffectCreator:(id)arg3 shouldCheckPrivacyStatus:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

