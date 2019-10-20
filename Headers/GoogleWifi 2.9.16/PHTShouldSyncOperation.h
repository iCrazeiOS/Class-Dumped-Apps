//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PHTBaseOperation.h"

@class PHTPhenotypeCache, PHTRegisterPackageOperation;
@protocol CCTClockProtocol, PHTPhenotypeAccountService;

@interface PHTShouldSyncOperation : PHTBaseOperation
{
    _Bool _debugForceSyncs;
    id <PHTPhenotypeAccountService> _accountService;
    id <CCTClockProtocol> _clock;
    PHTPhenotypeCache *_cache;
    PHTRegisterPackageOperation *_registerPhenotypeOperation;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) PHTRegisterPackageOperation *registerPhenotypeOperation; // @synthesize registerPhenotypeOperation=_registerPhenotypeOperation;
@property(retain, nonatomic) PHTPhenotypeCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <CCTClockProtocol> clock; // @synthesize clock=_clock;
@property(nonatomic) _Bool debugForceSyncs; // @synthesize debugForceSyncs=_debugForceSyncs;
@property(retain, nonatomic) id <PHTPhenotypeAccountService> accountService; // @synthesize accountService=_accountService;
- (void).cxx_destruct;
- (id)syncedUsersInDatabase:(id)arg1;
- (id)syncedPackageInfosInDatabase:(id)arg1;
- (id)currentUsers:(id)arg1;
- (id)registerPhenotypePackage:(_Bool *)arg1;
- (void)execute;
- (_Bool)shouldBeLogged;
- (id)initWithCounterName:(id)arg1 logger:(id)arg2 database:(id)arg3 accountService:(id)arg4 debugForceSyncs:(_Bool)arg5 clock:(id)arg6 cache:(id)arg7 registerPhenotypeOperation:(id)arg8 callback:(CDUnknownBlockType)arg9;

@end

