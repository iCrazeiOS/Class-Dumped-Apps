//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSObjectArray;

@interface SunSecurityX509RDN : NSObject
{
    IOSObjectArray *assertion_;
    unsigned long long avaList_;
    unsigned long long canonicalString_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)toRFC2253StringInternalWithBoolean:(_Bool)arg1 withJavaUtilMap:(id)arg2;
- (id)toRFC2253StringWithBoolean:(_Bool)arg1;
- (id)toRFC2253StringWithJavaUtilMap:(id)arg1;
- (id)toRFC2253String;
- (id)toRFC1779StringWithJavaUtilMap:(id)arg1;
- (id)toRFC1779String;
- (id)description;
- (void)encodeWithSunSecurityUtilDerOutputStream:(id)arg1;
- (id)findAttributeWithSunSecurityUtilObjectIdentifier:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (int)size;
- (id)avas;
- (id)initWithSunSecurityX509AVAArray:(id)arg1;
- (id)initWithSunSecurityX509AVA:(id)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithSunSecurityUtilDerValue:(id)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withJavaUtilMap:(id)arg3;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)initWithNSString:(id)arg1;

@end

