//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBCashMarketdataModelDisplayMessageAction, SQPBCashMarketdataModelOpenUrlAction, SQPBCashUiImage;

@interface SQPBCashMarketdataModelNews : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int actionOneOfCase; // @dynamic actionOneOfCase;
@property(retain, nonatomic) SQPBCashUiImage *avatar; // @dynamic avatar;
@property(retain, nonatomic) SQPBCashMarketdataModelDisplayMessageAction *displayMessageAction; // @dynamic displayMessageAction;
@property(nonatomic) _Bool hasAvatar; // @dynamic hasAvatar;
@property(nonatomic) _Bool hasProviderName; // @dynamic hasProviderName;
@property(nonatomic) _Bool hasPublishedAt; // @dynamic hasPublishedAt;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) SQPBCashMarketdataModelOpenUrlAction *openURLAction; // @dynamic openURLAction;
@property(copy, nonatomic) NSString *providerName; // @dynamic providerName;
@property(nonatomic) long long publishedAt; // @dynamic publishedAt;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

