//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGAccessFooterViewDelegate-Protocol.h>

@class IGAccessFooterView, IGCoreTextView, IGNUXLayoutSpec, IGRetroRegistrationNextButton, NSString, UIButton, UILabel;
@protocol IGRegistrationSuggestUsernameViewDelegate;

@interface IGRetroRegistrationSuggestUsernameStepView : UIView <IGAccessFooterViewDelegate>
{
    UILabel *_usernameLabel;
    UILabel *_usernameDescriptionLabel;
    UIButton *_changeUsernameButton;
    id <IGRegistrationSuggestUsernameViewDelegate> _delegate;
    NSString *_tosVersion;
    IGNUXLayoutSpec *_layoutSpec;
    IGAccessFooterView *_footerView;
    IGRetroRegistrationNextButton *_suggestUsernameNextButton;
    IGCoreTextView *_termView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGCoreTextView *termView; // @synthesize termView=_termView;
@property(readonly, nonatomic) IGRetroRegistrationNextButton *suggestUsernameNextButton; // @synthesize suggestUsernameNextButton=_suggestUsernameNextButton;
- (void)accessFooterViewDidTapSecondaryButton:(id)arg1;
- (void)accessFooterViewDidTapPrimaryButton:(id)arg1;
- (void)_didTapChangeUsernameButton;
- (void)_didTapNextButton;
- (id)_createChangeUsernameButton;
- (id)_createNextButtonWithTitle:(id)arg1;
- (id)_createUsernameDescriptionLabelWithLayoutSpec:(id)arg1 welcomeSubheaderText:(id)arg2;
- (id)_createUsernameLabelWithLayoutSpec:(id)arg1 welcomeHeaderText:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 layoutSpec:(id)arg3 welcomeHeaderText:(id)arg4 welcomeSubheaderText:(id)arg5 signUpButtonText:(id)arg6 tosVersion:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

