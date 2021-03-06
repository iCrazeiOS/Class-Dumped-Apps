//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LolomoContainer.h"

#import "NFUISecondaryNavigationViewControllerDelegate-Protocol.h"
#import "NFUITabContext-Protocol.h"
#import "ViewControllerOverContextDelegateProtocol-Protocol.h"

@class NFUITabBarItem, NSString, NavigationBarAppearanceManager, UIView;

@interface NFALolomoContainer : LolomoContainer <ViewControllerOverContextDelegateProtocol, NFUITabContext, NFUISecondaryNavigationViewControllerDelegate>
{
    _Bool _viewWillDisappearNavigationBarHidden;
    NavigationBarAppearanceManager *navBarManager;
    NFUITabBarItem *_nfui_tabBarItem;
    NSString *_presentationViewIdentifier;
}

@property(nonatomic) _Bool viewWillDisappearNavigationBarHidden; // @synthesize viewWillDisappearNavigationBarHidden=_viewWillDisappearNavigationBarHidden;
@property(copy) NSString *presentationViewIdentifier; // @synthesize presentationViewIdentifier=_presentationViewIdentifier;
@property(retain) NFUITabBarItem *nfui_tabBarItem; // @synthesize nfui_tabBarItem=_nfui_tabBarItem;
@property(retain, nonatomic) NavigationBarAppearanceManager *navBarManager; // @synthesize navBarManager;
- (void).cxx_destruct;
- (void)redundantTap;
- (void)selectedTab:(id)arg1 comingFromTab:(id)arg2;
- (void)setNFUITabBarItem:(id)arg1;
- (void)viewControllerOverContextDidDisappear:(id)arg1;
- (void)viewControllerOverContextWillDisappear:(id)arg1;
- (void)viewControllerOverContextWillAppear:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willSetLolomoController:(id)arg1;
- (id)createLolomoViewController:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (void)addBackButton;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIView *secondaryNavigationContainer; // @dynamic secondaryNavigationContainer;
@property(readonly) Class superclass;

@end

