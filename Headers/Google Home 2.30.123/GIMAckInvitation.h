//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray, NSString;

@interface GIMAckInvitation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *codecDescription; // @dynamic codecDescription;
@property(retain, nonatomic) GPBEnumArray *featuresArray; // @dynamic featuresArray;
@property(readonly, nonatomic) unsigned long long featuresArray_Count; // @dynamic featuresArray_Count;
@property(nonatomic) int iceRestartPolicy; // @dynamic iceRestartPolicy;
@property(nonatomic) int networkType; // @dynamic networkType;
@property(nonatomic) _Bool useDataSaver; // @dynamic useDataSaver;
@property(nonatomic) _Bool useVideoRing; // @dynamic useVideoRing;
@property(retain, nonatomic) NSMutableArray *videoCodecCapabilitiesArray; // @dynamic videoCodecCapabilitiesArray;
@property(readonly, nonatomic) unsigned long long videoCodecCapabilitiesArray_Count; // @dynamic videoCodecCapabilitiesArray_Count;

@end

