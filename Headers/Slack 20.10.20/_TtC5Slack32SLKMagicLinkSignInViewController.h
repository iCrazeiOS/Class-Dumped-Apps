//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, SLKActivityIndicator, UIButton, UILabel;

@interface _TtC5Slack32SLKMagicLinkSignInViewController : UIViewController
{
    // Error parsing type: , name: signInHelper
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: detailLabel
    // Error parsing type: , name: passwordButton
    // Error parsing type: , name: magicLinkButton
    // Error parsing type: , name: centeringImageViewWidth
    // Error parsing type: , name: centeringViewHeight
    // Error parsing type: , name: errorMessageLabel
    // Error parsing type: , name: activityIndicator
    // Error parsing type: , name: passwordMagicLinkEvent
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)magicLink;
- (void)password;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, retain) SLKActivityIndicator *activityIndicator; // @synthesize activityIndicator;
@property(nonatomic, retain) UILabel *errorMessageLabel; // @synthesize errorMessageLabel;
@property(nonatomic) __weak NSLayoutConstraint *centeringViewHeight; // @synthesize centeringViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *centeringImageViewWidth; // @synthesize centeringImageViewWidth;
@property(nonatomic, retain) UIButton *magicLinkButton; // @synthesize magicLinkButton;
@property(nonatomic, retain) UIButton *passwordButton; // @synthesize passwordButton;
@property(nonatomic, retain) UILabel *detailLabel; // @synthesize detailLabel;
@property(nonatomic, retain) UILabel *titleLabel; // @synthesize titleLabel;

@end

