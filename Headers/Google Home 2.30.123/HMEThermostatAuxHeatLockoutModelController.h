//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEThermostatAuxHeatLockoutModelController-Protocol.h"

@class NSString;
@protocol GHCEnergyService, HMEThermostatAuxHeatLockoutModelControllerDelegate;

@interface HMEThermostatAuxHeatLockoutModelController : NSObject <HMEThermostatAuxHeatLockoutModelController>
{
    id <HMEThermostatAuxHeatLockoutModelControllerDelegate> _delegate;
    id <GHCEnergyService> _energyService;
    NSString *_HGSDeviceID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *HGSDeviceID; // @synthesize HGSDeviceID=_HGSDeviceID;
@property(retain, nonatomic) id <GHCEnergyService> energyService; // @synthesize energyService=_energyService;
@property(nonatomic) __weak id <HMEThermostatAuxHeatLockoutModelControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateAuxHeatLockoutTemperatureTarget:(id)arg1;
- (void)fetchAuxHeatAndCompressorLockoutPreferences;
- (id)initWithEnergyService:(id)arg1 deviceID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

