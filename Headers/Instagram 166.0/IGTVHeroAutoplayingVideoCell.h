//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGDelayedBouncyCollectionViewCell.h>

#import <InstagramAppCoreFramework/IGTVAutoplayingVideoViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGTVAutoplayingVideoView, NSString, UIView;
@protocol IGTVHeroAutoplayingVideoCellDelegate;

@interface IGTVHeroAutoplayingVideoCell : IGDelayedBouncyCollectionViewCell <IGTVAutoplayingVideoViewDelegate, UIGestureRecognizerDelegate>
{
    IGTVAutoplayingVideoView *_autoplayingVideoView;
    id <IGTVHeroAutoplayingVideoCellDelegate> _delegate;
}

+ (double)coverPhotoWidthForWidth:(double)arg1;
+ (struct CGSize)videoSizeForWidth:(double)arg1;
+ (double)preferredHeightForWidth:(double)arg1;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)didTapSoundIndicatorButtonForAutoplayingVideoView:(id)arg1;
- (void)_handleLongPressGesture:(id)arg1;
- (void)configureWithViewModel:(id)arg1 animated:(_Bool)arg2 delegate:(id)arg3;
- (void)configureWithViewModel:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIView *playbackView;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

