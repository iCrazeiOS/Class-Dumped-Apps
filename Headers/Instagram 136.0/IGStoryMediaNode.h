//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGGLKNode.h>

#import <InstagramAppCoreFramework/IGBoomerangNodeDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGGLVVideoNodeDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryAREffectRenderingNodeDelegate-Protocol.h>

@class AVAsset, IGAREffectModel, IGBoomerangNode, IGGLKImageNode, IGGLVVideoNode, IGPhotoBoothNode, IGStoryAREffectRenderingNode, IGUserSession, NSString, UIImage;
@protocol IGStoryMediaAsset, IGStoryMediaNodeDelegate, IGStorySuperHackyPostcaptureAREffectControllerProtocol;

@interface IGStoryMediaNode : IGGLKNode <IGGLVVideoNodeDelegate, IGStoryAREffectRenderingNodeDelegate, IGBoomerangNodeDelegate>
{
    IGUserSession *_userSession;
    UIImage *_imageAsset;
    AVAsset *_videoAsset;
    struct CGAffineTransform _preferredVideoTransform;
    IGGLKImageNode *_imageNode;
    IGGLVVideoNode *_videoNode;
    IGBoomerangNode *_boomerangNode;
    IGPhotoBoothNode *_photoBoothNode;
    IGStoryAREffectRenderingNode *_arEffectNode;
    _Bool _isLoading;
    _Bool _isLoadingPreviewImage;
    _Bool _muted;
    _Bool _continuesPlaybackWhenAudioRouteDisconnects;
    id <IGStoryMediaNodeDelegate> _delegate;
    id <IGStoryMediaAsset> _asset;
    double _playbackRate;
    double _amountTrimmedFromStart;
    double _amountTrimmedFromEnd;
    id <IGStorySuperHackyPostcaptureAREffectControllerProtocol> _postcaptureARController;
}

@property(retain, nonatomic) id <IGStorySuperHackyPostcaptureAREffectControllerProtocol> postcaptureARController; // @synthesize postcaptureARController=_postcaptureARController;
@property(nonatomic) _Bool continuesPlaybackWhenAudioRouteDisconnects; // @synthesize continuesPlaybackWhenAudioRouteDisconnects=_continuesPlaybackWhenAudioRouteDisconnects;
@property(nonatomic) double amountTrimmedFromEnd; // @synthesize amountTrimmedFromEnd=_amountTrimmedFromEnd;
@property(nonatomic) double amountTrimmedFromStart; // @synthesize amountTrimmedFromStart=_amountTrimmedFromStart;
@property(nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(readonly, nonatomic) _Bool isLoadingPreviewImage; // @synthesize isLoadingPreviewImage=_isLoadingPreviewImage;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) id <IGStoryMediaAsset> asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <IGStoryMediaNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)arEffectRenderingNodeDidPlayToEnd:(id)arg1;
- (void)arEffectRenderingNode:(id)arg1 didUpdateToPlaybackTime:(double)arg2;
- (void)arEffectRenderingNode:(id)arg1 didDisplayVideoFrame:(struct __CVBuffer *)arg2 forPlaybackTime:(double)arg3;
@property(retain, nonatomic) IGAREffectModel *arEffect;
@property(readonly, nonatomic) double effectivePlaybackRate;
- (void)seekToTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(double)arg1;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) _Bool isPlaying;
@property(nonatomic) double volume;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
- (void)setIsLoadingPreviewImage:(_Bool)arg1;
- (void)boomerangNode:(id)arg1 didUpdateToItemTime:(double)arg2;
- (void)videoNode:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)videoNodeDidPlayToEnd:(id)arg1;
- (void)videoNode:(id)arg1 didUpdateToItemTime:(double)arg2;
- (void)videoNode:(id)arg1 didDisplayPixelBuffer:(struct __CVBuffer *)arg2 forTime:(double)arg3;
- (void)layoutChildren;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

