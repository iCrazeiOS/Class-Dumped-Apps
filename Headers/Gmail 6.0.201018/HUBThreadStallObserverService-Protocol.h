//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol HUBThreadStallObserverService <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)resumedProcessingWithLabel:(NSString *)arg1 after:(double)arg2;
- (void)stallDetectedWithLabel:(NSString *)arg1 after:(double)arg2;
- (_Bool)handleDeadlockDetectedWithLabel:(NSString *)arg1 after:(double)arg2;
@end

