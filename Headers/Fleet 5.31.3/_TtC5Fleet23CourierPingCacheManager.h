//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _TtC5Fleet23CourierPingCacheManager : NSObject
{
    // Error parsing type: , name: cache
    // Error parsing type: , name: $__lazy_storage_$_allPings
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (void)savePing:(id)arg1;
- (void)pingsWereAttempted:(id)arg1;
- (void)pingsWereCancelled:(id)arg1;
- (void)pingsWereSuccessful:(id)arg1;
@property(nonatomic, readonly) NSArray *newPings;

@end

