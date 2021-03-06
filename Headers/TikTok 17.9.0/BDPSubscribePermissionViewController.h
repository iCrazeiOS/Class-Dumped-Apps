//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BDPListSubscribeContentViewDelegate-Protocol.h"
#import "BDPLongTermSubscribeFooterViewDelegate-Protocol.h"
#import "BDPPermissionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class BDPPermissionView, BDPSubscribePermissionViewInfo, NSArray, NSLayoutConstraint, NSObject, NSString, UIView;
@protocol BDPJSBridgeEngineProtocol;

@interface BDPSubscribePermissionViewController : UIViewController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, BDPPermissionViewDelegate, BDPListSubscribeContentViewDelegate, BDPLongTermSubscribeFooterViewDelegate>
{
    CDUnknownBlockType _completion;
    BDPPermissionView *_permissionView;
    NSString *_appName;
    NSObject<BDPJSBridgeEngineProtocol> *_engine;
    NSString *_icon;
    NSString *_actionDescription;
    NSArray *_templateInfoList;
    BDPSubscribePermissionViewInfo *_permissionViewInfo;
    unsigned long long _timesType;
    UIView *_containerView;
    NSLayoutConstraint *_permissionViewTopConstraint;
    NSLayoutConstraint *_permissionViewBottomConstraint;
    UIView *_bottomSafeAreaBackgroundView;
}

@property(retain, nonatomic) UIView *bottomSafeAreaBackgroundView; // @synthesize bottomSafeAreaBackgroundView=_bottomSafeAreaBackgroundView;
@property(retain, nonatomic) NSLayoutConstraint *permissionViewBottomConstraint; // @synthesize permissionViewBottomConstraint=_permissionViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *permissionViewTopConstraint; // @synthesize permissionViewTopConstraint=_permissionViewTopConstraint;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long timesType; // @synthesize timesType=_timesType;
@property(retain, nonatomic) BDPSubscribePermissionViewInfo *permissionViewInfo; // @synthesize permissionViewInfo=_permissionViewInfo;
@property(copy, nonatomic) NSArray *templateInfoList; // @synthesize templateInfoList=_templateInfoList;
@property(copy, nonatomic) NSString *actionDescription; // @synthesize actionDescription=_actionDescription;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak NSObject<BDPJSBridgeEngineProtocol> *engine; // @synthesize engine=_engine;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) BDPPermissionView *permissionView; // @synthesize permissionView=_permissionView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (void)onContainerTouched:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)contentView:(id)arg1 didUpdateSelectedIndexes:(id)arg2;
- (void)refuseAllTemplate;
- (void)permissionViewDidCancel:(id)arg1;
- (void)permissionViewDidConfirm:(id)arg1;
- (id)deniedTemplates;
- (id)authorizedTemplates;
- (id)longTermFooterViewWithText:(id)arg1;
- (id)shortTermFooterViewWithText:(id)arg1;
- (id)listContentViewForInfoDictList:(id)arg1 title:(id)arg2 message:(id)arg3;
- (id)permissionViewInfoForTemplateModelType:(unsigned long long)arg1 andTimesType:(unsigned long long)arg2;
- (void)makePermissionViewOverScreen;
- (void)makePermissionViewUnderScreen;
- (void)setupPermissionView;
- (void)setupContainer;
- (void)setupUI;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)canPresent;
- (id)initWithName:(id)arg1 icon:(id)arg2 engine:(id)arg3 actionDescription:(id)arg4 templateInfoList:(id)arg5 permissionViewInfo:(id)arg6 templateTimesType:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

