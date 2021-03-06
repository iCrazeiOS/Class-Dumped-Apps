//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSError, NSString;
@protocol FNFAVPlayerItem, FNFPlayerAudioDecoder, FNFPlayerAudioEngine, FNFPlayerCaptionParser, FNFPlayerLiveTraceManager, FNFSynchronousPlayerDelegate;

@protocol FNFPlayerControlling <NSObject>
- (void)debug_simulatePlaybackInteruptionWithError:(NSError *)arg1;
- (void)didChangeScreenCaptured;
- (void)didDisconnectWithExternalScreen;
- (void)didConnectWithExternalScreen;
- (void)invalidate;
- (NSError *)error;
- (CDStruct_1b6d18a9)lastRequestedStartTime;
- (CDStruct_1b6d18a9)lastStartingTime;
- (CDStruct_1b6d18a9)currentTime;
- (id <FNFAVPlayerItem>)currentItem;
- (long long)status;
- (_Bool)showCaptions;
- (_Bool)isMuted;
- (float)volume;
- (float)rate;
- (id)createPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 followMasterClock:(_Bool)arg2 usingBlock:(void (^)(struct))arg3;
- (void)addRepresentationChangedCallback:(void (^)(NSString *))arg1;
- (void)removeLevelMeterCallback;
- (void)addLevelMeterCallback:(void (^)(double))arg1 timeInterval:(CDStruct_1b6d18a9)arg2;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)flushTimeObserver:(id)arg1;
- (void)addTimeObserver:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (void)pauseWithPauseReason:(int)arg1 context:(id)arg2;
- (void)pauseWithContext:(id)arg1;
- (void)playWithPlayReason:(int)arg1 context:(id)arg2;
- (void)playWithContext:(id)arg1;
- (void)pause;
- (void)play;
- (void)setVolume:(float)arg1 rampTime:(float)arg2;
- (void)setRate:(float)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 seekReason:(int)arg4 completionHandler:(void (^)(_Bool))arg5;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 seekReason:(int)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)setLoggingContext:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id <FNFAVPlayerItem>)arg1 loggingContext:(id)arg2;
- (void)replaceCurrentItemWithPlayerItem:(id <FNFAVPlayerItem>)arg1;
- (void)setUserSelectedQuality:(NSString *)arg1;
- (void)setLiveTraceManager:(id <FNFPlayerLiveTraceManager>)arg1;
- (void)setAudioDecoder:(id <FNFPlayerAudioDecoder>)arg1;
- (void)setAudioEngine:(id <FNFPlayerAudioEngine>)arg1;
- (void)setCaptionParser:(id <FNFPlayerCaptionParser>)arg1;
- (void)setShowCaptions:(_Bool)arg1;
- (void)setMuted:(_Bool)arg1 context:(id)arg2;
- (void)setDelegate:(id <FNFSynchronousPlayerDelegate>)arg1;
@end

