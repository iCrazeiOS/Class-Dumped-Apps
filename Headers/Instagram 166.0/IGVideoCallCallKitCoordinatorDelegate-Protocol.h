//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGRTCVideoCallJoinContext, IGRTCVideoCallJoinInfo, IGVideoCallCallKitCoordinator, IGVideoCallSession, NSError;

@protocol IGVideoCallCallKitCoordinatorDelegate <NSObject>
- (void)callKitDidEncounterError:(IGVideoCallCallKitCoordinator *)arg1 callErrorAction:(long long)arg2 error:(NSError *)arg3;
- (void)callKitDidDisplayRingScreen:(IGVideoCallCallKitCoordinator *)arg1 joinInfo:(IGRTCVideoCallJoinInfo *)arg2 joinContext:(IGRTCVideoCallJoinContext *)arg3;
- (void)callKitDidEndCall:(IGVideoCallCallKitCoordinator *)arg1 joinInfo:(IGRTCVideoCallJoinInfo *)arg2;
- (void)callKitDidRejectCall:(IGVideoCallCallKitCoordinator *)arg1 joinInfo:(IGRTCVideoCallJoinInfo *)arg2 joinContext:(IGRTCVideoCallJoinContext *)arg3;
- (void)callKitDidAttemptAnswerCall:(IGVideoCallCallKitCoordinator *)arg1 videoCallSession:(IGVideoCallSession *)arg2 isCameraPermissionsEnabled:(_Bool)arg3;
- (void)callKitDidTimeoutRing:(IGVideoCallCallKitCoordinator *)arg1 videoCallSession:(IGVideoCallSession *)arg2 joinContext:(IGRTCVideoCallJoinContext *)arg3;
@end

