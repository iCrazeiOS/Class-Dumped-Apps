//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NBNumberFormat : NSObject
{
    _Bool _nationalPrefixOptionalWhenFormatting;
    NSString *_pattern;
    NSString *_format;
    NSArray *_leadingDigitsPatterns;
    NSString *_nationalPrefixFormattingRule;
    NSString *_domesticCarrierCodeFormattingRule;
}

@property(retain, nonatomic) NSString *domesticCarrierCodeFormattingRule; // @synthesize domesticCarrierCodeFormattingRule=_domesticCarrierCodeFormattingRule;
@property(nonatomic) _Bool nationalPrefixOptionalWhenFormatting; // @synthesize nationalPrefixOptionalWhenFormatting=_nationalPrefixOptionalWhenFormatting;
@property(retain, nonatomic) NSString *nationalPrefixFormattingRule; // @synthesize nationalPrefixFormattingRule=_nationalPrefixFormattingRule;
@property(retain, nonatomic) NSArray *leadingDigitsPatterns; // @synthesize leadingDigitsPatterns=_leadingDigitsPatterns;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithEntry:(id)arg1;
- (id)initWithPattern:(id)arg1 withFormat:(id)arg2 withLeadingDigitsPatterns:(id)arg3 withNationalPrefixFormattingRule:(id)arg4 whenFormatting:(_Bool)arg5 withDomesticCarrierCodeFormattingRule:(id)arg6;

@end

