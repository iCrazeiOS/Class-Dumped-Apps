//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ODEPerformanceDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerInteractiveTransitioning-Protocol.h"

@class NSMutableSet, NSString, ODEPerformance, ODETransitionDirector, UIViewController;
@protocol ODEViewControllerTransitionDelegate, UIViewControllerContextTransitioning;

@interface ODEViewControllerTransition : NSObject <ODEPerformanceDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    ODEPerformance *_performance;
    unsigned long long _initialDirection;
    NSMutableSet *_gestureRecognizers;
    id <UIViewControllerContextTransitioning> _transitioningContext;
    UIViewController *_leftViewController;
    UIViewController *_rightViewController;
    id <ODEViewControllerTransitionDelegate> _delegate;
    ODETransitionDirector *_director;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ODETransitionDirector *director; // @synthesize director=_director;
- (id)destinationViewController;
- (_Bool)performance:(id)arg1 canSnapshotView:(id)arg2;
- (_Bool)performance:(id)arg1 canDuplicateView:(id)arg2;
- (void)performance:(id)arg1 didComplete:(_Bool)arg2;
- (void)performance:(id)arg1 timelinePercentageDidChange:(double)arg2;
- (void)startInteractiveTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)giveGestureRecognizer:(id)arg1;
- (id)initWithDirection:(unsigned long long)arg1 director:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

