//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class NSMapTable, NSString, UIViewController;
@protocol DBPeekPreviewManagerDelegate;

@interface DBPeekPreviewManager : NSObject <UIViewControllerPreviewingDelegate>
{
    UIViewController *_viewController;
    NSMapTable *_previewRegistrations;
    id <DBPeekPreviewManagerDelegate> _delegate;
}

+ (_Bool)isPeekPreviewSupportedByViewController:(id)arg1;
@property(nonatomic) __weak id <DBPeekPreviewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)db_unregisterPreviewContext:(id)arg1;
- (id)db_createHandleWithPreviewing:(id)arg1;
- (id)registerPreviewForEntry:(id)arg1 sourceView:(id)arg2;
- (id)initWithPresentingViewController:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

