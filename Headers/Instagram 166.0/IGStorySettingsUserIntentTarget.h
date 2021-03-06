//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBIntentTarget-Protocol.h>

@class NSString;
@protocol IGStorySettingsViewControllerDelegate;

@interface IGStorySettingsUserIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _prefersTabBarHidden;
    _Bool _isPresentedModally;
    long long _settingOptions;
    long long _entryPoint;
    id <IGStorySettingsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGStorySettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isPresentedModally; // @synthesize isPresentedModally=_isPresentedModally;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) _Bool prefersTabBarHidden; // @synthesize prefersTabBarHidden=_prefersTabBarHidden;
@property(readonly, nonatomic) long long settingOptions; // @synthesize settingOptions=_settingOptions;
- (id)initWithSettingOptions:(long long)arg1 prefersTabBarHidden:(_Bool)arg2 entryPoint:(long long)arg3 isPresentedModally:(_Bool)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

