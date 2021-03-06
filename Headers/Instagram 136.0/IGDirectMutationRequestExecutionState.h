//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <InstagramAppCoreFramework/NSCoding-Protocol.h>

@class IGDirectMutationFailedRequestRetryStatus, IGDirectSendError;

@interface IGDirectMutationRequestExecutionState : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    long long _succeeded_trigger;
    IGDirectSendError *_failed_error;
    IGDirectMutationFailedRequestRetryStatus *_failed_retryStatus;
}

+ (id)succeededWithTrigger:(long long)arg1;
+ (id)queued;
+ (id)failedWithError:(id)arg1 retryStatus:(id)arg2;
+ (id)executing;
- (void).cxx_destruct;
- (void)matchQueued:(CDUnknownBlockType)arg1 executing:(CDUnknownBlockType)arg2 succeeded:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanQueued:(CDUnknownBlockType)arg1 executing:(CDUnknownBlockType)arg2 succeeded:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

