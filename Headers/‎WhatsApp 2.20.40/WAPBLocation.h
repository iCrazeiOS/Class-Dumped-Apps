//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class NSString;

@interface WAPBLocation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double degreesLatitude; // @dynamic degreesLatitude;
@property(nonatomic) double degreesLongitude; // @dynamic degreesLongitude;
@property(nonatomic) _Bool hasDegreesLatitude; // @dynamic hasDegreesLatitude;
@property(nonatomic) _Bool hasDegreesLongitude; // @dynamic hasDegreesLongitude;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

