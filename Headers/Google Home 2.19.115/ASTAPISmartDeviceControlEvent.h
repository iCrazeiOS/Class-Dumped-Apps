//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTAPIShowSmartDeviceControlArgs, NSMutableArray, NSString;

@interface ASTAPISmartDeviceControlEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasObfuscatedGaiaId; // @dynamic hasObfuscatedGaiaId;
@property(nonatomic) _Bool hasSmartDeviceControlArgs; // @dynamic hasSmartDeviceControlArgs;
@property(copy, nonatomic) NSString *obfuscatedGaiaId; // @dynamic obfuscatedGaiaId;
@property(retain, nonatomic) ASTAPIShowSmartDeviceControlArgs *smartDeviceControlArgs; // @dynamic smartDeviceControlArgs;
@property(retain, nonatomic) NSMutableArray *targetDevicesArray; // @dynamic targetDevicesArray;
@property(readonly, nonatomic) unsigned long long targetDevicesArray_Count; // @dynamic targetDevicesArray_Count;

@end

