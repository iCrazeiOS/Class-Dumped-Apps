//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DYLoginErrorHandler : NSObject
{
}

+ (void)showAccountLockedMessage:(id)arg1;
+ (id)defaultErrorTip;
+ (_Bool)handleForbidChangeErrorWithMessage:(id)arg1;
+ (void)showToastWithError:(id)arg1;
+ (id)errorMsgFromError:(id)arg1;
+ (void)showConfirmAlertWithMessage:(id)arg1;
+ (_Bool)handleError:(id)arg1 platform:(unsigned long long)arg2 isFromH5:(_Bool)arg3;
+ (_Bool)handleError:(id)arg1 platform:(unsigned long long)arg2;
+ (_Bool)handleAlertError:(id)arg1;

@end

