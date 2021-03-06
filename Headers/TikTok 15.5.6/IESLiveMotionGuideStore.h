//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMotionGuideCoordinator-Protocol.h"

@class HTSEventContext, NSString;
@protocol HTSKVStore, IESLiveEnvironment, IESLiveFeedDrawerProvider, IESLiveMotionGuideRegistry, IESLiveRoomService, IESLiveSettings, IESLiveSquareService, IESLiveTracker;

@interface IESLiveMotionGuideStore : NSObject <IESLiveMotionGuideCoordinator>
{
    _Bool _didShowVerticalSwipeGuide;
    _Bool _didVerticalSwiped;
    _Bool _shouldShowGuide;
    _Bool _verticalSwipedUsed;
    _Bool _currentVerticalShowed;
    _Bool _didShowVerticalSwipeGuideInThisSession;
    _Bool _didShowLeftSwipeGuide;
    _Bool _didLeftSwiped;
    int _verticalSwipedShowCount;
    HTSEventContext *_eventContext;
    id <IESLiveSettings> _settings;
    id <IESLiveEnvironment> _liveEnvironment;
    id <HTSKVStore> _kvStore;
    id <IESLiveFeedDrawerProvider> _feedDrawerProvider;
    id <IESLiveMotionGuideRegistry> _motionGuideRegistry;
    id <IESLiveTracker> _tracker;
    id <IESLiveSquareService> _squareService;
    id <IESLiveRoomService> _roomService;
    NSString *_roomSwipeIdentifier;
}

@property(nonatomic) _Bool didLeftSwiped; // @synthesize didLeftSwiped=_didLeftSwiped;
@property(nonatomic) _Bool didShowLeftSwipeGuide; // @synthesize didShowLeftSwipeGuide=_didShowLeftSwipeGuide;
@property(nonatomic) _Bool didShowVerticalSwipeGuideInThisSession; // @synthesize didShowVerticalSwipeGuideInThisSession=_didShowVerticalSwipeGuideInThisSession;
@property(retain, nonatomic) NSString *roomSwipeIdentifier; // @synthesize roomSwipeIdentifier=_roomSwipeIdentifier;
@property(nonatomic) int verticalSwipedShowCount; // @synthesize verticalSwipedShowCount=_verticalSwipedShowCount;
@property(nonatomic) _Bool currentVerticalShowed; // @synthesize currentVerticalShowed=_currentVerticalShowed;
@property(nonatomic) _Bool verticalSwipedUsed; // @synthesize verticalSwipedUsed=_verticalSwipedUsed;
@property(nonatomic) _Bool shouldShowGuide; // @synthesize shouldShowGuide=_shouldShowGuide;
@property(nonatomic) _Bool didVerticalSwiped; // @synthesize didVerticalSwiped=_didVerticalSwiped;
@property(nonatomic) _Bool didShowVerticalSwipeGuide; // @synthesize didShowVerticalSwipeGuide=_didShowVerticalSwipeGuide;
@property(retain, nonatomic) id <IESLiveRoomService> roomService; // @synthesize roomService=_roomService;
@property(retain, nonatomic) id <IESLiveSquareService> squareService; // @synthesize squareService=_squareService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveMotionGuideRegistry> motionGuideRegistry; // @synthesize motionGuideRegistry=_motionGuideRegistry;
@property(retain, nonatomic) id <IESLiveFeedDrawerProvider> feedDrawerProvider; // @synthesize feedDrawerProvider=_feedDrawerProvider;
@property(retain, nonatomic) id <HTSKVStore> kvStore; // @synthesize kvStore=_kvStore;
@property(retain, nonatomic) id <IESLiveEnvironment> liveEnvironment; // @synthesize liveEnvironment=_liveEnvironment;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) HTSEventContext *eventContext; // @synthesize eventContext=_eventContext;
- (void).cxx_destruct;
- (_Bool)isEnvironmentXTL;
- (_Bool)isCurrentEnvironmentSupportSence:(unsigned long long)arg1;
- (_Bool)hasShownLeftSwipe;
- (_Bool)hasShownVerticalSwipe;
- (void)guideVerticalSwipeTrack;
- (void)triggerVerticalSwipedWithGuide:(_Bool)arg1;
- (void)triggerVerticalSwiped;
- (void)triggerLeftSwiped;
- (void)showNewVerticalGuide;
- (_Bool)alreadyShowNewGuide;
- (void)shouldShowNewGuide:(_Bool)arg1;
- (_Bool)verticalGuideShowing;
- (void)willShowLeftSwipeGuide;
- (void)willShowVerticalSwipeGuide;
- (void)updateVerticalGuideCount;
- (double)guideDelaySecond;
- (_Bool)enableCurrentTask;
- (_Bool)enableShowVerticalNewStyle;
- (_Bool)needShowLeftPanGuide;
- (_Bool)needShowRoomSwipeGuideWithScene:(unsigned long long)arg1;
- (id)guideNewStyleDictionary;
- (long long)guideShowCount;
- (_Bool)enableNewGuideStyle;
- (void)showSwipeGuideIfNeeds;
- (void)createRegistryContext;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

