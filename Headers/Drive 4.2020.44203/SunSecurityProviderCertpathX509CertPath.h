//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaSecurityCertCertPath.h"

@protocol JavaUtilList;

@interface SunSecurityProviderCertpathX509CertPath : JavaSecurityCertCertPath
{
    id <JavaUtilList> certs_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getEncodingsStatic;
+ (id)readAllBytesWithJavaIoInputStream:(id)arg1;
+ (id)parsePKCS7WithJavaIoInputStream:(id)arg1;
+ (id)parsePKIPATHWithJavaIoInputStream:(id)arg1;
- (void)dealloc;
- (id)getCertificates;
- (id)getEncodings;
- (id)getEncodedWithNSString:(id)arg1;
- (id)encodePKCS7;
- (id)encodePKIPATH;
- (id)getEncoded;
- (id)initWithJavaIoInputStream:(id)arg1 withNSString:(id)arg2;
- (id)initWithJavaIoInputStream:(id)arg1;
- (id)initWithJavaUtilList:(id)arg1;

@end

