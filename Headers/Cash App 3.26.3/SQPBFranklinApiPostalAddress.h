//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SQPBFranklinApiPostalAddress : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *city; // @dynamic city;
@property(nonatomic) _Bool hasCity; // @dynamic hasCity;
@property(nonatomic) _Bool hasLine1; // @dynamic hasLine1;
@property(nonatomic) _Bool hasLine2; // @dynamic hasLine2;
@property(nonatomic) _Bool hasState; // @dynamic hasState;
@property(nonatomic) _Bool hasZip; // @dynamic hasZip;
@property(copy, nonatomic) NSString *line1; // @dynamic line1;
@property(copy, nonatomic) NSString *line2; // @dynamic line2;
@property(copy, nonatomic) NSString *state; // @dynamic state;
@property(copy, nonatomic) NSString *zip; // @dynamic zip;

@end

