//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "SPTSearch2ConnectivityMonitorObserver-Protocol.h"
#import "SPTSearchPlatformContext-Protocol.h"
#import "SPTSearchRecentsDataSourceDelegate-Protocol.h"
#import "_TtP22AgeVerificationFeature43SPTCanPlayAgeRestrictedContentStateObserver_-Protocol.h"

@class HUBViewModelBuilderFactory, NSDate, NSString, NSURL;
@protocol HUBViewModel, SPTExplicitContentAccessManager, SPTPlayer, SPTSearch2ConnectivityMonitor, SPTSearch2EmptyStatePropertiesProvider, SPTSearchPlatformContextDelegate, SPTSearchRecentsDataSource, SPTSearchUBILocationSerializer, _TtP22AgeVerificationFeature26SPTAgeVerificationProvider_;

@interface SPTSearchPlatformEmptyStateContext : NSObject <SPTSearchRecentsDataSourceDelegate, SPTPlayerObserver, SPTSearch2ConnectivityMonitorObserver, SPTExplicitContentEnabledStateObserver, _TtP22AgeVerificationFeature43SPTCanPlayAgeRestrictedContentStateObserver_, SPTSearchPlatformContext>
{
    _Bool _playRecentTracksEnabled;
    _Bool _shouldRoundPodcastArtwork;
    id <SPTSearchPlatformContextDelegate> _delegate;
    NSString *_query;
    unsigned long long _state;
    id <HUBViewModel> _viewModel;
    HUBViewModelBuilderFactory *_viewModelBuilderFactory;
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
    id <SPTSearchRecentsDataSource> _recentsDataSource;
    id <SPTPlayer> _player;
    NSString *_recentsCommandName;
    id <SPTSearch2ConnectivityMonitor> _connectivityMonitor;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> _ageVerificationProvider;
    id <SPTSearchUBILocationSerializer> _ubiLocationSerializer;
    NSString *_featureID;
    NSURL *_pageURI;
    NSString *_referrerIdentifier;
    NSDate *_recentsDatasetSetTimestamp;
}

@property(copy, nonatomic) NSDate *recentsDatasetSetTimestamp; // @synthesize recentsDatasetSetTimestamp=_recentsDatasetSetTimestamp;
@property(readonly, copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, copy, nonatomic) NSString *featureID; // @synthesize featureID=_featureID;
@property(readonly, nonatomic) id <SPTSearchUBILocationSerializer> ubiLocationSerializer; // @synthesize ubiLocationSerializer=_ubiLocationSerializer;
@property(readonly, nonatomic) id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) _Bool shouldRoundPodcastArtwork; // @synthesize shouldRoundPodcastArtwork=_shouldRoundPodcastArtwork;
@property(readonly, nonatomic, getter=isPlayRecentTracksEnabled) _Bool playRecentTracksEnabled; // @synthesize playRecentTracksEnabled=_playRecentTracksEnabled;
@property(readonly, nonatomic) id <SPTSearch2ConnectivityMonitor> connectivityMonitor; // @synthesize connectivityMonitor=_connectivityMonitor;
@property(readonly, copy, nonatomic) NSString *recentsCommandName; // @synthesize recentsCommandName=_recentsCommandName;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTSearchRecentsDataSource> recentsDataSource; // @synthesize recentsDataSource=_recentsDataSource;
@property(readonly, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
@property(readonly, nonatomic) HUBViewModelBuilderFactory *viewModelBuilderFactory; // @synthesize viewModelBuilderFactory=_viewModelBuilderFactory;
@property(readonly, nonatomic) id <HUBViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) __weak id <SPTSearchPlatformContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)recentsViewModel;
- (void)addInfoViewOverlayWithTitle:(id)arg1 subtitle:(id)arg2 toViewModel:(id)arg3;
- (void)addEmptyStateOverlayConnectivityState:(unsigned long long)arg1 toViewModel:(id)arg2;
- (id)offlinePlaceholderViewModel;
- (id)onlinePlaceholderViewModel;
- (void)didChangeCanPlayAgeRestrictedContent:(_Bool)arg1;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)connectivityMonitorDidChangeState:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)recentsDataSourceItemsDidChange:(id)arg1;
- (void)loadNextPage;
- (void)reload;
- (void)setState:(unsigned long long)arg1;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModelBuilderFactory:(id)arg1 emptyStatePropertiesProvider:(id)arg2 recentsDataSource:(id)arg3 player:(id)arg4 recentsCommandName:(id)arg5 connectivityMonitor:(id)arg6 playRecentTracksEnabled:(_Bool)arg7 shouldRoundPodcastArtwork:(_Bool)arg8 explicitContentAccessManager:(id)arg9 ageVerificationProvider:(id)arg10 ubiLocationSerializer:(id)arg11 featureID:(id)arg12 pageURI:(id)arg13 referrerIdentifier:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

