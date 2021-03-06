//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NlsUrlParserDelegate-Protocol.h"
#import "NlsViewPatternDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NlsApiWorker, NlsCache, NlsConfigManager, NlsMappingDictionary, NlsUrlParser;
@protocol NlsBaseDataProcessorDelegate, OS_dispatch_queue;

@interface NlsBaseDataProcessor : NSObject <NlsUrlParserDelegate, NlsViewPatternDelegate>
{
    _Bool _delayedPings;
    _Bool _unifiedEnabled;
    _Bool _disableFlag;
    _Bool _shouldRequestTimeSeriesAgain;
    unsigned int _processorType;
    int _processorId;
    unsigned int _inSessionType;
    int _maxPingCount;
    int _currentPingCount;
    int _segmentLength;
    int _segmentBaseDuration;
    int _creditValue;
    int _sendQualifier;
    int _minIntervalThreshold;
    int _maxIntervalThreshold;
    int _shortPingFormatValue;
    int _defaultSegmentNumber;
    NSObject<OS_dispatch_queue> *_dataProcessQueue;
    id <NlsBaseDataProcessorDelegate> _delegate;
    NSArray *_requiredMetadataParams;
    NSDictionary *_lastPingDictionary;
    NSObject<OS_dispatch_queue> *_dataTransferQueue;
    NSObject<OS_dispatch_queue> *_dataCacheQueue;
    NlsConfigManager *_config;
    NlsApiWorker *_worker;
    NlsCache *_meterDatabase;
    NSString *_url;
    NSDictionary *_tagConfigDefaultDict;
    NlsMappingDictionary *_cmsInfoDict;
    NlsMappingDictionary *_playInfoDict;
    NlsMappingDictionary *_ottDict;
    NSString *_cadence;
    double _backgroundThreshold;
    double _startTime;
    NSString *_sessionId;
    NSString *_sessionIdPending;
    NlsUrlParser *_pingUrlParser;
    NSString *_nolTimer;
    NSString *_defaultBreakout;
    NSString *_creditFlag;
    NSString *_segmentPrefix;
    NSString *_shortPingPrefix;
    NSString *_cidNull;
    NSMutableArray *_collectedButtonEvents;
    NSString *_buttonEventDelimeter;
    NSString *_buttonEventParamDelimeter;
    long long _pauseEventTimeoutPlayhead;
    long long _pauseEventTimeoutID3;
    NSDictionary *_vaTimeSeriesCache;
    long long _vaTimeSeriesCacheRefreshIntervalCounter;
    long long _maxVATimeSeriesCacheRefreshIntervalCount;
}

+ (unsigned int)processorTypeForProduct:(id)arg1;
@property(nonatomic) _Bool shouldRequestTimeSeriesAgain; // @synthesize shouldRequestTimeSeriesAgain=_shouldRequestTimeSeriesAgain;
@property(nonatomic) long long maxVATimeSeriesCacheRefreshIntervalCount; // @synthesize maxVATimeSeriesCacheRefreshIntervalCount=_maxVATimeSeriesCacheRefreshIntervalCount;
@property(nonatomic) long long vaTimeSeriesCacheRefreshIntervalCounter; // @synthesize vaTimeSeriesCacheRefreshIntervalCounter=_vaTimeSeriesCacheRefreshIntervalCounter;
@property(retain, nonatomic) NSDictionary *vaTimeSeriesCache; // @synthesize vaTimeSeriesCache=_vaTimeSeriesCache;
@property(nonatomic) long long pauseEventTimeoutID3; // @synthesize pauseEventTimeoutID3=_pauseEventTimeoutID3;
@property(nonatomic) long long pauseEventTimeoutPlayhead; // @synthesize pauseEventTimeoutPlayhead=_pauseEventTimeoutPlayhead;
@property(retain, nonatomic) NSString *buttonEventParamDelimeter; // @synthesize buttonEventParamDelimeter=_buttonEventParamDelimeter;
@property(retain, nonatomic) NSString *buttonEventDelimeter; // @synthesize buttonEventDelimeter=_buttonEventDelimeter;
@property(retain, nonatomic) NSMutableArray *collectedButtonEvents; // @synthesize collectedButtonEvents=_collectedButtonEvents;
@property(nonatomic) _Bool disableFlag; // @synthesize disableFlag=_disableFlag;
@property(retain, nonatomic) NSString *cidNull; // @synthesize cidNull=_cidNull;
@property(nonatomic) int defaultSegmentNumber; // @synthesize defaultSegmentNumber=_defaultSegmentNumber;
@property(nonatomic) int shortPingFormatValue; // @synthesize shortPingFormatValue=_shortPingFormatValue;
@property(nonatomic) int maxIntervalThreshold; // @synthesize maxIntervalThreshold=_maxIntervalThreshold;
@property(nonatomic) int minIntervalThreshold; // @synthesize minIntervalThreshold=_minIntervalThreshold;
@property(nonatomic) int sendQualifier; // @synthesize sendQualifier=_sendQualifier;
@property(retain, nonatomic) NSString *shortPingPrefix; // @synthesize shortPingPrefix=_shortPingPrefix;
@property(retain, nonatomic) NSString *segmentPrefix; // @synthesize segmentPrefix=_segmentPrefix;
@property(retain, nonatomic) NSString *creditFlag; // @synthesize creditFlag=_creditFlag;
@property(retain, nonatomic) NSString *defaultBreakout; // @synthesize defaultBreakout=_defaultBreakout;
@property(nonatomic) int creditValue; // @synthesize creditValue=_creditValue;
@property(nonatomic) int segmentBaseDuration; // @synthesize segmentBaseDuration=_segmentBaseDuration;
@property(nonatomic) int segmentLength; // @synthesize segmentLength=_segmentLength;
@property(retain, nonatomic) NSString *nolTimer; // @synthesize nolTimer=_nolTimer;
@property(nonatomic) __weak NlsUrlParser *pingUrlParser; // @synthesize pingUrlParser=_pingUrlParser;
@property(retain, nonatomic) NSString *sessionIdPending; // @synthesize sessionIdPending=_sessionIdPending;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double backgroundThreshold; // @synthesize backgroundThreshold=_backgroundThreshold;
@property(nonatomic) _Bool unifiedEnabled; // @synthesize unifiedEnabled=_unifiedEnabled;
@property(nonatomic) _Bool delayedPings; // @synthesize delayedPings=_delayedPings;
@property(nonatomic) int currentPingCount; // @synthesize currentPingCount=_currentPingCount;
@property(nonatomic) int maxPingCount; // @synthesize maxPingCount=_maxPingCount;
@property(retain, nonatomic) NSString *cadence; // @synthesize cadence=_cadence;
@property(nonatomic) unsigned int inSessionType; // @synthesize inSessionType=_inSessionType;
@property(retain, nonatomic) NlsMappingDictionary *ottDict; // @synthesize ottDict=_ottDict;
@property(retain, nonatomic) NlsMappingDictionary *playInfoDict; // @synthesize playInfoDict=_playInfoDict;
@property(retain) NlsMappingDictionary *cmsInfoDict; // @synthesize cmsInfoDict=_cmsInfoDict;
@property(nonatomic) int processorId; // @synthesize processorId=_processorId;
@property(retain, nonatomic) NSDictionary *tagConfigDefaultDict; // @synthesize tagConfigDefaultDict=_tagConfigDefaultDict;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak NlsCache *meterDatabase; // @synthesize meterDatabase=_meterDatabase;
@property(nonatomic) __weak NlsApiWorker *worker; // @synthesize worker=_worker;
@property(nonatomic) __weak NlsConfigManager *config; // @synthesize config=_config;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataCacheQueue; // @synthesize dataCacheQueue=_dataCacheQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataTransferQueue; // @synthesize dataTransferQueue=_dataTransferQueue;
@property(retain, nonatomic) NSDictionary *lastPingDictionary; // @synthesize lastPingDictionary=_lastPingDictionary;
@property(retain, nonatomic) NSArray *requiredMetadataParams; // @synthesize requiredMetadataParams=_requiredMetadataParams;
@property(nonatomic) __weak id <NlsBaseDataProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int processorType; // @synthesize processorType=_processorType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataProcessQueue; // @synthesize dataProcessQueue=_dataProcessQueue;
- (void).cxx_destruct;
- (void)didDetectZeroDurationSegmentForViewPattern:(id)arg1;
- (void)didAddedPlayheadWithValue:(long long)arg1 forViewPattern:(id)arg2 withArrivalTime:(double)arg3;
- (void)didDetectForwardWithValue:(long long)arg1 forViewPattern:(id)arg2 withArrivalTime:(double)arg3;
- (void)didDetectRewindWithValue:(long long)arg1 forViewPattern:(id)arg2 withArrivalTime:(double)arg3;
- (void)didSessionStartedForViewPattern:(id)arg1;
- (id)urlParser:(id)arg1 valueForMissedKey:(id)arg2;
- (void)restartProcessor;
- (id)viewabilityDictionary;
@property(readonly, nonatomic) NSDictionary *additionalViewabilityParameters;
@property(readonly, nonatomic) NSString *viewabilityType;
- (id)timeSeries;
- (void)requestVATimeSeriesToCache;
- (void)resetVATimeSeriesCacheRefreshIntervalCounter;
- (_Bool)shouldRequestVATimeSeriesToCacheForPlayhead:(long long)arg1;
- (long long)calculatePosition:(long long)arg1 baseServerTime:(long long)arg2 baseDeviceTime:(long long)arg3 offsetName:(id)arg4;
- (_Bool)isDurationPingFromDictionary:(id)arg1;
- (void)resetMetadataInfo;
- (void)logMissedRequiredParams:(id)arg1 inDictionary:(id)arg2;
- (_Bool)validateInputMetadata:(id)arg1 withType:(unsigned long long)arg2;
- (void)clearButtonEvents;
- (void)addButtonEvent:(id)arg1;
@property(readonly, nonatomic) NSString *collectedButtonEventsString;
- (void)logPingWithDuration:(int)arg1;
- (void)setDefaultTimerValue;
- (void)updateStartTime;
- (void)configureCMSInfoDictionary:(id)arg1;
- (void)applyOnEndDetectedFilterLogic;
- (void)applyOnMetadataDetectedFilterLogic;
- (_Bool)applyOnAssetIdChangeFilter;
- (void)configureActiveContentAndVidType:(id)arg1;
- (unsigned long long)defineContentTypeFromMetadata:(id)arg1;
- (_Bool)chkDisable:(id)arg1;
- (void)storePingForUploadWithDict:(id)arg1 messageType:(int)arg2 arrivalTime:(double)arg3 processorId:(long long)arg4;
- (void)applyOnPingCreateLogicWithImmediately:(_Bool)arg1;
- (_Bool)createPingForDictionary:(id)arg1 withArrivalTime:(double)arg2;
- (_Bool)preparePingToSend:(double)arg1 immediately:(_Bool)arg2;
- (_Bool)nolVariablesWithTimer:(long long)arg1 serverBaseTime:(id)arg2 deviceBaseTime:(id)arg3;
- (long long)adjustPosition:(long long)arg1 serverBaseTime:(id)arg2 deviceBaseTime:(id)arg3;
- (long long)getTagConfigIntValue:(id)arg1 withDefault:(long long)arg2;
- (void)flushPendingWithArrivalTime:(double)arg1 immediately:(_Bool)arg2;
- (void)processAppDisable:(_Bool)arg1;
- (void)processRewindWithValue:(long long)arg1 withArrivalTime:(double)arg2;
- (void)processForwardWithValue:(long long)arg1 withArrivalTime:(double)arg2;
- (void)processZeroDurationSegment;
- (void)processAddedPlayheadWithValue:(long long)arg1 withArrivalTime:(double)arg2;
- (void)processMuteChanged:(_Bool)arg1 withArrivalTime:(double)arg2;
- (void)processEndWithArrivalTime:(double)arg1 internalCall:(_Bool)arg2;
- (void)processStopForType:(unsigned long long)arg1 withArrivalTime:(double)arg2;
- (void)processShutdownWithArrivalTime:(double)arg1 forceUpload:(_Bool)arg2;
- (void)processOTT:(id)arg1 withArrivalTime:(double)arg2;
- (void)processMetadata:(id)arg1 withDcrGuid:(id)arg2 andArrivalTime:(double)arg3;
- (void)processPlayheadPosition:(long long)arg1 withArrivalTime:(double)arg2;
- (void)processID3:(id)arg1 withDtvrGuid:(id)arg2 andArrivalTime:(double)arg3;
- (void)processStart:(id)arg1 withArrivalTime:(double)arg2;
- (void)dealloc;
- (id)initWithWorker:(id)arg1 withPid:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

