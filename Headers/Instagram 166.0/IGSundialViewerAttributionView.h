//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGSundialAdditionalAudioInfo, IGSundialViewProductsEntryPointView, IGSundialViewerAudioAttributionView, IGSundialViewerEffectsAttributionView, NSArray, UIControl, UIView;
@protocol IGSundialAudioAssetProtocol;

@interface IGSundialViewerAttributionView : IGPassthroughView
{
    IGSundialViewerAudioAttributionView *_audioAttributionView;
    IGSundialViewerEffectsAttributionView *_effectsAttributionView;
    IGSundialViewProductsEntryPointView *_viewProductsEntryPointView;
    UIView *_secondaryView;
    _Bool _showViewProductsEntryPoint;
}

- (void).cxx_destruct;
- (void)_setSecondaryAttributionViewVisibility;
- (void)setShowViewProductsEntryPoint:(_Bool)arg1 title:(id)arg2;
@property(readonly, nonatomic) UIControl *viewProductsEntryPoint;
@property(readonly, nonatomic) UIControl *effectsAttribution;
@property(retain, nonatomic) NSArray *effectConfigs;
@property(readonly, nonatomic) UIControl *audioAttribution;
@property(retain, nonatomic) IGSundialAdditionalAudioInfo *additionalAudioInfo;
@property(retain, nonatomic) id <IGSundialAudioAssetProtocol> audioAsset;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

