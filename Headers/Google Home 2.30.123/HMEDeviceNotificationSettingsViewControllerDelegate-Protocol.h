//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol HMEDeviceNotificationSettingsViewControllerDelegate <NSObject>
- (void)deviceNotificationSettingsViewController:(UIViewController *)arg1 didTapYoutubeSettingsForHGSDeviceID:(NSString *)arg2;
- (void)deviceNotificationSettingsViewController:(UIViewController *)arg1 didTapDoNotDisturbForHGSDeviceID:(NSString *)arg2;
- (void)deviceNotificationSettingsViewController:(UIViewController *)arg1 didTapNightModeForHGSDeviceID:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (void)deviceNotificationSettingsViewController:(UIViewController *)arg1 didTapDigitalWellbeingForHGSDeviceID:(NSString *)arg2;
@end

