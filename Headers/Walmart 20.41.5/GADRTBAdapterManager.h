//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface GADRTBAdapterManager : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableSet *_registeredRTBClassNames;
    NSMutableDictionary *_typedAdapterNamesForAdUnit;
    GADObserverCollection *_observers;
    NSMutableDictionary *_mediationCredentials;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)credentialsForAdapterClass:(Class)arg1 adUnitID:(id)arg2 adTypes:(id)arg3;
- (id)credentialsForAdapterClass:(Class)arg1 adUnitID:(id)arg2 adType:(id)arg3;
- (id)registeredAdapterNamesForAdUnitID:(id)arg1 adTypes:(id)arg2;
- (id)registeredAdapterNamesForAdUnitID:(id)arg1 adType:(id)arg2;
- (void)registerMediationAdapterClassName:(id)arg1;
- (void)updateAdUnitAdapterConfiguration:(id)arg1;
- (void)updateRTBAdapters;
- (id)init;

@end

