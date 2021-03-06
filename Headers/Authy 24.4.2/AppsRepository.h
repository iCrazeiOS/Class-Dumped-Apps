//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AddedAuthyAppMapper, AuthyApi, NetworkHelper, TokensManager;

@interface AppsRepository : NSObject
{
    AuthyApi *_authyApi;
    TokensManager *_tokensManager;
    NetworkHelper *_networkHelper;
    AddedAuthyAppMapper *_addedAuthyAppMapper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AddedAuthyAppMapper *addedAuthyAppMapper; // @synthesize addedAuthyAppMapper=_addedAuthyAppMapper;
@property(retain, nonatomic) NetworkHelper *networkHelper; // @synthesize networkHelper=_networkHelper;
@property(retain, nonatomic) TokensManager *tokensManager; // @synthesize tokensManager=_tokensManager;
@property(retain, nonatomic) AuthyApi *authyApi; // @synthesize authyApi=_authyApi;
- (_Bool)isNetworkReachable;
- (_Bool)isAuthyTokenDownloaded:(long long)arg1;
- (_Bool)syncAuthyApps;
- (id)errorFromResponse:(id)arg1;
- (id)noResponseFromApiError;
- (id)addAppFromJWT:(id)arg1 error:(id *)arg2;
- (id)initWithAuthyApi:(id)arg1 tokensManager:(id)arg2 networkHelper:(id)arg3 addedAuthyAppMapper:(id)arg4;

@end

