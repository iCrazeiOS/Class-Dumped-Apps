//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGViewController;
@protocol IGProfileTabViewController;

@protocol IGProfileTabViewControllerDelegate <NSObject>
- (void)profileTabViewControllerWantsScrollToTopOfTab:(IGViewController<IGProfileTabViewController> *)arg1 animated:(_Bool)arg2;
- (void)profileTabViewControllerDidInitiatePullToRefresh:(IGViewController<IGProfileTabViewController> *)arg1;
- (void)profileTabViewControllerNeedsContentOffsetUpdate:(IGViewController<IGProfileTabViewController> *)arg1;
- (_Bool)profileTabViewControllerIsDisplayedInPopover:(IGViewController<IGProfileTabViewController> *)arg1;
- (double)profileTabViewControllerAdditionalTopObstructingContentInset:(IGViewController<IGProfileTabViewController> *)arg1;
- (double)profileTabViewControllerAdditionalTopContentInset:(IGViewController<IGProfileTabViewController> *)arg1;
@end

