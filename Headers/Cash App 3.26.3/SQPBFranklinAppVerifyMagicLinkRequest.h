//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBFranklinCommonRequestContext;

@interface SQPBFranklinAppVerifyMagicLinkRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool customerRequestedDenyAttempt; // @dynamic customerRequestedDenyAttempt;
@property(nonatomic) _Bool hasCustomerRequestedDenyAttempt; // @dynamic hasCustomerRequestedDenyAttempt;
@property(nonatomic) _Bool hasRequestContext; // @dynamic hasRequestContext;
@property(nonatomic) _Bool hasVerificationToken; // @dynamic hasVerificationToken;
@property(retain, nonatomic) SQPBFranklinCommonRequestContext *requestContext; // @dynamic requestContext;
@property(copy, nonatomic) NSString *verificationToken; // @dynamic verificationToken;

@end

