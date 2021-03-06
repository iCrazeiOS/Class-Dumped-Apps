//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface NFUIMemoryAndBatteryProfile : NSObject
{
    NSNumber *_memoryUsed;
    NSNumber *_memoryPercentageUsed;
    NSNumber *_cpuLevel;
    NSNumber *_deviceMemoryFree;
    NSNumber *_deviceMemoryTotal;
    NSNumber *_batteryLevel;
    long long _batteryState;
}

@property(nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
@property(retain, nonatomic) NSNumber *batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(retain, nonatomic) NSNumber *deviceMemoryTotal; // @synthesize deviceMemoryTotal=_deviceMemoryTotal;
@property(retain, nonatomic) NSNumber *deviceMemoryFree; // @synthesize deviceMemoryFree=_deviceMemoryFree;
@property(retain, nonatomic) NSNumber *cpuLevel; // @synthesize cpuLevel=_cpuLevel;
@property(retain, nonatomic) NSNumber *memoryPercentageUsed; // @synthesize memoryPercentageUsed=_memoryPercentageUsed;
@property(retain, nonatomic) NSNumber *memoryUsed; // @synthesize memoryUsed=_memoryUsed;
- (void).cxx_destruct;
- (id)asDictionary;
- (double)is_batteryLow;
- (double)is_charge;

@end

