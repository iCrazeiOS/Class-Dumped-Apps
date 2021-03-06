//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AVPlayerItem, NSNumber, NSString, _TtC15SlackFoundation19AudioPlayerProgress;
@protocol _TtP15SlackFoundation19AudioPlayerDelegate_, _TtP15SlackFoundation24AudioPlayerErrorDelegate_;

@protocol _TtP15SlackFoundation20AudioPlayerInterface_
+ (void)getTotalDurationFor:(AVPlayerItem *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (_Bool)isAlreadyLoadedAudioWithIdentifier:(NSString *)arg1;
- (void)stopWithNotifyConsumer:(_Bool)arg1;
- (void)pause;
- (void)play;
- (void)setWithItem:(AVPlayerItem *)arg1 identifier:(NSString *)arg2;
@property(nonatomic) __weak id <_TtP15SlackFoundation24AudioPlayerErrorDelegate_> errorDelegate;
@property(nonatomic) __weak id <_TtP15SlackFoundation19AudioPlayerDelegate_> delegate;
@property(nonatomic, readonly) NSNumber *elapsedTime;
@property(nonatomic, readonly) NSNumber *currentDuration;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) _TtC15SlackFoundation19AudioPlayerProgress *progress;
@property(nonatomic, readonly) _Bool isPlaying;
@property(nonatomic, readonly) long long state;
@end

