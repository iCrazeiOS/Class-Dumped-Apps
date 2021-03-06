//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <AspenUIComponents/UIAppearanceContainer-Protocol.h>

@class NSMutableDictionary, NSString, UIColor, UIFont, UILabel;

@interface BaseButton : UIButton <UIAppearanceContainer>
{
    _Bool _isLeadingTrailingModeEnabled;
    float _shadowOpacity;
    double _cornerRadius;
    double _borderWidth;
    double _shadowRadius;
    UIColor *_shadowColor;
    UIFont *_titleFont;
    long long _imageRenderingMode;
    NSMutableDictionary *_backgroundColors;
    NSMutableDictionary *_borderColors;
    UILabel *_leadingTitleLabel;
    UILabel *_trailingTitleLabel;
    NSMutableDictionary *_titleColors;
    NSMutableDictionary *_leadingTitleColors;
    NSMutableDictionary *_trailingTitleColors;
    CDUnknownBlockType _controlBlock;
    struct CGSize _shadowOffset;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType controlBlock; // @synthesize controlBlock=_controlBlock;
@property(retain, nonatomic) NSMutableDictionary *trailingTitleColors; // @synthesize trailingTitleColors=_trailingTitleColors;
@property(retain, nonatomic) NSMutableDictionary *leadingTitleColors; // @synthesize leadingTitleColors=_leadingTitleColors;
@property(retain, nonatomic) NSMutableDictionary *titleColors; // @synthesize titleColors=_titleColors;
@property(retain, nonatomic) UILabel *trailingTitleLabel; // @synthesize trailingTitleLabel=_trailingTitleLabel;
@property(retain, nonatomic) UILabel *leadingTitleLabel; // @synthesize leadingTitleLabel=_leadingTitleLabel;
@property(retain, nonatomic) NSMutableDictionary *borderColors; // @synthesize borderColors=_borderColors;
@property(retain, nonatomic) NSMutableDictionary *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
@property(nonatomic) long long imageRenderingMode; // @synthesize imageRenderingMode=_imageRenderingMode;
@property(nonatomic) _Bool isLeadingTrailingModeEnabled; // @synthesize isLeadingTrailingModeEnabled=_isLeadingTrailingModeEnabled;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) float shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)applySavedTitleColors;
- (void)saveCurrentTitleColors;
- (void)transitionToNormalModeAnimated:(_Bool)arg1;
- (void)transitionToLeadingTrailingModeAnimated:(_Bool)arg1;
- (void)switchLeadingTrailingMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTrailingTitleText:(id)arg1;
- (void)setLeadingTitleText:(id)arg1;
- (void)setTrailingTitleFont:(id)arg1;
- (void)setLeadingTitleFont:(id)arg1;
- (void)setTrailingTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setLeadingTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)callControlBlock:(id)arg1;
- (void)handleControlEvent:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)updateButtonStyleAnimated:(_Bool)arg1;
- (void)setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutLeadingTrailingTitleLabel;
- (void)commonInit;
- (void)prepareForInterfaceBuilder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

