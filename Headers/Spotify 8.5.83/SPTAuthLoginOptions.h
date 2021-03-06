//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTAuthLoginOptions : NSObject
{
    _Bool _bootstrapRequired;
    _Bool _authOnly;
    struct SPTAuthCacheSalt _cacheSalt;
    NSString *_APSRVHostOverride;
    NSString *_APHostOverride;
    NSString *_xResolveHostOverride;
    NSString *_canonicalUsername;
    long long _login5Setting;
    struct SPTAuthCacheId _cacheId;
}

- (void).cxx_destruct;
@property(nonatomic) struct SPTAuthCacheId cacheId; // @synthesize cacheId=_cacheId;
@property(nonatomic) struct SPTAuthCacheSalt cacheSalt; // @synthesize cacheSalt=_cacheSalt;
@property(nonatomic) _Bool authOnly; // @synthesize authOnly=_authOnly;
@property(nonatomic) _Bool bootstrapRequired; // @synthesize bootstrapRequired=_bootstrapRequired;
@property(nonatomic) long long login5Setting; // @synthesize login5Setting=_login5Setting;
@property(retain, nonatomic) NSString *canonicalUsername; // @synthesize canonicalUsername=_canonicalUsername;
@property(retain, nonatomic) NSString *xResolveHostOverride; // @synthesize xResolveHostOverride=_xResolveHostOverride;
@property(retain, nonatomic) NSString *APHostOverride; // @synthesize APHostOverride=_APHostOverride;
@property(retain, nonatomic) NSString *APSRVHostOverride; // @synthesize APSRVHostOverride=_APSRVHostOverride;
@property(readonly, nonatomic) struct LoginOptions cppLoginOptions;

@end

