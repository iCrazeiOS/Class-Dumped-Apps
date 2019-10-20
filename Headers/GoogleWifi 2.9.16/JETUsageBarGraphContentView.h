//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class UIView;
@protocol GAVChart;

@interface JETUsageBarGraphContentView : GOOBaseContentView
{
    UIView<GAVChart> *_chartView;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) UIView<GAVChart> *chartView; // @synthesize chartView=_chartView;
- (void).cxx_destruct;
- (id)createChartWithUsageScale:(long long)arg1 isDownload:(_Bool)arg2 usageWindow:(id)arg3;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;

@end

