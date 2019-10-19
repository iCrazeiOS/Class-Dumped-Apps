//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATCustomFocusingView.h"

@class CAShapeLayer;

@interface SCATVisualScrollerView : SCATCustomFocusingView
{
    unsigned long long _triangle;
    CDUnknownBlockType _activateActionHandler;
    CAShapeLayer *_triangleKnockoutLayer;
    CAShapeLayer *_triangleStrokeLayer;
}

+ (struct CGSize)scrollerSize;
@property(retain, nonatomic) CAShapeLayer *triangleStrokeLayer; // @synthesize triangleStrokeLayer=_triangleStrokeLayer;
@property(retain, nonatomic) CAShapeLayer *triangleKnockoutLayer; // @synthesize triangleKnockoutLayer=_triangleKnockoutLayer;
@property(copy, nonatomic) CDUnknownBlockType activateActionHandler; // @synthesize activateActionHandler=_activateActionHandler;
@property(nonatomic) unsigned long long triangle; // @synthesize triangle=_triangle;
- (void).cxx_destruct;
- (_Bool)scatBeginScanningFromSelfAfterActivation;
- (_Bool)scatHidesGroupCursorWhenFocused;
- (_Bool)scatIsAuxiliaryElement;
- (_Bool)scatShouldAllowDeferFocusToNativeFocusedElement;
- (_Bool)scatPerformAction:(int)arg1;
- (_Bool)scatIndicatesOwnFocus;
- (_Bool)updateFocusState:(long long)arg1;
- (void)layoutSubviews;
- (id)description;
- (id)initWithTriangle:(unsigned long long)arg1;

@end

