//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol UJETDelegate <NSObject>
- (void)signPayload:(NSDictionary *)arg1 payloadType:(long long)arg2 success:(void (^)(NSString *))arg3 failure:(void (^)(NSError *))arg4;

@optional
- (_Bool)shouldConnectUjetIncoming:(NSString *)arg1 forType:(long long)arg2;
@end

