//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTAlertController.h"

@interface ActionHandlerWarning : GBTAlertController
{
}

+ (id)actionHandlerWarningForUnsubscribeRedirect:(CDUnknownBlockType)arg1 nameForUnsubscribe:(id)arg2 linkForUnsubscribe:(id)arg3;
+ (id)actionHandlerWarningForReportSpamAndUnsubscribeRedirect:(CDUnknownBlockType)arg1 nameForUnsubscribe:(id)arg2 linkForUnsubscribe:(id)arg3;
+ (id)actionHandlerWarningForUnsubscribeOneClick:(CDUnknownBlockType)arg1 displayNamesForUnsubscribe:(id)arg2;
+ (id)actionHandlerWarningForReportSpamAndUnsubscribeOneClick:(CDUnknownBlockType)arg1 spamCount:(int)arg2 displayNamesForUnsubscribe:(id)arg3;
+ (id)actionHandlerWarningForStoppingRecurrenceWithActionCompletionBlock:(CDUnknownBlockType)arg1;
+ (id)recurrenceWarningTitle;
+ (id)actionHandlerWarningWithTitle:(id)arg1 description:(id)arg2 actionCompletionBlock:(CDUnknownBlockType)arg3 isDestructive:(_Bool)arg4;
+ (id)actionHandlerWarningWithTitle:(id)arg1 description:(id)arg2 confirmButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 actionCompletionBlock:(CDUnknownBlockType)arg5 isDestructive:(_Bool)arg6;
+ (id)actionHandlerWarningWithTitle:(id)arg1 description:(id)arg2 confirmButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 helpLinkContext:(unsigned long long)arg5 actionCompletionBlock:(CDUnknownBlockType)arg6 isDestructive:(_Bool)arg7;

@end

