//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface MTPreparedMessage : NSObject
{
    _Bool _requiresConfirmation;
    _Bool _hasHighPriority;
    int _seqNo;
    id _internalId;
    long long _messageId;
    long long _salt;
    NSData *_data;
    long long _inResponseToMessageId;
}

@property(readonly, nonatomic) long long inResponseToMessageId; // @synthesize inResponseToMessageId=_inResponseToMessageId;
@property(readonly, nonatomic) _Bool hasHighPriority; // @synthesize hasHighPriority=_hasHighPriority;
@property(readonly, nonatomic) _Bool requiresConfirmation; // @synthesize requiresConfirmation=_requiresConfirmation;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) long long salt; // @synthesize salt=_salt;
@property(readonly, nonatomic) int seqNo; // @synthesize seqNo=_seqNo;
@property(readonly, nonatomic) long long messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) id internalId; // @synthesize internalId=_internalId;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 messageId:(long long)arg2 seqNo:(int)arg3 salt:(long long)arg4 requiresConfirmation:(_Bool)arg5 hasHighPriority:(_Bool)arg6 inResponseToMessageId:(long long)arg7;
- (id)initWithData:(id)arg1 messageId:(long long)arg2 seqNo:(int)arg3 salt:(long long)arg4 requiresConfirmation:(_Bool)arg5 hasHighPriority:(_Bool)arg6;

@end

