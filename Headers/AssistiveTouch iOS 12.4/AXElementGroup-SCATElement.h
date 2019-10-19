//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXRuntime/AXElementGroup.h>

#import "SCATElement-Protocol.h"

@class NSArray, NSNumber, NSString, SCATAuxiliaryElementManager;

@interface AXElementGroup (SCATElement) <SCATElement>
@property(nonatomic) _Bool scatAssistiveTechFocused;
- (void)prepareElementsForScanning:(id)arg1;
@property(readonly, nonatomic) NSArray *scatDrags;
@property(readonly, nonatomic) NSArray *scatDrops;
@property(readonly, nonatomic) int scatPid;
@property(readonly, nonatomic) _Bool scatUpdatesMenu;
@property(readonly, nonatomic) _Bool scatBeginScanningFromSelfAfterActivation;
@property(readonly, nonatomic) _Bool scatIsOnScreen;
- (void)scatScrollToVisible;
@property(readonly, nonatomic) _Bool scatIsValid;
@property(readonly, nonatomic) NSString *scatSpeakableDescription;
- (id)scatSpeakableDescription:(_Bool)arg1;
@property(readonly, nonatomic) struct CGRect scatFrame;
- (_Bool)scatCanScrollInAtLeastOneDirection;
- (id)scrollableElement;
@property(readonly, nonatomic) long long scatActivateBehavior;
@property(readonly, nonatomic) _Bool scatIndicatesOwnFocus;
@property(readonly, nonatomic) _Bool scatShouldActivateDirectly;
@property(readonly, nonatomic) _Bool scatIsAuxiliaryElement;
@property(nonatomic) SCATAuxiliaryElementManager *scatAuxiliaryElementManager;
@property(readonly, nonatomic) _Bool scatIsMemberOfGroup;
@property(readonly, nonatomic) unsigned long long scatScanningBehaviorTraits;
@property(readonly, nonatomic) _Bool scatHidesGroupCursorWhenFocused;
@property(readonly, nonatomic) NSArray *scatCustomActions;
@property(readonly, nonatomic) NSNumber *scatOverrideCursorTheme;
@property(readonly, nonatomic) struct CGRect scatTextCursorFrame;
@property(readonly, nonatomic) NSArray *scatAlternateKeys;
@property(readonly, nonatomic) _Bool scatCanShowAlternateKeys;
@property(readonly, nonatomic) _Bool scatIsKeyboardKey;
- (id)scatSupportedGestures;
@property(readonly, nonatomic) struct CGPath *scatPath;
- (_Bool)scatPerformAction:(int)arg1 withValue:(id)arg2;
- (_Bool)scatPerformAction:(int)arg1;
- (_Bool)scatSupportsAction:(int)arg1;
@property(readonly, nonatomic) _Bool scatShouldAllowDeferFocusToNativeFocusedElement;
@property(readonly, nonatomic) _Bool scatIsAXElement;
@property(readonly, nonatomic) struct CGPoint scatCenterPoint;
@property(readonly, nonatomic) _Bool scatPathIsInSceneReferenceSpace;
@property(readonly, nonatomic) unsigned long long scatTraits;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGRect frame; // @dynamic frame;
@property(readonly) unsigned long long hash;
@property(nonatomic) AXElementGroup *parentGroup; // @dynamic parentGroup;
@property(readonly) Class superclass;
@end

