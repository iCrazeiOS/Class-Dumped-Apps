//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVForwardingSeries.h"

@class GAVAnimatedFromValueScale;
@protocol GAVSeries;

@interface GAVAnimatedMeasureSeries : GAVForwardingSeries
{
    id <GAVSeries> _initialSeries;
    double _progress;
    GAVAnimatedFromValueScale *_animatedMeasureScale;
    CDUnknownBlockType _measureScaleProvider;
    CDUnknownBlockType _domainScaleProvider;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType domainScaleProvider; // @synthesize domainScaleProvider=_domainScaleProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType measureScaleProvider; // @synthesize measureScaleProvider=_measureScaleProvider;
@property(readonly, nonatomic) GAVAnimatedFromValueScale *animatedMeasureScale; // @synthesize animatedMeasureScale=_animatedMeasureScale;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) id <GAVSeries> initialSeries; // @synthesize initialSeries=_initialSeries;
- (void).cxx_destruct;
- (id)itemsEnumerator;
- (id)domainScale;
- (id)measureScale;
- (id)initWithInitialSeries:(id)arg1 finalSeries:(id)arg2 progress:(double)arg3 measureScaleProvider:(CDUnknownBlockType)arg4 domainScaleProvider:(CDUnknownBlockType)arg5;

@end

