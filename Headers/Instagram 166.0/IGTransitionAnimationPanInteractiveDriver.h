//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGTransitionAnimationInteractiveDriving-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGDirectionalPanGestureRecognizer, NSString, UIViewController;
@protocol IGTransitionAnimationGestureReceivable, IGTransitionAnimationInteractiveDrivingContext;

@interface IGTransitionAnimationPanInteractiveDriver : NSObject <UIGestureRecognizerDelegate, IGTransitionAnimationInteractiveDriving>
{
    UIViewController *_viewController;
    id <IGTransitionAnimationInteractiveDrivingContext> _context;
    id <IGTransitionAnimationGestureReceivable> _gestureReceiver;
    IGDirectionalPanGestureRecognizer *_panRecongizer;
    IGDirectionalPanGestureRecognizer *_panVerticalRecongizer;
    _Bool _isEnabled;
    _Bool _allowsVerticalGesture;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowsVerticalGesture; // @synthesize allowsVerticalGesture=_allowsVerticalGesture;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (id)_topViewController;
- (_Bool)_shouldVerticalPanBeRequiredToFailWithScrollView:(id)arg1;
- (_Bool)_shouldHorizontalPanBeRequiredToFailWithScrollView:(id)arg1;
- (_Bool)_allowNavigationGesture:(id)arg1 scrollView:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)prepareInViewController:(id)arg1 context:(id)arg2 gestureReceiver:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

