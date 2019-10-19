//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HNDAccessibilityManagerObserver-Protocol.h"

@class AXDispatchTimer, HNDAssistiveTouchServer, HNDCustomGesture, HNDDisplayManager, HNDEventManager, HNDView, NSArray, NSMutableDictionary, NSPointerArray, NSString;

@interface HNDHandManager : NSObject <HNDAccessibilityManagerObserver>
{
    HNDEventManager *_eventManager;
    HNDDisplayManager *_displayManager;
    HNDAssistiveTouchServer *_assistiveTouchServer;
    int _orientation;
    _Bool _firstButtonDown;
    _Bool _secondButtonDown;
    struct CGPoint _currentLocation;
    struct CGPoint _pinchAdjustLocation;
    _Bool _inBrokenHomeButtonMode;
    _Bool _isMultiFinger;
    _Bool _isRecording;
    _Bool _finishedRecording;
    _Bool _isInternal;
    _Bool _waitingForScreenshot;
    double _touchSpeed;
    int _thirdButtonMeaning;
    _Bool _openMenuWithSwaggle;
    _Bool _hardwareEnabled;
    _Bool _alwaysShowMenu;
    NSArray *_customGestures;
    HNDCustomGesture *_currentCustomGesture;
    _Bool _performingGesture;
    AXDispatchTimer *_fingerDownTimer;
    _Bool _fingerDownLock;
    _Bool _fingerDownLockSawFirstUp;
    _Bool _adjustingPinch;
    _Bool _inMultiFingerGesture;
    _Bool _resettingPinch;
    HNDView *_realSelectedPinchFinger;
    _Bool _areFingersPressedDown;
    struct CGPoint _pressedPinchFingerStartPoint;
    struct CGPoint _pressedPinchFingerFulcrum;
    double _pressedPinchFingerMovementFromStart;
    NSMutableDictionary *_avPlayers;
    _Bool _inCustomGestureMovement;
    AXDispatchTimer *_forceTouchApplicationTimer;
    AXDispatchTimer *_orientationUpdateTimer;
    double _lastOrbValue;
    _Bool _voiceControl;
    NSPointerArray *_eventHandlers;
}

+ (id)sharedManager;
+ (void)initialize;
@property(nonatomic) _Bool voiceControl; // @synthesize voiceControl=_voiceControl;
@property(nonatomic) _Bool performingGesture; // @synthesize performingGesture=_performingGesture;
@property(retain, nonatomic) NSPointerArray *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property(retain, nonatomic) NSArray *customGestures; // @synthesize customGestures=_customGestures;
@property(nonatomic) _Bool openMenuWithSwaggle; // @synthesize openMenuWithSwaggle=_openMenuWithSwaggle;
@property(nonatomic) double touchSpeed; // @synthesize touchSpeed=_touchSpeed;
@property(nonatomic) _Bool hardwareEnabled; // @synthesize hardwareEnabled=_hardwareEnabled;
@property(nonatomic) _Bool alwaysShowMenu; // @synthesize alwaysShowMenu=_alwaysShowMenu;
- (void).cxx_destruct;
- (void)showMenu:(_Bool)arg1;
- (struct CGPoint)rotateEventFromOrientation:(struct CGPoint)arg1;
- (struct CGPoint)rotateNormalizedPointToOrientation:(struct CGPoint)arg1;
- (void)didFailToFloatApp;
- (void)didFailToPinApp;
- (void)volumeChanged;
@property(readonly, nonatomic) _Bool isVoiceControlRunning; // @dynamic isVoiceControlRunning;
@property(readonly, nonatomic) double volumeLevel; // @dynamic volumeLevel;
- (void)rotateEventToOrientation:(id)arg1;
- (void)thirdButtonPress:(int)arg1;
- (void)secondButtonPress:(int)arg1;
- (_Bool)canShowFingers;
- (void)menuExited;
- (void)performTap:(long long)arg1 points:(struct CGPoint)arg2;
- (void)notifyUserEventOccurred;
- (void)endPinchMode;
- (void)startPinchModeWithPoint:(struct CGPoint)arg1 animated:(_Bool)arg2 alpha:(double)arg3;
- (void)startPinchModeWithPoint:(struct CGPoint)arg1;
- (void)handleMultiTouchStandard:(long long)arg1 withExistingFingerMidPoint:(struct CGPoint)arg2;
- (id)pointsForNumberOfFingers:(unsigned long long)arg1 withExistingFingerMidPoint:(struct CGPoint)arg2;
- (id)_adjustedFingersWithinBounds:(id)arg1;
- (void)exitedSaveState;
- (void)firstButtonPress:(int)arg1;
- (void)_startFingerDownTimer;
- (id)_avPlayerForSound:(id)arg1;
- (void)_setFingerDownLockEnabled:(_Bool)arg1;
- (_Bool)inCustomGesture;
- (id)_currentFingerPointSet;
- (void)hoverMoved:(struct CGPoint)arg1;
- (void)_menuOpenTracker:(struct CGPoint)arg1;
@property(nonatomic) _Bool nubbitMoving;
- (void)setCaptureEvents:(_Bool)arg1;
- (void)_resetMenuOpenTracker;
- (void)prepareCustomGesture:(id)arg1;
- (_Bool)isCapturingRealEvents;
- (void)replayGesture:(id)arg1;
- (void)_replayEventAtIndex:(unsigned long long)arg1 inGesture:(id)arg2 allFingerIdentifiers:(id)arg3 allFingerDownLocations:(id)arg4;
- (struct CGPoint)_eventManagerPointForGesture:(id)arg1 fingerIdentifier:(id)arg2 eventIndex:(unsigned long long)arg3;
- (struct CGPoint)_originPointFromMidPoint:(struct CGPoint)arg1 shouldConvertToOrientation:(_Bool)arg2;
- (void)performGesture:(id)arg1;
- (void)_performCustomGesture;
- (void)_reallyPerformCustomGestureUpEvents;
- (id)_pointHolderEvents:(id)arg1 orbValue:(float)arg2;
- (id)_pointHolderEvents:(id)arg1;
- (void)_reallyPerformCustomGesture;
@property(readonly, nonatomic) double touchSpeedMultiplier; // @dynamic touchSpeedMultiplier;
- (void)updateAllSettings;
- (void)accessibilityManager:(id)arg1 didReceiveEvent:(long long)arg2;
- (void)removeEventHandler:(id)arg1;
- (void)addEventHandler:(id)arg1;
- (void)_handlePinchAdjust:(struct CGPoint)arg1;
- (void)_handleRealPinchAdjust:(struct CGPoint)arg1;
- (void)_resetPinchAdjust;
- (void)mediaPlaybackChanged;
- (void)screenshotDidFire;
- (void)screenshotWillFire;
- (void)mediaControlsChanged:(_Bool)arg1;
- (void)resetNubbitLocation;
- (void)_startOrientationUpdateTimer;
- (void)orientationChanged:(long long)arg1;
- (void)orientationChanged;
- (int)deviceOrientation;
- (_Bool)inPinchMode;
- (_Bool)inRockerMode;
- (_Bool)inMultFingerMode;
- (void)performHardwareButton:(int)arg1 state:(int)arg2;
- (void)systemServerDied;
- (void)substantialTransitionOccurred;
- (void)rotationLockChanged;
- (void)ringerSwitchChanged;
- (void)handleRealEvent:(id)arg1;
- (_Bool)usingSpecialTool;
- (void)specialToolUsageEnded;
- (_Bool)_shouldHandleRealEventWithMultiTouchTool;
- (void)_handleMultiTouchToolEvent:(id)arg1;
- (void)_handleRealCustomGestureUp:(struct CGPoint)arg1;
- (void)_endForceTouchGesture;
- (void)_handleRealCustomGestureMove:(struct CGPoint)arg1;
- (void)_handleRealCustomGestureDown:(struct CGPoint)arg1;
- (void)_handleSpecialGestureMove:(struct CGPoint)arg1;
- (void)_handleSpecialGestureStart:(struct CGPoint)arg1;
- (void)_handleOrbPressage:(id)arg1 orbValue:(double)arg2;
- (void)_handleRealMultiFingerUp:(struct CGPoint)arg1;
- (void)_handleRealMultiFingerDown:(struct CGPoint)arg1;
- (void)_handleRealMultiFingerMove:(struct CGPoint)arg1;
- (id)liftFingersUp;
- (_Bool)moveFingersToPoints:(id)arg1;
- (id)pressFingersDown;
- (id)updateFingersDownWithForce:(float)arg1;
- (id)updateFingersDownWithForce:(float)arg1 atPositionY:(double)arg2;
- (id)liftPinchFingerUp;
- (id)rotatePinchByClockwiseAngle:(double)arg1;
- (id)expandPinchByDistance:(double)arg1;
- (void)_handleRealPinchToolMove:(struct CGPoint)arg1;
- (void)_handleRealPinchToolUp:(struct CGPoint)arg1;
- (id)mainWindow;
- (void)resetPinch;
- (void)_handleRealPinchToolDown:(struct CGPoint)arg1;
- (void)_handlePinchFingerDownWithFinger:(id)arg1;
- (void)_movePinchToolToPoint:(struct CGPoint)arg1;
- (void)moveFingersToPointInFingerCoordinateSpace:(struct CGPoint)arg1 allowOutOfBounds:(_Bool)arg2;
- (_Bool)_moveFingersWithoutEventsToPoints:(id)arg1 allowOutOfBounds:(_Bool)arg2;
- (void)_moveFingersToPoint:(struct CGPoint)arg1;
- (void)keyboardVisible:(_Bool)arg1 withFrame:(struct CGRect)arg2;
- (void)safeAreaInsetsChanged:(struct UIEdgeInsets)arg1;
- (void)systemServerConnected;
- (void)refreshOrientation;
- (void)_registerForSettingsNotifications;
- (void)_handleUsageConfirmation;
- (void)_handleBrokenHomeButtonMode;
- (id)init;
- (id)testingEventManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

