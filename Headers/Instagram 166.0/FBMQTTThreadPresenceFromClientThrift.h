//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class NSString;

@interface FBMQTTThreadPresenceFromClientThrift : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_recipient;
    long long __thrift_sender;
    int __thrift_state;
    _Bool __thrift_recipient_set;
    _Bool __thrift_sender_set;
    _Bool __thrift_state_set;
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetState;
- (_Bool)stateIsSet;
@property(nonatomic) int state;
- (void)unsetSender;
- (_Bool)senderIsSet;
@property(nonatomic) long long sender;
- (void)unsetRecipient;
- (_Bool)recipientIsSet;
@property(nonatomic) long long recipient;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipient:(long long)arg1 sender:(long long)arg2 state:(int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

