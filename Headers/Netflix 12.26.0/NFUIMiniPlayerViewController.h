//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NFUINetworkErrorViewControllerDelegate-Protocol.h"
#import "NFUIPinProtectionDialogViewDelegate-Protocol.h"
#import "NFUIPlayerDelegate-Protocol.h"
#import "NFUIPlayerScrubberDelegate-Protocol.h"
#import "NFUISystemVolumeProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAGradientLayer, NFUIAnimatedPlayButton, NFUIAnimatedSeekButton, NFUILabel, NFUIMiniPlayerControlsView, NFUIMiniPlayerFooterView, NFUIMiniPlayerPlaybackRequest, NFUINetworkErrorViewController, NFUIPassThroughView, NFUIPinProtectionDialogView, NFUIPlayerLoadingView, NFUIStylizedLabel, NFUISystemVolumeViewRefresh, NFUITrickPlayController, NFUITrickPlayModelInternal, NFUIVolumeMuteButton, NSArray, NSError, NSLayoutConstraint, NSNumber, NSString, NSTimer, NSURL, UIButton, UIColor, UIImageView, UILabel, UIPinchGestureRecognizer, UIStackView, UITapGestureRecognizer, UIView;
@protocol NFUIMiniPlayerDelegate, NFUIPlayer;

@interface NFUIMiniPlayerViewController : UIViewController <NFUIPlayerDelegate, UIGestureRecognizerDelegate, NFUIPlayerScrubberDelegate, NFUISystemVolumeProtocol, NFUIPinProtectionDialogViewDelegate, NFUINetworkErrorViewControllerDelegate>
{
    _Bool _areControlsVisible;
    _Bool _areControlsHiding;
    _Bool _areControlsShowing;
    _Bool _isActivePlayerController;
    _Bool _isFullScreenEnabled;
    _Bool _isEmbeddedInDisplayPage;
    _Bool _permanentlyHideControls;
    _Bool _shouldHandleLogging;
    _Bool _stayInFullScreenAfterPlaybackEnds;
    _Bool _shouldHideReplayButton;
    _Bool _didRemovePlayerView;
    _Bool _forceRotationAfterPresentation;
    _Bool _isShowingVolumeSlider;
    _Bool _isReadyForVolumeDisplay;
    _Bool _hasPlayerControls;
    _Bool _pendingPlay;
    _Bool _isTogglingPlayback;
    _Bool _isTrickplayActive;
    _Bool _didFirstPlaybackBegin;
    _Bool _isTransitioningToFullScreen;
    _Bool _isTogglingPlayerControls;
    _Bool _isTransitioningToEmbedded;
    _Bool _isReadyForReplay;
    _Bool _shouldShowControlsAfterTransition;
    _Bool _isShowingLoadingView;
    _Bool _isParentFullScreen;
    _Bool _hasError;
    _Bool _isVideoScaledToFit;
    id <NFUIMiniPlayerDelegate> _delegate;
    NFUILabel *_titleLabel;
    NFUIVolumeMuteButton *_volumeMuteButton;
    NFUIPassThroughView *_utilityContainer;
    UIImageView *_placeholderImageView;
    UIButton *_priorItemButton;
    UIButton *_nextItemButton;
    NSString *_subtitle;
    long long _playerMode;
    id <NFUIPlayer> _player;
    NFUITrickPlayModelInternal *_trickPlayModel;
    NSURL *_placeholderImageURL;
    UIColor *_highlightColor;
    NSArray *_toolBarButtons;
    long long _muteButtonPolicy;
    long long _lastUserInitiatedAction;
    long long _loopCount;
    UIView *_playerViewContainer;
    NFUIPlayerLoadingView *_loadingView;
    NFUILabel *_replayLabel;
    UIView *_shim;
    UIStackView *_controlsStackView;
    NFUIAnimatedSeekButton *_rewindButton;
    NFUIAnimatedSeekButton *_fastForwardButton;
    NFUIAnimatedPlayButton *_playPauseButton;
    UIView *_footerContainer;
    NSLayoutConstraint *_footerContainerLeading;
    NSLayoutConstraint *_footerContainerTrailing;
    NSLayoutConstraint *_footerContainerBottom;
    NSLayoutConstraint *_footerContainerHeight;
    NSLayoutConstraint *_utilityContainerBottom;
    NSLayoutConstraint *_utilityContainerLeading;
    NSLayoutConstraint *_utilityContainerTrailing;
    UILabel *_runtimeLabel;
    UIButton *_rotateButton;
    NFUIStylizedLabel *_supplementalLabel;
    NSString *_supplementalText;
    UIView *_playerView;
    UIView *_initialContainerView;
    CAGradientLayer *_shimLayer;
    NSTimer *_autoHideControlsTimer;
    NFUITrickPlayController *_trickPlayController;
    double _seekInitialPosition;
    NSNumber *_seekInitialPositionObject;
    double _seekStartPosition;
    double _lastHapticFiredTime;
    CDUnknownBlockType _seekingCompletionBlock;
    CDUnknownBlockType _seekingFailureBlock;
    UIView *_volumeContainer;
    NFUISystemVolumeViewRefresh *_volumeSlider;
    NSLayoutConstraint *_volumeContainerLeadingConstraint;
    NSLayoutConstraint *_volumeContainerTrailingConstraint;
    NSLayoutConstraint *_volumeContainerTopConstraint;
    NFUINetworkErrorViewController *_playbackErrorController;
    NSError *_lastValidationError;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    double _videoLayerInset;
    NFUIMiniPlayerControlsView *_controlsView;
    NFUIMiniPlayerFooterView *_footerView;
    long long _numberOfLoops;
    NFUIPinProtectionDialogView *_pinProtectionDialogView;
    NFUIMiniPlayerPlaybackRequest *_playbackRequest;
}

@property(retain, nonatomic) NFUIMiniPlayerPlaybackRequest *playbackRequest; // @synthesize playbackRequest=_playbackRequest;
@property(retain, nonatomic) NFUIPinProtectionDialogView *pinProtectionDialogView; // @synthesize pinProtectionDialogView=_pinProtectionDialogView;
@property(nonatomic) long long numberOfLoops; // @synthesize numberOfLoops=_numberOfLoops;
@property(retain, nonatomic) NFUIMiniPlayerFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NFUIMiniPlayerControlsView *controlsView; // @synthesize controlsView=_controlsView;
@property(nonatomic) _Bool isVideoScaledToFit; // @synthesize isVideoScaledToFit=_isVideoScaledToFit;
@property(nonatomic) double videoLayerInset; // @synthesize videoLayerInset=_videoLayerInset;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property(retain, nonatomic) NSError *lastValidationError; // @synthesize lastValidationError=_lastValidationError;
@property(retain, nonatomic) NFUINetworkErrorViewController *playbackErrorController; // @synthesize playbackErrorController=_playbackErrorController;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(nonatomic) _Bool isParentFullScreen; // @synthesize isParentFullScreen=_isParentFullScreen;
@property(nonatomic) _Bool isShowingLoadingView; // @synthesize isShowingLoadingView=_isShowingLoadingView;
@property(nonatomic) _Bool shouldShowControlsAfterTransition; // @synthesize shouldShowControlsAfterTransition=_shouldShowControlsAfterTransition;
@property(nonatomic) _Bool isReadyForReplay; // @synthesize isReadyForReplay=_isReadyForReplay;
@property(nonatomic) _Bool isTransitioningToEmbedded; // @synthesize isTransitioningToEmbedded=_isTransitioningToEmbedded;
@property(nonatomic) _Bool isTogglingPlayerControls; // @synthesize isTogglingPlayerControls=_isTogglingPlayerControls;
@property(nonatomic) _Bool isTransitioningToFullScreen; // @synthesize isTransitioningToFullScreen=_isTransitioningToFullScreen;
@property(nonatomic) _Bool didFirstPlaybackBegin; // @synthesize didFirstPlaybackBegin=_didFirstPlaybackBegin;
@property(nonatomic) _Bool isTrickplayActive; // @synthesize isTrickplayActive=_isTrickplayActive;
@property(nonatomic) _Bool isTogglingPlayback; // @synthesize isTogglingPlayback=_isTogglingPlayback;
@property(nonatomic) _Bool pendingPlay; // @synthesize pendingPlay=_pendingPlay;
@property(nonatomic) _Bool hasPlayerControls; // @synthesize hasPlayerControls=_hasPlayerControls;
@property(nonatomic) __weak NSLayoutConstraint *volumeContainerTopConstraint; // @synthesize volumeContainerTopConstraint=_volumeContainerTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *volumeContainerTrailingConstraint; // @synthesize volumeContainerTrailingConstraint=_volumeContainerTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *volumeContainerLeadingConstraint; // @synthesize volumeContainerLeadingConstraint=_volumeContainerLeadingConstraint;
@property(nonatomic) _Bool isReadyForVolumeDisplay; // @synthesize isReadyForVolumeDisplay=_isReadyForVolumeDisplay;
@property(nonatomic) _Bool isShowingVolumeSlider; // @synthesize isShowingVolumeSlider=_isShowingVolumeSlider;
@property(retain, nonatomic) NFUISystemVolumeViewRefresh *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(nonatomic) __weak UIView *volumeContainer; // @synthesize volumeContainer=_volumeContainer;
@property(copy, nonatomic) CDUnknownBlockType seekingFailureBlock; // @synthesize seekingFailureBlock=_seekingFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType seekingCompletionBlock; // @synthesize seekingCompletionBlock=_seekingCompletionBlock;
@property(nonatomic) double lastHapticFiredTime; // @synthesize lastHapticFiredTime=_lastHapticFiredTime;
@property(nonatomic) double seekStartPosition; // @synthesize seekStartPosition=_seekStartPosition;
@property(retain, nonatomic) NSNumber *seekInitialPositionObject; // @synthesize seekInitialPositionObject=_seekInitialPositionObject;
@property(nonatomic) double seekInitialPosition; // @synthesize seekInitialPosition=_seekInitialPosition;
@property(retain, nonatomic) NFUITrickPlayController *trickPlayController; // @synthesize trickPlayController=_trickPlayController;
@property(nonatomic) _Bool forceRotationAfterPresentation; // @synthesize forceRotationAfterPresentation=_forceRotationAfterPresentation;
@property(retain, nonatomic) NSTimer *autoHideControlsTimer; // @synthesize autoHideControlsTimer=_autoHideControlsTimer;
@property(retain, nonatomic) CAGradientLayer *shimLayer; // @synthesize shimLayer=_shimLayer;
@property(nonatomic) __weak UIView *initialContainerView; // @synthesize initialContainerView=_initialContainerView;
@property(nonatomic) __weak UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) NSString *supplementalText; // @synthesize supplementalText=_supplementalText;
@property(retain, nonatomic) NFUIStylizedLabel *supplementalLabel; // @synthesize supplementalLabel=_supplementalLabel;
@property(retain, nonatomic) UIButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(retain, nonatomic) UILabel *runtimeLabel; // @synthesize runtimeLabel=_runtimeLabel;
@property(retain, nonatomic) NSLayoutConstraint *utilityContainerTrailing; // @synthesize utilityContainerTrailing=_utilityContainerTrailing;
@property(retain, nonatomic) NSLayoutConstraint *utilityContainerLeading; // @synthesize utilityContainerLeading=_utilityContainerLeading;
@property(retain, nonatomic) NSLayoutConstraint *utilityContainerBottom; // @synthesize utilityContainerBottom=_utilityContainerBottom;
@property(retain, nonatomic) NSLayoutConstraint *footerContainerHeight; // @synthesize footerContainerHeight=_footerContainerHeight;
@property(retain, nonatomic) NSLayoutConstraint *footerContainerBottom; // @synthesize footerContainerBottom=_footerContainerBottom;
@property(retain, nonatomic) NSLayoutConstraint *footerContainerTrailing; // @synthesize footerContainerTrailing=_footerContainerTrailing;
@property(retain, nonatomic) NSLayoutConstraint *footerContainerLeading; // @synthesize footerContainerLeading=_footerContainerLeading;
@property(retain, nonatomic) UIView *footerContainer; // @synthesize footerContainer=_footerContainer;
@property(retain, nonatomic) NFUIAnimatedPlayButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain, nonatomic) NFUIAnimatedSeekButton *fastForwardButton; // @synthesize fastForwardButton=_fastForwardButton;
@property(retain, nonatomic) NFUIAnimatedSeekButton *rewindButton; // @synthesize rewindButton=_rewindButton;
@property(retain, nonatomic) UIStackView *controlsStackView; // @synthesize controlsStackView=_controlsStackView;
@property(retain, nonatomic) UIView *shim; // @synthesize shim=_shim;
@property(retain, nonatomic) NFUILabel *replayLabel; // @synthesize replayLabel=_replayLabel;
@property(retain, nonatomic) NFUIPlayerLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *playerViewContainer; // @synthesize playerViewContainer=_playerViewContainer;
@property(nonatomic) _Bool didRemovePlayerView; // @synthesize didRemovePlayerView=_didRemovePlayerView;
@property(nonatomic) long long loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) long long lastUserInitiatedAction; // @synthesize lastUserInitiatedAction=_lastUserInitiatedAction;
@property(nonatomic) _Bool shouldHideReplayButton; // @synthesize shouldHideReplayButton=_shouldHideReplayButton;
@property(nonatomic) _Bool stayInFullScreenAfterPlaybackEnds; // @synthesize stayInFullScreenAfterPlaybackEnds=_stayInFullScreenAfterPlaybackEnds;
@property(nonatomic) _Bool shouldHandleLogging; // @synthesize shouldHandleLogging=_shouldHandleLogging;
@property(nonatomic) _Bool permanentlyHideControls; // @synthesize permanentlyHideControls=_permanentlyHideControls;
@property(nonatomic) long long muteButtonPolicy; // @synthesize muteButtonPolicy=_muteButtonPolicy;
@property(nonatomic) _Bool isEmbeddedInDisplayPage; // @synthesize isEmbeddedInDisplayPage=_isEmbeddedInDisplayPage;
@property(nonatomic) _Bool isFullScreenEnabled; // @synthesize isFullScreenEnabled=_isFullScreenEnabled;
@property(nonatomic) _Bool isActivePlayerController; // @synthesize isActivePlayerController=_isActivePlayerController;
@property(retain, nonatomic) NSArray *toolBarButtons; // @synthesize toolBarButtons=_toolBarButtons;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) NSURL *placeholderImageURL; // @synthesize placeholderImageURL=_placeholderImageURL;
@property(retain, nonatomic) NFUITrickPlayModelInternal *trickPlayModel; // @synthesize trickPlayModel=_trickPlayModel;
@property(nonatomic) __weak id <NFUIPlayer> player; // @synthesize player=_player;
@property(nonatomic) long long playerMode; // @synthesize playerMode=_playerMode;
@property(nonatomic) _Bool areControlsShowing; // @synthesize areControlsShowing=_areControlsShowing;
@property(nonatomic) _Bool areControlsHiding; // @synthesize areControlsHiding=_areControlsHiding;
@property(nonatomic) _Bool areControlsVisible; // @synthesize areControlsVisible=_areControlsVisible;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) __weak UIButton *nextItemButton; // @synthesize nextItemButton=_nextItemButton;
@property(nonatomic) __weak UIButton *priorItemButton; // @synthesize priorItemButton=_priorItemButton;
@property(readonly, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(retain, nonatomic) NFUIPassThroughView *utilityContainer; // @synthesize utilityContainer=_utilityContainer;
@property(retain, nonatomic) NFUIVolumeMuteButton *volumeMuteButton; // @synthesize volumeMuteButton=_volumeMuteButton;
@property(retain, nonatomic) NFUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <NFUIMiniPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isEndedOrUserPaused;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)accessibilityViewIsModal;
- (void)enterPinTapped;
- (_Bool)isShowingPinPrompt;
- (_Bool)isShowingPinDialog;
- (void)hidePinProtectionDialogAnimated:(_Bool)arg1;
- (void)showPinProtectionDialog;
- (_Bool)hasPlayerViewInViewHierarchy;
- (_Bool)loopIfNeeded;
@property(readonly, nonatomic) double systemVolume;
@property(readonly, nonatomic) double playerVolume;
- (void)muteStateDidChange:(id)arg1;
- (void)toggleMute:(_Bool)arg1;
- (_Bool)canShowVolumeIndicator;
- (_Bool)shouldHideVolumeView:(id)arg1;
- (_Bool)sholdIgnoreChangesInVolumeView:(id)arg1;
- (void)didFinishAdjustingVolumeInView:(id)arg1;
- (void)didAdjustVolumeInView:(id)arg1;
- (void)initVolumeControlView;
- (void)volumeDidChange:(id)arg1;
- (void)configureUtilityContainer;
- (id)fullScreenButtonTrailing;
- (id)fullScreenButtonWidth;
- (id)scrubber;
- (void)configureFooterContainer;
- (double)requiredFooterHeight;
- (void)showNextItem:(id)arg1;
- (void)showPriorItem:(id)arg1;
- (void)didTapOnLoadingView:(id)arg1;
- (void)updateReplayLabelAsRetry:(_Bool)arg1;
- (void)toggleSubtitles:(_Bool)arg1;
- (void)adjustGeometryForPlayerView;
- (void)controlAction:(id)arg1;
- (void)toggleGravityScaleForLayer:(id)arg1;
- (void)toggleFrameScaleForLayer:(id)arg1;
- (void)toggleScaleToFill;
- (void)prepareForReuse;
- (void)didExitFullScreen;
- (void)willExitFullScreen;
- (void)didEnterFullScreen;
- (void)willEnterFullScreen;
- (void)willScrollToVisibleAsFullScreen:(_Bool)arg1;
- (void)adjustBottomLayout;
- (void)viewSafeAreaInsetsDidChange;
- (void)adjustVideoAspectForPortrait:(_Bool)arg1;
- (void)adjustPlaybackControlsForPortrait:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)toggleRotation:(id)arg1;
- (void)toggleRotation;
- (void)player:(id)arg1 willRemovePlayerView:(id)arg2;
- (void)hideLoadingViewAnimated:(_Bool)arg1;
- (void)animateLoadingView;
- (void)showLoadingView;
- (void)retryAfterError;
- (void)showErrorMessage:(id)arg1;
- (void)player:(id)arg1 error:(id)arg2;
- (void)configurePlayerAndSetLayer;
- (void)initializePlayerWithPlaybackRequest;
- (void)showNilPlayerError;
- (id)playerCollectionForId:(id)arg1;
- (void)setPlaybackRequest:(id)arg1 andPrebuffer:(_Bool)arg2;
- (void)handlePlaybackStopWithEnd:(_Bool)arg1;
- (_Bool)isFullScreen;
- (void)updateProgressBar;
- (void)togglePlaceholderImageVisibiblity:(_Bool)arg1;
- (void)adjustSubtitles;
- (_Bool)isUserRequestedMute;
- (_Bool)shouldShowMuteButton;
- (void)adjustMuteButtonState;
- (void)handleFirstPlayback;
- (void)handlePlayerState:(unsigned long long)arg1 forPlayer:(id)arg2 isDelegateCall:(_Bool)arg3;
- (void)player:(id)arg1 stateChange:(unsigned long long)arg2 previous:(unsigned long long)arg3;
- (void)showReplayButton;
- (void)replay;
- (void)stop;
- (void)pause;
- (void)pauseUserInitiated:(_Bool)arg1;
- (void)play;
- (void)replaceActivePlayer:(id)arg1;
- (void)playUserInitiated:(_Bool)arg1;
- (void)loadcontrolsView;
- (void)loadFooterView;
- (_Bool)isCurrentPlaybackRequestPinProtected;
- (void)performButtonAnimationForRewind:(_Bool)arg1 standAlone:(_Bool)arg2;
- (void)configureShim;
- (void)forwardByTimeInterval:(double)arg1;
- (void)rewindByTimeInterval:(double)arg1;
- (void)rewindAction:(id)arg1;
- (void)forwardAction:(id)arg1;
- (double)centerXForTrickPlay;
- (void)scrubberValueDidChange:(id)arg1;
- (void)seekToTimeIntervalAfterDelay:(id)arg1;
- (void)endScrubbing;
- (void)beginScrubbing;
- (void)updateElapsedTime:(double)arg1;
- (void)updateRuntime:(double)arg1;
- (void)player:(id)arg1 timeUpdate:(double)arg2;
- (void)performSupplementalLabelFade;
- (void)showMetadataLabelsAnimated:(_Bool)arg1;
- (void)hideMetadaLabelsAnimated:(_Bool)arg1;
- (void)performMetadataLabelsFade;
- (void)fadeMetadataLabels;
- (void)fadeSupplementalLabel;
- (void)adjustSupplementalLabelForFullScreen:(_Bool)arg1;
- (void)configureSupplementalText;
- (void)setTitle:(id)arg1;
- (void)touchesBegan:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)touchesEnded:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)didPinchWithGestureRecognizer:(id)arg1;
- (void)didDoubleTapWithGestureRecognizer:(id)arg1;
- (void)didTapWithGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)toggleAudioMute:(id)arg1;
- (void)setProgressConstraintsForControlsShowing:(_Bool)arg1;
- (void)resetViewState;
- (void)showControlsWithAnimation:(_Bool)arg1;
- (void)showControls;
- (void)hideControlsWithAnimation:(_Bool)arg1;
- (void)hideControls;
- (void)cancelAutoHideControlsTimer;
- (void)startAutoHideControlsTimer;
- (void)togglePlayPauseButton:(_Bool)arg1;
- (void)togglePlayback:(id)arg1;
- (_Bool)isPlaying;
- (void)configureGestureRecognizers;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)configurePlayercontrolsView;
- (void)configurePlacehodlerImage;
- (void)configureLoadingView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)canvasActivated:(id)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)initWithPlaybackRequest:(id)arg1 delegate:(id)arg2 usePlayerControls:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

