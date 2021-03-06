//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAOwnDeviceLoading-Protocol.h"
#import "WAOwnDeviceManaging-Protocol.h"

@class NSArray, NSDate, UIViewController, WACompanionDevice, WACompanionQRCode, WADeviceJID;
@protocol WAAddCompanionReference, WAServerDate;

@protocol WAOwnDeviceManagingMain <WAOwnDeviceManaging, WAOwnDeviceLoading>
@property(readonly) _Bool isCompanionRegAvailable;
@property(readonly) _Bool isCompanionRegEnabled;
- (_Bool)removeDevicesForSignOut;
- (void)removeAllCompanionDevicesWithCompletion:(void (^)(_Bool))arg1;
- (void)removeLocalRemovedCompanionDevices:(NSArray *)arg1 notify:(_Bool)arg2;
- (void)updateLocalCompanionDevice:(WADeviceJID *)arg1 lastSeenDate:(NSDate<WAServerDate> *)arg2 isActiveNow:(_Bool)arg3;
- (id <WAAddCompanionReference>)addCompanionDeviceWithCode:(WACompanionQRCode *)arg1 fromViewController:(UIViewController *)arg2 completion:(void (^)(WACompanionDevice *, NSError *))arg3;
- (WACompanionDevice *)companionDevice:(WADeviceJID *)arg1 isRemoved:(_Bool)arg2;
- (NSArray *)removedCompanionDevices;
- (NSArray *)companionDevices;
- (void)setCompanionRegEnabled:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
@end

