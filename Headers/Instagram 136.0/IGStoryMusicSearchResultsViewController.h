//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGStoryMusicBrowserSongCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryMusicFetchResultsDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryMusicSearchResultsDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryMusicSearchSuggestedKeywordsDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegateFlowLayout-Protocol.h>

@class IGStoryMusicBrowserLoadingScreen, IGStoryMusicSearchResultsDataSource, IGStoryMusicSearchSuggestedKeywordsDataSource, IGUserSession, NSIndexPath, NSMutableOrderedSet, NSOrderedSet, NSString, UICollectionView, UILabel, UIView;
@protocol IGStoryMusicSearchResultsViewControllerDelegate;

@interface IGStoryMusicSearchResultsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGStoryMusicBrowserSongCellDelegate, IGStoryMusicSearchResultsDataSourceDelegate, IGStoryMusicSearchSuggestedKeywordsDataSourceDelegate, IGStoryMusicFetchResultsDelegate>
{
    IGUserSession *_userSession;
    _Bool _isVisibleOnScreen;
    IGStoryMusicBrowserLoadingScreen *_loadingScreen;
    UIView *_contentWrapperView;
    UICollectionView *_collectionView;
    UILabel *_noResultsLabel;
    IGStoryMusicSearchResultsDataSource *_suggestedMusicTracksDataSource;
    IGStoryMusicSearchSuggestedKeywordsDataSource *_suggestedSearchQueriesDataSource;
    NSMutableOrderedSet *_selectedTracks;
    NSIndexPath *_playingIndexPath;
    _Bool _loading;
    _Bool _loadingScreenVisible;
    id <IGStoryMusicSearchResultsViewControllerDelegate> _delegate;
    double _bottomInset;
    unsigned long long _selectionStyle;
}

@property(nonatomic) _Bool loadingScreenVisible; // @synthesize loadingScreenVisible=_loadingScreenVisible;
@property(nonatomic) unsigned long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) __weak id <IGStoryMusicSearchResultsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *productName;
@property(nonatomic) unsigned long long uploadStep;
@property(readonly, nonatomic) NSString *category;
- (void)_updateSelectionStateForVisibleCells;
- (void)deselectTrack:(id)arg1;
- (void)selectTrack:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *selectedTracks;
- (void)stopPlayingCell:(id)arg1;
- (void)setLoadingScreenVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)musicTrackResultsDidFetchStories:(id)arg1;
- (void)musicFetchResultsDidUpdateModels:(id)arg1;
- (id)unavailableSongsThatMatchQuery:(id)arg1;
- (id)songsThatMatchQuery:(id)arg1 searchQueryIsFromTypeaheadSuggestions:(_Bool)arg2;
- (void)setLoading:(_Bool)arg1;
- (void)musicSearchSuggestedKeywordsDataSource:(id)arg1 didUpdateLoadingState:(_Bool)arg2;
- (void)musicSearchSuggestedKeywordsDataSource:(id)arg1 didUpdateSuggestedSearchQueries:(id)arg2;
- (void)musicSearchDataSource:(id)arg1 didUpdateLoadingState:(_Bool)arg2;
- (void)musicSearchDataSource:(id)arg1 didUpdateSearchResults:(id)arg2;
@property(copy, nonatomic) NSString *searchQuery;
- (void)musicBrowserSongCellDidTapOnBookmarkButton:(id)arg1;
- (void)musicBrowserSongCellDidTapOnAlbumArt:(id)arg1;
- (void)musicBrowserSongCellDidTapOnPlayPauseButton:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_closeBookmarkView;
- (void)viewDidLayoutSubviews;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

