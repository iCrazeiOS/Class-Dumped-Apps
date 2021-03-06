//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDPBasePluginDelegate-Protocol.h"

@class NSDictionary, NSString;

@protocol BDPUserPluginDelegate <BDPBasePluginDelegate>
- (void)bdp_getPhoneNumberWithParam:(NSDictionary *)arg1 completion:(void (^)(_Bool))arg2;
- (void)bdp_loginWithParam:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSString *, NSString *))arg2;
- (NSString *)bdp_deviceId;
- (NSString *)bdp_appId;
- (NSString *)bdp_sessionId;
- (NSString *)bdp_secUserId;
- (NSString *)bdp_userId;
- (_Bool)bdp_isLogin;

@optional
- (void)bdp_getLocalPhoneNumberTokenWithCompletion:(void (^)(_Bool, NSDictionary *))arg1;
- (void)bdp_getLocalPhoneNumberWithCompletion:(void (^)(_Bool, NSDictionary *))arg1;
- (void)bdp_customUserInfoResultWithResponse:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSDictionary *))arg2;
- (void)bdp_dealUserRelationWithParam:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSDictionary *))arg2;
- (double)bdp_useDuration;
@end

