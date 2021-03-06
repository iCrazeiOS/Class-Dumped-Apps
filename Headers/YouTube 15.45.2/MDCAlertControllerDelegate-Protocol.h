//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class MDCAlertAction, MDCAlertController, UIEvent;

@protocol MDCAlertControllerDelegate <NSObject>

@optional
- (void)alertController:(MDCAlertController *)arg1 didTapAction:(MDCAlertAction *)arg2 withEvent:(UIEvent *)arg3;
- (void)alertController:(MDCAlertController *)arg1 didDisappear:(_Bool)arg2;
- (void)alertController:(MDCAlertController *)arg1 willDisappear:(_Bool)arg2;
- (void)alertController:(MDCAlertController *)arg1 didAppear:(_Bool)arg2;
- (void)alertController:(MDCAlertController *)arg1 willAppear:(_Bool)arg2;
@end

