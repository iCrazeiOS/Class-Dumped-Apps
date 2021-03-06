//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1SlideshowViewController.h>

@class NSArray, NSLayoutConstraint, TFNLegacyButton, UILayoutGuide, UIView;
@protocol T1ProfileImageViewControllerDelegate;

@interface T1ProfileImageViewController : T1SlideshowViewController
{
    _Bool _canEdit;
    _Bool _viewFullyLoaded;
    id <T1ProfileImageViewControllerDelegate> _profileDelegate;
    UIView *_containerView;
    UILayoutGuide *_containerViewLayoutMarginsGuide;
    NSArray *_visibleChromeContainerViewLayoutMarginsGuideConstraints;
    NSArray *_hiddenChromeContainerViewLayoutMarginsGuideConstraints;
    TFNLegacyButton *_editButton;
    NSLayoutConstraint *_editButtonBottomAnchorConstraint;
    NSLayoutConstraint *_editButtonTopAnchorConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *editButtonTopAnchorConstraint; // @synthesize editButtonTopAnchorConstraint=_editButtonTopAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *editButtonBottomAnchorConstraint; // @synthesize editButtonBottomAnchorConstraint=_editButtonBottomAnchorConstraint;
@property(retain, nonatomic) TFNLegacyButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) NSArray *hiddenChromeContainerViewLayoutMarginsGuideConstraints; // @synthesize hiddenChromeContainerViewLayoutMarginsGuideConstraints=_hiddenChromeContainerViewLayoutMarginsGuideConstraints;
@property(retain, nonatomic) NSArray *visibleChromeContainerViewLayoutMarginsGuideConstraints; // @synthesize visibleChromeContainerViewLayoutMarginsGuideConstraints=_visibleChromeContainerViewLayoutMarginsGuideConstraints;
@property(retain, nonatomic) UILayoutGuide *containerViewLayoutMarginsGuide; // @synthesize containerViewLayoutMarginsGuide=_containerViewLayoutMarginsGuide;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic, getter=isViewFullyLoaded) _Bool viewFullyLoaded; // @synthesize viewFullyLoaded=_viewFullyLoaded;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(nonatomic) __weak id <T1ProfileImageViewControllerDelegate> profileDelegate; // @synthesize profileDelegate=_profileDelegate;
- (void)_t1_action_editButtonDidTap:(id)arg1;
- (void)_t1_main_updateEditButton;
- (void)_t1_main_updateContainerViewLayoutMarginsGuide;
- (void)setChromeVisible:(_Bool)arg1;
- (void)_t1_main_loadEditButtonWithConstraints:(id)arg1;
- (void)_t1_main_loadContainerViewWithConstraints:(id)arg1;
- (void)viewDidLoad;

@end

