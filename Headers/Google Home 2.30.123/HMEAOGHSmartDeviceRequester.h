//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEAOGHSmartDeviceRequester-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, SetupAnalyticsLogger;
@protocol GCAConfigurationFlags, HMEDeviceQueryService;

@interface HMEAOGHSmartDeviceRequester : NSObject <HMEAOGHSmartDeviceRequester>
{
    _Bool _scanInProgress;
    _Bool _scanDeferred;
    _Bool _unprovisionedOnly;
    _Bool _includeStaleDevices;
    _Bool _allowRetries;
    NSArray *_deviceTypes;
    NSMutableArray *_devicesRemaining;
    NSMutableDictionary *_resultsSoFar;
    CDUnknownBlockType _callback;
    SetupAnalyticsLogger *_analyticsLogger;
    id <HMEDeviceQueryService> _deviceQueryService;
    id <GCAConfigurationFlags> _experimentFlags;
    NSDate *_errorRetryStartTime;
    NSDate *_noResultsRetryStartTime;
    NSString *_structureID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *structureID; // @synthesize structureID=_structureID;
@property(nonatomic) _Bool allowRetries; // @synthesize allowRetries=_allowRetries;
@property(retain, nonatomic) NSDate *noResultsRetryStartTime; // @synthesize noResultsRetryStartTime=_noResultsRetryStartTime;
@property(retain, nonatomic) NSDate *errorRetryStartTime; // @synthesize errorRetryStartTime=_errorRetryStartTime;
@property(readonly, nonatomic) id <GCAConfigurationFlags> experimentFlags; // @synthesize experimentFlags=_experimentFlags;
@property(readonly, nonatomic) id <HMEDeviceQueryService> deviceQueryService; // @synthesize deviceQueryService=_deviceQueryService;
@property(readonly, nonatomic) SetupAnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) _Bool includeStaleDevices; // @synthesize includeStaleDevices=_includeStaleDevices;
@property(nonatomic) _Bool unprovisionedOnly; // @synthesize unprovisionedOnly=_unprovisionedOnly;
@property(nonatomic) _Bool scanDeferred; // @synthesize scanDeferred=_scanDeferred;
@property(nonatomic) _Bool scanInProgress; // @synthesize scanInProgress=_scanInProgress;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSMutableDictionary *resultsSoFar; // @synthesize resultsSoFar=_resultsSoFar;
@property(retain, nonatomic) NSMutableArray *devicesRemaining; // @synthesize devicesRemaining=_devicesRemaining;
@property(copy, nonatomic) NSArray *deviceTypes; // @synthesize deviceTypes=_deviceTypes;
- (void)finishScan;
- (_Bool)isBestResultSoFar:(id)arg1;
- (_Bool)isSupportedDevice:(id)arg1;
- (_Bool)isValidDevice:(id)arg1;
- (void)addResults:(id)arg1 forDevice:(id)arg2;
- (_Bool)retryIfNecessaryForNoResults;
- (_Bool)retryIfNecessaryForError;
- (_Bool)retryIfNecessaryResponse:(id)arg1 error:(id)arg2;
- (void)scanWithNextDevice;
- (void)appWillEnterForeground;
- (void)scanForSmartDevicesWithTypes:(id)arg1 hostDevices:(id)arg2 unprovisionedOnly:(_Bool)arg3 includeStaleDevices:(_Bool)arg4 allowRetries:(_Bool)arg5 applicationState:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (id)initWithStructureIDString:(id)arg1 analyticsLogger:(id)arg2 deviceQueryService:(id)arg3 experimentFlags:(id)arg4;
- (id)initWithStructureID:(id)arg1 analyticsLogger:(id)arg2 deviceQueryService:(id)arg3 experimentFlags:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

