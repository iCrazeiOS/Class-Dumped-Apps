//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWEShareContext, AWEUserModel, UIViewController;

@protocol AWEMyQRCodeRouter <HTSService>
- (void)openMyQRCodeWithUser:(AWEUserModel *)arg1 fromController:(UIViewController *)arg2;
- (void)openMyQRCode:(unsigned long long)arg1 shareContext:(AWEShareContext *)arg2 fromController:(UIViewController *)arg3;
@end

