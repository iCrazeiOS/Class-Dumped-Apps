//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SQPBFranklinAppMatchContactsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(retain, nonatomic) NSMutableArray *matchedContactsArray; // @dynamic matchedContactsArray;
@property(readonly, nonatomic) unsigned long long matchedContactsArray_Count; // @dynamic matchedContactsArray_Count;
@property(nonatomic) int status; // @dynamic status;

@end

