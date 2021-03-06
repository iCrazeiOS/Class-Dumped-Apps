//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIColor, UILabel, UIView;

@interface BDASplashSkipButton : UIButton
{
    _Bool _countDownUnitPrefix;
    _Bool _isHiddenSeparateLine;
    _Bool _tinyMode;
    NSString *_skipText;
    double _defaultFontSize;
    UILabel *_leftCountdownLabel;
    UILabel *_rightCountdownLabel;
    UILabel *_textLabel;
    UIView *_bgView;
    UIView *_separateLine;
}

@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *rightCountdownLabel; // @synthesize rightCountdownLabel=_rightCountdownLabel;
@property(retain, nonatomic) UILabel *leftCountdownLabel; // @synthesize leftCountdownLabel=_leftCountdownLabel;
@property(nonatomic) _Bool tinyMode; // @synthesize tinyMode=_tinyMode;
@property(nonatomic) double defaultFontSize; // @synthesize defaultFontSize=_defaultFontSize;
@property(nonatomic) _Bool isHiddenSeparateLine; // @synthesize isHiddenSeparateLine=_isHiddenSeparateLine;
@property(copy, nonatomic) NSString *skipText; // @synthesize skipText=_skipText;
@property(nonatomic) _Bool countDownUnitPrefix; // @synthesize countDownUnitPrefix=_countDownUnitPrefix;
- (void).cxx_destruct;
- (double)countDownLabelFont;
- (double)textLabelFont;
- (double)bgViewHeight;
- (double)btnHeight;
- (double)edgeInset;
- (_Bool)isSmallerScreen;
- (void)updateFrame;
- (void)updatePrefixString:(id)arg1;
@property(nonatomic) struct CGColor *borderColor;
@property(retain, nonatomic) UIColor *bgColor;
@property(retain, nonatomic) UIColor *textColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

