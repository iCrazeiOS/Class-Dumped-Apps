//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>

@interface NSString (RCTSRWebSocket) <IGListDiffable>
+ (id)stringWithStringPiece:(const Range_3cfb20fc *)arg1;
+ (id)emailRegex;
+ (id)usernameRegexCharacterSetWithPrefixAllowed:(_Bool)arg1;
+ (unsigned long long)insensitiveCompareOptions;
+ (id)hashtagAllowedCharactersRegex;
+ (id)hashtagAllowedCharactersRegexPattern;
+ (id)fb_keyPathWithComponents:(id)arg1;
+ (_Bool)fb_isNilOrWhiteSpace:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stringBySHA1ThenBase64Encoding;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)removeQuotes;
- (id)decodedURLString;
- (id)encodedURLParameterString;
- (id)encodedURLString;
- (id)stringByEscapingAnnotationCharacters;
- (double)heightForFont:(id)arg1 maxLines:(unsigned long long)arg2 constrainedToWidth:(double)arg3;
- (id)FBMD5HexDigest;
- (id)decodeBase32String;
- (id)stringByRemovingLeadingSpaces;
- (id)stringByRemovingInvalidNameCharacters;
- (_Bool)containsOnlyValidNameCharacters;
- (struct _NSRange)rangeOfInvalidNameCharacters;
- (long long)composedCharacterLength;
- (_Bool)isValidEmail;
- (_Bool)containsOnlyValidEmailCharacters;
- (id)stringAfterRemovingLeadingWhitespaceAndAtCharacters;
- (id)stringByRemovingCharactersMatchingRegexCharacterSet:(id)arg1;
- (_Bool)validateWithRegexCharacterSet:(id)arg1;
- (id)stringByTransformingInvalidUsernameCharacters;
- (id)stringByStripingCombiningMarks;
- (id)stringByRemovingInvalidUsernameCharactersPrefixAllowed:(_Bool)arg1;
- (_Bool)validateUsernameWithPrefixAllowed:(_Bool)arg1;
- (_Bool)hasInsensitivePrefix:(id)arg1;
- (long long)insensitiveCompare:(id)arg1;
- (id)insensitiveString;
- (_Bool)_containsCharacterNotFoundInRegularExpression:(id)arg1;
- (_Bool)_containsOnlyEmojiIncludingSpaces;
- (_Bool)containsOnlySingleEmoji;
- (_Bool)containsOnlyEmoji;
- (id)containedEmojis;
- (long long)textType;
- (id)MD5;
- (double)scoreAgainst:(id)arg1 fuzziness:(id)arg2;
- (struct CGRect)ig_boundingRectForWidth:(double)arg1 font:(id)arg2;
- (_Bool)isMatchWithSubstring:(id)arg1 editDistance:(long long)arg2;
- (_Bool)isCaseInsensitiveStringContentMatchForSubstring:(id)arg1 maxEditDistanceAllowed:(long long)arg2;
- (long long)minSubstitutionEditDistanceForSubstring:(id)arg1;
- (_Bool)isSubsequenceWithSubstring:(id)arg1;
- (void)enumerateRangesOfString:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)urlDecoded;
- (id)urlEncoded;
- (unsigned long long)fb_countOfComposedCharacters;
- (id)fb_composedCharacters;
- (id)fb_stringByRemovingWhitespacesAndEmptyLines;
- (unsigned long long)fb_countCharactersInSet:(id)arg1;
- (_Bool)fb_containsRange:(struct _NSRange)arg1;
- (id)fb_stringByTrimmingLeadingWhitepsace;
- (id)fb_newStringByTrimmingWhitespace;
- (id)fb_substringWithComposedCharactersLength:(unsigned long long)arg1;
- (id)fb_stringTruncatedToLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2;
- (id)fb_stringTruncatedToLength:(unsigned long long)arg1;
- (id)fb_lowercaseStringForCurrentLocale;
- (id)fb_numberValue;
- (unsigned long long)unsignedIntegerValue;
- (id)mutableObjectFromJSONStringWithParseOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)mutableObjectFromJSONStringWithParseOptions:(unsigned long long)arg1;
- (id)mutableObjectFromJSONString;
- (id)objectFromJSONStringWithParseOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)objectFromJSONStringWithParseOptions:(unsigned long long)arg1;
- (id)objectFromJSONString;
- (id)fb_mutableObjectFromJSONStringWithParseOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)fb_mutableObjectFromJSONStringWithParseOptions:(unsigned long long)arg1;
- (id)fb_mutableObjectFromJSONString;
- (id)fb_objectFromJSONStringWithParseOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)fb_objectFromJSONStringWithParseOptions:(unsigned long long)arg1;
- (id)fb_objectFromJSONString;
- (id)JSONStringWithOptions:(unsigned long long)arg1 includeQuotes:(_Bool)arg2 error:(id *)arg3;
- (id)JSONString;
- (id)JSONDataWithOptions:(unsigned long long)arg1 includeQuotes:(_Bool)arg2 error:(id *)arg3;
- (id)JSONData;
- (id)fb_JSONStringWithOptions:(unsigned long long)arg1 includeQuotes:(_Bool)arg2 error:(id *)arg3;
- (id)fb_JSONString;
- (id)fb_JSONDataWithOptions:(unsigned long long)arg1 includeQuotes:(_Bool)arg2 error:(id *)arg3;
- (id)fb_JSONData;
@end

