//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class VCPBOnboardUserResponse_AddAccountPhone, VCPBOnboardUserResponse_CreateAccount, VCPBOnboardUserResponse_EmergencyAddressVerification, VCPBOnboardUserResponse_OnboardingComplete, VCPBOnboardUserResponse_SearchAccountPhone, VCPBOnboardUserResponse_TermsOfService, VCPBOnboardUserResponse_UpdateAccount, VCPBOnboardUserResponse_VerifyPhone, VCPBOnboardUserResponse_WarmWelcome, VCPBSessionToken;

@interface VCPBOnboardUserResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) VCPBOnboardUserResponse_AddAccountPhone *addAccountPhone; // @dynamic addAccountPhone;
@property(retain, nonatomic) VCPBOnboardUserResponse_CreateAccount *createAccount; // @dynamic createAccount;
@property(retain, nonatomic) VCPBOnboardUserResponse_EmergencyAddressVerification *emergencyAddressVerification; // @dynamic emergencyAddressVerification;
@property(nonatomic) _Bool hasSessionToken; // @dynamic hasSessionToken;
@property(readonly, nonatomic) int nextStepOneOfCase; // @dynamic nextStepOneOfCase;
@property(retain, nonatomic) VCPBOnboardUserResponse_OnboardingComplete *onboardingComplete; // @dynamic onboardingComplete;
@property(retain, nonatomic) VCPBOnboardUserResponse_SearchAccountPhone *searchAccountPhone; // @dynamic searchAccountPhone;
@property(retain, nonatomic) VCPBSessionToken *sessionToken; // @dynamic sessionToken;
@property(retain, nonatomic) VCPBOnboardUserResponse_TermsOfService *termsOfService; // @dynamic termsOfService;
@property(retain, nonatomic) VCPBOnboardUserResponse_UpdateAccount *updateAccount; // @dynamic updateAccount;
@property(retain, nonatomic) VCPBOnboardUserResponse_VerifyPhone *verifyPhone; // @dynamic verifyPhone;
@property(retain, nonatomic) VCPBOnboardUserResponse_WarmWelcome *warmWelcome; // @dynamic warmWelcome;

@end

