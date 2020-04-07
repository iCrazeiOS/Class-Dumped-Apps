//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTPsesCommandLineArguments;
@protocol SPTPreSignupExperimentationFeatureFlagsLoader;

@interface SPTLoginTestManager : NSObject
{
    id <SPTPreSignupExperimentationFeatureFlagsLoader> _featureFlagsLoader;
    SPTPsesCommandLineArguments *_psesCommandLineArguments;
}

@property(readonly, nonatomic) SPTPsesCommandLineArguments *psesCommandLineArguments; // @synthesize psesCommandLineArguments=_psesCommandLineArguments;
@property(readonly, nonatomic) id <SPTPreSignupExperimentationFeatureFlagsLoader> featureFlagsLoader; // @synthesize featureFlagsLoader=_featureFlagsLoader;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isStartScreenImageryEnabled) _Bool startScreenImageryEnabled;
- (unsigned long long)welcomeViewImageryCell;
@property(readonly, nonatomic, getter=isPhoneNumberEnabled) _Bool phoneNumberEnabled;
@property(readonly, nonatomic, getter=isDelayedSignupSecondCellEnabled) _Bool delayedSignupSecondCellEnabled;
@property(readonly, nonatomic, getter=isDelayedSignupFirstCellEnabled) _Bool delayedSignupFirstCellEnabled;
@property(readonly, nonatomic, getter=isDelayedSignupExperimentEnabled) _Bool delayedSignupExperimentEnabled;
@property(readonly, nonatomic, getter=isLogin5MagicLinkEnabled) _Bool login5MagicLinkEnabled;
@property(readonly, nonatomic, getter=isLogin5BootstrapEnabled) _Bool login5BootstrapEnabled;
@property(readonly, nonatomic, getter=isIntentLedWelcomeEnabled) _Bool intentLedWelcomeEnabled;
@property(readonly, nonatomic, getter=isMethodLedWelcomeEnabled) _Bool methodLedWelcomeEnabled;
@property(readonly, nonatomic, getter=shouldHidePasswordScreen) _Bool hidePassword;
@property(readonly, nonatomic, getter=shouldHideGenderScreen) _Bool hideGender;
@property(readonly, nonatomic, getter=shouldHideDisplayNameScreen) _Bool hideDisplayName;
@property(readonly, nonatomic, getter=isStickyCredentialsSavingEnabled) _Bool stickyCredentialsSavingEnabled;
@property(readonly, nonatomic, getter=isAppleAccountLinkingDisabled) _Bool appleAccountLinkingDisabled;
@property(readonly, nonatomic, getter=isAppleSignUpDisabled) _Bool appleSignUpDisabled;
@property(readonly, nonatomic, getter=isAppleSignInCustomButtonEnabled) _Bool appleSignInCustomDesignEnabled;
@property(readonly, nonatomic, getter=isAppleSignInSystemButtonEnabled) _Bool appleSignInEnabled;
- (_Bool)isFlagEnabled:(id)arg1 useInTests:(_Bool)arg2;
- (_Bool)isFlagEnabled:(id)arg1;
- (id)initWithFeatureFlagsLoader:(id)arg1 psesCommandLineArguments:(id)arg2;
- (id)initWithFeatureFlagsLoader:(id)arg1;

@end

