//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class IFRouterFields, NSArray, NSError, NSString, UIViewController;

@protocol IFRouterProtocol <NSObject>
- (void)popToViewControllerOfClass:(Class)arg1 animated:(_Bool)arg2;
- (void)popToViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)popViewControllerWithAnimationOption:(unsigned long long)arg1 completion:(void (^)(_Bool))arg2;
- (void)pushViewController:(UIViewController *)arg1 animationOption:(unsigned long long)arg2 completion:(void (^)(_Bool))arg3;
- (void)setViewControllers:(NSArray *)arg1;
- (void)dissmisViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)setViewController:(UIViewController *)arg1;
- (void)showAlertIfAppActiveWithError:(NSError *)arg1;
- (void)showAlertWithErrorText:(NSString *)arg1;
- (void)showAlertWithError:(NSError *)arg1 handler:(void (^)(FNAlertView *))arg2;
- (void)showAlertWithError:(NSError *)arg1;
- (void)popToRootViewControllerAnimated:(_Bool)arg1;
- (void)popToRootViewController;
- (void)popViewController;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
@property(nonatomic, retain) IFRouterFields *fields;
@property(nonatomic) __weak UIViewController *controller;
@end

