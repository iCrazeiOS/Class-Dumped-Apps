//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginFacebookAuthenticationControllerDelegate-Protocol.h"

@class NSString, SPTLoginContinueWithWelcomeViewLogger, SPTLoginFacebookAuthenticationController;
@protocol SPTLoginNavigationCoordinator, SPTLoginStateController, SPTLoginThirdPartyLoginHandlerDelegate;

@interface SPTLoginContinueWithWelcomeViewModel : NSObject <SPTLoginFacebookAuthenticationControllerDelegate>
{
    id <SPTLoginThirdPartyLoginHandlerDelegate> _delegate;
    id <SPTLoginNavigationCoordinator> _navigationCoordinator;
    id <SPTLoginStateController> _loginStateController;
    SPTLoginContinueWithWelcomeViewLogger *_logger;
    SPTLoginFacebookAuthenticationController *_facebookAuthController;
}

@property(retain, nonatomic) SPTLoginFacebookAuthenticationController *facebookAuthController; // @synthesize facebookAuthController=_facebookAuthController;
@property(retain, nonatomic) SPTLoginContinueWithWelcomeViewLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTLoginStateController> loginStateController; // @synthesize loginStateController=_loginStateController;
@property(retain, nonatomic) id <SPTLoginNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(nonatomic) __weak id <SPTLoginThirdPartyLoginHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)controller:(id)arg1 didCompleteFacebookLoginWithError:(id)arg2;
- (void)controllerDidStartFacebookLogin:(id)arg1;
- (void)logUserDidSeeView;
- (void)logoutForgetUser:(_Bool)arg1;
- (void)continueWithFacebookPressed;
- (void)continueWithEmailPressed;
- (void)continueWithPhonePressed;
- (id)continueWithFacebookButtonTitle;
- (id)continueWithEmailButtonTitle;
- (id)continueWithPhoneButtonTitle;
- (id)millionsOfSongsFreeMessage;
- (id)continueWithLabelText;
- (id)phoneIcon;
- (id)emailIcon;
- (id)facebookLogoIcon;
- (id)spotifyLogoForSize:(struct CGSize)arg1;
- (id)initWithNavigationCoordinator:(id)arg1 logger:(id)arg2 loginStateController:(id)arg3 facebookAuthController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

