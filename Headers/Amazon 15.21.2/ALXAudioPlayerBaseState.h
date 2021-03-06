//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALSMBaseState.h"

@class ALXAction, ALXPlayDirective;

@interface ALXAudioPlayerBaseState : ALSMBaseState
{
    ALXPlayDirective *_playDirective;
    ALXAction *_action;
    long long _playerOffsetInMillis;
}

@property(readonly, nonatomic) long long playerOffsetInMillis; // @synthesize playerOffsetInMillis=_playerOffsetInMillis;
@property(readonly, nonatomic) ALXAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) ALXPlayDirective *playDirective; // @synthesize playDirective=_playDirective;
- (void).cxx_destruct;
- (id)initWithPlayDirective:(id)arg1 playerOffsetInMillis:(long long)arg2;
- (id)initWithPlayDirective:(id)arg1 actionToHandle:(id)arg2 playerOffsetInMillis:(long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

