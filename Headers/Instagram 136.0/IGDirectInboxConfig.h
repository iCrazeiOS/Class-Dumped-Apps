//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <InstagramAppCoreFramework/NSCoding-Protocol.h>
#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@interface IGDirectInboxConfig : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)mainAppConfigWithFiltersEnabled:(_Bool)arg1 blendedInboxEnabled:(_Bool)arg2 showNewMessageBannerAtBottom:(_Bool)arg3 folders:(id)arg4 showMultiSelectBarButton:(_Bool)arg5 featureSetProvider:(id)arg6;

@end

