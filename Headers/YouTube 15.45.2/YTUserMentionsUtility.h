//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTUserMentionsUtility : NSObject
{
}

+ (id)chipsFromAttributedString:(id)arg1;
+ (_Bool)attributedStringContainsChip:(id)arg1;
+ (id)plainTextStringFromAttributedString:(id)arg1;
+ (void)updateAccessibilityLabelOfTextViewWithChips:(id)arg1;
+ (id)nonChipAttributesInAttributedString:(id)arg1;
+ (id)nonChipRangesInAttributedString:(id)arg1;
+ (void)replaceTextWithChipInTextView:(id)arg1 replacedText:(id)arg2 channelName:(id)arg3 channelId:(id)arg4 pageStyle:(long long)arg5 shouldAppendSingleSpace:(_Bool)arg6 mentionStartLocation:(unsigned long long)arg7 replaceWithPlainText:(_Bool)arg8 chipAttributes:(id)arg9 startLocationMustMatch:(_Bool)arg10;
+ (void)replaceTextWithChipInTextView:(id)arg1 replacedText:(id)arg2 channelName:(id)arg3 channelId:(id)arg4 pageStyle:(long long)arg5 shouldAppendSingleSpace:(_Bool)arg6 mentionStartLocation:(unsigned long long)arg7;
+ (id)textForCreationFromAttributedString:(id)arg1;

@end

