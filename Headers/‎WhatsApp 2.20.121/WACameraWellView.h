//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImage, UIImageView, WAGradientView;

@interface WACameraWellView : UIView
{
    UIView *_wellContainer;
    WAGradientView *_gradientView;
    UIImageView *_imageView;
    NSMutableArray *_stackedViews;
    UIView *_topSlice;
    double _stackViewHeight;
    double _stackViewSeparation;
    long long _currentValue;
    long long _maximumValue;
}

- (void).cxx_destruct;
@property(nonatomic) long long maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) long long currentValue; // @synthesize currentValue=_currentValue;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)reset;
- (id)newStackView;
- (void)animateInImageInWell:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addImage:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIImage *image;
- (void)adjustImageViewToFit:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

