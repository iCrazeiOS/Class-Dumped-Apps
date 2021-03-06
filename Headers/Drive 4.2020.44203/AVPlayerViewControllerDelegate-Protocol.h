//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVPlayerViewController, NSError;
@protocol UIViewControllerTransitionCoordinator;

@protocol AVPlayerViewControllerDelegate <NSObject>

@optional
- (void)playerViewController:(AVPlayerViewController *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(_Bool))arg2;
- (_Bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(AVPlayerViewController *)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 failedToStartPictureInPictureWithError:(NSError *)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
@end

