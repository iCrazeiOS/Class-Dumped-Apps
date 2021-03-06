//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface GRWErrorLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_errors;
}

+ (void)logError:(id)arg1 file:(const char *)arg2 line:(int)arg3 method:(const char *)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)sharedLogger;
+ (void)setLoggerLogger:(id)arg1;
+ (void)logError:(id)arg1 file:(const char *)arg2 line:(int)arg3 method:(const char *)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (id)errorSummaryFromDisk;
- (void)writeErrorsToDisk;
- (void)removeErrorLogs;
- (id)stringForError:(id)arg1;
- (void)handleAppStateChangeNotification:(id)arg1;
- (void)registerNotifications;
- (id)init;

@end

