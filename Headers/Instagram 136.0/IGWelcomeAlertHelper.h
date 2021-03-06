//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGWelcomeAlertHelper : NSObject
{
}

+ (CDUnknownBlockType)_completionBlockForButton:(id)arg1 callbackResolver:(CDUnknownBlockType)arg2;
+ (void)_logAlertViewButtonShowedForActionTypes:(id)arg1;
+ (id)_actionTypeStringForAlertViewButtonType:(long long)arg1;
+ (id)_genButtonsForValues:(id)arg1;
+ (_Bool)presentAlertViewForError:(id)arg1 response:(id)arg2 callbackResolver:(CDUnknownBlockType)arg3;
+ (_Bool)presentIGDSAlertViewForError:(id)arg1 response:(id)arg2 callbackResolver:(CDUnknownBlockType)arg3;
+ (_Bool)presentIOSAlertViewForError:(id)arg1 response:(id)arg2 callbackResolver:(CDUnknownBlockType)arg3;
+ (id)defaultBuilderForPath:(id)arg1;
+ (void)sendPasswordResetRequestWithNetworker:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
+ (void)lookUpUserForOmniContactPoint:(id)arg1 networker:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
+ (void)verifyMultipleUsersRecoverWithCode:(id)arg1 contactPoint:(id)arg2 contactType:(id)arg3 networker:(id)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6;
+ (void)sendLoginSMSForUsername:(id)arg1 networker:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
+ (void)sendLoginSMSForPhoneNumber:(id)arg1 prefilledPhoneNumber:(id)arg2 networker:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
+ (void)sendLoginEmailForUsernameOrEmail:(id)arg1 prefilledEmail:(id)arg2 networker:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
+ (void)sendLoginEmailForUsername:(id)arg1 networker:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
+ (void)sendPasswordResetEmailForUser:(id)arg1 networker:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
+ (void)lookupEmailForUsername:(id)arg1 networker:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;

@end

