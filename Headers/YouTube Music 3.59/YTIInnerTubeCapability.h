//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBUInt32Array, NSMutableArray;

@interface YTIInnerTubeCapability : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int capability; // @dynamic capability;
@property(nonatomic) unsigned int contextualCapability; // @dynamic contextualCapability;
@property(retain, nonatomic) NSMutableArray *experimentFlagsArray; // @dynamic experimentFlagsArray;
@property(readonly, nonatomic) unsigned long long experimentFlagsArray_Count; // @dynamic experimentFlagsArray_Count;
@property(retain, nonatomic) GPBUInt32Array *experimentsArray; // @dynamic experimentsArray;
@property(readonly, nonatomic) unsigned long long experimentsArray_Count; // @dynamic experimentsArray_Count;
@property(retain, nonatomic) GPBUInt32Array *featuresArray; // @dynamic featuresArray;
@property(readonly, nonatomic) unsigned long long featuresArray_Count; // @dynamic featuresArray_Count;
@property(nonatomic) _Bool hasCapability; // @dynamic hasCapability;
@property(nonatomic) _Bool hasContextualCapability; // @dynamic hasContextualCapability;

@end

