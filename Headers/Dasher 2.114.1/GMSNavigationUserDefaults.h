//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/GMSDUserDefaults-Protocol.h>
#import <NavigationFramework/GMSLoggerDefaults-Protocol.h>

@class NSData, NSDictionary, NSString, NSUserDefaults;

@interface GMSNavigationUserDefaults : NSObject <GMSDUserDefaults, GMSLoggerDefaults>
{
    NSUserDefaults *_defaults;
    _Bool requestedAlwaysLocationPermission;
    int locationSystemPermissionLastKnownState;
}

+ (id)sharedNavUserDefaults;
- (void).cxx_destruct;
@property(nonatomic) _Bool requestedAlwaysLocationPermission; // @synthesize requestedAlwaysLocationPermission;
@property(nonatomic) int locationSystemPermissionLastKnownState; // @synthesize locationSystemPermissionLastKnownState;
@property(nonatomic) int travelMode;
@property(nonatomic, getter=isTermsAccepted) _Bool termsAccepted;
@property(copy, nonatomic) NSDictionary *savedDirectionsOptions;
@property(copy, nonatomic) NSString *recentServerEventID;
@property(nonatomic) unsigned long long loggerClientCounter;
@property(nonatomic) unsigned long long nextLoggerSequenceID;
@property(nonatomic, getter=isNetworkTTSEnabled) _Bool networkTTSEnabled;
@property(copy, nonatomic) NSString *navigationVoiceGuidanceLanguage;
@property(nonatomic) long long navigationSDKLastUsedTimestamp;
@property(copy, nonatomic) NSDictionary *navigationPopupHistory;
@property(nonatomic) long long navigationColorScheme;
@property(nonatomic) long long navigationRelativeVolume;
@property(nonatomic) long long muteState;
@property(nonatomic) long long microphonePermissionState;
- (void)setLastLocation:(id)arg1;
- (id)lastLocation;
@property(nonatomic) long long distanceUnitPreference;
@property(copy, nonatomic) NSData *cannedVoiceBundleMap;
@property(nonatomic) long long audioPlaybackDevice;
@property(nonatomic, getter=isAudioOn) _Bool audioOn;
- (void)synchronize;
- (void)registerDefaults;
- (id)initWithDefaults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

