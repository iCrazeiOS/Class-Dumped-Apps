//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSFeatureSwitches/TFSFeatureSwitchesPolicyConfiguration.h>

@class NSArray, NSString, NSURL;

@interface TFSFeatureSwitchesPolicyMutableConfiguration : TFSFeatureSwitchesPolicyConfiguration
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *guestAccountID; // @dynamic guestAccountID;
@property(copy, nonatomic) NSArray *secondaryConfigurationKeys; // @dynamic secondaryConfigurationKeys;
@property(nonatomic) double archiveStalenessThresholdInterval; // @dynamic archiveStalenessThresholdInterval;
@property(nonatomic) double refreshInterval; // @dynamic refreshInterval;
@property(nonatomic, getter=isInstrumentationEnabled) _Bool instrumentationEnabled; // @dynamic instrumentationEnabled;
@property(retain, nonatomic) NSURL *overridesURL; // @dynamic overridesURL;

@end

