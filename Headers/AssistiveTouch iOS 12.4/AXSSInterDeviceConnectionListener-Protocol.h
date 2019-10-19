//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AXSSSwitchControlSettings, NSString;

@protocol AXSSInterDeviceConnectionListener
- (_Bool)canAdvertise;
- (void)highlightAsPotentialSlaveForDeviceWithName:(NSString *)arg1;
- (void)didBecomeIdle;
- (void)didDisconnectAsSlave;
- (void)didDisconnectAsMasterFromDeviceWithName:(NSString *)arg1;
- (void)didConnectAsSlaveWithSettings:(AXSSSwitchControlSettings *)arg1;
- (void)didConnectAsMasterToDeviceWithName:(NSString *)arg1;
@end

