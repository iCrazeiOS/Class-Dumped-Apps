//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class NSString, SCOChromecastDetails, SCOIdentity;

@interface SCODeviceIdentifiers : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCOChromecastDetails *chromecastDetails; // @dynamic chromecastDetails;
@property(nonatomic) _Bool hasChromecastDetails; // @dynamic hasChromecastDetails;
@property(nonatomic) _Bool hasIosIdentifierForVendor; // @dynamic hasIosIdentifierForVendor;
@property(nonatomic) _Bool hasRegistrant; // @dynamic hasRegistrant;
@property(nonatomic) _Bool hasRegistrationType; // @dynamic hasRegistrationType;
@property(nonatomic) _Bool hasUlrDeviceId; // @dynamic hasUlrDeviceId;
@property(retain, nonatomic) NSString *iosIdentifierForVendor; // @dynamic iosIdentifierForVendor;
@property(retain, nonatomic) SCOIdentity *registrant; // @dynamic registrant;
@property(nonatomic) int registrationType; // @dynamic registrationType;
@property(nonatomic) int ulrDeviceId; // @dynamic ulrDeviceId;

@end

