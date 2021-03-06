//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber, NSString;

@interface TFSTwitterAPIDirectMessageConversationDisableNotificationsCommand : TFSTwitterAPICommand
{
    NSString *_conversationID;
    NSString *_requestID;
    NSNumber *_duration;
}

@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 conversationID:(id)arg3 duration:(id)arg4 requestID:(id)arg5 source:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

