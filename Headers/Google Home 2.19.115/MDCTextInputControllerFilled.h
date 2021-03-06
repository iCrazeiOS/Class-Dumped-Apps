//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCTextInputControllerBase.h"

@class NSLayoutConstraint;

@interface MDCTextInputControllerFilled : MDCTextInputControllerBase
{
    NSLayoutConstraint *_clearButtonBottom;
    NSLayoutConstraint *_placeholderTop;
    NSLayoutConstraint *_underlineBottom;
}

+ (void)setUnderlineHeightNormalDefault:(double)arg1;
+ (double)underlineHeightNormalDefault;
+ (void)setUnderlineHeightActiveDefault:(double)arg1;
+ (double)underlineHeightActiveDefault;
+ (void)setRoundedCornersDefault:(unsigned long long)arg1;
+ (unsigned long long)roundedCornersDefault;
+ (id)borderFillColorDefault;
+ (id)gmdc_controllerWithTextInput:(id)arg1 colorScheme:(id)arg2;
+ (id)gmdc_controllerWithTextInput:(id)arg1;
@property(retain, nonatomic) NSLayoutConstraint *underlineBottom; // @synthesize underlineBottom=_underlineBottom;
@property(retain, nonatomic) NSLayoutConstraint *placeholderTop; // @synthesize placeholderTop=_placeholderTop;
@property(retain, nonatomic) NSLayoutConstraint *clearButtonBottom; // @synthesize clearButtonBottom=_clearButtonBottom;
- (void).cxx_destruct;
- (double)beneathInputPadding;
- (struct UIOffset)floatingPlaceholderOffset;
- (double)estimatedTextHeight;
- (double)underlineOffsetWithInsets:(struct UIEdgeInsets)arg1 widthHint:(double)arg2;
- (void)updatePlaceholder;
- (void)updateLayout;
- (struct UIEdgeInsets)textInsets:(struct UIEdgeInsets)arg1 withSizeThatFitsWidthHint:(double)arg2;
- (double)trailingViewTrailingPaddingConstant;
- (struct CGRect)trailingViewRectForBounds:(struct CGRect)arg1 defaultRect:(struct CGRect)arg2;
- (double)leadingViewTrailingPaddingConstant;
- (struct CGRect)leadingViewRectForBounds:(struct CGRect)arg1 defaultRect:(struct CGRect)arg2;
- (void)gmdc_applySurfaceColor:(id)arg1 lightenColorByElevation:(_Bool)arg2;
- (void)gmdc_applyThemeWithScheme:(id)arg1;

@end

