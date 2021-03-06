//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GIPWebViewController.h>

#import <Module_Framework/GOOHeaderNavigationParentViewController-Protocol.h>

@class GOOFlexibleHeaderViewController, GOOHeaderNavigationView, NSString, UIView;
@protocol GKSFamilyLifeCycleConfigurationProtocol;

@interface GKSNativeStyledWebViewController : GIPWebViewController <GOOHeaderNavigationParentViewController>
{
    _Bool _adjustHeightForSafeArea;
    _Bool _alwaysShowHeader;
    GOOFlexibleHeaderViewController *_headerViewController;
    GOOHeaderNavigationView *_headerNavigationView;
    id <GKSFamilyLifeCycleConfigurationProtocol> _configuration;
    UIView *_statusBarBackgroundView;
    double _defaultMinimumHeaderHeight;
    double _defaultMaximumHeaderHeight;
}

@property(nonatomic) double defaultMaximumHeaderHeight; // @synthesize defaultMaximumHeaderHeight=_defaultMaximumHeaderHeight;
@property(nonatomic) double defaultMinimumHeaderHeight; // @synthesize defaultMinimumHeaderHeight=_defaultMinimumHeaderHeight;
@property(retain, nonatomic) UIView *statusBarBackgroundView; // @synthesize statusBarBackgroundView=_statusBarBackgroundView;
@property(nonatomic) _Bool alwaysShowHeader; // @synthesize alwaysShowHeader=_alwaysShowHeader;
@property(nonatomic) _Bool adjustHeightForSafeArea; // @synthesize adjustHeightForSafeArea=_adjustHeightForSafeArea;
@property(readonly, nonatomic) id <GKSFamilyLifeCycleConfigurationProtocol> configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) GOOHeaderNavigationView *headerNavigationView; // @synthesize headerNavigationView=_headerNavigationView;
@property(retain, nonatomic) GOOFlexibleHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
- (void).cxx_destruct;
- (id)statusBarColor;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)setHeaderVisible:(_Bool)arg1;
- (void)openBlankPage;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

