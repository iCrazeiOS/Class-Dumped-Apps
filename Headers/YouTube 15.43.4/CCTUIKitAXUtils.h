//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CCTUIKitAXUtils : NSObject
{
    _Bool _cacheInitialized;
    _Bool _voiceOverRunning;
    _Bool _assistiveTouchRunning;
    _Bool _switchControlRunning;
    _Bool _shakeToUndoEnabled;
    _Bool _closedCaptioningEnabled;
    _Bool _boldTextEnabled;
    _Bool _reduceTransparencyEnabled;
    _Bool _darkerSystemColorsEnabled;
    _Bool _grayscaleEnabled;
    _Bool _guidedAccessEnabled;
    _Bool _invertColorsEnabled;
    _Bool _monoAudioEnabled;
    _Bool _reduceMotionEnabled;
    _Bool _speakScreenEnabled;
    _Bool _speakSelectionEnabled;
    _Bool _isOnOffSwitchLabelsEnabled;
    _Bool _isVideoAutoplayEnabled;
    _Bool _shouldDifferentiateWithoutColor;
}

+ (id)sharedInstance;
- (void)accessibilityStateChanged:(id)arg1;
- (void)updateAccessibilityStateCache;
- (_Bool)accessibilityValueForAccessibilityFunction:(CDUnknownFunctionPointerType)arg1 cacheVar:(_Bool *)arg2;
@property(readonly, getter=shouldDifferentiateWithoutColor) _Bool shouldDifferentiateWithoutColor;
@property(readonly, getter=isVideoAutoplayEnabled) _Bool videoAutoplayEnabled;
@property(readonly, getter=isOnOffSwitchLabelsEnabled) _Bool onOffSwitchLabelsEnabled;
@property(readonly, getter=isSpeakSelectionEnabled) _Bool speakSelectionEnabled;
@property(readonly, getter=isSpeakScreenEnabled) _Bool speakScreenEnabled;
@property(readonly, getter=isReduceMotionEnabled) _Bool reduceMotionEnabled;
@property(readonly, getter=isMonoAudioEnabled) _Bool monoAudioEnabled;
@property(readonly, getter=isInvertColorsEnabled) _Bool invertColorsEnabled;
@property(readonly, getter=isGuidedAccessEnabled) _Bool guidedAccessEnabled;
@property(readonly, getter=isGrayscaleEnabled) _Bool grayscaleEnabled;
@property(readonly, getter=isDarkerSystemColorsEnabled) _Bool darkerSystemColorsEnabled;
@property(readonly, getter=isReduceTransparencyEnabled) _Bool reduceTransparencyEnabled;
@property(readonly, getter=isBoldTextEnabled) _Bool boldTextEnabled;
@property(readonly, getter=isClosedCaptioningEnabled) _Bool closedCaptioningEnabled;
@property(readonly, getter=isShakeToUndoEnabled) _Bool shakeToUndoEnabled;
@property(readonly, getter=isSwitchControlRunning) _Bool switchControlRunning;
@property(readonly, getter=isAssistiveTouchRunning) _Bool assistiveTouchRunning;
@property(readonly, getter=isVoiceOverRunning) _Bool voiceOverRunning;
- (void)initializeCache;
@property(readonly, getter=isCacheInitialized) _Bool cacheInitialized;
- (id)initPrivate;

@end

