//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGGradientView, UIActivityIndicatorView, UIButton;
@protocol IGButtonSectionCollectionViewCellDelegate;

@interface IGButtonSectionCollectionViewCell : UICollectionViewCell
{
    UIButton *_button;
    IGGradientView *_gradientView;
    UIActivityIndicatorView *_spinner;
    struct UIEdgeInsets _sectionEdgeInsets;
    id <IGButtonSectionCollectionViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGButtonSectionCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)configureWithViewModel:(id)arg1;
- (void)_didTapButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

