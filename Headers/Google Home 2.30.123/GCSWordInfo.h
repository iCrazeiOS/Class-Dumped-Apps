//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDuration, NSString;

@interface GCSWordInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float confidence; // @dynamic confidence;
@property(retain, nonatomic) GPBDuration *endTime; // @dynamic endTime;
@property(nonatomic) _Bool hasEndTime; // @dynamic hasEndTime;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(nonatomic) int speakerTag; // @dynamic speakerTag;
@property(retain, nonatomic) GPBDuration *startTime; // @dynamic startTime;
@property(copy, nonatomic) NSString *word; // @dynamic word;

@end

