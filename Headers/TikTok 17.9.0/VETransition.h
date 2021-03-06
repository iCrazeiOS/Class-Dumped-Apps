//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IVETransition-Protocol.h"

@class NSString;

@interface VETransition : NSObject <IVETransition>
{
    struct TETransition *pTransition;
    _Bool isPtrNeedDelete;
}

@property(nonatomic) _Bool isPtrNeedDelete; // @synthesize isPtrNeedDelete;
- (long long)getFilterId;
- (long long)getSequenceOut;
- (long long)getSequenceIn;
- (void)getEffectTimeWithCurrentTime:(long long *)arg1 startTime:(long long *)arg2 endTime:(long long *)arg3;
- (void)setEffectTimeWithCurrentTime:(long long)arg1 startTime:(long long)arg2 endTime:(long long)arg3;
- (id)getParamValueWithKey:(id)arg1;
- (void)setParamValue:(id)arg1 withKey:(id)arg2;
- (id)getEffectName;
- (void)cleanUp;
- (_Bool)isCrossTrans;
- (long long)getTransitionSeqPoint;
- (_Bool)setTransitionName:(id)arg1 transPoint:(long long)arg2 duration:(long long)arg3;
- (_Bool)setTransitionName:(id)arg1 leftClip:(id)arg2 rightClip:(id)arg3 duration:(long long)arg4 transitionType:(int)arg5;
- (int)getTransitionType;
- (void)setTransitionType:(int)arg1;
- (id)getTransitionName;
- (void)setTransitionName:(id)arg1;
- (id)getRightClip;
- (void)setRightClip:(id)arg1;
- (id)getLeftClip;
- (void)setLeftClip:(id)arg1;
- (long long)getDuration;
- (void)setDuration:(long long)arg1;
- (void *)getPtr;
- (id)initWithPtr:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

