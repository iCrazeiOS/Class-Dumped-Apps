//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGSponsoredStoryCaptionTextLinkHandlerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryLandscapeAdsPreviewerToolViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryPlayerMediaViewType-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UITextViewDelegate-Protocol.h>

@class IGCustomTextLayoutManager, IGFeedItem, IGFeedItemVPVDImpressionHelper, IGGradientView, IGSponsoredStoryCaptionTextLinkHandler, IGStoryAdTextModel, IGStoryLandscapeAdsCaptionLayoutSpec, IGStoryLandscapeAdsPreviewerToolView, IGUserSession, NSAttributedString, NSDictionary, NSString, UITextView;
@protocol IGStoryLandscapeAdsViewDelegate, IGStoryPlayerMediaViewType;

@interface IGStoryLandscapeAdsView : UIView <IGSponsoredStoryCaptionTextLinkHandlerDelegate, IGStoryLandscapeAdsPreviewerToolViewDelegate, UITextViewDelegate, UIGestureRecognizerDelegate, IGStoryPlayerMediaViewType>
{
    IGGradientView *_backgroundColorView;
    IGCustomTextLayoutManager *_captionLayoutManager;
    struct CGSize _mediaSize;
    double _footerHeight;
    double _headerHeight;
    NSAttributedString *_fullCaptionString;
    long long _fullCaptionLineCount;
    NSAttributedString *_truncatedCaptionString;
    NSDictionary *_initialLandscapeAdsMediaViewLayoutExtras;
    _Bool _captionDoesNotFit;
    _Bool _isCaptionExpandable;
    _Bool _isCaptionExpanded;
    IGSponsoredStoryCaptionTextLinkHandler *_captionTextLinkHandler;
    IGStoryLandscapeAdsCaptionLayoutSpec *_captionLayoutSpec;
    long long _carouselType;
    UIView *_canvasView;
    IGFeedItem *_feedItem;
    IGStoryAdTextModel *_captionModel;
    IGStoryAdTextModel *_headlineModel;
    double _mediaAndCaptionPadding;
    double _scale;
    UIView *_dimmingView;
    IGUserSession *_userSession;
    UITextView *_headline;
    IGCustomTextLayoutManager *_headlineLayoutManager;
    IGGradientView *_frameFrontColorView;
    UIView *_spacerLineView;
    IGStoryLandscapeAdsPreviewerToolView *_internalPreviewerToolView;
    struct CGRect _originalCaptionFrame;
    _Bool _isFromCardification;
    _Bool _shouldShowFullCaption;
    IGFeedItemVPVDImpressionHelper *vpvdImpressionHelper;
    UIView<IGStoryPlayerMediaViewType> *_mediaView;
    UITextView *_caption;
    id <IGStoryLandscapeAdsViewDelegate> _delegate;
}

@property(nonatomic) _Bool shouldShowFullCaption; // @synthesize shouldShowFullCaption=_shouldShowFullCaption;
@property(nonatomic) __weak id <IGStoryLandscapeAdsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITextView *caption; // @synthesize caption=_caption;
@property(readonly, nonatomic) UIView<IGStoryPlayerMediaViewType> *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) IGFeedItemVPVDImpressionHelper *vpvdImpressionHelper; // @synthesize vpvdImpressionHelper;
- (void).cxx_destruct;
- (void)storyLandscapeAdsPreviewerToolViewDidUpdate:(id)arg1;
- (void)storyLandscapeAdsPreviewerToolViewDidSave:(id)arg1;
- (void)storyLandscapeAdsPreviewerToolViewDidClose;
- (void)storyLandscapeAdsPreviewerToolViewDidOpen;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didTapInCaptionTextView;
- (void)didTapOnTappableOverlay:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)landscapeAdsMediaViewLayoutExtras;
- (_Bool)isCaptionScrollable;
- (double)cellPlayTime;
- (double)mediaCurrentFrameTime;
- (double)mediaCurrentTime;
- (struct CGSize)mediaSize;
- (void)setAudioEnabled:(_Bool)arg1;
- (id)item;
- (_Bool)isShowingContent;
- (_Bool)isViewFinishedLoading;
- (void)prepareForReuse;
- (void)seekToBeginning;
- (_Bool)isPlaying;
- (void)stopWithReason:(long long)arg1;
- (void)pauseWithReason:(long long)arg1;
- (void)play;
- (void)retryLoadItem:(id)arg1;
- (void)configureWithItem:(id)arg1 delegate:(id)arg2 videoLogger:(id)arg3 videoLoggingConfig:(id)arg4 experimentSetProvider:(id)arg5 launcherSet:(id)arg6 module:(id)arg7;
- (void)_didTapDimmingView:(id)arg1;
- (void)_willExpandCaption;
- (void)_willCollapseCaptionWithType:(unsigned long long)arg1;
- (void)_didSwipeDownOnCaption:(id)arg1;
- (void)_didLongPressCaption:(id)arg1;
- (void)_captionTextTapped:(id)arg1;
- (double)_captionWidthOnCanvas;
- (void)_configureFeedItem:(id)arg1;
- (void)_storyLandscapeAdsViewDidExpandCaption;
- (void)_storyLandscapeAdsViewDidCollapseCaptionWithType:(unsigned long long)arg1;
- (void)_collapseCaptionWithAnimationEnabled:(_Bool)arg1;
- (void)_expandCaptionWithAnimationEnabled:(_Bool)arg1;
- (id)_truncatedCaptionStringWithFullCaptionString:(id)arg1 truncatedToNumberOfLines:(long long)arg2 width:(double)arg3;
- (struct CGSize)_adjustedMediaSize;
- (double)_availableHeight;
- (unsigned long long)_currentCaptionLayoutTypeWithCaptionSize:(struct CGSize)arg1;
- (void)_configureHeadline;
- (void)_configureCaption;
- (void)_layoutCustomCaptionLayoutWithCaptionSize:(struct CGSize)arg1 captionFrameWithRespectToCanvas:(struct CGRect)arg2;
- (void)_layoutAutoCroppingFallbackCaptionWithCaptionSize:(struct CGSize)arg1;
- (void)_layoutMediaAndCaptionTypeDefaultWithCaptionSize:(struct CGSize)arg1 adjustedMediaSize:(struct CGSize)arg2;
- (void)_layoutTemplateMediaCaptionWithoutHeadlineWithAdjustedMediaSize:(struct CGSize)arg1;
- (void)_layoutTemplateMediaCaptionWithHeadlineWithAdjustedMediaSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_setShouldShowFullCaption:(_Bool)arg1 withAnimationEnabled:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 mediaView:(id)arg2 mediaSize:(struct CGSize)arg3 footerHeight:(double)arg4 headerHeight:(double)arg5 carouselType:(long long)arg6 isFromCardification:(_Bool)arg7 userSession:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

