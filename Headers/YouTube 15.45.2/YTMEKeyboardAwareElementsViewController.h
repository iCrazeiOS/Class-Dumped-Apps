//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTPageStyleControllerObserver-Protocol.h>
#import <Module_Framework/YTTopController-Protocol.h>

@class ELMPBElement, ELMView, GIMMe, NSLayoutConstraint, NSString, UIView, YTCommandResponderEvent;
@protocol ELMContext, YTResponder;

@interface YTMEKeyboardAwareElementsViewController : UIViewController <YTPageStyleControllerObserver, YTTopController>
{
    UIView *_headerView;
    ELMView *_elementView;
    UIView *_footerView;
    NSLayoutConstraint *_elementViewBottomConstraint;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    ELMPBElement *_element;
    id <ELMContext> _context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <ELMContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) ELMPBElement *element; // @synthesize element=_element;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)updateColors;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (void)pageStyleControllerPageStyleDidChange;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithElement:(id)arg1 context:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

