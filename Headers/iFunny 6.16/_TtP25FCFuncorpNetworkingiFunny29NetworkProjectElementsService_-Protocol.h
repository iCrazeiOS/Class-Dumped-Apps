//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol _TtP25FCFuncorpNetworkingiFunny29NetworkProjectElementsService_ <NSObject>
- (void)markAsViewedElementWithType:(NSString *)arg1;
- (void)getProjectElementsWithLimit:(NSNumber *)arg1 success:(void (^)(FNROProjectElementList *))arg2 failure:(void (^)(NSError *))arg3;
@end

