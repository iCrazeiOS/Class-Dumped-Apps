//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTActionSheetControllerDelegate-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class MDXVolumeControlDialogViewController, NSMapTable, NSString, YTActionSheetController;

@interface MDXRoutePresentationController : NSObject <YTActionSheetControllerDelegate, YTSystemNotificationsObserver>
{
    YTActionSheetController *_actionSheet;
    CDUnknownBlockType _cancelBlock;
    MDXVolumeControlDialogViewController *_volumeControlDialogViewController;
    NSMapTable *_responderToLoggingButtonMap;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (void).cxx_destruct;
- (void)sendClickForVEType:(int)arg1 screen:(id)arg2 firstResponder:(id)arg3;
- (void)logShowEventForVEType:(int)arg1 VECount:(int)arg2 firstResponder:(id)arg3;
- (id)createLoggingButtonWithVEType:(int)arg1 VECount:(int)arg2 firstResponder:(id)arg3;
- (id)loggingButtonWithVEType:(int)arg1 firstResponder:(id)arg2;
- (id)selectedMediaRouteClientDataForScreen:(id)arg1;
- (_Bool)shouldShowLearnMoreWithScreens:(id)arg1;
- (id)newActionSheetWithMessage:(id)arg1;
- (void)addLocalNetworkPermissionsGrantedActionsToDeviceList:(id)arg1 actionBlock:(CDUnknownBlockType)arg2 firstResponder:(id)arg3;
- (void)addLocalNetworkPermissionsDeniedActionsToDeviceListWithFirstResponder:(id)arg1;
- (void)showDeviceListWithScreens:(id)arg1 actionBlock:(CDUnknownBlockType)arg2 fromView:(id)arg3 firstResponder:(id)arg4;
- (void)appWillResignActive:(id)arg1;
- (void)actionSheetDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (void)showConnectedDeviceFromView:(id)arg1 firstResponder:(id)arg2;
- (void)showConnectedDeviceModalWithFirstResponder:(id)arg1;
- (void)showDeviceListWithScreens:(id)arg1 actionBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3 fromView:(id)arg4 firstResponder:(id)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

