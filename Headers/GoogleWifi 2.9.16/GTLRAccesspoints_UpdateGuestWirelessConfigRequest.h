//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRAccesspoints_WirelessConfig, NSArray, NSNumber, NSString;

@interface GTLRAccesspoints_UpdateGuestWirelessConfigRequest : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSNumber *clearSharedStationIds; // @dynamic clearSharedStationIds;
@property(retain, nonatomic) NSNumber *enabled; // @dynamic enabled;
@property(retain, nonatomic) NSArray *sharedStationIds; // @dynamic sharedStationIds;
@property(retain, nonatomic) NSNumber *welcomeMatEnabled; // @dynamic welcomeMatEnabled;
@property(copy, nonatomic) NSString *welcomeMatTitle; // @dynamic welcomeMatTitle;
@property(retain, nonatomic) GTLRAccesspoints_WirelessConfig *wirelessConfig; // @dynamic wirelessConfig;

@end

