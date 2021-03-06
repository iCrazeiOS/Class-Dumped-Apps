//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "HTSService-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface HTSShareService : HTSService <HTSService>
{
    NSDictionary *_shareActions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *shareActions; // @synthesize shareActions=_shareActions;
- (void)registerAction:(id)arg1 forPlatforms:(id)arg2;
- (void)registerAction:(id)arg1 forPlatform:(long long)arg2;
- (id)actionForPlatform:(long long)arg1;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)openAppWithPlatform:(long long)arg1;
- (_Bool)isPlatformInstalled:(long long)arg1;
- (_Bool)isPlatformAvailable:(long long)arg1;
- (void)shareWithModel:(id)arg1 toPlatform:(long long)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSMutableDictionary *mutableShareActions;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

