//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class NSArray, NSNumber, NSString;

@interface GTLRAccesspoints_Station : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *apId; // @dynamic apId;
@property(copy, nonatomic) NSString *automaticFriendlyName; // @dynamic automaticFriendlyName;
@property(retain, nonatomic) NSNumber *connected; // @dynamic connected;
@property(copy, nonatomic) NSString *connectionType; // @dynamic connectionType;
@property(copy, nonatomic) NSString *curatedOuiName; // @dynamic curatedOuiName;
@property(retain, nonatomic) NSNumber *eligibleForHomeControl; // @dynamic eligibleForHomeControl;
@property(copy, nonatomic) NSString *friendlyName; // @dynamic friendlyName;
@property(copy, nonatomic) NSString *friendlyType; // @dynamic friendlyType;
@property(copy, nonatomic) NSString *homeControlPairingUrl; // @dynamic homeControlPairingUrl;
@property(copy, nonatomic) NSString *homeControlUnpairingUrl; // @dynamic homeControlUnpairingUrl;
@property(copy, nonatomic) NSString *hybridDeviceId; // @dynamic hybridDeviceId;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *ipAddress; // @dynamic ipAddress;
@property(retain, nonatomic) NSArray *ipAddresses; // @dynamic ipAddresses;
@property(retain, nonatomic) NSArray *ipv6Addresses; // @dynamic ipv6Addresses;
@property(retain, nonatomic) NSArray *observedIpv6Addresses; // @dynamic observedIpv6Addresses;
@property(copy, nonatomic) NSString *stationType; // @dynamic stationType;
@property(copy, nonatomic) NSString *unfilteredCuratedOuiName; // @dynamic unfilteredCuratedOuiName;
@property(copy, nonatomic) NSString *unfilteredFriendlyType; // @dynamic unfilteredFriendlyType;
@property(copy, nonatomic) NSString *wirelessBand; // @dynamic wirelessBand;

@end

