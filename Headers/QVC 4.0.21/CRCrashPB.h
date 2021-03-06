//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CRError.h"

#import "CRGarbageCollection-Protocol.h"

@class NSObject, NSString;

@interface CRCrashPB : CRError <CRGarbageCollection>
{
}

+ (double)defaultReportFrequency;
+ (_Bool)isEnabledByDefault;
+ (id)garbageCollectionSortDescriptor;
+ (unsigned long long)garbageCollectionLowWaterMark;
+ (unsigned long long)garbageCollectionHighWaterMark;
+ (id)fetchRequest;
- (id)sendEventValueWithSettings:(id)arg1;
- (id)rateValueWithSettings:(id)arg1;
- (id)initWithContext:(id)arg1 session:(id)arg2 timestamp:(id)arg3 loadedBinaryImageList:(id)arg4 threadListMap:(id)arg5 crashedThreadNumber:(id)arg6 crashedBinaryUuid:(id)arg7 errorAddress:(id)arg8 errorCode:(id)arg9 errorName:(id)arg10 errorReason:(id)arg11 errorType:(id)arg12 errorTrace:(id)arg13 diskSpaceFree:(id)arg14 memoryUsage:(id)arg15;

// Remaining properties
@property(copy, nonatomic) NSString *crashedBinaryUuid; // @dynamic crashedBinaryUuid;
@property(retain, nonatomic) NSObject *loadedBinaryImageList; // @dynamic loadedBinaryImageList;
@property(retain, nonatomic) NSObject *threadList; // @dynamic threadList;

@end

