//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Appboy_iOS_SDK/ABKManagerDelegate-Protocol.h>

@class ABKNetworkFlushInterval, ABKPersistentData, ABKRequestDispatcher, NSTimer;
@protocol ABKLocationManagerDelegate;

@interface ABKManager : NSObject <ABKManagerDelegate>
{
    _Bool _geofenceRequestMadeThisSession;
    ABKNetworkFlushInterval *_networkFlushInterval;
    NSTimer *_flushTimer;
    ABKPersistentData *_userData;
    ABKRequestDispatcher *_client;
    long long _requestProcessingPolicy;
    id <ABKLocationManagerDelegate> _locationManagerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ABKLocationManagerDelegate> locationManagerDelegate; // @synthesize locationManagerDelegate=_locationManagerDelegate;
@property _Bool geofenceRequestMadeThisSession; // @synthesize geofenceRequestMadeThisSession=_geofenceRequestMadeThisSession;
@property(nonatomic) long long requestProcessingPolicy; // @synthesize requestProcessingPolicy=_requestProcessingPolicy;
@property(retain) ABKRequestDispatcher *client; // @synthesize client=_client;
@property(retain) ABKPersistentData *userData; // @synthesize userData=_userData;
@property(retain) NSTimer *flushTimer; // @synthesize flushTimer=_flushTimer;
@property(retain) ABKNetworkFlushInterval *networkFlushInterval; // @synthesize networkFlushInterval=_networkFlushInterval;
- (void)setSDKFlavor:(id)arg1;
- (void)flushDataAndProcessRequestQueue;
- (void)dealloc;
- (void)shutdownServerCommunication;
- (void)contentCardsServerConfigUpdated:(id)arg1;
- (void)processErrorNotification:(id)arg1;
- (void)reportGeofenceEvent:(id)arg1;
- (void)handleEventForDataFlush:(id)arg1;
- (void)handleEventForDataFlushNotification:(id)arg1;
- (void)requestImmediateDataFlush;
- (void)flushDeviceChanges:(id)arg1;
- (void)serverRequestQueueSuccessfulNotification:(id)arg1;
- (void)requestTemplateWithTriggerEvent:(id)arg1 triggerAction:(id)arg2;
- (void)requestGeofencesWithLocationRecordedEvent:(id)arg1;
- (void)requestSessionStartGeofenceRefresh;
- (void)requestContentCardsSync;
- (void)requestFeedRefresh;
- (void)requestTriggerRefresh;
- (void)addRequestToFrontOfQueueAndFlushImmediately:(id)arg1;
- (void)processRequestQueueImmediately;
- (void)ensureRequestQueueProcessingIsScheduled;
- (void)addMetadataToEventForServerFlush:(id)arg1;
- (void)requestRefreshForNewMessagingSession;
- (void)requestRefreshForNewSessionWithDataRequest:(id)arg1;
- (void)requestRefreshForChangedUser;
- (void)requestRefreshForNewAnalyticsSessionAndIncludeFeed:(_Bool)arg1;
- (void)updateFlushTimer;
- (id)initWithApiKey:(id)arg1 requestProcessingPolicy:(long long)arg2 persistentData:(id)arg3 locationManagerDelegate:(id)arg4 networkFlushInterval:(id)arg5 sdkFlavor:(id)arg6 deviceWhitelist:(unsigned long long)arg7;
- (id)initWithApiKey:(id)arg1 requestProcessingPolicy:(long long)arg2 persistentData:(id)arg3 locationManagerDelegate:(id)arg4;

@end

