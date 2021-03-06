//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, WAGrabHandleView, WALabel;
@protocol WAStatusViewerFooterViewDelegate;

@interface WAStatusViewerFooterView : UIView
{
    UIImageView *_gradientImageView;
    UIView *_arrowView;
    WAGrabHandleView *_grabHandleView;
    UILabel *_buttonLabel;
    WALabel *_captionLabel;
    UIView *_separatorView;
    struct CGSize _prevSize;
    double _captionLabelHorizontalOffset;
    long long _numberOfMinimizedLines;
    NSString *_captionText;
    _Bool _captionExpanded;
    id <WAStatusViewerFooterViewDelegate> _delegate;
    double _captionAlpha;
    double _arrowAlpha;
    double _maxHeight;
    struct CGAffineTransform _arrowTransform;
}

+ (id)textFormatter;
- (void).cxx_destruct;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) struct CGAffineTransform arrowTransform; // @synthesize arrowTransform=_arrowTransform;
@property(nonatomic) double arrowAlpha; // @synthesize arrowAlpha=_arrowAlpha;
@property(nonatomic, getter=isCaptionExpanded) _Bool captionExpanded; // @synthesize captionExpanded=_captionExpanded;
@property(nonatomic) double captionAlpha; // @synthesize captionAlpha=_captionAlpha;
@property(nonatomic) __weak id <WAStatusViewerFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateAlphaValues;
@property(readonly, nonatomic) _Bool canExpandCaption;
@property(nonatomic, getter=isGradientHidden) _Bool gradientHidden;
- (void)updateNumberOfCaptionLines;
@property(copy, nonatomic) NSString *captionText;
- (void)setButtonText:(id)arg1 accesibilityLabel:(id)arg2;
- (id)formatString:(id)arg1 withAttributes:(id)arg2;
- (void)setCaptionLabelFontSize;
- (void)resize;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

