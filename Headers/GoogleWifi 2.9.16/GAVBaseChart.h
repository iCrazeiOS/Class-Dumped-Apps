//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GAVBehaviorHost-Protocol.h"
#import "GAVChart-Protocol.h"
#import "GAVSelectionReceiver-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CADisplayLink, GAVChartLayoutView, NSArray, NSDictionary, NSMutableDictionary, NSNotificationCenter, NSString;
@protocol GAVChartStyle, GAVSelectionModel, GAVStylePack;

@interface GAVBaseChart : UIView <GAVChart, GAVSelectionReceiver, GAVBehaviorHost, UIGestureRecognizerDelegate>
{
    NSString *_defaultRenderer;
    id <GAVStylePack> _stylePack;
    id <GAVChartStyle> _style;
    double _animationDuration;
    id <GAVSelectionModel> _selectionModel;
    NSMutableDictionary *_axesInternal;
    NSMutableDictionary *_series;
    NSMutableDictionary *_previouslyDrawnSeries;
    NSMutableDictionary *_currentlyDrawnSeries;
    NSMutableDictionary *_behaviors;
    NSMutableDictionary *_animationStrategies;
    NSMutableDictionary *_axisViews;
    NSMutableDictionary *_renderers;
    GAVChartLayoutView *_layoutView;
    NSNotificationCenter *_notificationCenter;
    CADisplayLink *_displayLink;
    double _startTimestamp;
}

+ (void)initialize;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) GAVChartLayoutView *layoutView; // @synthesize layoutView=_layoutView;
@property(readonly, nonatomic) NSMutableDictionary *renderers; // @synthesize renderers=_renderers;
@property(readonly, nonatomic) NSMutableDictionary *axisViews; // @synthesize axisViews=_axisViews;
@property(readonly, nonatomic) NSMutableDictionary *animationStrategies; // @synthesize animationStrategies=_animationStrategies;
@property(readonly, nonatomic) NSMutableDictionary *behaviors; // @synthesize behaviors=_behaviors;
@property(retain, nonatomic) NSMutableDictionary *currentlyDrawnSeries; // @synthesize currentlyDrawnSeries=_currentlyDrawnSeries;
@property(retain, nonatomic) NSMutableDictionary *previouslyDrawnSeries; // @synthesize previouslyDrawnSeries=_previouslyDrawnSeries;
@property(readonly, nonatomic) NSMutableDictionary *series; // @synthesize series=_series;
@property(readonly, nonatomic) NSMutableDictionary *axesInternal; // @synthesize axesInternal=_axesInternal;
@property(retain, nonatomic) id <GAVSelectionModel> selectionModel; // @synthesize selectionModel=_selectionModel;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) id <GAVChartStyle> style; // @synthesize style=_style;
@property(retain, nonatomic) id <GAVStylePack> stylePack; // @synthesize stylePack=_stylePack;
@property(copy, nonatomic) NSString *defaultRenderer; // @synthesize defaultRenderer=_defaultRenderer;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setSelectedSeries:(id)arg1;
- (void)setSelectedDomain:(id)arg1;
- (void)setSelectedDatum:(id)arg1 forSeries:(id)arg2;
@property(readonly, nonatomic) NSDictionary *axes;
@property(readonly, nonatomic) NSArray *seriesSpecs;
- (void)handlePinch:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)handleSelect:(id)arg1;
- (id)rendererForViewType:(id)arg1;
- (void)drawSubviewsWithProgress:(double)arg1;
- (void)onDisplayLink:(id)arg1;
- (void)updateStyles;
- (void)resetAnimation;
- (void)startAnimation;
- (void)performDraw;
- (void)draw;
- (void)drawWithSeriesData:(id)arg1;
- (void)reset;
- (void)addSeries:(id)arg1;
- (void)addAxis:(id)arg1;
- (void)addBehavior:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool isAnimated;
- (void)addDrawAreaSubview:(id)arg1 atZIndex:(long long)arg2;
- (void)addDrawAreaSubview:(id)arg1;
- (void)addBottomGutterSubview:(id)arg1;
- (void)addTopGutterSubview:(id)arg1;
- (void)addRightGutterSubview:(id)arg1;
- (void)addLeftGutterSubview:(id)arg1;
- (void)fireEventWithName:(id)arg1 userInfo:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

