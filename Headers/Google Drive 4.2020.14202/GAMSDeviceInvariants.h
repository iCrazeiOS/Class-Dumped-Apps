//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString;

@interface GAMSDeviceInvariants : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool androidLowRam; // @dynamic androidLowRam;
@property(nonatomic) int displayHeightPixels; // @dynamic displayHeightPixels;
@property(nonatomic) int displayWidthPixels; // @dynamic displayWidthPixels;
@property(copy, nonatomic) NSString *dusi; // @dynamic dusi;
@property(nonatomic) int hardwareConcurrency; // @dynamic hardwareConcurrency;
@property(nonatomic) _Bool hasAndroidLowRam; // @dynamic hasAndroidLowRam;
@property(nonatomic) _Bool hasDisplayHeightPixels; // @dynamic hasDisplayHeightPixels;
@property(nonatomic) _Bool hasDisplayWidthPixels; // @dynamic hasDisplayWidthPixels;
@property(nonatomic) _Bool hasDusi; // @dynamic hasDusi;
@property(nonatomic) _Bool hasHardwareConcurrency; // @dynamic hasHardwareConcurrency;
@property(nonatomic) _Bool hasNetworkBandwidthKbps; // @dynamic hasNetworkBandwidthKbps;
@property(nonatomic) _Bool hasNumGoogleAccounts; // @dynamic hasNumGoogleAccounts;
@property(nonatomic) _Bool hasOptimalHeapLimitInMb; // @dynamic hasOptimalHeapLimitInMb;
@property(nonatomic) _Bool hasTotalMemoryBytes; // @dynamic hasTotalMemoryBytes;
@property(nonatomic) _Bool hasTotalMemoryMb; // @dynamic hasTotalMemoryMb;
@property(nonatomic) int networkBandwidthKbps; // @dynamic networkBandwidthKbps;
@property(nonatomic) int numGoogleAccounts; // @dynamic numGoogleAccounts;
@property(nonatomic) int optimalHeapLimitInMb; // @dynamic optimalHeapLimitInMb;
@property(nonatomic) long long totalMemoryBytes; // @dynamic totalMemoryBytes;
@property(nonatomic) int totalMemoryMb; // @dynamic totalMemoryMb;

@end

