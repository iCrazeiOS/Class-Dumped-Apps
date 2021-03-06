//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMILogoutHelperDelegate-Protocol.h"

@class NSString, UIButton, UIView;
@protocol AWSignOutViewManagerDelegate;

@interface AWSignOutViewManager : NSObject <AMILogoutHelperDelegate>
{
    _Bool _waiting;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _cancelBlock;
    UIView *_parentView;
    AWSignOutViewManager *_selfStrongReference;
    UIView *_view;
    UIView *_parentCover;
    UIView *_box;
    UIView *_waitingIndicator;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    id <AWSignOutViewManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <AWSignOutViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *waitingIndicator; // @synthesize waitingIndicator=_waitingIndicator;
@property(retain, nonatomic) UIView *box; // @synthesize box=_box;
@property(retain, nonatomic) UIView *parentCover; // @synthesize parentCover=_parentCover;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool waiting; // @synthesize waiting=_waiting;
@property(retain, nonatomic) AWSignOutViewManager *selfStrongReference; // @synthesize selfStrongReference=_selfStrongReference;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (void)didFailLogoutWithError:(id)arg1;
- (void)didLogout;
- (void)cancelTapped;
- (void)confirmTapped;
- (void)addWaitingIndicatorToView:(id)arg1;
- (void)addButtonsToView:(id)arg1;
- (void)addBodyLabelToView:(id)arg1;
- (void)addTitleLabelToView:(id)arg1;
- (void)addBackgroundToView:(id)arg1;
- (void)loadView;
- (void)dismiss;
- (void)present;
- (id)initWithParentView:(id)arg1 success:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

