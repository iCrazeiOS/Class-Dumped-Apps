//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUELabel, SPTListenTogetherBetaLabel, SPTSocialListeningSessionScannableView, SPTSocialListeningSessionViewStyle, UIActivityIndicatorView, UIStackView;

@protocol SPTSocialListeningSessionViewProtocol <GLUEStyleable>
@property(readonly, nonatomic) UIStackView *facepileStackView;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property(readonly, nonatomic) GLUEButton *leaveSessionButton;
@property(readonly, nonatomic) GLUELabel *privacyDisclaimerLabel;
@property(readonly, nonatomic) GLUEButton *seeListenersButton;
@property(readonly, nonatomic) GLUEButton *scanCodeButton;
@property(readonly, nonatomic) GLUEButton *sessionButton;
@property(readonly, nonatomic) GLUEButton *tryAgainButton;
@property(readonly, nonatomic) GLUELabel *tryAgainLabel;
@property(readonly, nonatomic) SPTSocialListeningSessionScannableView *scannableView;
@property(readonly, nonatomic) GLUELabel *descriptionLabel;
@property(readonly, nonatomic) SPTListenTogetherBetaLabel *betaLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel;
- (void)glue_applyStyle:(SPTSocialListeningSessionViewStyle *)arg1;
- (void)setSessionActiveIndicatorViewVisible:(_Bool)arg1;
@end

