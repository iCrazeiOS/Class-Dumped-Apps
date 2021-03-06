//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeViewController.h>

#import "YTGraftingViewController-Protocol.h"
#import "YTInnerTubeSectionHeaderResponderProvider-Protocol.h"
#import "YTNavigationalLatencyProtocol-Protocol.h"
#import "YTScreenGraftViewController-Protocol.h"
#import "YTTitleTapObserver-Protocol.h"
#import "YTTopController-Protocol.h"

@class GIMMe, NSString, YTCommandResponderEvent, YTICommand, YTISearchRequest, YTNavigationalLatencyEventInfo, YTQTMButton, YTSearchFilters;
@protocol YTResponder, YTServices, YTTitleControlResponderProvider;

@interface YTSearchResultsViewController : YTBaseInnerTubeViewController <YTTitleTapObserver, YTGraftingViewController, YTInnerTubeSectionHeaderResponderProvider, YTNavigationalLatencyProtocol, YTScreenGraftViewController, YTTopController>
{
    id <YTServices> _services;
    YTISearchRequest *_searchRequest;
    YTSearchFilters *_searchFilters;
    YTQTMButton *_rightHeaderView;
    YTQTMButton *_filterButton;
    YTQTMButton *_clearButton;
    id <YTTitleControlResponderProvider> _titleControlProvider;
    _Bool _initializedNavBar;
    _Bool _loadingWithFilterOptions;
    _Bool _isResponseLoaded;
    id <YTResponder> _parentResponder;
    YTNavigationalLatencyEventInfo *_navigationalLatencyEventInfo;
    YTICommand *_navEndpoint;
}

@property(retain, nonatomic) YTICommand *navEndpoint; // @synthesize navEndpoint=_navEndpoint;
@property(retain, nonatomic) YTNavigationalLatencyEventInfo *navigationalLatencyEventInfo; // @synthesize navigationalLatencyEventInfo=_navigationalLatencyEventInfo;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)updateNavBar;
- (_Bool)shouldHidePivotBarForNavigationController:(id)arg1;
- (void)search;
- (_Bool)hasSearchHeaderForSectionRenderer:(id)arg1 sectionController:(id)arg2;
- (void)updateSearchFilters;
- (void)didTapFilterButton:(id)arg1;
- (void)didTapClearSearchButton:(id)arg1;
- (void)didPressRefineButton;
- (_Bool)didTapTitle;
- (void)updateHeader:(id)arg1 forSection:(id)arg2 sectionController:(id)arg3;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1 section:(id)arg2 sectionController:(id)arg3;
- (Class)headerClassForSection:(id)arg1 sectionController:(id)arg2;
- (void)didAddResponseViewController;
- (void)loadWithError:(id)arg1;
- (void)loadWithResponse:(id)arg1;
- (_Bool)canReloadWithModel:(id)arg1;
- (_Bool)hasEqualModel:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)relogScreen;
- (_Bool)shouldTintFilterButton;
- (_Bool)useDefaultSearchFilter;
- (_Bool)useClientSideFiltering;
- (_Bool)useSectionListForResults;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupInteractionLoggingHandlersAtResponder:(id)arg1;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

