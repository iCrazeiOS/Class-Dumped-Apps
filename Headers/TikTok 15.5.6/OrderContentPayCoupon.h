//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStruct;

@interface OrderContentPayCoupon : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long expireTime; // @dynamic expireTime;
@property(nonatomic) _Bool hasExpireTime; // @dynamic hasExpireTime;
@property(nonatomic) _Bool hasSkuCover; // @dynamic hasSkuCover;
@property(nonatomic) _Bool hasSkuName; // @dynamic hasSkuName;
@property(nonatomic) _Bool hasSkuNum; // @dynamic hasSkuNum;
@property(nonatomic) _Bool hasSumMoney; // @dynamic hasSumMoney;
@property(retain, nonatomic) UrlStruct *skuCover; // @dynamic skuCover;
@property(copy, nonatomic) NSString *skuName; // @dynamic skuName;
@property(nonatomic) int skuNum; // @dynamic skuNum;
@property(nonatomic) int sumMoney; // @dynamic sumMoney;

@end

