//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIButton, UILabel, UIScrollView, UIView, _TtC7NordVPN13NordTextField, _TtC7NordVPN17NordPrimaryButton, _TtC7NordVPN25TermsAndConditionTextView;

@interface _TtC7NordVPN20SignUpViewController : UIViewController
{
    // Error parsing type: , name: containerView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: emailField
    // Error parsing type: , name: passwordField
    // Error parsing type: , name: signUpButton
    // Error parsing type: , name: passwordLengthLabel
    // Error parsing type: , name: loginButton
    // Error parsing type: , name: loginLabel
    // Error parsing type: , name: passwordRevealButton
    // Error parsing type: , name: termsAndConditionTextView
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: passwordFieldHeightConstraint
    // Error parsing type: , name: activityIndicator
    // Error parsing type: , name: email
    // Error parsing type: , name: password
    // Error parsing type: , name: rightInset
    // Error parsing type: , name: onLoginTap
    // Error parsing type: , name: onCompletion
    // Error parsing type: , name: dismissAction
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)signUp:(id)arg1;
- (void)loginPressed:(id)arg1;
- (void)showHidePasswordButtonAction:(id)arg1;
- (void)passwordEditingChanged:(id)arg1;
- (void)emailEditingChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSLayoutConstraint *passwordFieldHeightConstraint; // @synthesize passwordFieldHeightConstraint;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak _TtC7NordVPN25TermsAndConditionTextView *termsAndConditionTextView; // @synthesize termsAndConditionTextView;
@property(nonatomic) __weak UIButton *passwordRevealButton; // @synthesize passwordRevealButton;
@property(nonatomic) __weak UILabel *loginLabel; // @synthesize loginLabel;
@property(nonatomic) __weak UIButton *loginButton; // @synthesize loginButton;
@property(nonatomic) __weak UILabel *passwordLengthLabel; // @synthesize passwordLengthLabel;
@property(nonatomic) __weak _TtC7NordVPN17NordPrimaryButton *signUpButton; // @synthesize signUpButton;
@property(nonatomic) __weak _TtC7NordVPN13NordTextField *passwordField; // @synthesize passwordField;
@property(nonatomic) __weak _TtC7NordVPN13NordTextField *emailField; // @synthesize emailField;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView;

@end

