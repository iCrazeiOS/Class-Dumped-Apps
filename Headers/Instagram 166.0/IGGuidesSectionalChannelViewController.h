//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGGuidesGridSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGGuidesSectionalChannelNetworkSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRefreshControlContentInsetDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGTransitionZoomFromCapable-Protocol.h>

@class IGFeedScrollViewAnnouncer, IGGuideChannelLogger, IGGuidesSectionalChannelNetworkSource, IGListAdapter, IGRefreshControl, IGUserSession, NSString, UICollectionView;

@interface IGGuidesSectionalChannelViewController : IGViewController <IGListAdapterDataSource, IGListAdapterDelegate, IGFeedScrollViewListener, IGGuidesGridSectionControllerDelegate, IGGuidesSectionalChannelNetworkSourceDelegate, IGTransitionZoomFromCapable, IGRefreshControlContentInsetDataSource>
{
    IGUserSession *_userSession;
    IGGuidesSectionalChannelNetworkSource *_networkSource;
    unsigned long long _entryPoint;
    IGGuideChannelLogger *_logger;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGRefreshControl *_refreshControl;
}

- (void).cxx_destruct;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)guidesGridSectionControllerDidTap:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_updateFromNetworkChange;
- (void)guidesSectionalChannelNetworkSourceDidUpdate:(id)arg1;
- (double)idleTopContentInsetForRefreshControl:(id)arg1;
- (void)_reload;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 networkSource:(id)arg2 entryPoint:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

