//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilConcurrentCallable-Protocol.h"

@class DYNSNetworkConnectivityRpcFailureRetryHelperImpl, NSString;
@protocol JavaUtilConcurrentCallable;

@interface DYNSNetworkConnectivityRpcFailureRetryHelperImpl_$Lambda$2 : NSObject <JavaUtilConcurrentCallable>
{
    DYNSNetworkConnectivityRpcFailureRetryHelperImpl *this$0_;
    id <JavaUtilConcurrentCallable> val$retryCallable_;
}

- (void)dealloc;
- (id)call;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

