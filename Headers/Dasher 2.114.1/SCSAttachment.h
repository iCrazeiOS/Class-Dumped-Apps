//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCSAttachmentContainerViewController, UIViewController;
@protocol SCSAttachmentController, UIViewControllerAnimatedTransitioning;

@interface SCSAttachment : UIView
{
    _Bool _dismissed;
    _Bool _needsAttachmentUpdate;
    UIViewController<SCSAttachmentController> *_controller;
    SCSAttachmentContainerViewController *_attachmentContainerController;
    NSString *_name;
    id <UIViewControllerAnimatedTransitioning> _animator;
}

@property(nonatomic) _Bool needsAttachmentUpdate; // @synthesize needsAttachmentUpdate=_needsAttachmentUpdate;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> animator; // @synthesize animator=_animator;
@property(nonatomic, getter=isDismissed) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak SCSAttachmentContainerViewController *attachmentContainerController; // @synthesize attachmentContainerController=_attachmentContainerController;
@property(retain, nonatomic) UIViewController<SCSAttachmentController> *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)animationContextForTransitionOperation:(long long)arg1;
- (id)defaultAnimationControllerForAttachmentForTransitionOperation:(long long)arg1;
- (id)_animationControllerForAttachmentForTransitionOperation:(long long)arg1;
- (double)_attachmentLevel;
- (void)attachmentVisibilityDidChange:(_Bool)arg1 animated:(_Bool)arg2;
- (void)attachmentVisibilityWillChange:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDismissed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAttachment;
- (_Bool)influencesEdgeInsets;
- (void)didAddSubview:(id)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)addViewIfVisible;
- (id)description;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithController:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

