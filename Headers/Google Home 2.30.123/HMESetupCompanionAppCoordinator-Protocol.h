//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMESetupNavigationController, SetupCastDevice;
@protocol HMESetupCompanionAppCoordinatorDelegate;

@protocol HMESetupCompanionAppCoordinator <NSObject>
@property(nonatomic) __weak id <HMESetupCompanionAppCoordinatorDelegate> delegate;
- (_Bool)hasCompanionAppFlowWithDevice:(SetupCastDevice *)arg1;
- (void)startInNavigationController:(HMESetupNavigationController *)arg1 device:(SetupCastDevice *)arg2;
@end

