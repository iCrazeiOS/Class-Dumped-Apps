//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Stripe/STPCoreViewController.h>

@class UIScrollView;

@interface STPCoreScrollViewController : STPCoreViewController
{
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)updateAppearance;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)createAndSetupViews;
- (id)createScrollView;

@end

