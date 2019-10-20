//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GFBScreenshotAnnotatorStroke : NSObject
{
    NSMutableArray *_points;
    double _strokeWidth;
    unsigned long long _annotationType;
    struct CGSize _canvasSize;
}

@property(readonly, nonatomic) unsigned long long annotationType; // @synthesize annotationType=_annotationType;
@property(readonly, nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(readonly, nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
- (void).cxx_destruct;
- (id)allStrokePoints;
- (struct CGPoint)latestStrokePoint;
- (void)addStrokePoint:(struct CGPoint)arg1;
- (id)initWithCanvasSize:(struct CGSize)arg1 strokeWidth:(double)arg2 annotationType:(unsigned long long)arg3;

@end

