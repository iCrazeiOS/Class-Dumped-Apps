//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ApplicationShortcutHandler : NSObject
{
}

+ (void)showPostSubmit;
+ (void)showInbox;
+ (void)showPopular;
+ (void)showSearch;
+ (void)performActionForShortcutItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)updateDynamicShortcutsWithAccount:(id)arg1;
+ (_Bool)deviceSupportsQuickLaunchShortcuts;

@end

