//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGCoWatchPlaybackControllerProtocol-Protocol.h>

@class IGCoWatchUploadingLabelView, NSString, UIImageView;
@protocol IGCoWatchPlaybackControllerDelegate;

@interface IGCoWatchLocalPhotoController : NSObject <IGCoWatchPlaybackControllerProtocol>
{
    id <IGCoWatchPlaybackControllerDelegate> _delegate;
    UIImageView *_photoView;
    IGCoWatchUploadingLabelView *_uploadingLabelView;
}

- (void).cxx_destruct;
- (long long)playbackState;
- (double)duration;
- (double)playbackPosition;
- (void)finishScrubbing;
- (void)beginScrubbing;
- (void)stop;
- (void)setDelegate:(id)arg1;
- (void)setAudioEnabled:(_Bool)arg1;
- (_Bool)isAudioEnabled;
- (void)resizeContentViewForContainer;
- (void)playMedia:(id)arg1 syncedClock:(id)arg2 startTimeMillis:(duration_6174cf92)arg3 surfaceId:(id)arg4 playbackState:(long long)arg5;
- (id)contentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

