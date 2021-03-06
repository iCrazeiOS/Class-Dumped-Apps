//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCellController.h>

#import "YTCarouselPlayablePanel-Protocol.h"
#import "YTDefaultPromoPanelViewDelegate-Protocol.h"
#import "YTLightweightPlaybackControllerDelegate-Protocol.h"
#import "YTSingleVideoMediaStateObserver-Protocol.h"
#import "YTVideoAsThumbnailDetailsDelegate-Protocol.h"

@class GIMMe, NSString, YTLightweightPlayerViewController, YTVideoAsThumbnailDetailsController;
@protocol YTCarouselPlayablePanelResponderProvider, YTCellStyleResponderProvider;

@interface YTDefaultPromoPanelCellController : YTInnerTubeCellController <YTCarouselPlayablePanel, YTDefaultPromoPanelViewDelegate, YTLightweightPlaybackControllerDelegate, YTSingleVideoMediaStateObserver, YTVideoAsThumbnailDetailsDelegate>
{
    id <YTCellStyleResponderProvider> _styleProvider;
    id <YTCarouselPlayablePanelResponderProvider> _playableProvider;
    unsigned long long _playbackMode;
    YTLightweightPlayerViewController *_inlinePlayerViewController;
    _Bool _isPlaying;
    _Bool _shouldStartPlaying;
    _Bool _isPanelFocused;
    double _minVideoPlayDuration;
    double _minPanelDisplayDuration;
    YTVideoAsThumbnailDetailsController *_videoAsThumbnailController;
}

@property(retain, nonatomic) YTVideoAsThumbnailDetailsController *videoAsThumbnailController; // @synthesize videoAsThumbnailController=_videoAsThumbnailController;
@property(readonly, nonatomic) double minPanelDisplayDuration; // @synthesize minPanelDisplayDuration=_minPanelDisplayDuration;
@property(readonly, nonatomic) double minVideoPlayDuration; // @synthesize minVideoPlayDuration=_minVideoPlayDuration;
@property(nonatomic) _Bool isPanelFocused; // @synthesize isPanelFocused=_isPanelFocused;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopInlinePlayback;
- (void)startInlinePlayback;
- (void)pauseVATDPlayback;
- (void)resumeVATDPlayback;
- (_Bool)shouldEnablePlayableContent;
- (void)handleLongPressBegan:(id)arg1;
- (void)handleAction:(id)arg1;
- (void)didTapButton;
- (void)setCell:(id)arg1;
- (void)playbackDidStartForVideoAsThumbnailDetails:(id)arg1;
- (void)singleVideo:(id)arg1 mediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)playbackController:(id)arg1 didActivateVideo:(id)arg2 withPlaybackData:(id)arg3;
- (void)stopPlayback;
- (void)startPlayback;
- (void)cellWillBecomeVisibleWithVisibilityEventType:(int)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

