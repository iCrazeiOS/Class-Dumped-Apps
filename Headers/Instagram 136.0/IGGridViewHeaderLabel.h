//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGTapButton, UILabel;
@protocol IGGridViewHeaderLabelDelegate;

@interface IGGridViewHeaderLabel : UICollectionViewCell
{
    id <IGGridViewHeaderLabelDelegate> _delegate;
    UILabel *_label;
    IGTapButton *_secondaryButton;
}

+ (double)height;
@property(retain, nonatomic) IGTapButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <IGGridViewHeaderLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapMore;
- (void)setShowsSecondaryLabel:(_Bool)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

