//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGLeaderboardViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSLayoutConstraint, NSString, NSTimer, SGLeaderboardViewModel, UIButton, UICollectionView, UIView, XBXFilterControl, XBXUser, _TtC10SmartGlass16SGLocalizedLabel;

@interface SGLeaderboardViewController_iPhone : SGLeaderboardViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_collectionView;
    UIButton *_dismissButton;
    XBXUser *_currentUser;
    NSLayoutConstraint *_detailInfoBarHeightSpacer;
    UIView *_detailInfoBarView;
    XBXFilterControl *_filterControl;
    _TtC10SmartGlass16SGLocalizedLabel *_detailStatusLabel;
    NSTimer *_countdownTimer;
}

@property(retain, nonatomic) NSTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) _TtC10SmartGlass16SGLocalizedLabel *detailStatusLabel; // @synthesize detailStatusLabel=_detailStatusLabel;
@property(retain, nonatomic) XBXFilterControl *filterControl; // @synthesize filterControl=_filterControl;
@property(retain, nonatomic) UIView *detailInfoBarView; // @synthesize detailInfoBarView=_detailInfoBarView;
@property(retain, nonatomic) NSLayoutConstraint *detailInfoBarHeightSpacer; // @synthesize detailInfoBarHeightSpacer=_detailInfoBarHeightSpacer;
@property(retain, nonatomic) XBXUser *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (_Bool)isLessThanOneDayTillEndOfMonth;
- (void)updateDetailInfoBarVisibility:(_Bool)arg1;
@property(readonly, nonatomic) SGLeaderboardViewModel *myViewModel;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didTapDismissButton:(id)arg1;
- (void)onViewModelDataStateChanged;
- (void)onDestroy;
- (void)countdownTimerDidFire:(id)arg1;
- (void)onInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

