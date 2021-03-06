//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCViewController.h"

#import "_TtP4Cash22InAppPromoViewDelegate_-Protocol.h"
#import "_TtP4Cash29PromoToggleViewActionDelegate_-Protocol.h"

@class CCFlow, FQButton, Logger, NSDate, NSString, SCCheckmarkView, SCLightningView, SQPBFranklinStatusResult, UIColor, UIImageView, UIView, UIViewController, _TtC10UIControls5Label, _TtC10UIControls6Button, _TtC4Cash14InAppPromoView, _TtC4Cash15PromoToggleView;
@protocol SCConfirmationScreenViewControllerDelegate, _TtP20AppStoreReviewPrompt28AppStoreReviewPromptManaging_, _TtP4Cash24InfoDrawerViewController_;

@interface SCConfirmationScreenViewController : SCViewController <_TtP4Cash22InAppPromoViewDelegate_, _TtP4Cash29PromoToggleViewActionDelegate_>
{
    _Bool _checkRewardsBeforeShowingInfoAndNavigationButtonContainer;
    _Bool _showingInfoAndNavigationButtonContainer;
    _Bool _resigningPresentedScreen;
    _Bool _isPaymentFlowConfirmationScreen;
    CCFlow *_flow;
    Logger *_logger;
    UIColor *_tintColor;
    SCCheckmarkView *_checkmarkView;
    id <SCConfirmationScreenViewControllerDelegate> _delegate;
    id <_TtP20AppStoreReviewPrompt28AppStoreReviewPromptManaging_> _appStoreReviewPromptManager;
    SCLightningView *_lightningView;
    UIImageView *_iconView;
    _TtC10UIControls5Label *_detailTextLabel;
    UIView *_infoAndNavigationButtonContainer;
    UIViewController<_TtP4Cash24InfoDrawerViewController_> *_rewardInfoDrawer;
    UIView *_promoTextContainer;
    _TtC10UIControls5Label *_promoTextLabel;
    _TtC10UIControls6Button *_leftInlineNavigationButton;
    _TtC10UIControls6Button *_rightInlineNavigationButton;
    FQButton *_dismissButton;
    _TtC4Cash14InAppPromoView *_inAppPromoView;
    NSString *_inAppPromoIdentifier;
    _TtC4Cash15PromoToggleView *_promoToggleView;
    SQPBFranklinStatusResult *_statusResult;
    id _applicationDidEnterBackgroundObserver;
    NSDate *_displayedConfirmationDate;
}

@property(nonatomic) _Bool isPaymentFlowConfirmationScreen; // @synthesize isPaymentFlowConfirmationScreen=_isPaymentFlowConfirmationScreen;
@property(nonatomic) _Bool resigningPresentedScreen; // @synthesize resigningPresentedScreen=_resigningPresentedScreen;
@property(retain, nonatomic) NSDate *displayedConfirmationDate; // @synthesize displayedConfirmationDate=_displayedConfirmationDate;
@property(retain, nonatomic) id applicationDidEnterBackgroundObserver; // @synthesize applicationDidEnterBackgroundObserver=_applicationDidEnterBackgroundObserver;
@property(readonly, copy, nonatomic) SQPBFranklinStatusResult *statusResult; // @synthesize statusResult=_statusResult;
@property(retain, nonatomic) _TtC4Cash15PromoToggleView *promoToggleView; // @synthesize promoToggleView=_promoToggleView;
@property(readonly, copy, nonatomic) NSString *inAppPromoIdentifier; // @synthesize inAppPromoIdentifier=_inAppPromoIdentifier;
@property(retain, nonatomic) _TtC4Cash14InAppPromoView *inAppPromoView; // @synthesize inAppPromoView=_inAppPromoView;
@property(retain, nonatomic) FQButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) _TtC10UIControls6Button *rightInlineNavigationButton; // @synthesize rightInlineNavigationButton=_rightInlineNavigationButton;
@property(retain, nonatomic) _TtC10UIControls6Button *leftInlineNavigationButton; // @synthesize leftInlineNavigationButton=_leftInlineNavigationButton;
@property(retain, nonatomic) _TtC10UIControls5Label *promoTextLabel; // @synthesize promoTextLabel=_promoTextLabel;
@property(retain, nonatomic) UIView *promoTextContainer; // @synthesize promoTextContainer=_promoTextContainer;
@property(retain, nonatomic) UIViewController<_TtP4Cash24InfoDrawerViewController_> *rewardInfoDrawer; // @synthesize rewardInfoDrawer=_rewardInfoDrawer;
@property(nonatomic) _Bool showingInfoAndNavigationButtonContainer; // @synthesize showingInfoAndNavigationButtonContainer=_showingInfoAndNavigationButtonContainer;
@property(nonatomic) _Bool checkRewardsBeforeShowingInfoAndNavigationButtonContainer; // @synthesize checkRewardsBeforeShowingInfoAndNavigationButtonContainer=_checkRewardsBeforeShowingInfoAndNavigationButtonContainer;
@property(retain, nonatomic) UIView *infoAndNavigationButtonContainer; // @synthesize infoAndNavigationButtonContainer=_infoAndNavigationButtonContainer;
@property(retain, nonatomic) _TtC10UIControls5Label *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) SCLightningView *lightningView; // @synthesize lightningView=_lightningView;
@property(retain, nonatomic) id <_TtP20AppStoreReviewPrompt28AppStoreReviewPromptManaging_> appStoreReviewPromptManager; // @synthesize appStoreReviewPromptManager=_appStoreReviewPromptManager;
@property(nonatomic) __weak id <SCConfirmationScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCCheckmarkView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) Logger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) CCFlow *flow; // @synthesize flow=_flow;
- (void).cxx_destruct;
- (void)_beginAddCashOrFinishFlow;
- (void)_performActionForServerPopulatedButton:(id)arg1 sender:(id)arg2;
- (void)_automaticallyDismissAfterTimeout;
- (void)_installRewardInfoDrawer:(id)arg1;
- (void)_createDefaultNavigationButton;
- (id)_createdInstalledNavigationButtonWithTitle:(id)arg1 action:(SEL)arg2 primaryAppearance:(_Bool)arg3;
- (void)_layoutContentViewsWithCheckmarkVerticalOffset:(double)arg1 previousScreenSpinner:(id)arg2 animatingSpinner:(_Bool)arg3;
- (void)_layoutContentViews;
- (void)_performInAppPromoActionAndDismissCurrentFlow:(id)arg1 messageToken:(id)arg2;
- (void)_promoViewTapped:(id)arg1;
- (void)_installInAppPromoDefinedViews:(id)arg1;
- (_Bool)_installStatusResultDefinedButtonsIfNecessary:(id)arg1;
- (void)animateTransitionFromScreenWithSpinner:(id)arg1;
- (void)prepareForTransitionFromScreenWithSpinner:(id)arg1;
- (void)returnToPaymentScreen:(id)arg1;
- (void)performServerPopulatedSecondaryButtonAction:(id)arg1;
- (void)performServerPopulatedPrimaryButtonAction:(id)arg1;
- (id)_promoActionForToggleState:(_Bool)arg1;
- (void)performPromoToggleAction:(_Bool)arg1;
- (void)performInAppPromoAction:(id)arg1 withMessageToken:(id)arg2;
- (void)promoViewDidLoadContent;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppearForFirstTime:(_Bool)arg1;
- (void)willResignPresentedScreen;
- (void)didBecomePresentedScreen;
- (void)contentViewDidLoad;
- (void)_commonInit;
- (id)initWithFlow:(id)arg1 appStoreReviewPromptManager:(id)arg2 tintColor:(id)arg3 logger:(id)arg4;
- (void)sizeInAppPromoView;
- (_Bool)_promptForAppRatingIfNecessary;
- (void)logTapWebRedirectWithUrlString:(id)arg1;
- (void)logStatusResultIcon;
- (void)applySecondaryButtonAppearance:(id)arg1;
- (void)applyPrimaryButtonAppearance:(id)arg1;

@end

