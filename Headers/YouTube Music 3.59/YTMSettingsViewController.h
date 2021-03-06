//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMBaseInnerTubeViewController.h"

#import "YTGraftingViewController-Protocol.h"
#import "YTInnerTubeNavigationEndpointResponderProvider-Protocol.h"
#import "YTMActionSheetPresenterResponderProvider-Protocol.h"
#import "YTScreenGraftViewController-Protocol.h"
#import "YTTopController-Protocol.h"

@class NSString, YTCommandResponderEvent, YTICommand;
@protocol YTMServices, YTResponder;

@interface YTMSettingsViewController : YTMBaseInnerTubeViewController <YTTopController, YTGraftingViewController, YTInnerTubeNavigationEndpointResponderProvider, YTScreenGraftViewController, YTMActionSheetPresenterResponderProvider>
{
    YTICommand *_navEndpoint;
    id <YTMServices> _services;
    long long _navigationBarAppearance;
}

- (long long)navigationBarAppearance;
- (void).cxx_destruct;
- (void)navigateToOpenSourceLicensesPage;
- (void)navigateToManageSiriShortcutsPage;
- (void)navigateToManageLocationHistoryPage;
- (void)navigateToManageAccountPrivacyPage;
- (void)navigateToManageSearchHistoryPage;
- (void)navigateToManageWatchHistoryPage;
- (void)navigateToURL:(id)arg1 withTitle:(id)arg2;
- (id)navigationEndpoint;
- (void)presentActionSheet:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setupInteractionLoggingHandlersAtResponder:(id)arg1;
- (void)relogScreen;
- (id)navEndpoint;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)didAddResponseViewController;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

