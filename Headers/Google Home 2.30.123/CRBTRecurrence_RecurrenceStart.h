//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CRBTDateTime;

@interface CRBTRecurrence_RecurrenceStart : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStartDateTime; // @dynamic hasStartDateTime;
@property(nonatomic) _Bool hasStartMillis; // @dynamic hasStartMillis;
@property(retain, nonatomic) CRBTDateTime *startDateTime; // @dynamic startDateTime;
@property(nonatomic) long long startMillis; // @dynamic startMillis;

@end

