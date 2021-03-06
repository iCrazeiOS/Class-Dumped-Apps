//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSIDTokenResponseValidator : NSObject
{
}

- (void)updateAccountMetadataForHomeAccountId:(id)arg1 clientId:(id)arg2 instanceAware:(_Bool)arg3 state:(long long)arg4 requestAuthority:(id)arg5 resultingAuthority:(id)arg6 accountMetadataCache:(id)arg7 context:(id)arg8;
- (_Bool)saveTokenResponseToCache:(id)arg1 configuration:(id)arg2 oauthFactory:(id)arg3 tokenCache:(id)arg4 saveSSOStateOnly:(_Bool)arg5 context:(id)arg6 error:(id *)arg7;
- (id)validateAndSaveTokenResponse:(id)arg1 oauthFactory:(id)arg2 tokenCache:(id)arg3 accountMetadataCache:(id)arg4 requestParameters:(id)arg5 saveSSOStateOnly:(_Bool)arg6 error:(id *)arg7;
- (id)validateAndSaveBrokerResponse:(id)arg1 oidcScope:(id)arg2 requestAuthority:(id)arg3 instanceAware:(_Bool)arg4 oauthFactory:(id)arg5 tokenCache:(id)arg6 accountMetadataCache:(id)arg7 correlationID:(id)arg8 saveSSOStateOnly:(_Bool)arg9 authScheme:(id)arg10 error:(id *)arg11;
- (_Bool)validateAccount:(id)arg1 tokenResult:(id)arg2 correlationID:(id)arg3 error:(id *)arg4;
- (_Bool)validateTokenResult:(id)arg1 configuration:(id)arg2 oidcScope:(id)arg3 correlationID:(id)arg4 error:(id *)arg5;
- (id)createTokenResultFromResponse:(id)arg1 oauthFactory:(id)arg2 configuration:(id)arg3 requestAccount:(id)arg4 correlationID:(id)arg5 error:(id *)arg6;
- (id)validateTokenResponse:(id)arg1 oauthFactory:(id)arg2 configuration:(id)arg3 requestAccount:(id)arg4 correlationID:(id)arg5 error:(id *)arg6;

@end

