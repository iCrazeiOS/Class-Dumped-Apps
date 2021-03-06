//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/OGLPhenotypeFlagService-Protocol.h>

@class PHTPhenotypeFlags;
@protocol GIPAccountID, SSOService;

@interface OGLLegacyPhenotypeFlagServiceImpl : NSObject <OGLPhenotypeFlagService>
{
    id <GIPAccountID> _accountID;
    PHTPhenotypeFlags *_phenotypeFlags;
    id <SSOService> _ssoService;
}

+ (void)setDefaultFlagService:(id)arg1;
+ (id)defaultFlagService;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SSOService> ssoService; // @synthesize ssoService=_ssoService;
@property(retain, nonatomic) PHTPhenotypeFlags *phenotypeFlags; // @synthesize phenotypeFlags=_phenotypeFlags;
@property(retain, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
- (id)stringValueOfFlagWithIdentifier:(id)arg1 defaultValue:(id)arg2;
- (_Bool)boolValueOfFlagWithIdentifier:(id)arg1 defaultValue:(_Bool)arg2;
- (id)accountFromSSOService:(id)arg1 profileSource:(id)arg2;
- (void)updateStoredPhenotypeFlags;
- (void)syncFlagsWithServer;
@property(readonly, nonatomic) _Bool testParameter;
@property(readonly, nonatomic, getter=isCriticalAlertsEnabled) _Bool enableCriticalAlerts;
- (id)initWithSSOService:(id)arg1 SSOServiceContainer:(id)arg2;

@end

