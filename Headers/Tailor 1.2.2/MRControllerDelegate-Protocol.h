//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, MPAdConfiguration, NSString, UIView, UIViewController;

@protocol MRControllerDelegate <NSObject>
- (void)appShouldResumeFromAd:(UIView *)arg1;
- (void)appShouldSuspendForAd:(UIView *)arg1;
- (UIViewController *)viewControllerForPresentingModalView;
- (CLLocation *)location;
- (MPAdConfiguration *)adConfiguration;
- (NSString *)adUnitId;

@optional
- (void)rewardedVideoEnded;
- (void)adDidClose:(UIView *)arg1;
- (void)adWillClose:(UIView *)arg1;
- (void)adDidFailToLoad:(UIView *)arg1;
- (void)adDidLoad:(UIView *)arg1;
@end

