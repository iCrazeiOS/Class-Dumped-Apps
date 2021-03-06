//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NFPlayerAnnotationControllerInternal-Protocol.h>

@class NSNumber, NSSet, NSString, PlaybackAnnotationIndex, PlaybackAnnotationObserverRegistry;

@interface PlaybackAnnotationController : NSObject <NFPlayerAnnotationControllerInternal>
{
    PlaybackAnnotationIndex *_index;
    PlaybackAnnotationObserverRegistry *_observerRegistry;
    NSNumber *_currentVideoId;
    double _currentPlaybackTime;
    NSSet *_activeAnnotations;
}

@property(retain, nonatomic) NSSet *activeAnnotations; // @synthesize activeAnnotations=_activeAnnotations;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(retain, nonatomic) NSNumber *currentVideoId; // @synthesize currentVideoId=_currentVideoId;
@property(retain, nonatomic) PlaybackAnnotationObserverRegistry *observerRegistry; // @synthesize observerRegistry=_observerRegistry;
@property(retain, nonatomic) PlaybackAnnotationIndex *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)notifyExit:(id)arg1 inVideoId:(id)arg2 atTime:(double)arg3;
- (void)notifyEntry:(id)arg1 inVideoId:(id)arg2 atTime:(double)arg3;
- (void)updateActiveAnnotations:(id)arg1 inVideoId:(id)arg2 atTime:(double)arg3;
- (void)removeObserver:(id)arg1 forAnnotation:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)removeAllObserversForAnnotation:(id)arg1;
- (void)removeAllObservers;
- (void)addObserver:(id)arg1 forAnnotation:(id)arg2;
- (void)removeAnnotation:(id)arg1;
- (void)removeAllAnnotationsForVideoId:(id)arg1;
- (void)addAnnotation:(id)arg1 forVideoId:(id)arg2 fromStartTime:(double)arg3 toEndTime:(double)arg4;
- (id)activeAnnotationsForVideoId:(id)arg1 atTime:(double)arg2;
- (void)playerStoppedPlayingVideoId:(id)arg1 atTime:(double)arg2;
- (void)playerNowPlayingVideoId:(id)arg1 atTime:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

