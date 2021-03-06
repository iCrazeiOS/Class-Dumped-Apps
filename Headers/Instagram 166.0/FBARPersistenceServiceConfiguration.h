//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARServiceConfiguration-Protocol.h>
#import <FBSharedFramework/FBARServiceConfigurationCxx-Protocol.h>

@class NSString;

@interface FBARPersistenceServiceConfiguration : NSObject <FBARServiceConfiguration, FBARServiceConfigurationCxx>
{
    shared_ptr_5e1d7b9d userScopeDelegate_;
    shared_ptr_5e1d7b9d sharedScopeDelegate_;
    shared_ptr_5e1d7b9d captureScopeDelegate_;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithUserScopeDelegateProvider:(id)arg1 sharedScopeDelegateProvider:(id)arg2 captureScopeDelegateProvider:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) shared_ptr_e7d8ca2a engineServiceConfiguration;
@property(readonly, nonatomic) struct ServiceType serviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserScopeDelegateProvider:(id)arg1 sharedScopeDelegateProvider:(id)arg2 captureScopeDelegateProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

