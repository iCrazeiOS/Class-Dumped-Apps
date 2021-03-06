//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NSObject-Protocol.h>

@class NFLXIdentityStore, NSString;
@protocol NFLXIdentityProtocol;

@protocol NFLXIdentityStoreDelegate <NSObject>
- (void)identityStore:(NFLXIdentityStore *)arg1 remove:(id <NFLXIdentityProtocol>)arg2 forKey:(NSString *)arg3;
- (void)identityStore:(NFLXIdentityStore *)arg1 save:(id <NFLXIdentityProtocol>)arg2 forKey:(NSString *)arg3;
- (id <NFLXIdentityProtocol>)identityStore:(NFLXIdentityStore *)arg1 load:(Class)arg2 forKey:(NSString *)arg3;
- (void)identityStoreClear:(NFLXIdentityStore *)arg1;

@optional
- (_Bool)identityStore:(NFLXIdentityStore *)arg1 verify:(id <NFLXIdentityProtocol>)arg2 forKey:(NSString *)arg3;
- (void)identityStore:(NFLXIdentityStore *)arg1 replace:(id <NFLXIdentityProtocol>)arg2 with:(id <NFLXIdentityProtocol>)arg3 forKey:(NSString *)arg4;
@end

