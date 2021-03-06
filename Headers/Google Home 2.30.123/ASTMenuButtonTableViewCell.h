//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuBaseTableViewCell.h"

@class NSLayoutConstraint, QTMButton, UIView;

@interface ASTMenuButtonTableViewCell : ASTMenuBaseTableViewCell
{
    NSLayoutConstraint *_cellLeftMarginLayoutConstraint;
    NSLayoutConstraint *_cellButtonCenteredConstraint;
    NSLayoutConstraint *_cellRightMarginLayoutConstraint;
    NSLayoutConstraint *_cellTopMarginLayoutConstraint;
    NSLayoutConstraint *_cellBottomMarginLayoutConstraint;
    UIView *_topBorderView;
    QTMButton *_button;
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    double _bottomMargin;
    UIView *_shadowView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic, setter=setBottomMargin:) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic, setter=setTopMargin:) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) QTMButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) UIView *topBorderView; // @synthesize topBorderView=_topBorderView;
- (void)setUpConstraints;
- (void)setUpDefaultStyles;
- (void)updateConstraints;
- (void)addCustomSubViews;
- (void)prepareForReuse;
- (void)setButtonAlignment:(long long)arg1;

@end

