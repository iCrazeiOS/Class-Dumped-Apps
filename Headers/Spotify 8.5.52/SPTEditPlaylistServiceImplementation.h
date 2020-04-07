//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEditPlaylistService-Protocol.h"

@class NSString, SPTAllocationContext, SPTEditPlaylistFeatureProperties;
@protocol SPContextMenuFeature, SPTContainerService, SPTFreeTierPlaylistService, SPTGLUEService, SPTPageLoaderViewService, SPTPerformanceMetricsService, SPTPlaylistPlatformService, SPTRemoteConfigurationService, SPTSettingsFeature, SPTUBIService, SPTUIPresentationService;

@interface SPTEditPlaylistServiceImplementation : NSObject <SPTEditPlaylistService>
{
    id <SPTContainerService> _containerService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTUIPresentationService> _presentationService;
    id <SPTGLUEService> _glueService;
    id <SPTFreeTierPlaylistService> _freeTierPlaylistService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTUBIService> _ubiService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTPageLoaderViewService> _pageLoaderViewService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    SPTEditPlaylistFeatureProperties *_featureProperties;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTEditPlaylistFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTPageLoaderViewService> pageLoaderViewService; // @synthesize pageLoaderViewService=_pageLoaderViewService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTFreeTierPlaylistService> freeTierPlaylistService; // @synthesize freeTierPlaylistService=_freeTierPlaylistService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideLoggerForURI:(id)arg1 pageIdentifier:(id)arg2;
- (id)provideEditPlaylistModelForURL:(id)arg1;
- (id)provideEditPlaylistViewControllerForURL:(id)arg1 model:(id)arg2;
- (id)providePageLoaderViewControllerForURL:(id)arg1 model:(id)arg2;
- (id)providePlaylistEditViewControllerForURL:(id)arg1;
- (void)registerEditPlaylistAction;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

