//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class TIMPBNVoipInfo;

@interface TIMPBNCreateVoipResponseBody : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInfo; // @dynamic hasInfo;
@property(nonatomic) _Bool hasStatusCode; // @dynamic hasStatusCode;
@property(retain, nonatomic) TIMPBNVoipInfo *info; // @dynamic info;
@property(nonatomic) int statusCode; // @dynamic statusCode;

@end

