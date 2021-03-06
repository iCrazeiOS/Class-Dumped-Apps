//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIColor, UILabel, UIView;

@interface GOOSideViewItemSectionHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
    UIView *_divider;
    _Bool _mdc_adjustsFontForContentSizeCategory;
}

- (void).cxx_destruct;
@property(nonatomic, setter=mdc_setAdjustsFontForContentSizeCategory:) _Bool mdc_adjustsFontForContentSizeCategory; // @synthesize mdc_adjustsFontForContentSizeCategory=_mdc_adjustsFontForContentSizeCategory;
- (void)resetDividerColor;
- (void)updateLabelFont;
@property(retain, nonatomic) UIColor *dividerColor;
@property(copy, nonatomic) NSString *title;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

