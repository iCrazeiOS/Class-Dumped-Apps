//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuBaseTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface ASTMenuDropdownTableViewCell : ASTMenuBaseTableViewCell
{
    UIView *_topBorderView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_dropDownIcon;
    UIView *_bottomBorderView;
}

@property(readonly, nonatomic) UIView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(readonly, nonatomic) UIImageView *dropDownIcon; // @synthesize dropDownIcon=_dropDownIcon;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *topBorderView; // @synthesize topBorderView=_topBorderView;
- (void).cxx_destruct;
- (_Bool)accessibilityElementsHidden;
- (void)setUpConstraints;
- (void)setUpDefaultStyles;
- (void)addCustomSubViews;

@end

