//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGUserPresenceUpdate, NSArray, NSString;

@interface IGDirectInboxAccessoryInputUpdateReason : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGUserPresenceUpdate *_presenceUpdate;
    NSString *_typingStatusUpdate_threadId;
    NSArray *_typingStatusUpdate_typingStatuses;
}

+ (id)typingStatusUpdateWithThreadId:(id)arg1 typingStatuses:(id)arg2;
+ (id)presenceUpdate:(id)arg1;
+ (id)other;
- (void).cxx_destruct;
- (void)matchPresenceUpdate:(CDUnknownBlockType)arg1 typingStatusUpdate:(CDUnknownBlockType)arg2 other:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanPresenceUpdate:(CDUnknownBlockType)arg1 typingStatusUpdate:(CDUnknownBlockType)arg2 other:(CDUnknownBlockType)arg3;

@end

