//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEVideoRecorderMessage-Protocol.h"
#import "HTSAppLifeCycle-Protocol.h"
#import "InstallAndDeviceIDMessage-Protocol.h"

@class NSString;

@interface TikTokKidsStudioModule : NSObject <AWEVideoRecorderMessage, HTSAppLifeCycle, InstallAndDeviceIDMessage>
{
}

- (void)onAppDidBecomeActive;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (void)onAppWillEnterForeground;
- (void)didUpdateInstallIDFrom:(id)arg1 to:(id)arg2;
- (void)didUpdateDeviceIDFrom:(id)arg1 to:(id)arg2;
- (void)videoRecorderWouldAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

