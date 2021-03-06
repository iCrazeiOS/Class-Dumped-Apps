//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPodcastEpisodeFeaturedContentPlayerPlayerDelegate-Protocol.h"
#import "SPTPodcastEpisodeFeaturedContentTrackActionsDelegate-Protocol.h"

@class NSString, SPTPodcastEpisodeFeaturedContentContextMenuPresenter, SPTPodcastEpisodeFeaturedContentLogger, SPTPodcastEpisodeFeaturedContentPlayer;
@protocol GLUEImageLoader, SPTEpisodeSegmentsModel, _TtP29EpisodeSegmentsFetcherFeature34SPTEpisodeSegmentsCosmosDataLoader_;

@interface SPTPodcastEpisodeFeaturedContentTrackTimelineViewController : UITableViewController <SPContentInsetViewController, SPTPodcastEpisodeFeaturedContentPlayerPlayerDelegate, SPTNavigationControllerNavigationBarState, SPTPodcastEpisodeFeaturedContentTrackActionsDelegate>
{
    NSString *_episodeURIString;
    id <_TtP29EpisodeSegmentsFetcherFeature34SPTEpisodeSegmentsCosmosDataLoader_> _dataLoader;
    id <GLUEImageLoader> _imageLoader;
    SPTPodcastEpisodeFeaturedContentContextMenuPresenter *_contextMenuPresenter;
    SPTPodcastEpisodeFeaturedContentPlayer *_featuredContentPlayer;
    id <SPTEpisodeSegmentsModel> _episodeSegmentsModel;
    SPTPodcastEpisodeFeaturedContentLogger *_logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTPodcastEpisodeFeaturedContentLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTEpisodeSegmentsModel> episodeSegmentsModel; // @synthesize episodeSegmentsModel=_episodeSegmentsModel;
@property(readonly, nonatomic) SPTPodcastEpisodeFeaturedContentPlayer *featuredContentPlayer; // @synthesize featuredContentPlayer=_featuredContentPlayer;
@property(readonly, nonatomic) SPTPodcastEpisodeFeaturedContentContextMenuPresenter *contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <_TtP29EpisodeSegmentsFetcherFeature34SPTEpisodeSegmentsCosmosDataLoader_> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, copy, nonatomic) NSString *episodeURIString; // @synthesize episodeURIString=_episodeURIString;
- (void)toggleEntitySelectionAtIndex:(int)arg1 shouldSelect:(_Bool)arg2;
- (void)playerDidStopPlayingSegment:(id)arg1 atIndex:(int)arg2;
- (void)playerDidChangeSegment:(id)arg1 atIndex:(int)arg2;
- (void)sp_updateContentInsets;
- (void)didTapContextMenuForSender:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)handleFetchedModel:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)preferredNavigationBarState;
- (void)setUpNavigationItem;
- (id)initWithEpisodeSegmentsModel:(id)arg1 imageLoader:(id)arg2 contextMenuPresenter:(id)arg3 featuredContentPlayer:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

