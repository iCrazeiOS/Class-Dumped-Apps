//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IBGInPlaceCarousel, NSLayoutConstraint, UIActivityIndicatorView, UIButton, UIImageView, UIView;

@interface IBGAttachmentCell : UICollectionViewCell
{
    long long _type;
    UIImageView *_imageView;
    UIActivityIndicatorView *_activityIndicator;
    UIButton *_removeButton;
    UIView *_dimmedCircleView;
    IBGInPlaceCarousel *_actionImageView;
    CDUnknownBlockType _removeHandler;
    NSLayoutConstraint *_carouselHeightConstraint;
    NSLayoutConstraint *_carouselCenterXConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *carouselCenterXConstraint; // @synthesize carouselCenterXConstraint=_carouselCenterXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *carouselHeightConstraint; // @synthesize carouselHeightConstraint=_carouselHeightConstraint;
@property(copy, nonatomic) CDUnknownBlockType removeHandler; // @synthesize removeHandler=_removeHandler;
@property(retain, nonatomic) IBGInPlaceCarousel *actionImageView; // @synthesize actionImageView=_actionImageView;
@property(retain, nonatomic) UIView *dimmedCircleView; // @synthesize dimmedCircleView=_dimmedCircleView;
@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)addAccessibilityLabelWithType:(long long)arg1;
- (void)tappedRemoveButton:(id)arg1;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

