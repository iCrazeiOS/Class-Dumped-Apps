//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRDateTime, NSArray, NSNumber;

@interface GTLRAccesspoints_UpdateStationBlockingRequest : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSNumber *blocked; // @dynamic blocked;
@property(retain, nonatomic) GTLRDateTime *expiryTimestamp; // @dynamic expiryTimestamp;
@property(retain, nonatomic) NSArray *stationId; // @dynamic stationId;
@property(retain, nonatomic) NSArray *stationSetId; // @dynamic stationSetId;

@end

