//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface _TtC14DKPhotoGallery12DKPlayerView : UIView
{
    // Error parsing type: , name: url
    // Error parsing type: , name: asset
    // Error parsing type: , name: playerItem
    // Error parsing type: , name: closeBlock
    // Error parsing type: , name: beginPlayBlock
    // Error parsing type: , name: autoHidesControlView
    // Error parsing type: , name: tapToToggleControlView
    // Error parsing type: , name: isFinishedPlaying
    // Error parsing type: , name: playButton
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: playPauseButton
    // Error parsing type: , name: timeSlider
    // Error parsing type: , name: startTimeLabel
    // Error parsing type: , name: durationLabel
    // Error parsing type: , name: tapGesture
    // Error parsing type: , name: $__lazy_storage_$_bufferingIndicator
    // Error parsing type: , name: player
    // Error parsing type: , name: controlView
    // Error parsing type: , name: autoPlayOrShowErrorOnce
    // Error parsing type: , name: _error
    // Error parsing type: , name: timeRemainingFormatter
    // Error parsing type: , name: timeObserverToken
    // Error parsing type: , name: controlParentView
    // Error parsing type: , name: hidesControlViewTimer
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)itemDidPlayToEndTimeWithNotification:(id)arg1;
- (void)close;
- (void)hidesControlViewIfNeeded;
- (void)toggleControlViewWithTapGesture:(id)arg1;
- (void)sliderTappedActionWithTapGesture:(id)arg1;
- (void)timeSliderDidChangeWithSender:(id)arg1 event:(id)arg2;
- (void)playPauseButtonWasPressed;
- (void)pause;
- (void)playAndHidesControlView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

