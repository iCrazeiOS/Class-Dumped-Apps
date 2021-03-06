//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGStoryQuickReactionsEmojiCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IGStoryQuickReactionsViewModel, IGTapButton, IGTooltipView, IGUserSession, NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel;
@protocol IGStoryQuickReactionsViewDelegate;

@interface IGStoryQuickReactionsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IGStoryQuickReactionsEmojiCellDelegate>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UILabel *_quickReactionsTitle;
    NSArray *_emojiModels;
    IGUserSession *_userSession;
    IGTooltipView *_tooltip;
    long long _tooltipIndex;
    IGTapButton *_emojiTrayButton;
    IGStoryQuickReactionsViewModel *_viewModel;
    id <IGStoryQuickReactionsViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryQuickReactionsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)quickReactionsEmojiCellDidLongPress:(id)arg1 withLongPressGestureRecgonizer:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_didTapEmojiTrayButton;
- (double)_collectionViewHeight;
- (void)hideTooltipIfNecessary;
- (void)showTooltipWithTextIfNecessary:(id)arg1 atIndex:(long long)arg2 forDuration:(double)arg3 analyticsTag:(id)arg4;
- (void)animateEmojiAtIndexPath:(id)arg1;
- (void)setEmojiModels:(id)arg1;
- (void)reconfigureWithCurrentViewModel;
- (void)configureWithViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

