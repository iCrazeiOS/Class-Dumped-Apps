//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class ASMHeartbeat, NSArray, NSError, NSString;

@protocol ASMLoggerModel <NSObject>
- (void)logAccessingPhotoLibraryFailedOnScreen:(int)arg1;
- (void)logAccessingCameraFailedOnScreen:(int)arg1;
- (void)logRemovingProfilePhotoSucceededFromScreen:(int)arg1 rpcIdentifier:(NSString *)arg2;
- (void)logRemovingProfilePhotoFailedFromScreen:(int)arg1 rpcIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)logUploadingProfilePhotoSucceededFromScreen:(int)arg1 rpcIdentifier:(NSString *)arg2 accountHadPictureBefore:(_Bool)arg3;
- (void)logUploadingProfilePhotoFailedFromScreen:(int)arg1 rpcIdentifier:(NSString *)arg2 error:(NSError *)arg3 accountHadPictureBefore:(_Bool)arg4;
- (void)logHeartbeat:(ASMHeartbeat *)arg1 allHeartbeatTimes:(NSArray *)arg2;
- (void)logTapEventOnScreen:(int)arg1 withTarget:(int)arg2 navigationOrigin:(unsigned long long)arg3;
- (void)logOutboundNavigationToDestination:(int)arg1;
- (void)logViewEvent:(int)arg1;
- (void)logNavigationFromScreen:(int)arg1 toScreen:(int)arg2 withNavigationOrigin:(unsigned long long)arg3;
- (void)logLaunchedWithTarget:(int)arg1 fromClient:(NSString *)arg2 withUTMCampaign:(NSString *)arg3 utmMedium:(NSString *)arg4 utmSource:(NSString *)arg5;
@end

