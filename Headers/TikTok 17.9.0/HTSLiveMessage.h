//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface HTSLiveMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *method; // @dynamic method;
@property(nonatomic) long long msgId; // @dynamic msgId;
@property(nonatomic) int msgType; // @dynamic msgType;
@property(copy, nonatomic) NSData *payload; // @dynamic payload;

@end

