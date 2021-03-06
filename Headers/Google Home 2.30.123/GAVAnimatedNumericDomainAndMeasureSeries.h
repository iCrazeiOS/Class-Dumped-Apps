//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVForwardingSeries.h"

@protocol GAVSeries;

@interface GAVAnimatedNumericDomainAndMeasureSeries : GAVForwardingSeries
{
    id <GAVSeries> _initialSeries;
    double _progress;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) id <GAVSeries> initialSeries; // @synthesize initialSeries=_initialSeries;
- (id)domainScale;
- (id)measureScale;
- (id)itemsEnumerator;
- (id)initWithInitialSeries:(id)arg1 finalSeries:(id)arg2 progress:(double)arg3;

@end

