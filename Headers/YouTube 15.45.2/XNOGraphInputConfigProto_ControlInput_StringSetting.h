//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface XNOGraphInputConfigProto_ControlInput_StringSetting : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *defaultValue; // @dynamic defaultValue;
@property(nonatomic) _Bool hasDefaultValue; // @dynamic hasDefaultValue;
@property(retain, nonatomic) NSMutableArray *possibleValueArray; // @dynamic possibleValueArray;
@property(readonly, nonatomic) unsigned long long possibleValueArray_Count; // @dynamic possibleValueArray_Count;

@end

