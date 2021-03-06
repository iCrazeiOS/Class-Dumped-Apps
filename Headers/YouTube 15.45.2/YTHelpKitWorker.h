//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseWorker.h>

#import "YTWorker-Protocol.h"

@class GIMMe, NSDate, NSString, YTGlobalConfig, YTUserDefaults;
@protocol YTIdentityProvider, YTWorkerDelegate;

@interface YTHelpKitWorker : YTBaseWorker <YTWorker>
{
    YTUserDefaults *_userDefaults;
    id <YTIdentityProvider> _identityProvider;
    id <YTWorkerDelegate> _workerDelegate;
    GIMMe *_gimme;
    NSDate *_lastRequestDate;
    YTGlobalConfig *_globalConfig;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTGlobalConfig *globalConfig; // @synthesize globalConfig=_globalConfig;
@property(retain, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
- (_Bool)isHelpKitStillFresh;
- (long long)workerRequirements;
- (void)startWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

