//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AXFFABViewController.h"

@class AMIWebViewController, AXFFabView, NSMutableDictionary, NSMutableSet;
@protocol AMIIPhoneAppManagerBridge, ANXMetricsService, ASKWeblabService, AXFContextualActionsFABConfig;

@interface AXFBackToTopFABController : AXFFABViewController
{
    _Bool _shouldListenToScrollEvents;
    AXFFabView *_fab;
    id <ANXMetricsService> _metricsService;
    id <AMIIPhoneAppManagerBridge> _iPhoneAppManager;
    id <AXFContextualActionsFABConfig> _fabConfig;
    long long _screenType;
    NSMutableDictionary *_screenTypeToWeblabSnapshotMap;
    NSMutableSet *_blacklistedViewControllers;
    AMIWebViewController *_webViewController;
    struct CGRect _currentParentFrame;
}

@property(nonatomic) __weak AMIWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) NSMutableSet *blacklistedViewControllers; // @synthesize blacklistedViewControllers=_blacklistedViewControllers;
@property(retain, nonatomic) NSMutableDictionary *screenTypeToWeblabSnapshotMap; // @synthesize screenTypeToWeblabSnapshotMap=_screenTypeToWeblabSnapshotMap;
@property(nonatomic) long long screenType; // @synthesize screenType=_screenType;
@property(nonatomic) _Bool shouldListenToScrollEvents; // @synthesize shouldListenToScrollEvents=_shouldListenToScrollEvents;
@property(retain, nonatomic) id <AXFContextualActionsFABConfig> fabConfig; // @synthesize fabConfig=_fabConfig;
@property(nonatomic) struct CGRect currentParentFrame; // @synthesize currentParentFrame=_currentParentFrame;
@property(readonly, nonatomic) id <AMIIPhoneAppManagerBridge> iPhoneAppManager; // @synthesize iPhoneAppManager=_iPhoneAppManager;
@property(readonly, nonatomic) id <ANXMetricsService> metricsService; // @synthesize metricsService=_metricsService;
@property(retain, nonatomic) AXFFabView *fab; // @synthesize fab=_fab;
- (void).cxx_destruct;
- (void)updateCurrentFrameForPantryStoreIfNeeded;
- (void)scrollToTop;
- (void)toggleFabVisibility:(_Bool)arg1;
- (void)updateViewBasedOnScrollOffset:(double)arg1;
- (_Bool)backToTopFabIsEnabledForViewController:(id)arg1;
- (void)setUpScreenTypeValue:(id)arg1;
- (_Bool)isBuyAgainPage:(id)arg1;
- (void)blacklistViewController:(id)arg1;
- (void)handleBTTBlacklistEvent:(id)arg1 sender:(id)arg2;
- (void)onCartCountChanged;
- (void)lookForHardlinesSubnavOnController:(id)arg1;
- (void)setConfigAndUpdateSnapshotMap:(struct CGRect)arg1 weblabTreatmentSnapshot:(id)arg2;
@property(readonly, nonatomic) id <ASKWeblabService> weblabService;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (void)didScrollInScrollView:(id)arg1;
- (void)didNavigateToViewController:(id)arg1 withScreenType:(long long)arg2 newParentFrame:(struct CGRect)arg3;
- (void)buttonTapped:(id)arg1;
- (id)createConfigWithTreatment:(id)arg1 frame:(struct CGRect)arg2;
- (void)updateStateWithNewParentFrame:(struct CGRect)arg1;
- (void)handleMiniBuyBoxDisplayedEvent;
- (void)updateCurrentFrameWithOffset:(double)arg1;
- (void)handlePTCVisibilityEvent:(id)arg1 sender:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContentViewMaxFrame:(struct CGRect)arg1 fabType:(unsigned long long)arg2;

@end

