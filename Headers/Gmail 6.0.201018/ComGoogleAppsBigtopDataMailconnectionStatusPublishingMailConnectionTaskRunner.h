//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunner-Protocol.h"

@class JBTDNetworkNetworkServiceProto_NetworkState_Status, NSString;
@protocol ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunner, ComGoogleAppsXplatObserveSettable;

@interface ComGoogleAppsBigtopDataMailconnectionStatusPublishingMailConnectionTaskRunner : NSObject <ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunner>
{
    id lock_;
    id <ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunner> wrappedTaskRunner_;
    id <ComGoogleAppsXplatObserveSettable> settableNetworkState_;
    JBTDNetworkNetworkServiceProto_NetworkState_Status *currentStatus_;
}

+ (void)initialize;
- (void)dealloc;
- (id)runWithComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunner_RunWithMailConnection:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

