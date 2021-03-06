//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIViewController;

@protocol HMESetupNavigationControllerProtocol <NSObject>
- (NSArray *)overflowActionsForViewController:(UIViewController *)arg1;
- (void)showHelpWithContext:(NSString *)arg1;
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)clearViewControllers;
- (void)popToRootViewController;
- (void)popToViewController:(UIViewController *)arg1;
- (void)popViewController;
- (void)pushViewController:(UIViewController *)arg1;
@property(nonatomic, readonly) NSArray *viewControllers;
@property(nonatomic, readonly) UIViewController *topViewController;
@property(nonatomic) _Bool showCloseButton;
@end

