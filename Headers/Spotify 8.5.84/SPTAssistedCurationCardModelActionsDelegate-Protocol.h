//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTAssistedCurationCardModel, SPTAssistedCurationTrackModelEntity;

@protocol SPTAssistedCurationCardModelActionsDelegate <NSObject>
- (void)assistedCurationCardModelActions:(id <SPTAssistedCurationCardModel>)arg1 addTrack:(id <SPTAssistedCurationTrackModelEntity>)arg2 completion:(void (^)(unsigned long long, NSError *))arg3;
@end

