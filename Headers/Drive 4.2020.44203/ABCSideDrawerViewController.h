//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ABCSideDrawerTransitionController, NSString, UIColor;
@protocol ABCSideDrawerDelegate;

@interface ABCSideDrawerViewController : UIViewController
{
    UIViewController *_contentViewController;
    ABCSideDrawerTransitionController *_transitionController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ABCSideDrawerTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (_Bool)accessibilityPerformEscape;
@property(nonatomic) unsigned long long scrimAccessibilityTraits;
@property(copy, nonatomic) NSString *scrimAccessibilityHint;
@property(copy, nonatomic) NSString *scrimAccessibilityLabel;
@property(nonatomic) _Bool isScrimAccessibilityElement;
@property(retain, nonatomic) UIColor *scrimColor;
@property(retain, nonatomic) UIColor *shadowColor;
@property(nonatomic) double maxDrawerWidth;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)modalPresentationStyle;
- (id)transitioningDelegate;
@property(nonatomic) __weak id <ABCSideDrawerDelegate> delegate;
- (id)init;

@end

