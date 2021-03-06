//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAPersistentRequest.h>

@class WAUserJID;

@interface WABizVerifiedNamesRequest : WAPersistentRequest
{
    WAUserJID *_userJID;
    long long _counter;
}

+ (id)identifierPrefixForUserJID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long counter; // @synthesize counter=_counter;
@property(readonly, nonatomic) WAUserJID *userJID; // @synthesize userJID=_userJID;
- (void)handleRequestError:(id)arg1;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)canBegin;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserJID:(id)arg1 initialDelay:(double)arg2 counter:(long long)arg3;
- (id)initWithUserJID:(id)arg1 initialDelay:(double)arg2;

@end

