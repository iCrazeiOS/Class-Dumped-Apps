//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOScrollViewKeyboardManagerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class GOOTextField, JETButtonFooter, JETPSKValidator, JETSSIDValidator, NSString, QTMButton, UILabel, UIScrollView;
@protocol JETSetupReadyViewDelegate;

@interface JETSetupConfigView : UIView <GOOScrollViewKeyboardManagerDelegate, UITextFieldDelegate>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    GOOTextField *_ssid;
    JETSSIDValidator *_ssidValidator;
    GOOTextField *_password;
    JETPSKValidator *_passwordValidator;
    JETButtonFooter *_footer;
    QTMButton *_createNetwork;
    id <JETSetupReadyViewDelegate> _readyViewDelegate;
    UIScrollView *_scrollView;
}

+ (id)labelWithText:(id)arg1 font:(id)arg2 textColor:(id)arg3;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <JETSetupReadyViewDelegate> readyViewDelegate; // @synthesize readyViewDelegate=_readyViewDelegate;
@property(retain, nonatomic) QTMButton *createNetwork; // @synthesize createNetwork=_createNetwork;
@property(retain, nonatomic) JETButtonFooter *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) JETPSKValidator *passwordValidator; // @synthesize passwordValidator=_passwordValidator;
@property(retain, nonatomic) GOOTextField *password; // @synthesize password=_password;
@property(retain, nonatomic) JETSSIDValidator *ssidValidator; // @synthesize ssidValidator=_ssidValidator;
@property(retain, nonatomic) GOOTextField *ssid; // @synthesize ssid=_ssid;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)checkFormValidity;
- (void)didTapCreateNetwork;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

