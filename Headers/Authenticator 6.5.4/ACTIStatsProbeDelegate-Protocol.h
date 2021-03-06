//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AriaObjC/NSObject-Protocol.h>

@class ACTEventBase, NSArray, NSData, NSDate, NSString;

@protocol ACTIStatsProbeDelegate <NSObject>
- (void)intakeRequestData:(NSData *)arg1 timeSent:(NSDate *)arg2 timeResponseReceived:(NSDate *)arg3 events:(NSArray *)arg4 component:(NSString *)arg5;
- (void)intakeDeleteMultiple:(NSArray *)arg1 logReason:(NSString *)arg2 component:(NSString *)arg3;
- (void)intakeLoadMultiple:(NSArray *)arg1 logReason:(NSString *)arg2 component:(NSString *)arg3;
- (void)intakeRequeueMultiple:(NSArray *)arg1 requeueReason:(NSString *)arg2 logReason:(NSString *)arg3 component:(NSString *)arg4;
- (void)intakeRetryMultiple:(NSArray *)arg1 retryReason:(NSString *)arg2 logReason:(NSString *)arg3 component:(NSString *)arg4;
- (void)intakeSentMultiple:(NSArray *)arg1 component:(NSString *)arg2 data:(NSData *)arg3;
- (void)intakeSave:(ACTEventBase *)arg1 component:(NSString *)arg2;
- (void)intakeRejectMultiple:(NSArray *)arg1 rejectReason:(int)arg2 logReason:(NSString *)arg3 component:(NSString *)arg4;
- (void)intakeReject:(ACTEventBase *)arg1 rejectReason:(int)arg2 logReason:(NSString *)arg3 component:(NSString *)arg4;
- (void)intakeDropMultiple:(NSArray *)arg1 dropReason:(int)arg2 logReason:(NSString *)arg3 component:(NSString *)arg4 statusCode:(long long)arg5;
- (void)intakeDrop:(ACTEventBase *)arg1 dropReason:(int)arg2 logReason:(NSString *)arg3 component:(NSString *)arg4 statusCode:(long long)arg5;
- (void)intakeDropTenant:(NSString *)arg1 priority:(int)arg2 dropReason:(int)arg3 logReason:(NSString *)arg4 component:(NSString *)arg5;
@end

