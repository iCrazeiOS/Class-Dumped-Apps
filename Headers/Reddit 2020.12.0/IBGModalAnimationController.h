//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIView;

@interface IBGModalAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _isDismissing;
    UIView *_snapshotView;
    UIView *_dimmedView;
}

@property(retain, nonatomic) UIView *dimmedView; // @synthesize dimmedView=_dimmedView;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
- (void).cxx_destruct;
- (void)insertSubview:(id)arg1 ontoSuperView:(id)arg2 atIndex:(long long)arg3;
- (id)snapshotForViewController:(id)arg1;
- (void)prepareContainerViewForDismissal:(id)arg1 toViewController:(id)arg2;
- (void)prepareContainerViewForPresentation:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)present:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

