//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ANPAmazonBooksButtonsBarService-Protocol.h"

@class NSString, UIButton, UIStackView;
@protocol AMIIPhoneAppManagerBridge, ANXAppearanceManager, ANXMetricsService;

@interface AmazonBooksButtonsBarController : UIViewController <ANPAmazonBooksButtonsBarService>
{
    UIButton *_payButton;
    UIButton *_scanButton;
    UIStackView *_buttonStackView;
    id <ANXMetricsService> _metrics;
    id <AMIIPhoneAppManagerBridge> _appManager;
    id <ANXAppearanceManager> _appearanceManager;
}

@property(retain, nonatomic) id <ANXAppearanceManager> appearanceManager; // @synthesize appearanceManager=_appearanceManager;
@property(retain, nonatomic) id <AMIIPhoneAppManagerBridge> appManager; // @synthesize appManager=_appManager;
@property(retain, nonatomic) id <ANXMetricsService> metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
@property(retain, nonatomic) UIButton *scanButton; // @synthesize scanButton=_scanButton;
@property(retain, nonatomic) UIButton *payButton; // @synthesize payButton=_payButton;
- (void).cxx_destruct;
- (id)buttonWithAsset:(id)arg1 handler:(SEL)arg2;
- (void)layoutViews;
- (void)scanButtonTapped:(id)arg1;
- (void)payButtonTapped:(id)arg1;
- (void)createSubViews;
- (void)viewDidLoad;
- (id)initWithDependencies:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

