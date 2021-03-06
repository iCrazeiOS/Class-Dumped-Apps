//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGDirectMessageCell.h>

#import <InstagramAppCoreFramework/IGHeartAnimatable-Protocol.h>
#import <InstagramAppCoreFramework/IGImageProgressViewDelegate-Protocol.h>

@class IGDirectMessageBlurredImageView, IGDirectReshareMessageHeaderView, IGDirectTextMessageBubbleView, IGImageProgressView, IGVideoIndicatorView, NSString, UIImageView, UILabel;
@protocol IGDirectPostMessageCellImageViewDelegate;

@interface IGDirectPostMessageCell : IGDirectMessageCell <IGImageProgressViewDelegate, IGHeartAnimatable>
{
    IGDirectReshareMessageHeaderView *_headerView;
    IGImageProgressView *_imageView;
    IGVideoIndicatorView *_videoIndicatorView;
    UIImageView *_sidecarIconView;
    UIImageView *_shoppingIconView;
    IGDirectTextMessageBubbleView *_captionTextView;
    IGDirectTextMessageBubbleView *_commentTextView;
    IGDirectMessageBlurredImageView *_blurredImageView;
    struct CGSize _postContentSize;
    struct CGSize _captionSize;
    struct CGSize _commentTextSize;
    UILabel *_footerLabel;
    id <IGDirectPostMessageCellImageViewDelegate> _imageViewDelegate;
}

@property(nonatomic) __weak id <IGDirectPostMessageCellImageViewDelegate> imageViewDelegate; // @synthesize imageViewDelegate=_imageViewDelegate;
- (void).cxx_destruct;
- (void)progressImageView:(id)arg1 didLoadPreviewImage:(id)arg2 progressiveJPEGScanNumber:(id)arg3;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (id)contentViewForHeartAnimation;
- (double)optionalFooterHeight;
- (struct CGSize)messageContentSize;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

