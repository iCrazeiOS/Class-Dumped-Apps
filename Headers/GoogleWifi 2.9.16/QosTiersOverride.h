//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface QosTiersOverride : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasQosTierFingerprint; // @dynamic hasQosTierFingerprint;
@property(retain, nonatomic) NSMutableArray *qosTierConfigurationArray; // @dynamic qosTierConfigurationArray;
@property(readonly, nonatomic) unsigned long long qosTierConfigurationArray_Count; // @dynamic qosTierConfigurationArray_Count;
@property(nonatomic) long long qosTierFingerprint; // @dynamic qosTierFingerprint;

@end

