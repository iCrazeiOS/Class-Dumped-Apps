//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSData, NSMutableArray;

@interface GMSx_GMPCMultiZoomStyleTable : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStyleTableConsistencyKey; // @dynamic hasStyleTableConsistencyKey;
@property(nonatomic) _Bool hasStyleTableId; // @dynamic hasStyleTableId;
@property(retain, nonatomic) NSMutableArray *multiZoomStyleArray; // @dynamic multiZoomStyleArray;
@property(readonly, nonatomic) unsigned long long multiZoomStyleArray_Count; // @dynamic multiZoomStyleArray_Count;
@property(retain, nonatomic) NSMutableArray *namedStyleArray; // @dynamic namedStyleArray;
@property(readonly, nonatomic) unsigned long long namedStyleArray_Count; // @dynamic namedStyleArray_Count;
@property(copy, nonatomic) NSData *styleTableConsistencyKey; // @dynamic styleTableConsistencyKey;
@property(nonatomic) int styleTableId; // @dynamic styleTableId;

@end

