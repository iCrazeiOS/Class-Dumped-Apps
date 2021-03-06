//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/ASCustomAdapterInstance.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface ASAdColonyInstance : ASCustomAdapterInstance
{
    Class _adColonyClass;
    unsigned long long _state;
    NSString *_adColonyAppId;
    NSString *_zoneID;
    NSMutableDictionary *_warmUpAppZoneIds;
    NSMutableDictionary *_adColonyZones;
    NSMutableSet *_availableZoneIDs;
    NSMutableDictionary *_cachedAds;
    NSMutableArray *_loadingZoneIds;
    NSString *_mostSeenAppId;
    NSDate *_lastWarmUpCallEnded;
}

+ (void)requestInterstitialAdWithAsplcConfig:(id)arg1 withManager:(id)arg2;
+ (id)getZoneIds;
+ (id)getAvailableZone:(id)arg1;
+ (void)removeAllZone;
+ (void)addZoneID:(id)arg1 andAdColonyZoneObject:(id)arg2;
+ (void)addAvailableZoneID:(id)arg1;
+ (void)updateGDPRCosnsent:(id)arg1;
+ (void)warmUpAppId:(id)arg1 withZoneIds:(id)arg2 withSuccessBlock:(CDUnknownBlockType)arg3 withFailureBlock:(CDUnknownBlockType)arg4;
+ (void)initialSetupWithConfigArr:(id)arg1;
+ (id)adColonyAppOptions;
+ (id)instance;
@property(retain, nonatomic) NSDate *lastWarmUpCallEnded; // @synthesize lastWarmUpCallEnded=_lastWarmUpCallEnded;
@property(retain, nonatomic) NSString *mostSeenAppId; // @synthesize mostSeenAppId=_mostSeenAppId;
@property(retain, nonatomic) NSMutableArray *loadingZoneIds; // @synthesize loadingZoneIds=_loadingZoneIds;
@property(retain, nonatomic) NSMutableDictionary *cachedAds; // @synthesize cachedAds=_cachedAds;
@property(retain, nonatomic) NSMutableSet *availableZoneIDs; // @synthesize availableZoneIDs=_availableZoneIDs;
@property(retain, nonatomic) NSMutableDictionary *adColonyZones; // @synthesize adColonyZones=_adColonyZones;
@property(retain, nonatomic) NSMutableDictionary *warmUpAppZoneIds; // @synthesize warmUpAppZoneIds=_warmUpAppZoneIds;
@property(copy, nonatomic) NSString *zoneID; // @synthesize zoneID=_zoneID;
@property(copy, nonatomic) NSString *adColonyAppId; // @synthesize adColonyAppId=_adColonyAppId;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) Class adColonyClass; // @synthesize adColonyClass=_adColonyClass;
- (void).cxx_destruct;
- (void)loadAd:(id)arg1 withAsplcConfig:(id)arg2 withManager:(id)arg3;
- (void)cleanUp;
- (void)dealloc;

@end

