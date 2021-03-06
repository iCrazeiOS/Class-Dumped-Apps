//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterBaseTwitterRecurringTask.h>

@interface TFNTwitterFeatureSwitchUpdateRecurringTask : TFNTwitterBaseTwitterRecurringTask
{
    _Bool _useActiveAccount;
    _Bool _forceRefresh;
}

@property(readonly, nonatomic) _Bool forceRefresh; // @synthesize forceRefresh=_forceRefresh;
@property(readonly, nonatomic) _Bool useActiveAccount; // @synthesize useActiveAccount=_useActiveAccount;
- (void)tfs_triggerFromService:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithTwitter:(id)arg1 useActiveAccount:(_Bool)arg2 forceRefresh:(_Bool)arg3;

@end

