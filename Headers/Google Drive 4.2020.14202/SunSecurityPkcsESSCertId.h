//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSByteArray, SunSecurityX509GeneralNames, SunSecurityX509SerialNumber;

@interface SunSecurityPkcsESSCertId : NSObject
{
    IOSByteArray *certHash_;
    SunSecurityX509GeneralNames *issuer_;
    SunSecurityX509SerialNumber *serialNumber_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)description;
- (id)initPackagePrivateWithSunSecurityUtilDerValue:(id)arg1;

@end

