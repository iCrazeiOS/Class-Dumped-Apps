//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber, NSString;

@interface TFSTwitterAPIDirectMessageDestroyCommand : TFSTwitterAPICommand
{
    NSNumber *_messageID;
    NSString *_requestID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) NSNumber *messageID; // @synthesize messageID=_messageID;
- (id)request;
- (id)initWithAccountID:(id)arg1 messageID:(id)arg2 requestID:(id)arg3 context:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithAccountID:(id)arg1 context:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

