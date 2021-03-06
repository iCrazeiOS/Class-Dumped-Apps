//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWSDDLogMessage, NSObject, NSString;
@protocol AWSDDLogFormatter, OS_dispatch_queue;

@protocol AWSDDLogger <NSObject>
@property(retain, nonatomic) id <AWSDDLogFormatter> logFormatter;
- (void)logMessage:(AWSDDLogMessage *)arg1;

@optional
@property(readonly, nonatomic) NSString *loggerName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
- (void)flush;
- (void)willRemoveLogger;
- (void)didAddLoggerInQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)didAddLogger;
@end

