//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString;
@protocol DBModalManaging;

@interface DBCameraUploadTourModalController : UIViewController
{
    long long _modalType;
    int _role;
    CDUnknownBlockType _enableBlock;
    CDUnknownBlockType _cancelBlock;
    NSString *_teamName;
    id <DBModalManaging> _modalManager;
}

+ (id)db_enableButtonTitleBusinessRoleChange;
+ (id)db_subtitleBusinessRoleChange;
+ (id)db_viewImage;
+ (id)db_skipButtonTitle;
+ (id)presentPersonalToBusinessRoleChangeModalWithModalManager:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)db_titleBusinessTurnedOff;
- (CDUnknownBlockType)db_enableButtonBlockShouldDismiss:(_Bool)arg1;
- (CDUnknownBlockType)db_skipButtonBlock;
- (id)db_leftBarButtonItem;
- (id)db_styledMessageView;
- (void)viewDidLoad;
- (void)dismiss;
- (id)initBusinessRoleChangeTypeWithModalManager:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2;
- (id)initWithCUModalType:(long long)arg1 modalManager:(id)arg2;

@end

