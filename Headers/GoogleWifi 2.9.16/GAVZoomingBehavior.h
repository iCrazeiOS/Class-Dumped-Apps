//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVBehavior-Protocol.h"

@class NSNumber, NSString;
@protocol GAVChartCore;

@interface GAVZoomingBehavior : NSObject <GAVBehavior>
{
    double _centerTouchPoint;
    NSString *_name;
    id <GAVChartCore> _chart;
    NSNumber *_minZoomInterval;
    NSNumber *_maxZoomInterval;
}

@property(retain, nonatomic) NSNumber *maxZoomInterval; // @synthesize maxZoomInterval=_maxZoomInterval;
@property(retain, nonatomic) NSNumber *minZoomInterval; // @synthesize minZoomInterval=_minZoomInterval;
@property(nonatomic) __weak id <GAVChartCore> chart; // @synthesize chart=_chart;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (double)pivotalValue:(int)arg1 viewportStart:(double)arg2 viewportEnd:(double)arg3;
- (void)onPinchWithNotification:(id)arg1;
- (void)detachFromChart:(id)arg1;
- (void)attachToChart:(id)arg1;
- (id)initWithName:(id)arg1 minZoomInterval:(id)arg2 maxZoomInterval:(id)arg3;
- (id)initWithName:(id)arg1;

@end

