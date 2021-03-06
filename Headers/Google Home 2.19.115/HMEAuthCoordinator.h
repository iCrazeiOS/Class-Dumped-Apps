//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEAuthCoordinator-Protocol.h"

@class MDMService, NSString, NSUserDefaults, SSOAccountInterfaceDataSource, SSOAccountService;
@protocol HMEAuthCoordinatorDelegate, SSOService;

@interface HMEAuthCoordinator : NSObject <HMEAuthCoordinator>
{
    id <SSOService> _SSOService;
    id <HMEAuthCoordinatorDelegate> _delegate;
    MDMService *_deviceManagementService;
    NSUserDefaults *_userDefaults;
    SSOAccountInterfaceDataSource *_accountDataSource;
    SSOAccountService *_ssoAccountService;
}

@property(readonly, nonatomic) SSOAccountService *ssoAccountService; // @synthesize ssoAccountService=_ssoAccountService;
@property(readonly, nonatomic) SSOAccountInterfaceDataSource *accountDataSource; // @synthesize accountDataSource=_accountDataSource;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) MDMService *deviceManagementService; // @synthesize deviceManagementService=_deviceManagementService;
@property(nonatomic) __weak id <HMEAuthCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
- (void).cxx_destruct;
- (void)updateGSCoreAccountService:(id)arg1;
- (id)loadIdentity;
- (void)saveIdentity:(id)arg1;
- (void)dispatchIdentityChosen:(id)arg1;
- (_Bool)openURL:(id)arg1 options:(id)arg2;
- (void)startAddAccountWithCallback:(CDUnknownBlockType)arg1;
- (void)startSignIn;
- (void)switchAccount:(id)arg1;
- (_Bool)hasAcceptedTermsOfService;
- (void)autologin;
- (void)identityListDidChange:(id)arg1;
- (void)accessTokenRefreshFailed:(id)arg1;
- (id)initWithSSOService:(id)arg1;
- (id)initWithSSOService:(id)arg1 deviceManagementService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

