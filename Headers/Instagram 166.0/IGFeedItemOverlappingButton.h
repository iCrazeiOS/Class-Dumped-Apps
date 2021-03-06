//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <FBSharedFramework/IGFeedItemOverlappingButtonType-Protocol.h>

@class FBTimer, NSString;
@protocol IGFeedItemOverlappingButtonTypeAnimationStateDelegate;

@interface IGFeedItemOverlappingButton : UIButton <IGFeedItemOverlappingButtonType>
{
    NSString *_primaryText;
    unsigned long long _animationState;
    id <IGFeedItemOverlappingButtonTypeAnimationStateDelegate> _animationStateDelegate;
    FBTimer *_hideCollectionUpsellTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBTimer *hideCollectionUpsellTimer; // @synthesize hideCollectionUpsellTimer=_hideCollectionUpsellTimer;
@property(nonatomic) __weak id <IGFeedItemOverlappingButtonTypeAnimationStateDelegate> animationStateDelegate; // @synthesize animationStateDelegate=_animationStateDelegate;
@property(nonatomic) unsigned long long animationState; // @synthesize animationState=_animationState;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void)_invalidateTimer;
- (void)_animateTranslation:(unsigned long long)arg1 frameWidth:(double)arg2 frameHeight:(double)arg3;
- (void)setTranslatedAnimationButtonState:(unsigned long long)arg1 frameWidth:(double)arg2 frameHeight:(double)arg3;
- (void)layoutSubviews;
- (void)_configureTextVisuals;
- (void)_configureVisuals;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

