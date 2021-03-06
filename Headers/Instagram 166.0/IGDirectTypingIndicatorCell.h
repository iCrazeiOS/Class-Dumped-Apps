//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGDirectAvatarView, IGDirectMessageBubbleStyle, IGDirectMessageCellLayoutSpec, IGDirectTypingIndicatorDotsView, IGDirectTypingIndicatorState, IGTapButton, UILabel, UIView;
@protocol IGDirectTypingIndicatorCellDelegate;

@interface IGDirectTypingIndicatorCell : UICollectionViewCell
{
    IGDirectTypingIndicatorState *_indicatorState;
    _Bool _isAnimating;
    _Bool _shouldAnimateIntoView;
    _Bool _shouldUseAnimatedDots;
    _Bool _receiveAnimationEnabled;
    id <IGDirectTypingIndicatorCellDelegate> _delegate;
    IGDirectAvatarView *_avatarImageView;
    UIView *_avatarBackgroundView;
    UILabel *_statusLabel;
    UIView *_statusLabelContainer;
    UILabel *_threadPresenceLabel;
    IGTapButton *_threadPresenceButton;
    IGDirectTypingIndicatorDotsView *_dotsIndicatorView;
    IGDirectMessageCellLayoutSpec *_layoutSpec;
    IGDirectMessageBubbleStyle *_bubbleStyle;
}

+ (double)heightForViewModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool receiveAnimationEnabled; // @synthesize receiveAnimationEnabled=_receiveAnimationEnabled;
@property(nonatomic) _Bool shouldUseAnimatedDots; // @synthesize shouldUseAnimatedDots=_shouldUseAnimatedDots;
@property(nonatomic) _Bool shouldAnimateIntoView; // @synthesize shouldAnimateIntoView=_shouldAnimateIntoView;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) IGDirectMessageBubbleStyle *bubbleStyle; // @synthesize bubbleStyle=_bubbleStyle;
@property(retain, nonatomic) IGDirectMessageCellLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) IGDirectTypingIndicatorDotsView *dotsIndicatorView; // @synthesize dotsIndicatorView=_dotsIndicatorView;
@property(readonly, nonatomic) IGTapButton *threadPresenceButton; // @synthesize threadPresenceButton=_threadPresenceButton;
@property(readonly, nonatomic) UILabel *threadPresenceLabel; // @synthesize threadPresenceLabel=_threadPresenceLabel;
@property(readonly, nonatomic) UIView *statusLabelContainer; // @synthesize statusLabelContainer=_statusLabelContainer;
@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(readonly, nonatomic) UIView *avatarBackgroundView; // @synthesize avatarBackgroundView=_avatarBackgroundView;
@property(readonly, nonatomic) IGDirectAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak id <IGDirectTypingIndicatorCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapThreadPresenceButton:(id)arg1;
- (void)_didTapAvatar:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)_animateAvatarBackground;
- (void)_layoutAvatarBackground;
- (void)_layoutAvatarBeginFrame:(_Bool)arg1;
- (double)_avatarSize;
- (double)_avatarBackgroundSize;
- (void)_layoutThreadPresenceButton;
- (void)_animateDotsIndicatorView;
- (void)_animateStatusLabel;
- (void)_animateProfileImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)startAnimatingWithCompletion:(CDUnknownBlockType)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)_setupProfilePicture;
- (void)_setupStatusLabel;
- (void)_setupDotsIndicatorView;
- (void)_setupThreadPresenceButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

