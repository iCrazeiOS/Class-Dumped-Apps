//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IAInterfaceAllocBlocker-Protocol.h>

@class NSNumber, NSString;

@interface IAImpressionData : NSObject <IAInterfaceAllocBlocker>
{
    _Bool _skippable;
    NSString *_demandSourceName;
    NSString *_country;
    NSString *_sessionID;
    NSString *_advertiserDomain;
    NSString *_creativeID;
    NSString *_campaignID;
    NSNumber *_pricingValue;
    NSString *_pricingCurrency;
    NSNumber *_duration;
}

+ (id)build:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isSkippable) _Bool skippable; // @synthesize skippable=_skippable;
@property(copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *pricingCurrency; // @synthesize pricingCurrency=_pricingCurrency;
@property(copy, nonatomic) NSNumber *pricingValue; // @synthesize pricingValue=_pricingValue;
@property(copy, nonatomic) NSString *campaignID; // @synthesize campaignID=_campaignID;
@property(copy, nonatomic) NSString *creativeID; // @synthesize creativeID=_creativeID;
@property(copy, nonatomic) NSString *advertiserDomain; // @synthesize advertiserDomain=_advertiserDomain;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *demandSourceName; // @synthesize demandSourceName=_demandSourceName;
- (id)customDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

