//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNetworkConnectivityControllerObserver-Protocol.h"

@class NSString, SPTCarPlayLoggedInDataSource;
@protocol SPTCarPlayDataSource, SPTExternalIntegrationDebugLog, SPTMediaPlayerContentBridge, SPTNetworkConnectivityController;

@interface SPTCarPlayDataSourceStateManager : NSObject <SPTNetworkConnectivityControllerObserver>
{
    _Bool _availableForLoggedInDataSources;
    id <SPTExternalIntegrationDebugLog> _debugLog;
    id <SPTMediaPlayerContentBridge> _mediaPlayerBridge;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    SPTCarPlayLoggedInDataSource *_loggedInDefaultDataSource;
    id <SPTCarPlayDataSource> _restrictedDataSource;
}

@property(retain, nonatomic) id <SPTCarPlayDataSource> restrictedDataSource; // @synthesize restrictedDataSource=_restrictedDataSource;
@property(retain, nonatomic) SPTCarPlayLoggedInDataSource *loggedInDefaultDataSource; // @synthesize loggedInDefaultDataSource=_loggedInDefaultDataSource;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) id <SPTMediaPlayerContentBridge> mediaPlayerBridge; // @synthesize mediaPlayerBridge=_mediaPlayerBridge;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(nonatomic, getter=isAvailableForLoggedInDataSources) _Bool availableForLoggedInDataSources; // @synthesize availableForLoggedInDataSources=_availableForLoggedInDataSources;
- (void).cxx_destruct;
- (id)restrictedDataSourceForReason:(unsigned long long)arg1;
- (id)debugStringForReason:(unsigned long long)arg1;
- (void)applyDataSource:(id)arg1;
- (void)applyLoggedInDataSource:(id)arg1;
- (_Bool)offlineOnly;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)carplaySessionDidDisconnect;
- (void)applyRestricedDataSourceForReason:(unsigned long long)arg1;
- (void)setDataSourceAccessory:(id)arg1;
- (void)setupLoggedInDataSourcesWithExternalIntegrationPlatform:(id)arg1 imageLoaderFactory:(id)arg2 connectManager:(id)arg3 networkConnectivityController:(id)arg4 properties:(id)arg5 logger:(id)arg6;
- (void)tearDownForRestricedDataSource;
- (void)dealloc;
- (id)initWithMediaPlayerBridge:(id)arg1 debugLog:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

