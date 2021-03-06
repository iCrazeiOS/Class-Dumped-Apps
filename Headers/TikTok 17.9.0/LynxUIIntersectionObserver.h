//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LynxUI, LynxUIIntersectionObserverManager, NSArray, NSMutableArray;

@interface LynxUIIntersectionObserver : NSObject
{
    _Bool _observeAll;
    float _marginLeft;
    float _marginRight;
    float _marginTop;
    float _marginBottom;
    long long _observerId;
    NSArray *_thresholds;
    long long _initialRatio;
    LynxUIIntersectionObserverManager *_manager;
    LynxUI *_container;
    LynxUI *_root;
    NSMutableArray *_observationTargets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *observationTargets; // @synthesize observationTargets=_observationTargets;
@property(nonatomic) __weak LynxUI *root; // @synthesize root=_root;
@property(nonatomic) __weak LynxUI *container; // @synthesize container=_container;
@property(nonatomic) __weak LynxUIIntersectionObserverManager *manager; // @synthesize manager=_manager;
@property(nonatomic) _Bool observeAll; // @synthesize observeAll=_observeAll;
@property(nonatomic) long long initialRatio; // @synthesize initialRatio=_initialRatio;
@property(retain, nonatomic) NSArray *thresholds; // @synthesize thresholds=_thresholds;
@property(nonatomic) float marginBottom; // @synthesize marginBottom=_marginBottom;
@property(nonatomic) float marginTop; // @synthesize marginTop=_marginTop;
@property(nonatomic) float marginRight; // @synthesize marginRight=_marginRight;
@property(nonatomic) float marginLeft; // @synthesize marginLeft=_marginLeft;
@property(nonatomic) long long observerId; // @synthesize observerId=_observerId;
- (_Bool)hasCrossedThreshold:(id)arg1 newEntry:(id)arg2;
- (struct CGRect)getRootRect;
- (struct CGRect)computeTargetAndRootIntersection:(id)arg1 targetRect:(struct CGRect)arg2 rootRect:(struct CGRect)arg3;
- (void)checkForIntersectionWithTarget:(id)arg1 rootRect:(struct CGRect)arg2 isInitial:(_Bool)arg3;
- (void)checkForIntersections;
- (void)parseMargin:(id)arg1;
- (void)disconnect;
- (void)observe:(id)arg1 callbackId:(long long)arg2;
- (void)relativeToViewportWithMargins:(id)arg1;
- (void)relativeTo:(id)arg1 margins:(id)arg2;
- (id)initWithManager:(id)arg1 observerId:(long long)arg2 componentId:(long long)arg3 options:(id)arg4;

@end

