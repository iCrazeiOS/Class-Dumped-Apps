//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTYourLibraryMusicFilterableViewModel-Protocol.h"
#import "_TtP18FilterChipsFeature24SPTFilterChipsItemLoader_-Protocol.h"
#import "_TtP18FilterChipsFeature33SPTFilterChipsInteractionObserver_-Protocol.h"

@class NSIndexPath, UIControl, UIViewController;
@protocol SPTYourLibraryMusicSongsHeaderViewModel, SPTYourLibraryMusicSongsSectionViewModel, SPTYourLibraryMusicSongsViewModelDelegate, SPTYourLibraryMusicTrackItemViewModel;

@protocol SPTYourLibraryMusicSongsViewModel <SPTYourLibraryMusicFilterableViewModel, _TtP18FilterChipsFeature24SPTFilterChipsItemLoader_, _TtP18FilterChipsFeature33SPTFilterChipsInteractionObserver_>
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered;
@property(readonly, nonatomic) unsigned long long offlineAvailability;
@property(readonly, nonatomic, getter=isPreviewList) _Bool previewList;
@property(readonly, nonatomic) unsigned long long numberSections;
@property(readonly, nonatomic) id <SPTYourLibraryMusicSongsHeaderViewModel> headerViewModel;
@property(nonatomic) __weak id <SPTYourLibraryMusicSongsViewModelDelegate> delegate;
- (void)didEndScrolling;
- (void)willStartScrolling;
- (void)didScrollToTop;
- (void)willScrollToTop;
- (void)endObservingTrackStateAtIndexPath:(NSIndexPath *)arg1;
- (void)startObservingTrackStateAtIndexPath:(NSIndexPath *)arg1;
- (void)logFilterChipsImpressionIfNeeded;
- (void)logEmptyViewImpression;
- (void)stopAudioPreviewViewPlayer;
- (void)logAddSongsButtonAction;
- (void)logCancelRemoveDownloads;
- (void)logCloseExtraSongsExplanation;
- (void)logExtraSongsWhyAction;
- (void)logSwipeCellActionForIndexPath:(NSIndexPath *)arg1 shelfPosition:(long long)arg2;
- (void)logAudioPreviewAtIndexPath:(NSIndexPath *)arg1 playing:(_Bool)arg2 isOriginCoverItem:(_Bool)arg3;
- (void)logFilterSortInteractionType:(unsigned long long)arg1;
- (void)toggleTrackBanAtIndexPath:(NSIndexPath *)arg1;
- (void)toggleTrackLikeAtIndexPath:(NSIndexPath *)arg1;
- (void)presentMenuForSongAtIndexPath:(NSIndexPath *)arg1 targetViewController:(UIViewController *)arg2 withSenderControl:(UIControl *)arg3;
- (void)setAvailableOffline:(_Bool)arg1;
- (_Bool)isOfflineSwitchCellAtIndex:(NSIndexPath *)arg1;
- (_Bool)isAdditionalControlsSection:(unsigned long long)arg1;
- (id <SPTYourLibraryMusicSongsSectionViewModel>)sectionViewModelAtIndex:(unsigned long long)arg1;
- (void)itemSelectedAtIndexPath:(NSIndexPath *)arg1;
- (id <SPTYourLibraryMusicTrackItemViewModel>)itemAtIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfRowsInSections:(long long)arg1;
- (void)loadViewModel;
@end

