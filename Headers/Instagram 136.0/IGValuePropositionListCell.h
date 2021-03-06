//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/UICollectionViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IG4BLogger, IGPageCellPageControl, IGValuePropositionListViewModel, NSString, UICollectionView;
@protocol IGValuePropositionListCellDelegate;

@interface IGValuePropositionListCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate>
{
    IGValuePropositionListViewModel *_viewModel;
    UICollectionView *_swipeableView;
    IGPageCellPageControl *_pageControl;
    IG4BLogger *_logger;
    id <IGValuePropositionListCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGValuePropositionListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IG4BLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

