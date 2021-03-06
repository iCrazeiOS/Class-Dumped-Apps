//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer, UIImageView, UILabel;
@protocol AWEFeedHotSearchMoreViewDelegate;

@interface AWEFeedHotSearchMoreView : UIView
{
    _Bool _isNearbyStyle;
    id <AWEFeedHotSearchMoreViewDelegate> _delegate;
    UILabel *_contentLabel;
    UILabel *_animatedLabel;
    UILabel *_moreLabel;
    UIImageView *_arrowImageView;
    UIImageView *_fireIconImageView;
    NSArray *_hotSearchWords;
    long long _index;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSArray *hotSearchWords; // @synthesize hotSearchWords=_hotSearchWords;
@property(retain, nonatomic) UIImageView *fireIconImageView; // @synthesize fireIconImageView=_fireIconImageView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(nonatomic) _Bool isNearbyStyle; // @synthesize isNearbyStyle=_isNearbyStyle;
@property(retain, nonatomic) UILabel *animatedLabel; // @synthesize animatedLabel=_animatedLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak id <AWEFeedHotSearchMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)trackClick;
- (void)startAnimation;
- (void)configureUIWithHotSearchWords:(id)arg1;
- (void)layoutSubviews;
- (void)configureUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

