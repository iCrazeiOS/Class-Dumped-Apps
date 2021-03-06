//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PSPDFKitUI/PSPDFScrubberBarLayout-Protocol.h>

@class CALayer, NSString, PSPDFAdornmentContainerView, PSPDFScrubberBarContentView, UIColor, UIImageView, UIToolbar, UIToolbarAppearance;
@protocol PSPDFPresentationContext, PSPDFScrubberBarDelegate, PSPDFScrubberBarLayout;

@interface PSPDFScrubberBar : UIView <PSPDFScrubberBarLayout>
{
    unsigned long long _scrubberBarType;
    CALayer *_shadowLayer;
    PSPDFScrubberBarContentView *_contentView;
    PSPDFScrubberBar *_scrubberContainer;
    id <PSPDFScrubberBarLayout> _layoutDelegate;
}

@property(nonatomic) __weak id <PSPDFScrubberBarLayout> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(readonly, nonatomic) PSPDFScrubberBar *scrubberContainer; // @synthesize scrubberContainer=_scrubberContainer;
@property(retain, nonatomic) PSPDFScrubberBarContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(nonatomic) unsigned long long scrubberBarType; // @synthesize scrubberBarType=_scrubberBarType;
- (void).cxx_destruct;
- (struct CGSize)maximumSizeForScrubberBar:(id)arg1;
@property(retain, nonatomic) UIColor *thumbnailBorderColor;
@property(nonatomic) double pageMarkerSizeMultiplier;
@property(nonatomic) double thumbnailMargin;
@property(nonatomic) double rightBorderMargin;
@property(nonatomic) double leftBorderMargin;
@property(retain, nonatomic) UIToolbarAppearance *compactAppearance;
@property(retain, nonatomic) UIToolbarAppearance *standardAppearance;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
@property(retain, nonatomic) UIColor *barTintColor;
@property(nonatomic) _Bool allowTapsOutsidePageArea;
@property(nonatomic) unsigned long long pageIndex;
- (unsigned long long)effectiveScrubberBarType;
@property(readonly, nonatomic) PSPDFAdornmentContainerView *adornmentContainer;
@property(readonly, nonatomic) UIToolbar *toolbar;
- (void)updateToolbarAnimated:(_Bool)arg1;
- (void)updateToolbarForced;
@property(nonatomic) __weak id <PSPDFScrubberBarDelegate> delegate;
@property(nonatomic) __weak id <PSPDFPresentationContext> dataSource;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateScrubberBar;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=isFloating) _Bool floating;
@property(readonly, nonatomic) double containerHeight;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIImageView *emptyThumbnailImageView;
@property(readonly, nonatomic) struct CGSize scrubberBarThumbSize;
@property(readonly, nonatomic) double scrubberBarHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

