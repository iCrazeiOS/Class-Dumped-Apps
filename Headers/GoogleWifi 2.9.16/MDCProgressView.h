//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIProgressView;

@interface MDCProgressView : UIView
{
    _Bool _animatingHide;
    float _progress;
    long long _backwardProgressAnimationMode;
    UIView *_progressView;
    UIView *_trackView;
}

+ (id)defaultTrackTintColorForProgressTintColor:(id)arg1;
+ (unsigned long long)animationOptions;
+ (double)animationDuration;
@property(nonatomic) _Bool animatingHide; // @synthesize animatingHide=_animatingHide;
@property(retain, nonatomic) UIView *trackView; // @synthesize trackView=_trackView;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) long long backwardProgressAnimationMode; // @synthesize backwardProgressAnimationMode=_backwardProgressAnimationMode;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)updateTrackView;
- (void)updateProgressView;
- (void)announceAccessibilityValueChange;
- (void)accessibilityValueDidChange;
- (id)accessibilityValue;
@property(readonly, nonatomic) UIProgressView *accessibilityProgressView;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHidden:(_Bool)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIColor *trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)commonMDCProgressViewInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

