//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class PTVWatchBroadcastView, UITouch;

@protocol PTVWatchBroadcastViewDelegate <NSObject>
- (void)watchBroadcastViewDidSelectDismiss:(PTVWatchBroadcastView *)arg1;
- (_Bool)watchBroadcastViewIsInTheaterMode;
- (_Bool)watchBroadcastViewShouldEnterTheaterModeOnRotation;

@optional
- (_Bool)navigationDismissItemDisplaysBelowNotch;
- (_Bool)navigationItemOrderInverted;
- (void)watchBroadcastViewShouldToggleTheaterModeOn:(_Bool)arg1;
- (void)watchBroadcastViewDidCompleteSwipeToDismiss:(PTVWatchBroadcastView *)arg1;
- (void)watchBroadcastViewDidCancelSwipeToDismiss:(PTVWatchBroadcastView *)arg1;
- (void)watchBroadcastViewDidUpdateSwipeToDismiss:(PTVWatchBroadcastView *)arg1 withOffset:(struct CGPoint)arg2;
- (void)watchBroadcastViewWillBeginSwipeToDismiss:(PTVWatchBroadcastView *)arg1;
- (_Bool)watchBroadcastViewShouldAllowSwipeToDismissFromTouch:(UITouch *)arg1;
@end

