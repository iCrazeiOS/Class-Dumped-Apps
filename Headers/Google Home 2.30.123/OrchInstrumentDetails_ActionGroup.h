//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, OrchInfoMessage;

@interface OrchInstrumentDetails_ActionGroup : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionArray; // @dynamic actionArray;
@property(readonly, nonatomic) unsigned long long actionArray_Count; // @dynamic actionArray_Count;
@property(readonly, nonatomic) int dataOneOfCase; // @dynamic dataOneOfCase;
@property(nonatomic) _Bool disabled; // @dynamic disabled;
@property(nonatomic) _Bool hasDisabled; // @dynamic hasDisabled;
@property(nonatomic) int initialIndex; // @dynamic initialIndex;
@property(retain, nonatomic) OrchInfoMessage *label; // @dynamic label;

@end

