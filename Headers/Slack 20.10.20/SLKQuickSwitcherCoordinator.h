//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol _TtP5Slack32QuickSwitcherCoordinatorDelegate_;

@interface SLKQuickSwitcherCoordinator : NSObject
{
    // Error parsing type: , name: viewController
    // Error parsing type: , name: presentingViewController
    // Error parsing type: , name: delegate
    // Error parsing type: , name: quickSwitcherViewController
    // Error parsing type: , name: quickSwitcherMetrics
    // Error parsing type: , name: authUserId
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) __weak id <_TtP5Slack32QuickSwitcherCoordinatorDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, readonly) UIViewController *viewController; // @synthesize viewController;
- (id)initWithPresentingViewController:(id)arg1 customPresentation:(id)arg2 dependencies:(id)arg3 fullscreenPresentation:(_Bool)arg4 teamIconImage:(id)arg5;

@end

