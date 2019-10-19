//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface SCATAxisLayer : CALayer
{
    int _axis;
    int _theme;
    CALayer *_foregroundLayer;
    CALayer *_compositingLayer;
}

+ (double)lineLayerMaxWidth;
+ (double)rangeLayerBorderWidth;
+ (double)rangeLayerMaxWidth;
@property(retain, nonatomic) CALayer *compositingLayer; // @synthesize compositingLayer=_compositingLayer;
@property(retain, nonatomic) CALayer *foregroundLayer; // @synthesize foregroundLayer=_foregroundLayer;
@property(nonatomic) int theme; // @synthesize theme=_theme;
@property(nonatomic) int axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBackgroundColor:(struct CGColor *)arg1;
@property(readonly, nonatomic) _Bool isAnimatingForwards;
- (void)updateLayerTreePosition:(struct CGPoint)arg1;
- (void)updateTheme:(int)arg1 animated:(_Bool)arg2;
- (id)description;
- (id)initWithAxis:(int)arg1;

@end

