//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSLiveAsyncResult, IESLiveEnterRoomAisle, NSAttributedString, NSNumber;
@protocol IESLiveCancelableSegue;

@protocol HTSLiveDetailRouter <NSObject>
- (void)closeRoomWithRoomAisle:(IESLiveEnterRoomAisle *)arg1;
- (_Bool)canEnterNewRoom:(IESLiveEnterRoomAisle *)arg1;
- (void)setEnableRoomChange:(_Bool)arg1;
- (HTSLiveAsyncResult *)askForRoomChange:(NSNumber *)arg1 withOwnerID:(NSNumber *)arg2 andPrompts:(NSAttributedString *)arg3;
- (void)resumRoom:(_Bool)arg1;
- (void)pauseRoom;
- (_Bool)canPauseRoom;
- (_Bool)unwindToRoom:(_Bool)arg1;
- (_Bool)isCurrentRoom:(NSNumber *)arg1;
- (_Bool)isOwnedByAnchor:(NSNumber *)arg1;
- (_Bool)canChangeToRoom:(NSNumber *)arg1 isAllowEnterSameRoomID:(_Bool)arg2;
- (_Bool)canChangeToRoom:(NSNumber *)arg1;
- (_Bool)closeRoomWithSegue:(id <IESLiveCancelableSegue>)arg1;
- (_Bool)closeRoomByForce:(_Bool)arg1;
@end

