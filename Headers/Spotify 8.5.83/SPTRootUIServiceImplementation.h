//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRootUIService-Protocol.h"

@class MessageBarController, NSString, SPTAllocationContext, SPTMainWindow;

@interface SPTRootUIServiceImplementation : NSObject <SPTRootUIService>
{
    MessageBarController *_messageBarController;
    SPTMainWindow *_mainWindow;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTMainWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
@property(retain, nonatomic) MessageBarController *messageBarController; // @synthesize messageBarController=_messageBarController;
- (id)provideAnimationView;
- (id)createWindowForScene:(id)arg1 theme:(id)arg2 rootViewController:(id)arg3;
- (id)createWindowWithTheme:(id)arg1 rootViewController:(id)arg2;
- (id)provideMainWindow;
- (id)provideRootViewController;
- (id)createUICompletionNotifierWithMetaViewController:(id)arg1;
- (id)createMetaViewControllerWithWelcomeURL:(id)arg1 userDefaults:(id)arg2 logCenter:(id)arg3 appStartupController:(id)arg4 startupTracer:(id)arg5 pageRegistry:(id)arg6 messageBarController:(id)arg7 defaultLinkDispatcher:(id)arg8 navigationManager:(id)arg9 notificationCenter:(id)arg10;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

