//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIFont;

@interface _TtC22UICircularProgressRing14UICircularRing : UIView
{
    // Error parsing type: , name: fullCircle
    // Error parsing type: , name: style
    // Error parsing type: , name: gradientOptions
    // Error parsing type: , name: shouldShowValueText
    // Error parsing type: , name: valueKnobStyle
    // Error parsing type: , name: startAngle
    // Error parsing type: , name: endAngle
    // Error parsing type: , name: outerRingWidth
    // Error parsing type: , name: outerRingColor
    // Error parsing type: , name: outerCapStyle
    // Error parsing type: , name: innerRingWidth
    // Error parsing type: , name: innerRingColor
    // Error parsing type: , name: innerRingSpacing
    // Error parsing type: , name: innerCapStyle
    // Error parsing type: , name: fontColor
    // Error parsing type: , name: font
    // Error parsing type: , name: isClockwise
    // Error parsing type: , name: pausedTimeRemaining
    // Error parsing type: , name: animationPauseTime
    // Error parsing type: , name: snapshottedAnimation
    // Error parsing type: , name: animationCompletionTimer
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isClockwise; // @synthesize isClockwise;
@property(nonatomic, retain) UIFont *font; // @synthesize font;
@property(nonatomic, retain) UIColor *fontColor; // @synthesize fontColor;
@property(nonatomic) double innerRingSpacing; // @synthesize innerRingSpacing;
@property(nonatomic, retain) UIColor *innerRingColor; // @synthesize innerRingColor;
@property(nonatomic) double innerRingWidth; // @synthesize innerRingWidth;
@property(nonatomic, retain) UIColor *outerRingColor; // @synthesize outerRingColor;
@property(nonatomic) double outerRingWidth; // @synthesize outerRingWidth;
@property(nonatomic) double endAngle; // @synthesize endAngle;
@property(nonatomic) double startAngle; // @synthesize startAngle;
@property(nonatomic) _Bool shouldShowValueText; // @synthesize shouldShowValueText;
@property(nonatomic) _Bool fullCircle; // @synthesize fullCircle;

@end

