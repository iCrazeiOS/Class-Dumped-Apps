//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface IphoneClientReport : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int buildType; // @dynamic buildType;
@property(copy, nonatomic) NSString *bundleId; // @dynamic bundleId;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool hasBuildType; // @dynamic hasBuildType;
@property(nonatomic) _Bool hasBundleId; // @dynamic hasBundleId;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasInstallType; // @dynamic hasInstallType;
@property(nonatomic) _Bool hasWithQaTesting; // @dynamic hasWithQaTesting;
@property(nonatomic) int installType; // @dynamic installType;
@property(nonatomic) _Bool withQaTesting; // @dynamic withQaTesting;

@end

