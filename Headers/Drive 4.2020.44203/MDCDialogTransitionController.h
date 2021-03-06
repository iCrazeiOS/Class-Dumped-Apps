//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <drive_extension_framework/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <drive_extension_framework/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString;

@interface MDCDialogTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    double _opacityAnimationDuration;
    double _scaleAnimationDuration;
    double _dialogInitialScaleFactor;
}

@property(nonatomic) double dialogInitialScaleFactor; // @synthesize dialogInitialScaleFactor=_dialogInitialScaleFactor;
@property(nonatomic) double scaleAnimationDuration; // @synthesize scaleAnimationDuration=_scaleAnimationDuration;
@property(nonatomic) double opacityAnimationDuration; // @synthesize opacityAnimationDuration=_opacityAnimationDuration;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

