//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCEditViewModel.h"

@class RACSignal, RACSubject;

@interface ACCVoiceChangerViewModel : ACCEditViewModel
{
    _Bool _shouldCheckChangeVoiceButtonDisplay;
    RACSubject *_clearVoiceEffectSubject;
    RACSubject *_recoverVoiceEffectSubject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RACSubject *recoverVoiceEffectSubject; // @synthesize recoverVoiceEffectSubject=_recoverVoiceEffectSubject;
@property(retain, nonatomic) RACSubject *clearVoiceEffectSubject; // @synthesize clearVoiceEffectSubject=_clearVoiceEffectSubject;
@property(nonatomic) _Bool shouldCheckChangeVoiceButtonDisplay; // @synthesize shouldCheckChangeVoiceButtonDisplay=_shouldCheckChangeVoiceButtonDisplay;
@property(readonly, nonatomic) RACSignal *recoverVoiceEffectSignal;
@property(readonly, nonatomic) RACSignal *clearVoiceEffectSignal;
- (_Bool)isDubEnabled;
- (void)sendRecoverVoiceEffectSignal:(CDUnknownBlockType)arg1;
- (void)sendClearVoiceEffectSignal;
- (_Bool)shouldShowVoiceChangerEntrance;
- (void)onCleared;
- (void)dealloc;

@end

