//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GSCNavigationOptions, NSArray, NSDictionary, NSString, UIViewController;
@protocol DYNNavigationServiceDelegate;

@protocol DYNNavigationService
@property(retain, nonatomic) NSArray *viewControllers;
@property(retain, nonatomic) id <DYNNavigationServiceDelegate> dynDelegate;
- (void)popToViewController:(UIViewController *)arg1;
- (_Bool)navigateToViewController:(UIViewController *)arg1 replacingViewController:(UIViewController *)arg2;
- (_Bool)navigateToViewController:(UIViewController *)arg1 fromViewController:(UIViewController *)arg2 withOptions:(GSCNavigationOptions *)arg3;
- (_Bool)navigateToViewController:(UIViewController *)arg1 fromViewController:(UIViewController *)arg2;
- (void)navigateToViewControllerForNotification:(UIViewController *)arg1;
- (void)updateOfflineBannerWithState:(unsigned int)arg1 reason:(NSString *)arg2;
- (void)presentViewControllerInNavigationControllerAsPopover:(UIViewController *)arg1;
- (void)presentViewControllerAsPopover:(UIViewController *)arg1;
- (void)navigateToFeedbackControllerWithCrashDatesByURLString:(NSDictionary *)arg1 productSpecificValues:(NSDictionary *)arg2;
- (void)navigateToFeedbackControllerWithCrashDatesByURLString:(NSDictionary *)arg1;
@end

