//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTTopController-Protocol.h>

@class NSString, QTMButton, YTCommandResponderEvent, YTICommand, YTLCActivityIndicatorView, YTLCCameraViewController;
@protocol YTResponder;

@interface YTLCRotationRequiredViewController : UIViewController <YTTopController>
{
    YTICommand *_model;
    long long _orientation;
    YTLCCameraViewController *_cameraViewController;
    YTLCActivityIndicatorView *_activityIndicatorView;
    QTMButton *_cancelButton;
    CDUnknownBlockType _completion;
    id <YTResponder> _parentResponder;
}

@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)hidePrompt;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)cancel;
- (id)initWithParentResponder:(id)arg1 requiredOrientation:(long long)arg2 cameraViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

