//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView, WAActivityIndicatorView;
@protocol WAStickerViewDelegate;

@interface WAStickerView : UIView
{
    CDUnknownBlockType _loadingImageProvider;
    CDUnknownBlockType _errorImageProvider;
    UIImage *_loadingImage;
    UIImage *_errorImage;
    _Bool _showLoadingPlaceholder;
    _Bool _allowsIndefiniteAnimation;
    _Bool _hasPendingAnimation;
    id <WAStickerViewDelegate> _delegate;
    UIImage *_animatedImage;
    long long _state;
    WAActivityIndicatorView *_activityIndicator;
    UIButton *_downloadButton;
    UIImageView *_imageView;
    UIImageView *_animationBadgeView;
    double _animationLastResetTime;
}

+ (id)stickerViewWithLegacyBackground_allowsIndefiniteAnimation:(_Bool)arg1;
- (void).cxx_destruct;
@property(nonatomic) double animationLastResetTime; // @synthesize animationLastResetTime=_animationLastResetTime;
@property(nonatomic) _Bool hasPendingAnimation; // @synthesize hasPendingAnimation=_hasPendingAnimation;
@property(readonly, nonatomic) UIImageView *animationBadgeView; // @synthesize animationBadgeView=_animationBadgeView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(readonly, nonatomic) WAActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) _Bool allowsIndefiniteAnimation; // @synthesize allowsIndefiniteAnimation=_allowsIndefiniteAnimation;
@property(nonatomic) _Bool showLoadingPlaceholder; // @synthesize showLoadingPlaceholder=_showLoadingPlaceholder;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(nonatomic) __weak id <WAStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (float)animationPreviewRepeatCount;
- (float)animationRepeatCount;
- (id)imageLayer;
- (_Bool)hasOngoingAnimation;
- (void)removeAnimation;
- (void)addAnimationWithRepeatCount:(float)arg1;
- (void)startShakeAnimation;
- (void)stopAnimation;
- (void)startAnimationPreview;
- (void)startAnimation;
@property(readonly, nonatomic) _Bool animatable;
@property(readonly, nonatomic) _Bool animating;
@property(nonatomic) _Bool shouldShowAnimationBadge;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)setImage:(id)arg1 autoplayAnimation:(_Bool)arg2;
@property(retain, nonatomic) UIImage *image;
- (void)tapDownloadButton;
- (void)updateAppearance;
- (void)didMoveToWindow;
- (id)imageViewPlaceholder;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1 activityIndicatorViewStyle:(long long)arg2 loadingImageProvider:(CDUnknownBlockType)arg3 errorImageProvider:(CDUnknownBlockType)arg4 allowsIndefiniteAnimation:(_Bool)arg5;
- (id)initWithAllowsIndefiniteAnimation:(_Bool)arg1 loadingImageProvider:(CDUnknownBlockType)arg2 errorImageProvider:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1 activityIndicatorViewStyle:(long long)arg2 allowsIndefiniteAnimation:(_Bool)arg3;

@end

