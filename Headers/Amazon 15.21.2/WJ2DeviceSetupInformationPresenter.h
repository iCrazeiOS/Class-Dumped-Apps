//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WJ2DeviceSetupInfoDelegate-Protocol.h"

@class WJ2DeviceSetupInfoConfig, WJ2DeviceSetupInfoController;
@protocol WJ2DeviceSetupInformationView;

@interface WJ2DeviceSetupInformationPresenter : NSObject <WJ2DeviceSetupInfoDelegate>
{
    WJ2DeviceSetupInfoConfig *_setupConfig;
    id <WJ2DeviceSetupInformationView> _setupInfoView;
    WJ2DeviceSetupInfoController *_deviceSetupInfoController;
}

@property(retain) WJ2DeviceSetupInfoController *deviceSetupInfoController; // @synthesize deviceSetupInfoController=_deviceSetupInfoController;
@property(retain) id <WJ2DeviceSetupInformationView> setupInfoView; // @synthesize setupInfoView=_setupInfoView;
@property(retain) WJ2DeviceSetupInfoConfig *setupConfig; // @synthesize setupConfig=_setupConfig;
- (void).cxx_destruct;
- (id)getOptOutError;
- (void)didErrorOccur:(id)arg1;
- (void)didGetCustomerProvisioneesSetupStatus:(id)arg1;
- (void)didDiscoverDevicesIneligibleForAutomatedSetup:(id)arg1;
- (void)didDiscoverDevicesForControlledSetup:(id)arg1;
- (void)terminate;
- (void)getCustomerProvisioneesSetupStatus:(id)arg1;
- (void)attachView:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

