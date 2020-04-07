//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, SPTSnackbarView, UILayoutGuide, UIView, UIViewController;

@interface SPTSnackbarViewPresenter : NSObject
{
    _Bool _isAnimationInProgress;
    _Bool _refreshEnabled;
    UIView *_containerView;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    SPTSnackbarView *_currentPresentedSnackbar;
    double _snackBarHeight;
    UILayoutGuide *_mainLayoutGuide;
    UIViewController *_rootViewController;
}

@property(nonatomic) _Bool refreshEnabled; // @synthesize refreshEnabled=_refreshEnabled;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) UILayoutGuide *mainLayoutGuide; // @synthesize mainLayoutGuide=_mainLayoutGuide;
@property(nonatomic) double snackBarHeight; // @synthesize snackBarHeight=_snackBarHeight;
@property(nonatomic) _Bool isAnimationInProgress; // @synthesize isAnimationInProgress=_isAnimationInProgress;
@property(nonatomic) __weak SPTSnackbarView *currentPresentedSnackbar; // @synthesize currentPresentedSnackbar=_currentPresentedSnackbar;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)runHorizontalAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)runVerticalAnimationWithBottomConstant:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runVerticalAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideSnackbarWithAnimatinType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideSnackbarWithSwipeDirection:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupSnackbarViewConstraints;
- (void)refresh_runHideAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)refresh_runShowAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)refresh_setupSnackbarViewConstraints;
- (_Bool)isInModalPresentation;
- (_Bool)animationView:(id)arg1 shouldHandleTouchAtPoint:(struct CGPoint)arg2;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)placeContainerBehindAnimationView;
- (void)hideSnackbarWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateSnackBarLayoutShowCompletion:(CDUnknownBlockType)arg1;
- (void)showSnackbarView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContainerView:(id)arg1 rootViewController:(id)arg2 mainLayoutGuide:(id)arg3 refreshEnabled:(_Bool)arg4;

@end

