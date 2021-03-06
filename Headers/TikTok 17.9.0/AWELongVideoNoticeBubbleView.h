//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface AWELongVideoNoticeBubbleView : UIView
{
    UILabel *_leftIconLabel;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_rightButton;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *leftIconLabel; // @synthesize leftIconLabel=_leftIconLabel;
- (void)clickRightButton:(id)arg1;
- (void)showOnView:(id)arg1 customLayout:(CDUnknownBlockType)arg2;
- (void)showOnView:(id)arg1 bottomOffset:(double)arg2;
- (void)customBubbleConfig;
- (void)setupLayout;
- (void)setUpViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

