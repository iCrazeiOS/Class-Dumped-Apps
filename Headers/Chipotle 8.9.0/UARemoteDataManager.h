//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Airship/UAComponent.h>

#import <Airship/UAPushableComponent-Protocol.h>
#import <Airship/UARemoteDataProvider-Protocol.h>

@class NSDate, NSDictionary, NSMutableArray, NSNotificationCenter, NSString, UADispatcher, UAPreferenceDataStore, UARemoteDataAPIClient, UARemoteDataStore;

@interface UARemoteDataManager : UAComponent <UARemoteDataProvider, UAPushableComponent>
{
    NSDate *_lastModified;
    UAPreferenceDataStore *_dataStore;
    UARemoteDataAPIClient *_remoteDataAPIClient;
    NSMutableArray *_subscriptions;
    UARemoteDataStore *_remoteDataStore;
    UADispatcher *_dispatcher;
    NSNotificationCenter *_notificationCenter;
}

+ (id)remoteDataManagerWithConfig:(id)arg1 dataStore:(id)arg2 remoteDataStore:(id)arg3 remoteDataAPIClient:(id)arg4 notificationCenter:(id)arg5 dispatcher:(id)arg6;
+ (id)remoteDataManagerWithConfig:(id)arg1 dataStore:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) UADispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) UARemoteDataStore *remoteDataStore; // @synthesize remoteDataStore=_remoteDataStore;
@property(retain, nonatomic) NSMutableArray *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(retain, nonatomic) UARemoteDataAPIClient *remoteDataAPIClient; // @synthesize remoteDataAPIClient=_remoteDataAPIClient;
@property(retain, nonatomic) UAPreferenceDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
- (void)receivedRemoteNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRemoteDataFromCacheAndNotifySubscriber:(id)arg1;
- (void)notifySubscribersWithRemoteData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMetadata:(id)arg1;
- (_Bool)isLastMetadataCurrent;
- (_Bool)isMetadataCurrent:(id)arg1;
- (_Bool)isLastAppVersionCurrent;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onNewData:(id)arg1 metadata:(id)arg2 lastModified:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)shouldRefresh;
- (void)refresh;
- (void)foregroundRefreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)localeRefresh;
- (void)foregroundRefresh;
- (void)applicationWillEnterForeground;
- (id)subscribeWithTypes:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned long long remoteDataRefreshInterval;
@property(copy, nonatomic) NSDictionary *lastMetadata;
- (id)initWithConfig:(id)arg1 dataStore:(id)arg2 remoteDataStore:(id)arg3 remoteDataAPIClient:(id)arg4 notificationCenter:(id)arg5 dispatcher:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

