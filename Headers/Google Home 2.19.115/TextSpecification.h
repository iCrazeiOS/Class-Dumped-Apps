//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, ProtoExtractionSpecification, SubstringSearchSpecification, TextParsingOptions;

@interface TextSpecification : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMatchExact; // @dynamic hasMatchExact;
@property(nonatomic) _Bool hasMatchGlobally; // @dynamic hasMatchGlobally;
@property(nonatomic) _Bool hasMatchNormalizedExact; // @dynamic hasMatchNormalizedExact;
@property(nonatomic) _Bool hasMatchSubstringGlobally; // @dynamic hasMatchSubstringGlobally;
@property(nonatomic) _Bool hasMatchSubstringWithinField; // @dynamic hasMatchSubstringWithinField;
@property(nonatomic) _Bool hasMatchWithinField; // @dynamic hasMatchWithinField;
@property(nonatomic) _Bool hasProtoSpec; // @dynamic hasProtoSpec;
@property(nonatomic) _Bool hasRequireManualTerms; // @dynamic hasRequireManualTerms;
@property(nonatomic) _Bool hasTextParsingOptions; // @dynamic hasTextParsingOptions;
@property(nonatomic) _Bool hasTruncateLargeValues; // @dynamic hasTruncateLargeValues;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool matchExact; // @dynamic matchExact;
@property(nonatomic) _Bool matchGlobally; // @dynamic matchGlobally;
@property(nonatomic) _Bool matchNormalizedExact; // @dynamic matchNormalizedExact;
@property(nonatomic) _Bool matchSubstringGlobally; // @dynamic matchSubstringGlobally;
@property(retain, nonatomic) SubstringSearchSpecification *matchSubstringWithinField; // @dynamic matchSubstringWithinField;
@property(nonatomic) _Bool matchWithinField; // @dynamic matchWithinField;
@property(retain, nonatomic) NSMutableArray *matchWithinSectionArray; // @dynamic matchWithinSectionArray;
@property(readonly, nonatomic) unsigned long long matchWithinSectionArray_Count; // @dynamic matchWithinSectionArray_Count;
@property(retain, nonatomic) ProtoExtractionSpecification *protoSpec; // @dynamic protoSpec;
@property(nonatomic) _Bool requireManualTerms; // @dynamic requireManualTerms;
@property(retain, nonatomic) TextParsingOptions *textParsingOptions; // @dynamic textParsingOptions;
@property(nonatomic) _Bool truncateLargeValues; // @dynamic truncateLargeValues;
@property(nonatomic) int type; // @dynamic type;

@end

