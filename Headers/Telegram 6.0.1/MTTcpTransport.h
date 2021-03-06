//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MtProtoKit/MTTransport.h>

#import <MtProtoKit/MTTcpConnectionBehaviourDelegate-Protocol.h>
#import <MtProtoKit/MTTcpConnectionDelegate-Protocol.h>

@class MTContext, MTNetworkUsageCalculationInfo, MTTcpTransportContext, NSString;

@interface MTTcpTransport : MTTransport <MTTcpConnectionDelegate, MTTcpConnectionBehaviourDelegate>
{
    MTTcpTransportContext *_transportContext;
    MTContext *_context;
    long long _datacenterId;
    MTNetworkUsageCalculationInfo *_usageCalculationInfo;
}

+ (id)tcpTransportQueue;
- (void).cxx_destruct;
- (void)updateSchemes:(id)arg1;
- (void)mtProto:(id)arg1 messageDeliveryFailed:(long long)arg2;
- (void)mtProto:(id)arg1 receivedMessage:(id)arg2;
- (void)mtProtoServerDidChangeSession:(id)arg1 firstValidMessageId:(long long)arg2 otherValidMessageIds:(id)arg3;
- (void)mtProtoDidChangeSession:(id)arg1;
- (void)_networkAvailabilityChanged:(_Bool)arg1;
- (void)activeTransactionIds:(CDUnknownBlockType)arg1;
- (void)_requestTransactionFromDelegate;
- (void)tcpConnectionBehaviourRequestsReconnection:(id)arg1 error:(_Bool)arg2;
- (void)tcpConnectionProgressUpdated:(id)arg1 packetProgressToken:(id)arg2 packetLength:(unsigned long long)arg3 progress:(float)arg4;
- (void)tcpConnectionDecodePacketProgressToken:(id)arg1 data:(id)arg2 token:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)tcpConnectionReceivedQuickAck:(id)arg1 quickAck:(int)arg2;
- (void)connectionIsInvalid;
- (void)connectionIsValid:(id)arg1;
- (void)tcpConnectionReceivedData:(id)arg1 data:(id)arg2;
- (void)tcpConnectionClosed:(id)arg1 error:(_Bool)arg2;
- (void)tcpConnectionOpened:(id)arg1;
- (void)resendActualizationPing;
- (void)stopActualizationPingResendTimer;
- (void)startActualizationPingResendTimer;
- (void)connectionWatchdogTimeout:(id)arg1;
- (void)stopConnectionWatchdogTimer;
- (void)startConnectionWatchdogTimer:(id)arg1;
- (void)stopSleepWatchdogTimer;
- (void)restartSleepWatchdogTimer;
- (void)startSleepWatchdogTimer;
- (void)stop;
- (void)reset;
- (void)startIfNeeded;
- (void)setDelegateNeedsTransaction;
- (void)updateConnectionState;
- (_Bool)needsParityCorrection;
- (void)setUsageCalculationInfo:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 context:(id)arg2 datacenterId:(long long)arg3 schemes:(id)arg4 proxySettings:(id)arg5 usageCalculationInfo:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

