//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGDiscoveryGridHiddenStateHelperDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedPreviewStoriesProvider-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedPreviewableSectionController-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryChainingListener-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryReelSeenStateStoreListener-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryViewerPresentationControllerDelegate-Protocol.h>

@class IGDiscoveryGridHiddenStateHelper, IGDiscoveryGridItem, IGDiscoveryReelChain, IGDiscoveryReelChainingDataSource, IGDiscoveryReelChainingNetworkSource, IGDiscoveryStoriesModel, IGDiscoveryTopicModel, IGPlaybackCoordinator, IGStoryReel, IGStoryReelSeenStateStore, IGStoryViewerPresentationController, IGUserSession, NSString;
@protocol IGDiscoveryGridLoggingProvider, IGDiscoverySectionLoggingProvider, IGGridItemPositionProvider, IGStoryItemType><IGUnitItemInformationProviding;

@interface IGDiscoveryStoriesSectionController : IGListSectionController <IGDiscoveryGridHiddenStateHelperDelegate, IGStoryViewerPresentationControllerDelegate, IGStoryChainingListener, IGStoryReelSeenStateStoreListener, IGFeedPreviewableSectionController, IGFeedPreviewStoriesProvider>
{
    IGUserSession *_userSession;
    IGDiscoveryGridItem *_gridItem;
    IGDiscoveryTopicModel *_topic;
    IGStoryViewerPresentationController *_storyPresentationController;
    IGDiscoveryReelChain *_reelChain;
    IGDiscoveryReelChainingDataSource *_dataSource;
    IGDiscoveryReelChainingNetworkSource *_networkSource;
    struct IGGridLayoutConfiguration _layoutConfig;
    id <IGDiscoverySectionLoggingProvider> _loggingProvider;
    id <IGGridItemPositionProvider> _gridPositionProvider;
    IGPlaybackCoordinator *_playbackCoordinator;
    IGDiscoveryGridHiddenStateHelper *_hiddenStateHelper;
    id <IGDiscoveryGridLoggingProvider> _gridLoggingProvider;
    _Bool _enableModernLoggingSchema;
    IGStoryReelSeenStateStore *_reelSeenStateStore;
    id <IGStoryItemType><IGUnitItemInformationProviding> _storyItem;
    IGDiscoveryStoriesModel *_storiesModel;
    IGStoryReel *_currentReel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryReel *currentReel; // @synthesize currentReel=_currentReel;
@property(readonly, nonatomic) IGDiscoveryStoriesModel *storiesModel; // @synthesize storiesModel=_storiesModel;
@property(readonly, nonatomic) id <IGStoryItemType><IGUnitItemInformationProviding> storyItem; // @synthesize storyItem=_storyItem;
- (void)hiddenStateHelperDidPerformUnhide:(id)arg1;
- (void)hiddenStateHelperDidPerformHide:(id)arg1;
- (void)hiddenStateHelperWillPerformHide:(id)arg1;
- (void)hiddenStateHelperWillPerformUnhide:(id)arg1;
- (void)presentFeedPreviewableItem;
- (void)storyChainingListener:(id)arg1 didFailLoadReelsWithErrorMessage:(id)arg2;
- (void)storyChainingListener:(id)arg1 didLoadReels:(id)arg2;
- (void)storyViewerPresentationControllerDidNavigateToMediaId:(id)arg1;
- (void)storyViewerPresentationControllerDidFinishOnMediaId:(id)arg1;
- (void)storyViewerPresentationControllerWillFinishOnMediaId:(id)arg1;
- (void)storyViewerPresentationControllerDidPresentViewer:(id)arg1;
- (void)reelSeenStateStoreDidUpdateReelPK:(id)arg1;
- (id)_currentReelTitle;
- (void)_reloadSection;
- (id)_currentAvatarViewModel;
- (void)_updateStoryItem:(id)arg1;
- (void)_reconfigureCellView;
- (void)_didUpdateFirstReel:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 topic:(id)arg2 layoutConfig:(struct IGGridLayoutConfiguration)arg3 gridPositionProvider:(id)arg4 loggingProvider:(id)arg5 playbackCoordinator:(id)arg6 gridLoggingProvider:(id)arg7 enableModernLoggingSchema:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

