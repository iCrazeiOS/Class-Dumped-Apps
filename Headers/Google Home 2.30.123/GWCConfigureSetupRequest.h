//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBTimestamp, NSString;

@interface GWCConfigureSetupRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBTimestamp *expirationTime; // @dynamic expirationTime;
@property(copy, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) _Bool hasExpirationTime; // @dynamic hasExpirationTime;
@property(copy, nonatomic) NSString *psk; // @dynamic psk;
@property(copy, nonatomic) NSString *ssid; // @dynamic ssid;

@end

