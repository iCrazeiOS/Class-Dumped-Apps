//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGStoryInlineMediaOverlayViewDelegate-Protocol.h>

@class IGStoryInlineMediaOverlayView, NSString, UILabel, UITapGestureRecognizer, UIView;
@protocol IGStoryInlineCollectionViewCellDelegate, IGStoryPlayerMediaViewType;

@interface IGStoryInlineCollectionViewCell : UICollectionViewCell <IGStoryInlineMediaOverlayViewDelegate>
{
    UILabel *_feedHeaderView;
    UITapGestureRecognizer *_singleTapRecognizer;
    UIView<IGStoryPlayerMediaViewType> *_mediaView;
    IGStoryInlineMediaOverlayView *_overlayView;
    id <IGStoryInlineCollectionViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryInlineCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGStoryInlineMediaOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) UIView<IGStoryPlayerMediaViewType> *mediaView; // @synthesize mediaView=_mediaView;
- (void)storyInlineMediaOverlayView:(id)arg1 didTapOnStoryIndicator:(id)arg2;
- (void)_onTapOverlayView;
@property(readonly, nonatomic) UIView *profilePicView;
- (void)updateMediaCellWithCurrentStoryItem:(id)arg1 userSession:(id)arg2 delegate:(id)arg3 playerPreloadPool:(id)arg4 playbackLoggingConfig:(id)arg5 module:(id)arg6;
- (void)updateFeedHeaderWithUsername:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

