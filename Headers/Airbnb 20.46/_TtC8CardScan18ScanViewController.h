//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8CardScan22ScanBaseViewController.h"

@class NSLayoutConstraint, NSNumber, UIButton, UIColor, UIFont, UIImage, UIImageView, UILabel, UIVisualEffectView, _TtC8CardScan10CornerView, _TtC8CardScan11PreviewView, _TtC8CardScan8BlurView;
@protocol _TtP8CardScan21ScanStringsDataSource_;

@interface _TtC8CardScan18ScanViewController : _TtC8CardScan22ScanBaseViewController
{
    // Error parsing type: , name: scanDelegate
    // Error parsing type: , name: captureOutputDelegate
    // Error parsing type: , name: stringDataSource
    // Error parsing type: , name: allowSkip
    // Error parsing type: , name: torchLevel
    // Error parsing type: , name: scanQrCode
    // Error parsing type: , name: navigationBarIsHidden
    // Error parsing type: , name: hideBackButtonImage
    // Error parsing type: , name: backButtonImageToTextConstraint
    // Error parsing type: , name: backButtonWidthConstraint
    // Error parsing type: , name: backButtonImage
    // Error parsing type: , name: backButtonColor
    // Error parsing type: , name: backButtonFont
    // Error parsing type: , name: scanCardFont
    // Error parsing type: , name: positionCardFont
    // Error parsing type: , name: skipButtonFont
    // Error parsing type: , name: backButtonImageToTextDelta
    // Error parsing type: , name: torchButtonImage
    // Error parsing type: , name: cornerColor
    // Error parsing type: , name: expiryLabel
    // Error parsing type: , name: cardNumberLabel
    // Error parsing type: , name: blurView
    // Error parsing type: , name: scanCardLabel
    // Error parsing type: , name: positionCardLabel
    // Error parsing type: , name: skipButton
    // Error parsing type: , name: backButton
    // Error parsing type: , name: backButtonImageButton
    // Error parsing type: , name: debugImageView
    // Error parsing type: , name: previewView
    // Error parsing type: , name: regionOfInterestLabel
    // Error parsing type: , name: regionOfInterestAspectConstraint
    // Error parsing type: , name: torchButton
    // Error parsing type: , name: torchButtonWidthConstraint
    // Error parsing type: , name: torchButtonHeightConstraint
    // Error parsing type: , name: torchButtonSize
    // Error parsing type: , name: cornerView
    // Error parsing type: , name: cornerBorderColor
    // Error parsing type: , name: denyPermissionTitle
    // Error parsing type: , name: denyPermissionMessage
    // Error parsing type: , name: denyPermissionButtonText
    // Error parsing type: , name: calledDelegate
    // Error parsing type: , name: backgroundBlurEffectView
}

+ (id)createViewControllerWithDelegate:(id)arg1 configuration:(id)arg2;
+ (id)createViewControllerWithDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)toggleTorch:(id)arg1;
- (void)onScannedCardWithNumber:(id)arg1 expiryYear:(id)arg2 expiryMonth:(id)arg3 scannedImage:(id)arg4;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)useCurrentFrameNumberWithErrorCorrectedNumber:(id)arg1 currentFrameNumber:(id)arg2;
- (void)showCardNumber:(id)arg1 expiry:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onCameraPermissionDeniedWithShowedPrompt:(_Bool)arg1;
- (void)cancelWithCallDelegate:(_Bool)arg1;
- (void)skipButtonPress;
- (void)backButtonPress:(id)arg1;
- (void)backTextPress;
@property(nonatomic, retain) UIVisualEffectView *backgroundBlurEffectView; // @synthesize backgroundBlurEffectView;
@property(nonatomic) __weak _TtC8CardScan10CornerView *cornerView; // @synthesize cornerView;
@property(nonatomic) __weak NSLayoutConstraint *torchButtonHeightConstraint; // @synthesize torchButtonHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *torchButtonWidthConstraint; // @synthesize torchButtonWidthConstraint;
@property(nonatomic) __weak UIButton *torchButton; // @synthesize torchButton;
@property(nonatomic) __weak NSLayoutConstraint *regionOfInterestAspectConstraint; // @synthesize regionOfInterestAspectConstraint;
@property(nonatomic) __weak UILabel *regionOfInterestLabel; // @synthesize regionOfInterestLabel;
@property(nonatomic) __weak _TtC8CardScan11PreviewView *previewView; // @synthesize previewView;
@property(nonatomic) __weak UIImageView *debugImageView; // @synthesize debugImageView;
@property(nonatomic) __weak UIButton *backButtonImageButton; // @synthesize backButtonImageButton;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton;
@property(nonatomic) __weak UIButton *skipButton; // @synthesize skipButton;
@property(nonatomic) __weak UILabel *positionCardLabel; // @synthesize positionCardLabel;
@property(nonatomic) __weak UILabel *scanCardLabel; // @synthesize scanCardLabel;
@property(nonatomic) __weak _TtC8CardScan8BlurView *blurView; // @synthesize blurView;
@property(nonatomic) __weak UILabel *cardNumberLabel; // @synthesize cardNumberLabel;
@property(nonatomic) __weak UILabel *expiryLabel; // @synthesize expiryLabel;
@property(nonatomic, retain) UIColor *cornerColor; // @synthesize cornerColor;
@property(nonatomic, retain) UIImage *torchButtonImage; // @synthesize torchButtonImage;
@property(nonatomic, retain) NSNumber *backButtonImageToTextDelta; // @synthesize backButtonImageToTextDelta;
@property(nonatomic, retain) UIFont *skipButtonFont; // @synthesize skipButtonFont;
@property(nonatomic, retain) UIFont *positionCardFont; // @synthesize positionCardFont;
@property(nonatomic, retain) UIFont *scanCardFont; // @synthesize scanCardFont;
@property(nonatomic, retain) UIFont *backButtonFont; // @synthesize backButtonFont;
@property(nonatomic, retain) UIColor *backButtonColor; // @synthesize backButtonColor;
@property(nonatomic, retain) UIImage *backButtonImage; // @synthesize backButtonImage;
@property(nonatomic) __weak NSLayoutConstraint *backButtonWidthConstraint; // @synthesize backButtonWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *backButtonImageToTextConstraint; // @synthesize backButtonImageToTextConstraint;
@property(nonatomic) _Bool hideBackButtonImage; // @synthesize hideBackButtonImage;
@property(nonatomic) _Bool allowSkip; // @synthesize allowSkip;
@property(nonatomic) __weak id <_TtP8CardScan21ScanStringsDataSource_> stringDataSource; // @synthesize stringDataSource;

@end

