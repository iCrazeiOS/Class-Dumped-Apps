//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEPreviewable-Protocol.h"
#import "AWEUserProfileTabBaseMethod-Protocol.h"
#import "AWEZoomTransitionOuterContextProvider-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWEFeedRefreshFooter, AWEProfileTipView, AWEUILoadingView, AWEUserLikesDataManager, AWEUserModel, NSDictionary, NSHashTable, NSNumber, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol AWEUserProfileTabVCDelegate;

@interface AWELikeWorkViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEPreviewable, AWEZoomTransitionOuterContextProvider, AWEUserProfileTabBaseMethod>
{
    _Bool _isCurrentUser;
    _Bool _fromHome;
    _Bool _fromDynamicTab;
    _Bool _isProfileDidAppear;
    _Bool _initialLoadMoreEnabled;
    _Bool _needReloadAfterUserDigg;
    _Bool _isLikeUnaccessible;
    _Bool _selecting;
    UICollectionView *_collectionView;
    NSString *_userID;
    NSString *_referString;
    NSString *_enterPosition;
    NSNumber *_likeCount;
    NSNumber *_allLikeCount;
    AWEUserModel *_user;
    id <AWEUserProfileTabVCDelegate> _delegate;
    NSDictionary *_logExtraDict;
    NSString *_enterMethod;
    NSDictionary *_searchLogPassback;
    CDUnknownBlockType _likePermissionBlock;
    AWEUserLikesDataManager *_dataManager;
    AWEUILoadingView *_loadingView;
    AWEProfileTipView *_likePermissionTipView;
    NSString *_likePermissionEmptyText;
    NSHashTable *_animatedCoverCells;
    AWEFeedRefreshFooter *_footer;
    UICollectionViewFlowLayout *_layout;
    struct CGPoint _savedContentOffset;
}

@property(nonatomic) _Bool selecting; // @synthesize selecting=_selecting;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) AWEFeedRefreshFooter *footer; // @synthesize footer=_footer;
@property(nonatomic) _Bool isLikeUnaccessible; // @synthesize isLikeUnaccessible=_isLikeUnaccessible;
@property(retain, nonatomic) NSHashTable *animatedCoverCells; // @synthesize animatedCoverCells=_animatedCoverCells;
@property(retain, nonatomic) NSString *likePermissionEmptyText; // @synthesize likePermissionEmptyText=_likePermissionEmptyText;
@property(retain, nonatomic) AWEProfileTipView *likePermissionTipView; // @synthesize likePermissionTipView=_likePermissionTipView;
@property(nonatomic) _Bool needReloadAfterUserDigg; // @synthesize needReloadAfterUserDigg=_needReloadAfterUserDigg;
@property(nonatomic) struct CGPoint savedContentOffset; // @synthesize savedContentOffset=_savedContentOffset;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWEUserLikesDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(nonatomic) _Bool initialLoadMoreEnabled; // @synthesize initialLoadMoreEnabled=_initialLoadMoreEnabled;
@property(copy, nonatomic) CDUnknownBlockType likePermissionBlock; // @synthesize likePermissionBlock=_likePermissionBlock;
@property(nonatomic) _Bool isProfileDidAppear; // @synthesize isProfileDidAppear=_isProfileDidAppear;
@property(copy, nonatomic) NSDictionary *searchLogPassback; // @synthesize searchLogPassback=_searchLogPassback;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
@property(copy, nonatomic) NSDictionary *logExtraDict; // @synthesize logExtraDict=_logExtraDict;
@property(nonatomic) __weak id <AWEUserProfileTabVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber *allLikeCount; // @synthesize allLikeCount=_allLikeCount;
@property(retain, nonatomic) NSNumber *likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool fromDynamicTab; // @synthesize fromDynamicTab=_fromDynamicTab;
@property(copy, nonatomic) NSString *enterPosition; // @synthesize enterPosition=_enterPosition;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(nonatomic) _Bool fromHome; // @synthesize fromHome=_fromHome;
@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)refreshCollectionView;
- (void)handleBroadcastNotification:(id)arg1;
- (id)tabName;
- (id)contentView;
- (double)contentSizeHeight;
- (void)adjustContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (double)contentOffsetY;
- (void)resetEdgeInsets;
- (void)reloadData;
- (void)refreshData;
- (void)_startTimingForTrack;
- (void)_trackEventForStayTime;
- (struct UIEdgeInsets)aweui_emptyPageEdgeInsets;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (id)currentSelectedPathWithOffset:(long long)arg1;
- (id)zoomTransitionStartViewForOffset:(long long)arg1;
- (struct CGRect)previewingSourceRectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)previewingViewControllerForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)viewWillLayoutSubviews;
- (void)_setupUI;
- (double)footerInset;
- (_Bool)shouldHideNoMoreText;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)likeAwemeDetailTableVCWithModel:(id)arg1 itemIndex:(long long)arg2;
- (_Bool)shouldfilterDeleteItems;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)deleteLikeWorkWithAweme:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)p_hasHidingInvalidItem;
- (void)p_endRefreshingWithMore:(_Bool)arg1 list:(id)arg2 error:(id)arg3;
- (void)_loadMoreData;
- (void)_refreshData;
- (void)didDiggAweme:(id)arg1;
- (void)removeAll;
- (void)reloadEmptyPage;
- (void)refreshLikePermissionEmptyText;
- (void)checkLikePermissionEmptyText;
- (void)checkLikePermission;
- (void)buildLikePermissionIfNeeded;
- (void)backBtnClicked:(id)arg1;
- (void)applicationWillResignActive;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

