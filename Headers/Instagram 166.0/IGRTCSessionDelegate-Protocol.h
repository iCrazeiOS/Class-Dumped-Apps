//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGRTCVideoCallParticipantInfo, IGVideoCallJoinResult, IGVideoCallLogEndCallReason, NSDictionary, NSString;
@protocol IGRTCSessionIntf;

@protocol IGRTCSessionDelegate <NSObject>
- (void)rtcSession:(id <IGRTCSessionIntf>)arg1 didUpdateUserId:(NSString *)arg2 fromState:(long long)arg3 toState:(long long)arg4 capabilities:(NSDictionary *)arg5;
- (void)rtcSession:(id <IGRTCSessionIntf>)arg1 callEnded:(IGVideoCallLogEndCallReason *)arg2 mqttConnected:(_Bool)arg3 tsLogString:(NSString *)arg4;
- (void)rtcSessionDidEnd:(id <IGRTCSessionIntf>)arg1 reasonCallEnded:(_Bool)arg2;
- (void)rtcSessionWillDismiss:(id <IGRTCSessionIntf>)arg1 joinCallResult:(IGVideoCallJoinResult *)arg2;
- (void)rtcSessionDidReconnect:(id <IGRTCSessionIntf>)arg1;
- (void)rtcSessionDidDisconnect:(id <IGRTCSessionIntf>)arg1;
- (void)rtcSessionDidConnect:(id <IGRTCSessionIntf>)arg1 withSessionId:(NSString *)arg2 serverInfoData:(NSString *)arg3;
- (void)rtcSession:(id <IGRTCSessionIntf>)arg1 didRemoveParticipantId:(NSString *)arg2;
- (void)rtcSession:(id <IGRTCSessionIntf>)arg1 didUpdateParticipant:(IGRTCVideoCallParticipantInfo *)arg2;
- (void)rtcSession:(id <IGRTCSessionIntf>)arg1 didAddParticipant:(IGRTCVideoCallParticipantInfo *)arg2;
@end

