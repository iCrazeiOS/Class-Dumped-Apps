//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AWEButton, AWEShareTokenHandlerResponseModel, NSString, UIImageView, UILabel, UIView;

@interface AWEInviteFriendShareViewController : UIViewController
{
    NSString *_qrCodeType;
    UIImageView *_avatarView;
    UIView *_avatarMaskView;
    UIImageView *_closeView;
    UILabel *_authorLabel;
    UILabel *_descLabel;
    AWEButton *_followBtn;
    UIView *_animationView;
    AWEShareTokenHandlerResponseModel *_model;
}

@property(retain, nonatomic) AWEShareTokenHandlerResponseModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) AWEButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UIImageView *closeView; // @synthesize closeView=_closeView;
@property(retain, nonatomic) UIView *avatarMaskView; // @synthesize avatarMaskView=_avatarMaskView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) NSString *qrCodeType; // @synthesize qrCodeType=_qrCodeType;
- (void).cxx_destruct;
- (void)p_gotoProfile;
- (void)p_follow;
- (void)followBtnPressed;
- (void)dismissAlert;
- (void)p_showAlertWithAnimation;
- (void)loadSubviews;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;
- (void)showAlertWithAnimation;

@end

