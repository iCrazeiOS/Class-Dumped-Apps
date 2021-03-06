//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGCustomAlertView-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGAlertDialogStyle, IGTapButton, NSArray, NSAttributedString, NSMapTable, NSString, UILabel, UISelectionFeedbackGenerator;
@protocol IGAlertDialogViewDelegate, IGCustomAlertViewDelegate;

@interface IGAlertDialogView : UIView <UIGestureRecognizerDelegate, IGCustomAlertView>
{
    IGAlertDialogStyle *_style;
    NSString *_titleText;
    NSAttributedString *_descriptionText;
    NSAttributedString *_footerText;
    UIView *_mediaView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_footerLabel;
    NSArray *_buttons;
    NSMapTable *_buttonToActionMap;
    _Bool _showHorizontalButtons;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    IGTapButton *_lastHighlightedHighlightButton;
    _Bool _useButtonStyleDesign;
    id <IGCustomAlertViewDelegate> delegate;
    id <IGAlertDialogViewDelegate> _dialogViewDelegate;
}

+ (id)defaultAlertWithTitleText:(id)arg1 descriptionText:(id)arg2 primaryActionTitle:(id)arg3 primaryActionBlock:(CDUnknownBlockType)arg4 secondaryActionTitle:(id)arg5 secondaryActionBlock:(CDUnknownBlockType)arg6 showHorizontalButtons:(_Bool)arg7 shouldInvert:(_Bool)arg8;
@property(nonatomic) __weak id <IGAlertDialogViewDelegate> dialogViewDelegate; // @synthesize dialogViewDelegate=_dialogViewDelegate;
@property(nonatomic) __weak id <IGCustomAlertViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)_buttonAtLocation:(struct CGPoint)arg1;
- (void)_didPan:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)_presentablePopoverController;
- (void)showOver:(id)arg1;
- (void)show;
- (void)_alertActionButtonTapped:(id)arg1;
- (id)_attributedDescriptionStringForString:(id)arg1;
- (void)_footerLabelTapped;
- (id)_constructFooterLabel;
- (struct CGSize)_actionButtonSize;
- (struct CGSize)_labelFittingSize:(id)arg1;
- (double)_bottomAdjustmentForLabel:(id)arg1;
- (double)_topPaddingForLabel:(id)arg1;
- (double)_adjustRunningYOriginForText:(double)arg1;
- (double)_labelHeightAdjustment:(id)arg1;
- (double)_titleLabelHeightAdjustment;
- (double)_maxContentWidth;
- (double)_layHorozontalActionButton:(id)arg1 withRunningXOriginal:(double)arg2 withYOrigin:(double)arg3;
- (double)_layOutVerticalActionButton:(id)arg1 withRunningYOrigin:(double)arg2;
- (double)_layOutLabelWithRunningYOrigin:(double)arg1 label:(id)arg2;
- (double)_layOutTitleLabelWithRunningYOrigin:(double)arg1;
- (double)_layOutMediaView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_initWithStyle:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 footerText:(id)arg4 actions:(id)arg5 showHorizontalButtons:(_Bool)arg6 useButtonStyleDesign:(_Bool)arg7;
- (id)initWithStyle:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 footerText:(id)arg4 actions:(id)arg5 showHorizontalButtons:(_Bool)arg6;
- (id)initWithStyle:(id)arg1 titleText:(id)arg2 descriptionAtributedText:(id)arg3 actions:(id)arg4 showHorizontalButtons:(_Bool)arg5;
- (id)initWithStyle:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 actions:(id)arg4 showHorizontalButtons:(_Bool)arg5;
- (id)initWithStyle:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 footerText:(id)arg4 actions:(id)arg5 showHorizontalButtons:(_Bool)arg6 userSession:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

