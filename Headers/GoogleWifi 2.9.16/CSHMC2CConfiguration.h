//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface CSHMC2CConfiguration : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool c2CEnabled; // @dynamic c2CEnabled;
@property(retain, nonatomic) NSMutableArray *c2CRequestMetadataArray; // @dynamic c2CRequestMetadataArray;
@property(readonly, nonatomic) unsigned long long c2CRequestMetadataArray_Count; // @dynamic c2CRequestMetadataArray_Count;
@property(copy, nonatomic) NSString *c2CVertical; // @dynamic c2CVertical;
@property(copy, nonatomic) NSString *casesCategory; // @dynamic casesCategory;
@property(copy, nonatomic) NSString *casesProduct; // @dynamic casesProduct;
@property(nonatomic) _Bool hasC2CEnabled; // @dynamic hasC2CEnabled;
@property(nonatomic) _Bool hasC2CVertical; // @dynamic hasC2CVertical;
@property(nonatomic) _Bool hasCasesCategory; // @dynamic hasCasesCategory;
@property(nonatomic) _Bool hasCasesProduct; // @dynamic hasCasesProduct;

@end

