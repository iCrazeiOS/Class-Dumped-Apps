//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MDCSnackbarMessageView;

@protocol MDCSnackbarManagerDelegate <NSObject>
- (void)willPresentSnackbarWithMessageView:(MDCSnackbarMessageView *)arg1;

@optional
- (void)isPresentingSnackbarWithMessageView:(MDCSnackbarMessageView *)arg1;
- (void)snackbarDidDisappear;
- (void)snackbarWillDisappear;
@end

