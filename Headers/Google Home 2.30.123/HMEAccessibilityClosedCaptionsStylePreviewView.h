//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface HMEAccessibilityClosedCaptionsStylePreviewView : UIView
{
    unsigned long long _captionTextSize;
    NSString *_captionTextFontName;
    long long _edgeStyle;
    UIView *_contentContainer;
    UIImageView *_backgroundImageView;
    UIView *_captionsWindow;
    UIView *_captionsBoundingBox;
    UILabel *_captionsLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *captionsLabel; // @synthesize captionsLabel=_captionsLabel;
@property(readonly, nonatomic) UIView *captionsBoundingBox; // @synthesize captionsBoundingBox=_captionsBoundingBox;
@property(readonly, nonatomic) UIView *captionsWindow; // @synthesize captionsWindow=_captionsWindow;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(nonatomic) long long edgeStyle; // @synthesize edgeStyle=_edgeStyle;
@property(copy, nonatomic) NSString *captionTextFontName; // @synthesize captionTextFontName=_captionTextFontName;
@property(nonatomic) unsigned long long captionTextSize; // @synthesize captionTextSize=_captionTextSize;
@property(nonatomic) double captionTextOpacity;
@property(nonatomic) double captionWindowOpacity;
@property(retain, nonatomic) UIColor *captionWindowColor;
@property(retain, nonatomic) UIColor *captionTextColor;
@property(nonatomic) double captionBackgroundOpacity;
@property(retain, nonatomic) UIColor *captionBackgroundColor;
- (void)applyShadowForDropShadowEdgeStyle;
- (void)applyShadowsForRaisedEdgeStyle:(_Bool)arg1;
- (void)renderCaptionsText;
- (void)renderSecondaryShadow:(id)arg1;
- (void)clearSecondaryShadow;
- (void)applyPrimaryShadow:(id)arg1 secondaryShadow:(id)arg2 shouldStroke:(_Bool)arg3;
- (id)mergeAttributedStringAttributeDictionaries:(id)arg1;
- (id)attributesForOutlineStroke;
- (id)attributesForShadow:(id)arg1;
- (id)baseAttributesForCaptionLabel;
- (double)pointSizeForFontFromStateValue:(unsigned long long)arg1;
- (void)updateTextSizeForBounds;
- (void)layoutSubviews;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

