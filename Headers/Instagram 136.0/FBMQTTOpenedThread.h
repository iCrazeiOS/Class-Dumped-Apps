//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <InstagramAppCoreFramework/NSCoding-Protocol.h>
#import <InstagramAppCoreFramework/TBase-Protocol.h>

@class NSString;

@interface FBMQTTOpenedThread : TBaseStruct <TBase, NSCoding>
{
    NSString *__thrift_threadId;
    _Bool __thrift_threadId_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetThreadId;
- (_Bool)threadIdIsSet;
@property(retain, nonatomic) NSString *threadId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThreadId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

