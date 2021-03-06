//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/BKBloksComponentController.h>

#import <InstagramAppCoreFramework/IGInsightsLineChartViewDelegate-Protocol.h>

@class IGInsightsLineChartView, NSString;

@interface IGBloksChartV2ComponentController : BKBloksComponentController <IGInsightsLineChartViewDelegate>
{
    IGInsightsLineChartView *_lineChartView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGInsightsLineChartView *lineChartView; // @synthesize lineChartView=_lineChartView;
- (void)_configureWithModel;
- (void)componentDidAcquireView:(id)arg1;
- (void)componentDidAcquireView:(id)arg1 withModel:(id)arg2 context:(id)arg3;
- (void)chartView:(id)arg1 didSelectDataPointAtIndex:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

