//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol IGDirectRealtimeIrisSubscriptionHandlerListener <NSObject>
- (void)irisSubscriptionHandlerRequiresResnapshot;
- (void)irisSubscriptionHandlerDidConnectAtSequenceId:(NSNumber *)arg1 latestServerSequenceId:(NSNumber *)arg2;
- (void)irisSubscriptionHandlerWillConnectAtSequenceId:(NSNumber *)arg1 reason:(NSString *)arg2 isAutoSubscribeOnConnect:(_Bool)arg3;
@end

