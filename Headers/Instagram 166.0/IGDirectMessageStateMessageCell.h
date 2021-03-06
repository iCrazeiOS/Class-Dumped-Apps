//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/UICollectionViewDataSource-Protocol.h>

@class IGCoreTextView, IGDirectMessageStateCellLayoutSpec, NSArray, NSString, UICollectionView, UILabel, UIView;

@interface IGDirectMessageStateMessageCell : UICollectionViewCell <UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    NSArray *_profilePictures;
    UILabel *_overflowLabel;
    UIView *_overflowLabelBackgroundView;
    IGCoreTextView *_textView;
    IGDirectMessageStateCellLayoutSpec *_layoutSpec;
    struct CGSize _textSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
@property(retain, nonatomic) IGDirectMessageStateCellLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) IGCoreTextView *textView; // @synthesize textView=_textView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_configureTextViewWithViewModel:(id)arg1 expanded:(_Bool)arg2 messageStateDateFormatter:(id)arg3 animated:(_Bool)arg4;
- (void)_setUpSeenHeadViewsIfNecessary;
- (void)_configureCollectionViewAndOverflowLabelWithProfilePictures:(id)arg1 userInterfaceStyle:(unsigned long long)arg2;
- (void)configureWithViewModel:(id)arg1 expanded:(_Bool)arg2 messageStateDateFormatter:(id)arg3 animated:(_Bool)arg4;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

