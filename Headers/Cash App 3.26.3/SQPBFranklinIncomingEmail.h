//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBCommonHeaders, SQPBFranklinSpoofDecision;

@interface SQPBFranklinIncomingEmail : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *body; // @dynamic body;
@property(copy, nonatomic) NSString *bodyKeywords; // @dynamic bodyKeywords;
@property(nonatomic) _Bool confirmedByAppToken; // @dynamic confirmedByAppToken;
@property(nonatomic) _Bool confirmedByEmailTokenLink; // @dynamic confirmedByEmailTokenLink;
@property(nonatomic) _Bool containsAppPaymentToken; // @dynamic containsAppPaymentToken;
@property(nonatomic) long long createdAt; // @dynamic createdAt;
@property(nonatomic) _Bool hasBody; // @dynamic hasBody;
@property(nonatomic) _Bool hasBodyKeywords; // @dynamic hasBodyKeywords;
@property(nonatomic) _Bool hasConfirmedByAppToken; // @dynamic hasConfirmedByAppToken;
@property(nonatomic) _Bool hasConfirmedByEmailTokenLink; // @dynamic hasConfirmedByEmailTokenLink;
@property(nonatomic) _Bool hasContainsAppPaymentToken; // @dynamic hasContainsAppPaymentToken;
@property(nonatomic) _Bool hasCreatedAt; // @dynamic hasCreatedAt;
@property(nonatomic) _Bool hasHeaders; // @dynamic hasHeaders;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasSpoofDecision; // @dynamic hasSpoofDecision;
@property(nonatomic) _Bool hasUpdatedAt; // @dynamic hasUpdatedAt;
@property(retain, nonatomic) SQPBCommonHeaders *headers; // @dynamic headers;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SQPBFranklinSpoofDecision *spoofDecision; // @dynamic spoofDecision;
@property(nonatomic) long long updatedAt; // @dynamic updatedAt;

@end

