//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCTargetTemperature, GPBDuration, GPBTimestamp, NSString;

@interface GHCStartScheduleHoldRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int atomId; // @dynamic atomId;
@property(retain, nonatomic) GPBTimestamp *endTime; // @dynamic endTime;
@property(nonatomic) _Bool hasEndTime; // @dynamic hasEndTime;
@property(nonatomic) _Bool hasHoldDuration; // @dynamic hasHoldDuration;
@property(nonatomic) _Bool hasTargetTemperature; // @dynamic hasTargetTemperature;
@property(copy, nonatomic) NSString *hgsDeviceId; // @dynamic hgsDeviceId;
@property(retain, nonatomic) GPBDuration *holdDuration; // @dynamic holdDuration;
@property(nonatomic) _Bool isIndefinite; // @dynamic isIndefinite;
@property(nonatomic) int setPointType; // @dynamic setPointType;
@property(retain, nonatomic) GHCTargetTemperature *targetTemperature; // @dynamic targetTemperature;

@end

