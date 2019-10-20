//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETTextContentViewObject.h"

@class NSNumber, NSString, UIColor, UIFont, UIImage;

@interface JETBottomButtonTextContentViewObject : JETTextContentViewObject
{
    _Bool _useEntireViewAsButton;
    UIImage *_buttonImage;
    NSString *_buttonTitle;
    CDUnknownBlockType _buttonBlock;
    NSString *_buttonAccessibilityIdentifier;
    NSString *_buttonAccessibilityLabel;
    double _verticalSpacingBetweenTextAndButton;
    UIColor *_buttonTextColor;
    UIColor *_buttonBackgroundColor;
    UIFont *_buttonFont;
    NSNumber *_buttonTextIsUppercase;
}

@property(retain, nonatomic) NSNumber *buttonTextIsUppercase; // @synthesize buttonTextIsUppercase=_buttonTextIsUppercase;
@property(retain, nonatomic) UIFont *buttonFont; // @synthesize buttonFont=_buttonFont;
@property(retain, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(nonatomic) double verticalSpacingBetweenTextAndButton; // @synthesize verticalSpacingBetweenTextAndButton=_verticalSpacingBetweenTextAndButton;
@property(nonatomic) _Bool useEntireViewAsButton; // @synthesize useEntireViewAsButton=_useEntireViewAsButton;
@property(copy, nonatomic) NSString *buttonAccessibilityLabel; // @synthesize buttonAccessibilityLabel=_buttonAccessibilityLabel;
@property(copy, nonatomic) NSString *buttonAccessibilityIdentifier; // @synthesize buttonAccessibilityIdentifier=_buttonAccessibilityIdentifier;
@property(copy, nonatomic) CDUnknownBlockType buttonBlock; // @synthesize buttonBlock=_buttonBlock;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) UIImage *buttonImage; // @synthesize buttonImage=_buttonImage;
- (void).cxx_destruct;
- (_Bool)isEqualToObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (Class)contentViewClass;

@end

