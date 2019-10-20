//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCFlexibleHeaderViewController.h"

@class MDCHeaderStackView, MDCNavigationBar, NSLayoutConstraint;

@interface MDCAppBarViewController : MDCFlexibleHeaderViewController
{
    NSLayoutConstraint *_verticalConstraint;
    NSLayoutConstraint *_topSafeAreaConstraint;
    MDCNavigationBar *_navigationBar;
    MDCHeaderStackView *_headerStackView;
}

+ (id)bundlePathWithName:(id)arg1;
+ (id)bundle;
@property(retain, nonatomic) MDCHeaderStackView *headerStackView; // @synthesize headerStackView=_headerStackView;
@property(retain, nonatomic) MDCNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)dismissSelf;
- (void)didTapBackButton:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setInferTopSafeAreaInsetFromViewController:(_Bool)arg1;
- (void)viewDidLoad;
- (id)backButtonItem;
- (void)MDCAppBarViewController_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

