//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKSSecurityIdentity : NSObject
{
    struct __SecIdentity *_identityRef;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyCertificate;
- (struct __SecIdentity *)getRef;
- (void)dealloc;
- (id)initWithSecIdentityRef:(struct __SecIdentity *)arg1;

@end

