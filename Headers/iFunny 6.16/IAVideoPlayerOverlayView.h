//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Funny/IAVideoLayoutDelegate-Protocol.h>

@class IAImageTintButton, IALabel, IAVideoLayout, IAVideoPlayerCounterView, IAWeakTimer, NSString, UIButton, UIProgressView;
@protocol IAVideoPlayerOverlayDelegate;

@interface IAVideoPlayerOverlayView : UIView <IAVideoLayoutDelegate>
{
    _Bool _skipIsPaused;
    _Bool _isFullscreenAdType;
    _Bool _isFullscreen;
    _Bool _isFinished;
    _Bool _canShowActionButton;
    IAVideoLayout *_videoLayout;
    id <IAVideoPlayerOverlayDelegate> _delegate;
    IAImageTintButton *_playButton;
    UIButton *_closeButton;
    UIButton *_hideButton;
    IAImageTintButton *_fullscreenButton;
    UIButton *_actionButton;
    IAImageTintButton *_muteButton;
    IAVideoPlayerCounterView *_timerView;
    UIProgressView *_progressBar;
    IALabel *_skipLabel;
    IAWeakTimer *_skipInTimer;
    double _secondsToSkipIn;
}

+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
- (void).cxx_destruct;
@property(nonatomic) _Bool canShowActionButton; // @synthesize canShowActionButton=_canShowActionButton;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) double secondsToSkipIn; // @synthesize secondsToSkipIn=_secondsToSkipIn;
@property(nonatomic) _Bool isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(nonatomic) _Bool isFullscreenAdType; // @synthesize isFullscreenAdType=_isFullscreenAdType;
@property(nonatomic) _Bool skipIsPaused; // @synthesize skipIsPaused=_skipIsPaused;
@property(retain, nonatomic) IAWeakTimer *skipInTimer; // @synthesize skipInTimer=_skipInTimer;
@property(retain, nonatomic) IALabel *skipLabel; // @synthesize skipLabel=_skipLabel;
@property(retain, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) IAVideoPlayerCounterView *timerView; // @synthesize timerView=_timerView;
@property(retain, nonatomic) IAImageTintButton *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) IAImageTintButton *fullscreenButton; // @synthesize fullscreenButton=_fullscreenButton;
@property(retain, nonatomic) UIButton *hideButton; // @synthesize hideButton=_hideButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) IAImageTintButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak id <IAVideoPlayerOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IAVideoLayout *videoLayout; // @synthesize videoLayout=_videoLayout;
- (void)dealloc;
- (void)updateFrameToView:(id)arg1 withPlacement:(unsigned long long)arg2 size:(struct CGSize)arg3 andOffset:(struct CGPoint)arg4;
- (void)updateSkipInLabel:(double)arg1;
- (void)updatedActionButtonVisibility;
- (void)updateThemesColors;
- (void)strokeView:(id)arg1 withColor:(id)arg2;
- (void)updateUI;
- (void)layoutSubviews;
- (void)stopSkipInTimer;
- (void)updateSkipInTimer;
- (void)resumeSkipInTimer;
- (void)pauseSkipInTimer;
- (void)startSkipInTimer;
- (unsigned long long)videoClickActionType;
- (_Bool)oneOfControlsContainsTouch:(id)arg1;
- (void)playbackFinished;
- (void)fullscreenStateChanged:(_Bool)arg1;
- (void)updateProgress:(double)arg1 totalDuration:(double)arg2;
- (void)updateMuteState:(_Bool)arg1;
- (void)setCanShowActionButton;
- (void)updateActionText:(id)arg1;
- (void)showHideButton;
- (void)showSkipButtonWithoutTimer;
- (void)startSkipInTimer:(double)arg1;
- (void)updatePlayButtonStateWithVisible:(_Bool)arg1;
- (void)addMuteButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addActionButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addFullscreenButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addCloseButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addPlayButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)configureWithVideoLayout:(id)arg1;
- (id)controlByType:(unsigned long long)arg1;
- (void)layoutUpdated;
- (void)setupButton:(id)arg1 withImageNamed:(id)arg2;
- (void)setupStyleWithCornerRadius:(double)arg1 toView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 videoType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

