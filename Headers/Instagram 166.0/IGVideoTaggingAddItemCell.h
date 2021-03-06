//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, UIImageView, UILabel;
@protocol IGVideoTaggingAddItemCellDelegate;

@interface IGVideoTaggingAddItemCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIImageView *_plusButton;
    CALayer *_bottomBorderLayer;
    long long _taggingMode;
    id <IGVideoTaggingAddItemCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoTaggingAddItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long taggingMode; // @synthesize taggingMode=_taggingMode;
- (void)_onTagViewTapped;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

