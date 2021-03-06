//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASMViewController.h"

#import "ASMHeaderContentViewController-Protocol.h"
#import "ASMNavigationHierarchyController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ABCRefreshControl, ASMFooter, ASMHeaderViewController, ASMMessage, ASMScreenIntro, NSArray, NSString, QTMPullToRefreshController, UIImage, UIScrollView, UITableView;
@protocol ASMCardScreenViewModel, ASMScrollViewTrackingDelegate;

@interface ASMCardScreenViewController : ASMViewController <UITableViewDelegate, UITableViewDataSource, ASMHeaderContentViewController, ASMNavigationHierarchyController>
{
    _Bool _headerViewHasBeenInstalled;
    _Bool _shouldReload;
    _Bool _useUIKit;
    ASMHeaderViewController *_headerViewController;
    id <ASMScrollViewTrackingDelegate> _scrollViewTrackingDelegate;
    UIScrollView *_scrollView;
    id <ASMCardScreenViewModel> _model;
    ASMMessage *_bannerMessage;
    NSArray *_blockListData;
    ASMScreenIntro *_screenIntro;
    ASMFooter *_footer;
    UIImage *_profilePicture;
    UITableView *_tableView;
    ABCRefreshControl *_refreshControl;
    QTMPullToRefreshController *_refreshController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QTMPullToRefreshController *refreshController; // @synthesize refreshController=_refreshController;
@property(retain, nonatomic) ABCRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) _Bool useUIKit; // @synthesize useUIKit=_useUIKit;
@property(nonatomic) _Bool shouldReload; // @synthesize shouldReload=_shouldReload;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIImage *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(retain, nonatomic) ASMFooter *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) ASMScreenIntro *screenIntro; // @synthesize screenIntro=_screenIntro;
@property(retain, nonatomic) NSArray *blockListData; // @synthesize blockListData=_blockListData;
@property(retain, nonatomic) ASMMessage *bannerMessage; // @synthesize bannerMessage=_bannerMessage;
@property(retain, nonatomic) id <ASMCardScreenViewModel> model; // @synthesize model=_model;
@property(nonatomic) _Bool headerViewHasBeenInstalled; // @synthesize headerViewHasBeenInstalled=_headerViewHasBeenInstalled;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <ASMScrollViewTrackingDelegate> scrollViewTrackingDelegate; // @synthesize scrollViewTrackingDelegate=_scrollViewTrackingDelegate;
@property(nonatomic) __weak ASMHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
- (void)restoreAllViews;
- (void)hideViewsContainingPotentiallySensitiveInformation;
- (_Bool)displayContentFromBlueprint:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showSnackbarToUndoDismissingPromptItem:(id)arg1;
- (CDUnknownBlockType)createDismissalBlockForCell:(id)arg1 data:(id)arg2;
- (void)updatePromptCarouselBlockCell:(id)arg1 forIndexPath:(id)arg2;
- (void)updateCardBlockCell:(id)arg1 forIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (CDUnknownBlockType)createNavigateToBlockForView:(id)arg1;
@property(readonly, nonatomic) double topContentOffset;
- (_Bool)isShowingAnyContent;
- (_Bool)isShowingScreenContent;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadSection:(long long)arg1;
- (void)reloadData;
- (_Bool)canUpdateLoadingIndicatorStateToLoading:(_Bool)arg1;
- (void)updateLoadingIndicatorStateToLoading:(_Bool)arg1;
- (void)updateLoadingIndicatorStateToCurrentModelState;
- (void)didPullToRefresh;
- (id)initWithViewModel:(id)arg1 useUIKit:(_Bool)arg2;

// Remaining properties
@property(nonatomic) _Bool alwaysCollapseActionButtons;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long dismissButtonStyle;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerElevationBehavior;
@property(readonly) Class superclass;

@end

