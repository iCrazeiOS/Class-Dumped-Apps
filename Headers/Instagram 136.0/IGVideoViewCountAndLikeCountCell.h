//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGCoreTextView, UIImageView, UILabel, UITapGestureRecognizer;

@interface IGVideoViewCountAndLikeCountCell : UICollectionViewCell
{
    unsigned long long _style;
    IGCoreTextView *_disclaimerTextView;
    UILabel *_viewCountLabel;
    UILabel *_likeCountLabel;
    UIImageView *_heartIcon;
    UIImageView *_viewIcon;
    UITapGestureRecognizer *_disclaimerTextViewTapRecognizer;
}

- (void).cxx_destruct;
- (void)_displayLikerConfigUtility;
- (void)layoutSubviews;
- (void)configureWithFeedItem:(id)arg1 userSession:(id)arg2 disclaimerText:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

