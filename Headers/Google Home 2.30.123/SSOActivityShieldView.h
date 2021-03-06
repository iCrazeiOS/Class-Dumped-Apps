//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDCActivityIndicator, UILabel;

@interface SSOActivityShieldView : UIView
{
    long long _colorTheme;
    UILabel *_captionLabel;
    MDCActivityIndicator *_activityIndicator;
    UIView *_backgroundView;
}

+ (id)backgroundColorFromColorTheme:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MDCActivityIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(nonatomic) long long colorTheme; // @synthesize colorTheme=_colorTheme;
- (id)bestGuessViewWithTopViewController:(id)arg1;
- (id)bestGuessView;
- (void)stopAndRemoveFromParentView;
- (void)animateIn;
- (void)displayAndAnimateInView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

