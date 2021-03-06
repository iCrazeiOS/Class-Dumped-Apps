//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WKWebsiteDataStore;
@protocol OS_dispatch_queue;

@interface IGSharedWebsiteDataStoreManager : NSObject
{
    WKWebsiteDataStore *_dataStore;
    unsigned long long _status;
    NSString *_currentUserPK;
    NSObject<OS_dispatch_queue> *_requestQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) WKWebsiteDataStore *dataStore;
- (void)matchUserPKRegistration:(id)arg1 userDidRegisterHandler:(CDUnknownBlockType)arg2 userNotMatchHandler:(CDUnknownBlockType)arg3 emptyRegistrationHandler:(CDUnknownBlockType)arg4;
- (void)getAllCookiesForRegisteredUserPK:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_finishDeletingCookies:(id)arg1 asynchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteAllCookiesAsynchronously:(_Bool)arg1 unregisterUsers:(_Bool)arg2 persistInstagramSessionToken:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_finishRegisteringUserWithCookies:(id)arg1 asynchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerUserPK:(id)arg1 withCookies:(id)arg2 asynchronously:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginTransactionAsynchronously:(_Bool)arg1 performWork:(CDUnknownBlockType)arg2;
- (id)init;

@end

