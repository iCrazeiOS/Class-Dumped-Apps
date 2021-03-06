//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

#import <T1Twitter/TFNPickableValue-Protocol.h>

@class UIImage;

@interface NSString (T1TextStyles) <TFNPickableValue>
+ (id)t1_contentSubtextAttributes;
+ (id)t1_contentTitleDarkAttributes;
+ (id)t1_contentTitleLightAttributes;
+ (id)t1_contentTitleAttributes;
+ (id)_t1_contentTitleAttributesWithTextColor:(id)arg1;
+ (id)t1_stringInUnitsFormatWithSeconds:(double)arg1;
+ (id)t1_stringInTimeFormatWithSeconds:(double)arg1;
- (id)t1_contentSubtextAttributedString;
- (id)t1_contentTitleDarkAttributedString;
- (id)t1_contentTitleLightAttributedString;
- (id)t1_contentTitleAttributedString;
- (id)_t1_asPeopleDiscoverySectionHeaderWithActionText:(id)arg1 actionBlock:(CDUnknownBlockType)arg2 icon:(id)arg3 topInsetCustomization:(double)arg4 bottomInsetCustomization:(double)arg5;
- (id)t1_asPeopleDiscoverySectionHeaderWithActionText:(id)arg1 actionBlock:(CDUnknownBlockType)arg2 icon:(id)arg3 bottomInsetCustomization:(double)arg4;
- (CDStruct_7a45bd0d)_T1_emojiCharacterData;
- (_Bool)t1_containsOnlyEmoji;
- (_Bool)t1_enumerateComposedCharacterSequencesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_tfn_fuzzyPrefixMatch:(id)arg1;
- (long long)_tfn_editDistance:(id)arg1 maxSearch:(unsigned long long)arg2;
- (id)formatCode;
- (_Bool)isPossibleTwitterUsername;
- (id)canonicalTwitterUsername;
@property(readonly, copy, nonatomic) NSString *valueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *valueDetail;
@property(readonly, nonatomic) UIImage *valueIcon;
@property(readonly, copy, nonatomic) NSString *valueShortName;
@end

