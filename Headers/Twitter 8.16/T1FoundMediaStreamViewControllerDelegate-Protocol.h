//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1FoundMediaStream, T1FoundMediaStreamViewController, TFSTwitterFoundMediaGroup, TFSTwitterFoundMediaItem, TFSTwitterFoundMediaObject;

@protocol T1FoundMediaStreamViewControllerDelegate <NSObject>

@optional
- (void)foundMediaStreamViewController:(T1FoundMediaStreamViewController *)arg1 didFailToLoadAnimatedImageForFoundMediaObject:(TFSTwitterFoundMediaObject *)arg2;
- (void)foundMediaStreamViewController:(T1FoundMediaStreamViewController *)arg1 didUpdateStream:(T1FoundMediaStream *)arg2;
- (void)foundMediaStreamViewControllerWillBeginDragging:(T1FoundMediaStreamViewController *)arg1;
- (void)foundMediaStreamViewController:(T1FoundMediaStreamViewController *)arg1 didLongPressFoundMediaItem:(TFSTwitterFoundMediaItem *)arg2;
- (void)foundMediaStreamViewController:(T1FoundMediaStreamViewController *)arg1 didSelectFoundMediaItem:(TFSTwitterFoundMediaItem *)arg2;
- (void)foundMediaStreamViewController:(T1FoundMediaStreamViewController *)arg1 didSelectFoundMediaGroup:(TFSTwitterFoundMediaGroup *)arg2;
@end

