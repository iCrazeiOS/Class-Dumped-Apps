//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseProvisioningViewController.h"

#import "ChangingWifiProvisioning-Protocol.h"
#import "Roomba900ErrorHandlingViewControllerDelegate-Protocol.h"
#import "WiFiSettingsEditViewControllerDelegate-Protocol.h"

@class NSString, NetworkConnectInfo, WiFiSettingsEditViewController;

@interface Roomba900SetupStep2PasswordViewController : BaseProvisioningViewController <WiFiSettingsEditViewControllerDelegate, Roomba900ErrorHandlingViewControllerDelegate, ChangingWifiProvisioning>
{
    NSString *_assetIdToMatchWhenChangingWifiProvisioning;
    NSString *_viewTitle;
    NetworkConnectInfo *_networkConnectInfo;
    WiFiSettingsEditViewController *_wiFiSettingsEditViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WiFiSettingsEditViewController *wiFiSettingsEditViewController; // @synthesize wiFiSettingsEditViewController=_wiFiSettingsEditViewController;
@property(retain, nonatomic) NetworkConnectInfo *networkConnectInfo; // @synthesize networkConnectInfo=_networkConnectInfo;
@property(copy, nonatomic) NSString *viewTitle; // @synthesize viewTitle=_viewTitle;
@property(retain, nonatomic) NSString *assetIdToMatchWhenChangingWifiProvisioning; // @synthesize assetIdToMatchWhenChangingWifiProvisioning=_assetIdToMatchWhenChangingWifiProvisioning;
- (void)configureAccessibility;
- (void)dismissErrorViewController;
- (void)updateAdvancedWiFiSettingsWithWiFiInfo:(id)arg1;
- (void)goToNextScreenWithWifiInfo:(id)arg1;
- (void)show5GhzWarningMessageWithWifiInfo:(id)arg1;
- (void)wiFiSettingsEditViewController:(id)arg1 didFinishWithWiFiInfo:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)applicationDidBecomeActiveNotification;
- (void)loadSSID;
- (long long)provisioningStep;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

