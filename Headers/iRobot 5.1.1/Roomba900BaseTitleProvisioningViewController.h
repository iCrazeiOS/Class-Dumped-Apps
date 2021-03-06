//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseProvisioningViewController.h"

@class NSLayoutConstraint, NSSet, NSString, UILabel, UIScrollView, UITextView;

@interface Roomba900BaseTitleProvisioningViewController : BaseProvisioningViewController
{
    NSString *_provisioningTitleText;
    NSString *_provisioningSubTitleText;
    NSLayoutConstraint *_provisioningContentTopPaddingConstraint;
    NSSet *_provisioningTitleTextsToAdjustMaximumHeight;
    NSSet *_provisioningSubTitleTextsToAdjustMaximumHeight;
    NSLayoutConstraint *_provisioningTitleSizeToFitConstraint;
    NSLayoutConstraint *_scrollViewBottomAnchorConstraint;
    NSLayoutConstraint *_provisioningSubTitleSizeToFitConstraint;
    UITextView *_provisioningTitleTextView;
    UITextView *_provisioningSubTitleTextView;
    NSLayoutConstraint *_provisioningTitleTopConstraint;
    NSLayoutConstraint *_provisioningSubTitleTopConstraint;
    NSLayoutConstraint *_provisioningTitleOutOfViewTopConstraint;
    NSLayoutConstraint *_provisioningContentTopToSuperViewConstraint;
    double _maxTitleHeight;
    double _maxSubTitleHeight;
    UIScrollView *_scrollView;
    UILabel *_contentDescriptionLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *contentDescriptionLabel; // @synthesize contentDescriptionLabel=_contentDescriptionLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double maxSubTitleHeight; // @synthesize maxSubTitleHeight=_maxSubTitleHeight;
@property(nonatomic) double maxTitleHeight; // @synthesize maxTitleHeight=_maxTitleHeight;
@property(retain, nonatomic) NSLayoutConstraint *provisioningContentTopToSuperViewConstraint; // @synthesize provisioningContentTopToSuperViewConstraint=_provisioningContentTopToSuperViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *provisioningTitleOutOfViewTopConstraint; // @synthesize provisioningTitleOutOfViewTopConstraint=_provisioningTitleOutOfViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *provisioningSubTitleTopConstraint; // @synthesize provisioningSubTitleTopConstraint=_provisioningSubTitleTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *provisioningTitleTopConstraint; // @synthesize provisioningTitleTopConstraint=_provisioningTitleTopConstraint;
@property(retain, nonatomic) UITextView *provisioningSubTitleTextView; // @synthesize provisioningSubTitleTextView=_provisioningSubTitleTextView;
@property(retain, nonatomic) UITextView *provisioningTitleTextView; // @synthesize provisioningTitleTextView=_provisioningTitleTextView;
@property(retain, nonatomic) NSLayoutConstraint *provisioningSubTitleSizeToFitConstraint; // @synthesize provisioningSubTitleSizeToFitConstraint=_provisioningSubTitleSizeToFitConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrollViewBottomAnchorConstraint; // @synthesize scrollViewBottomAnchorConstraint=_scrollViewBottomAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *provisioningTitleSizeToFitConstraint; // @synthesize provisioningTitleSizeToFitConstraint=_provisioningTitleSizeToFitConstraint;
@property(retain, nonatomic) NSSet *provisioningSubTitleTextsToAdjustMaximumHeight; // @synthesize provisioningSubTitleTextsToAdjustMaximumHeight=_provisioningSubTitleTextsToAdjustMaximumHeight;
@property(retain, nonatomic) NSSet *provisioningTitleTextsToAdjustMaximumHeight; // @synthesize provisioningTitleTextsToAdjustMaximumHeight=_provisioningTitleTextsToAdjustMaximumHeight;
@property(retain, nonatomic) NSLayoutConstraint *provisioningContentTopPaddingConstraint; // @synthesize provisioningContentTopPaddingConstraint=_provisioningContentTopPaddingConstraint;
@property(retain, nonatomic) NSString *provisioningSubTitleText; // @synthesize provisioningSubTitleText=_provisioningSubTitleText;
@property(retain, nonatomic) NSString *provisioningTitleText; // @synthesize provisioningTitleText=_provisioningTitleText;
- (void)notifySubHeaderUpdated;
- (void)notifyHeaderUpdated;
- (void)configureAccessibility;
- (void)configureAccessiblityForMediaView:(id)arg1;
- (void)configureAccessibilityForTitle;
- (id)mediaAccessibilityLabel;
- (void)scrollViewBottomAnchorChanged:(id)arg1;
- (void)addNavigationBarTitle:(id)arg1 andLineSeparator:(_Bool)arg2;
- (void)setContentDescriptionAttributes:(id)arg1;
- (void)setProvisioningSubTitleAttributes:(id)arg1;
- (void)setProvisioningTitleAttributes:(id)arg1;
- (void)setContentDescription:(id)arg1 toSuperview:(id)arg2;
- (void)addView:(id)arg1 toSuperview:(id)arg2;
- (id)addProvisioningInfoLabel:(id)arg1 toSuperview:(id)arg2;
- (void)addMediaView:(id)arg1 toSuperview:(id)arg2;
- (id)addAnimationViewWithURL:(id)arg1 toSuperView:(id)arg2;
- (void)addMarginConstraintsToContent:(id)arg1 andSuperview:(id)arg2;
- (void)updateContentViewTopConstraint;
- (void)overrideMaximumSubTitleHeightWithTitleText:(id)arg1;
- (void)overrideMaximumTitleHeightWithTitleText:(id)arg1;
- (void)hideProvisioningTitle:(_Bool)arg1;
- (void)moveProvisioningTitleOutOfView:(_Bool)arg1;
- (id)contentViewBottomAnchor;
- (id)provisioningContentView;
- (void)viewDidLoad;

@end

