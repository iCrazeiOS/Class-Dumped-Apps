//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SunSecurityProviderCertpathState-Protocol.h"

@class JavaUtilArrayList, JavaUtilHashSet, JavaxSecurityAuthX500X500Principal, NSString, SunSecurityProviderCertpathUntrustedChecker, SunSecurityX509X509CertImpl;

@interface SunSecurityProviderCertpathForwardState : NSObject <SunSecurityProviderCertpathState>
{
    JavaxSecurityAuthX500X500Principal *issuerDN_;
    SunSecurityX509X509CertImpl *cert_;
    JavaUtilHashSet *subjectNamesTraversed_;
    int traversedCACerts_;
    SunSecurityProviderCertpathUntrustedChecker *untrustedChecker_;
    JavaUtilArrayList *forwardCheckers_;
    _Bool keyParamsNeededFlag_;
    _Bool init__;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)clone;
- (id)java_clone;
- (void)updateStateWithJavaSecurityCertX509Certificate:(id)arg1;
- (void)initStateWithJavaUtilList:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)keyParamsNeeded;
- (_Bool)isInitial;
- (id)initPackagePrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

