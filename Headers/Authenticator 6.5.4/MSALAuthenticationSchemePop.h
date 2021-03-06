//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MSAL/MSALAuthenticationSchemeProtocol-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface MSALAuthenticationSchemePop : NSObject <MSALAuthenticationSchemeProtocol>
{
    unsigned long long _scheme;
    unsigned long long _httpMethod;
    NSURL *_requestUrl;
    NSString *_nonce;
    NSDictionary *_additionalParameters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *additionalParameters; // @synthesize additionalParameters=_additionalParameters;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSURL *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(nonatomic) unsigned long long httpMethod; // @synthesize httpMethod=_httpMethod;
@property(readonly, nonatomic) unsigned long long scheme; // @synthesize scheme=_scheme;
- (id)getAuthorizationHeader:(id)arg1;
@property(readonly, nonatomic) NSString *authenticationScheme;
- (id)getClientAccessToken:(id)arg1 popManager:(id)arg2 error:(id *)arg3;
- (id)getSchemeParameters:(id)arg1;
- (id)createMSIDAuthenticationSchemeWithParams:(id)arg1;
- (id)initWithHttpMethod:(unsigned long long)arg1 requestUrl:(id)arg2 nonce:(id)arg3 additionalParameters:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

