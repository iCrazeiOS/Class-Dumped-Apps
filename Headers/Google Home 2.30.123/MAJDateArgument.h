//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MAJActionDate, MAJDateArgument_Date, NSMutableArray;

@interface MAJDateArgument : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MAJActionDate *date; // @dynamic date;
@property(nonatomic) _Bool hasDate; // @dynamic hasDate;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) NSMutableArray *presetDateArray; // @dynamic presetDateArray;
@property(readonly, nonatomic) unsigned long long presetDateArray_Count; // @dynamic presetDateArray_Count;
@property(retain, nonatomic) MAJDateArgument_Date *value; // @dynamic value;

@end

