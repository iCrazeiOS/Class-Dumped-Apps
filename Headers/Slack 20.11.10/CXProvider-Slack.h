//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXProvider.h>

@interface CXProvider (Slack)
- (void)reportCallEndedWith:(id)arg1 endedAt:(id)arg2 reason:(long long)arg3;
- (void)receivedNewIncomingCallWith:(id)arg1 update:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setProviderDelegateWithDelegate:(id)arg1 queue:(id)arg2;
@end

