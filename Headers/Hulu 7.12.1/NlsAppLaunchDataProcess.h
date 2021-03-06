//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NlsBaseDataProcessor.h"

@class NSString, NielsenAppApi;

@interface NlsAppLaunchDataProcess : NlsBaseDataProcessor
{
}

+ (void)resetSession;
+ (void)endSession;
+ (void)pauseSession;
+ (void)continueSession;
+ (_Bool)isNewSessionRequired;
+ (void)startSessionIfNeeded;
+ (void)startSession;
+ (_Bool)isBackgroundState;
+ (_Bool)isNewLaunchSession;
+ (void)processCrashEvent;
+ (void)processTerminationEvent:(id)arg1;
+ (void)processForegroundEvent:(id)arg1;
+ (void)processBackgroundEvent:(id)arg1;
+ (void)processLaunchEvent:(id)arg1;
+ (void)load;
+ (double)timeConversionFactor;
@property(readonly, nonatomic) _Bool isInvalidateMasterAppId;
@property(readonly, nonatomic) NSString *appId;
@property(readonly, nonatomic) __weak NielsenAppApi *sdkInstance;
- (void)dealloc;
- (void)storePingsToSend;
- (id)limitedArrayOfSortedPings:(id)arg1;
- (id)sortedArrayOfPingsWithLimitForAppLaunch:(id)arg1;
- (id)initWithWorker:(id)arg1 withPid:(long long)arg2;

@end

