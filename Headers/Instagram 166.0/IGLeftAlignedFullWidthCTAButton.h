//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGALButton.h>

@class FBTimer, NSString, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface IGLeftAlignedFullWidthCTAButton : IGALButton
{
    _Bool _isShownInDarkTheme;
    NSString *_primaryText;
    UIColor *_filledInBackgroundColor;
    unsigned long long _buttonState;
    NSString *_secondaryText;
    UIColor *_defaultTitleColor;
    UIImage *_leftAccessoryImage;
    unsigned long long _rightAccessoryPosition;
    UIView *_bottomHairline;
    UILabel *_destinationLabel;
    UIImageView *_leftAccessoryImageView;
    UIImageView *_rightAccessoryImageView;
    FBTimer *_hideCollectionUpsellTimer;
    UIColor *_leftAccessoryImageDefaultColor;
    UIColor *_rightAccessoryImageDefaultColor;
    struct UIEdgeInsets _tappableAreaInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *rightAccessoryImageDefaultColor; // @synthesize rightAccessoryImageDefaultColor=_rightAccessoryImageDefaultColor;
@property(retain, nonatomic) UIColor *leftAccessoryImageDefaultColor; // @synthesize leftAccessoryImageDefaultColor=_leftAccessoryImageDefaultColor;
@property(retain, nonatomic) FBTimer *hideCollectionUpsellTimer; // @synthesize hideCollectionUpsellTimer=_hideCollectionUpsellTimer;
@property(readonly, nonatomic) UIImageView *rightAccessoryImageView; // @synthesize rightAccessoryImageView=_rightAccessoryImageView;
@property(readonly, nonatomic) UIImageView *leftAccessoryImageView; // @synthesize leftAccessoryImageView=_leftAccessoryImageView;
@property(readonly, nonatomic) UILabel *destinationLabel; // @synthesize destinationLabel=_destinationLabel;
@property(readonly, nonatomic) UIView *bottomHairline; // @synthesize bottomHairline=_bottomHairline;
@property(nonatomic) _Bool isShownInDarkTheme; // @synthesize isShownInDarkTheme=_isShownInDarkTheme;
@property(nonatomic) struct UIEdgeInsets tappableAreaInsets; // @synthesize tappableAreaInsets=_tappableAreaInsets;
@property(nonatomic) unsigned long long rightAccessoryPosition; // @synthesize rightAccessoryPosition=_rightAccessoryPosition;
@property(retain, nonatomic) UIImage *leftAccessoryImage; // @synthesize leftAccessoryImage=_leftAccessoryImage;
@property(copy, nonatomic) UIColor *defaultTitleColor; // @synthesize defaultTitleColor=_defaultTitleColor;
@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(nonatomic) unsigned long long buttonState; // @synthesize buttonState=_buttonState;
@property(copy, nonatomic) UIColor *filledInBackgroundColor; // @synthesize filledInBackgroundColor=_filledInBackgroundColor;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void)_updateAccessibilityLabel;
- (id)_getIconImageTintColorDefaultColor:(id)arg1;
- (void)_configureBackgroundColorInHighlightedState;
- (void)_configureAccessoryImageView:(id)arg1 defaultTintColor:(id)arg2 size:(struct CGSize)arg3;
- (void)_configureRightAccessoryImageView;
- (void)_configureLeftAccessoryImageView;
- (void)_configureTextVisualForCTAButtonState:(unsigned long long)arg1;
- (void)_configureButtonVisualsForCTAButtonState:(unsigned long long)arg1;
- (void)_configureTextAndButtonVisual:(unsigned long long)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateHairLineViewColor:(id)arg1;
- (void)updateRightAccessoryColor:(id)arg1;
- (void)updateLeftAccessoryColor:(id)arg1;
- (void)updateDestinationText:(id)arg1;
- (void)_animateToButtonState:(unsigned long long)arg1 duration:(double)arg2;
- (void)setButtonState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)_isInFilledState;
- (_Bool)isCTAVisible;
- (_Bool)_isDestinationAdLabelVisible;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

