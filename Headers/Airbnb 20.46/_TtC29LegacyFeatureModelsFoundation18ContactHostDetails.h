//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRListing, AIRPricingQuote, AIRUser, NSArray, NSString, _TtC29LegacyFeatureModelsFoundation30GripHookStrikethroughPriceData;

@interface _TtC29LegacyFeatureModelsFoundation18ContactHostDetails : AIRModel
{
    // Error parsing type: , name: listing
    // Error parsing type: , name: host
    // Error parsing type: , name: hostLocalizedSubtitle
    // Error parsing type: , name: pricingQuote
    // Error parsing type: , name: faqCategories
    // Error parsing type: , name: previousThreadId
    // Error parsing type: , name: localizedPreviousThreadMessage
    // Error parsing type: , name: griphookStrikethroughPriceData
}

+ (id)idAttributeName;
+ (_Bool)mergeable;
+ (_Bool)cacheable;
+ (id)customKeyPathMapping;
+ (id)customTransformers;
- (void).cxx_destruct;
- (id)initWithExternalRepresentation:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;
@property(nonatomic, retain) _TtC29LegacyFeatureModelsFoundation30GripHookStrikethroughPriceData *griphookStrikethroughPriceData; // @synthesize griphookStrikethroughPriceData;
@property(nonatomic, copy) NSString *localizedPreviousThreadMessage;
@property(nonatomic, copy) NSString *previousThreadId;
@property(nonatomic, copy) NSArray *faqCategories;
@property(nonatomic, retain) AIRPricingQuote *pricingQuote; // @synthesize pricingQuote;
@property(nonatomic, copy) NSString *hostLocalizedSubtitle;
@property(nonatomic, retain) AIRUser *host; // @synthesize host;
@property(nonatomic, retain) AIRListing *listing; // @synthesize listing;

@end

