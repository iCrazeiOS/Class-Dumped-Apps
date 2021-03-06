//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGAnalyticsModule-Protocol.h>
#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryClipsDurationPickerSliderDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryMusicAudioPlayerDelegate-Protocol.h>

@class IGStoryClipsDurationPickerCancelTimerButton, IGStoryClipsDurationPickerSetTimerButton, IGStoryClipsDurationPickerSlider, IGStoryClipsDurationPickerTimeRangeLabels, IGStoryMusicAudioPlayer, IGStoryMusicTrackClip, NSString, UILabel;
@protocol IGLayoutElement, IGStoryClipsDurationPickerViewControllerDelegate;

@interface IGStoryClipsDurationPickerViewController : UIViewController <IGAnalyticsModule, IGStoryMusicAudioPlayerDelegate, IGStoryClipsDurationPickerSliderDelegate, IGGestureHandler>
{
    id <IGLayoutElement> _layout;
    UILabel *_titleLabel;
    IGStoryClipsDurationPickerTimeRangeLabels *_timeRangeLabels;
    IGStoryClipsDurationPickerSlider *_slider;
    UILabel *_descriptionLabel;
    IGStoryClipsDurationPickerSetTimerButton *_setTimerButton;
    IGStoryClipsDurationPickerCancelTimerButton *_cancelTimerButton;
    IGStoryMusicAudioPlayer *_audioPlayer;
    id <IGStoryClipsDurationPickerViewControllerDelegate> _delegate;
    IGStoryMusicTrackClip *_audioClip;
    double _startTime;
}

@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) IGStoryMusicTrackClip *audioClip; // @synthesize audioClip=_audioClip;
@property(nonatomic) __weak id <IGStoryClipsDurationPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_applicationDidEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)analyticsModule;
- (_Bool)canRespondToGesture:(id)arg1;
@property(readonly, nonatomic) double duration;
- (void)_didTapCancelTimerButton:(id)arg1;
- (void)_didTapSetTimerButton:(id)arg1;
- (void)durationPickerSlider:(id)arg1 didSelectDuration:(double)arg2;
- (void)durationPickerSliderDidFinishScrubbing:(id)arg1;
- (void)durationPickerSliderDidBeginScrubbing:(id)arg1;
- (void)audioPlayer:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)audioPlayer:(id)arg1 didDetermineDuration:(double)arg2 ofAsset:(id)arg3;
- (void)audioPlayer:(id)arg1 didDetermineAssetPlayabilityStatus:(_Bool)arg2;
- (void)audioPlayer:(id)arg1 didUpdateStallState:(_Bool)arg2;
- (void)audioPlayerDidPlayToEnd:(id)arg1;
- (void)audioPlayer:(id)arg1 didUpdateToPlaybackTime:(double)arg2;
- (void)viewDidLayoutSubviews;
- (double)preferredHeightForConstrainingWidth:(double)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStartTime:(double)arg1 initialDuration:(double)arg2 maxOverallDuration:(double)arg3 audioClip:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

