//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingAdUnitViewController-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"

@class NSString, SPTAdNowPlayingAuxiliaryActionsHandler, SPTAdsFeatureProperties, SPTAdsRemindersManager, SPTNowPlayingAudioAdInfoUnitView, SPTTheme;
@protocol SPTAdsBaseEntity, SPTAdsManager, SPTLinkDispatcher, SPTLogCenter, SPTNowPlayingContainingViewController, SPTSnackbarConditionalPresenter;

@interface SPTNowPlayingAudioAdInformationUnitViewController : UIViewController <SPTNowPlayingContainedViewController, SPTNowPlayingAdUnitViewController>
{
    SPTTheme *_theme;
    id <SPTAdsManager> _adsManager;
    SPTAdsFeatureProperties *_properties;
    SPTAdNowPlayingAuxiliaryActionsHandler *_actionsHandler;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTAdsRemindersManager *_reminderManager;
    id <SPTAdsBaseEntity> _adEntity;
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) id <SPTAdsBaseEntity> adEntity; // @synthesize adEntity=_adEntity;
@property(readonly, nonatomic) SPTAdsRemindersManager *reminderManager; // @synthesize reminderManager=_reminderManager;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(readonly, nonatomic) SPTAdNowPlayingAuxiliaryActionsHandler *actionsHandler; // @synthesize actionsHandler=_actionsHandler;
@property(readonly, nonatomic) SPTAdsFeatureProperties *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)reloadViewControllerWithAdEntity:(id)arg1;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)didTapBookmarkButton;
- (void)didTapActionButton;
- (void)updateButton;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithAdsManager:(id)arg1 theme:(id)arg2 actionsHandler:(id)arg3 featureProperties:(id)arg4 snackbarPresenter:(id)arg5 linkDispatcher:(id)arg6 reminderManager:(id)arg7 logCenter:(id)arg8;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SPTNowPlayingAudioAdInfoUnitView *view; // @dynamic view;

@end

