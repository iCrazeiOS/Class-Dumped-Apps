//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCAppBarNavigationControllerToBeDeprecatedDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class MDCAppBarNavigationController, MDCAppBarViewController, UIScrollView, UIViewController;

@protocol MDCAppBarNavigationControllerDelegate <UINavigationControllerDelegate, MDCAppBarNavigationControllerToBeDeprecatedDelegate>

@optional
- (UIScrollView *)appBarNavigationController:(MDCAppBarNavigationController *)arg1 trackingScrollViewForViewController:(UIViewController *)arg2 suggestedTrackingScrollView:(UIScrollView *)arg3;
- (void)appBarNavigationController:(MDCAppBarNavigationController *)arg1 willAddAppBarViewController:(MDCAppBarViewController *)arg2 asChildOfViewController:(UIViewController *)arg3;
@end

