//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/MDCAlertController.h>

@protocol OGLAccountMenuSessionLifecycleManager;

@interface MDCAlertController (OGLAccountMenuSession)
+ (void)styleController:(id)arg1;
+ (id)controllerWithTitle:(id)arg1 message:(id)arg2;
+ (id)controllerWithTitle:(id)arg1 message:(id)arg2 dismissOnBackgroundTap:(_Bool)arg3;
+ (id)noopActionWithTitle:(id)arg1;
+ (id)dsl_dialogWithAlertDialogViewModel:(id)arg1 retryHandler:(CDUnknownBlockType)arg2 abortHandler:(CDUnknownBlockType)arg3;
+ (id)dsl_confirmationDialogWithTitle:(id)arg1 message:(id)arg2 confirmHandler:(CDUnknownBlockType)arg3 confirmActionTitle:(id)arg4 cancelActionTitle:(id)arg5;
+ (id)dsl_confirmationDialogWithTitle:(id)arg1 message:(id)arg2 confirmHandler:(CDUnknownBlockType)arg3 confirmActionTitle:(id)arg4;
+ (id)dsl_confirmationDialogWithTitle:(id)arg1 message:(id)arg2 confirmHandler:(CDUnknownBlockType)arg3;
+ (id)dsl_errorDialogWithAlertDialogViewModel:(id)arg1;
+ (id)dsl_infoDialogWithAlertDialogViewModel:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;
+ (id)dsl_infoDialogWithAlertDialogViewModel:(id)arg1;
+ (id)dsl_dialogWithAlertDialogViewModel:(id)arg1;
@property(nonatomic) __weak id <OGLAccountMenuSessionLifecycleManager> ogl_accountMenuSessionLifecycleManager;
- (void)dsl_addDismissActionWithHandler:(CDUnknownBlockType)arg1 dismissButtonText:(id)arg2;
- (void)dsl_addDismissActionWithDismissButtonText:(id)arg1;
- (void)dsl_dismissOnBackgroundTap:(_Bool)arg1;
- (void)dsl_dismiss;
- (void)dsl_presentOnViewController:(id)arg1;
- (void)dsl_present;
- (void)dsl_addCancelAction;
@end

