//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ARICreateAuditRecordRequest, GRPCProtoCall;

@protocol ARIAuditRecordingMobileService <NSObject>
- (GRPCProtoCall *)RPCToCreateAuditRecordWithRequest:(ARICreateAuditRecordRequest *)arg1 handler:(void (^)(ARICreateAuditRecordResponse *, NSError *))arg2;
- (void)createAuditRecordWithRequest:(ARICreateAuditRecordRequest *)arg1 handler:(void (^)(ARICreateAuditRecordResponse *, NSError *))arg2;
@end

