//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/LOTRenderNode.h>

@class CALayer, CAShapeLayer, LOTArrayInterpolator, LOTNumberInterpolator, LOTPointInterpolator, LOTRadialGradientLayer;

@interface LOTGradientFillRender : LOTRenderNode
{
    _Bool _evenOddFillRule;
    CALayer *centerPoint_DEBUG;
    CAShapeLayer *_maskShape;
    LOTRadialGradientLayer *_gradientOpacityLayer;
    LOTRadialGradientLayer *_gradientLayer;
    long long _numberOfPositions;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
    LOTArrayInterpolator *_gradientInterpolator;
    LOTPointInterpolator *_startPointInterpolator;
    LOTPointInterpolator *_endPointInterpolator;
    LOTNumberInterpolator *_opacityInterpolator;
}

- (void).cxx_destruct;
- (id)actionsForRenderLayer;
- (void)rebuildOutputs;
- (void)performLocalUpdate;
- (_Bool)needsUpdateForFrame:(id)arg1;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)arg1 shapeGradientFill:(id)arg2;

@end

