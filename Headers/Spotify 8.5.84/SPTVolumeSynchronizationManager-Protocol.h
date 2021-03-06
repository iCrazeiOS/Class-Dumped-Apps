//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTVolumeSynchronizationManagerObserver;

@protocol SPTVolumeSynchronizationManager <NSObject>
@property(readonly, nonatomic) _Bool shouldAcceptRemoteVolumeUpdates;
@property(readonly, nonatomic) _Bool shouldSyncRemoteVolume;
@property(readonly, nonatomic) _Bool shouldConvertVolumeSteps;
@property(readonly, nonatomic) _Bool shouldSendVolumeCommands;
- (void)removeObserver:(id <SPTVolumeSynchronizationManagerObserver>)arg1;
- (void)addObserver:(id <SPTVolumeSynchronizationManagerObserver>)arg1;
@end

