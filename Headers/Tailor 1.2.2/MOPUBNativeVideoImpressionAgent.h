//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface MOPUBNativeVideoImpressionAgent : NSObject
{
    _Bool _requirementsSatisfied;
    double _requiredVisiblePercentage;
    double _requiredPlaybackDuration;
    double _visibilitySatisfiedPlaybackTime;
    UIView *_measuredVideoView;
}

@property(nonatomic) _Bool requirementsSatisfied; // @synthesize requirementsSatisfied=_requirementsSatisfied;
@property(nonatomic) __weak UIView *measuredVideoView; // @synthesize measuredVideoView=_measuredVideoView;
@property(nonatomic) double visibilitySatisfiedPlaybackTime; // @synthesize visibilitySatisfiedPlaybackTime=_visibilitySatisfiedPlaybackTime;
@property(nonatomic) double requiredPlaybackDuration; // @synthesize requiredPlaybackDuration=_requiredPlaybackDuration;
@property(nonatomic) double requiredVisiblePercentage; // @synthesize requiredVisiblePercentage=_requiredVisiblePercentage;
- (void).cxx_destruct;
- (_Bool)shouldTrackImpressionWithCurrentPlaybackTime:(double)arg1;
- (id)initWithVideoView:(id)arg1 requiredVisibilityPercentage:(double)arg2 requiredPlaybackDuration:(double)arg3;

@end

