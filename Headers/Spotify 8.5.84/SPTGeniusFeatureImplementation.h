//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGeniusFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTGeniusScrollProvider, SPTGeniusService;
@protocol SPTImageLoadingService, SPTLyricsFeature, SPTNetworkService, SPTNowPlayingPlatformService, SPTPlayerFeature, SPTRemoteConfigurationService, SPTSessionService, SPTSettingsFeature, SPTUBIService, SPTURIDispatchService;

@interface SPTGeniusFeatureImplementation : NSObject <SPTGeniusFeature>
{
    id <SPTLyricsFeature> _lyricsFeature;
    id <SPTNetworkService> _networkFeature;
    id <SPTImageLoadingService> _imageLoadingService;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTSessionService> _sessionService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTUBIService> _ubiService;
    id <SPTURIDispatchService> _uriDispatchService;
    SPTGeniusService *_geniusService;
    SPTGeniusScrollProvider *_scrollProvider;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTGeniusScrollProvider *scrollProvider; // @synthesize scrollProvider=_scrollProvider;
@property(retain, nonatomic) SPTGeniusService *geniusService; // @synthesize geniusService=_geniusService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(nonatomic) __weak id <SPTImageLoadingService> imageLoadingService; // @synthesize imageLoadingService=_imageLoadingService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTLyricsFeature> lyricsFeature; // @synthesize lyricsFeature=_lyricsFeature;
- (void)unregisterScrollProvider;
- (void)registerScrollProvider;
- (void)registerFeatureSettingsPage;
- (void)idleStateWasReached;
- (void)initialViewDidAppear;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

