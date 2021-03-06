//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonBasePredicate-Protocol.h"

@class NSString;

@interface ComGoogleCommonBaseCharMatcher : NSObject <ComGoogleCommonBasePredicate>
{
}

+ (id)forPredicateWithComGoogleCommonBasePredicate:(id)arg1;
+ (id)inRangeWithChar:(unsigned short)arg1 withChar:(unsigned short)arg2;
+ (id)noneOfWithJavaLangCharSequence:(id)arg1;
+ (id)anyOfWithJavaLangCharSequence:(id)arg1;
+ (id)isNotWithChar:(unsigned short)arg1;
+ (id)isWithChar:(unsigned short)arg1;
+ (id)singleWidth;
+ (id)invisible;
+ (id)javaIsoControl;
+ (id)javaLowerCase;
+ (id)javaUpperCase;
+ (id)javaLetterOrDigit;
+ (id)javaLetter;
+ (id)javaDigit;
+ (id)digit;
+ (id)ascii;
+ (id)breakingWhitespace;
+ (id)whitespace;
+ (id)none;
+ (id)any;
- (id)or__WithJavaUtilFunctionPredicate:(id)arg1;
- (id)and__WithJavaUtilFunctionPredicate:(id)arg1;
- (_Bool)testWithId:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)applyWithId:(id)arg1;
- (id)trimAndCollapseFromWithJavaLangCharSequence:(id)arg1 withChar:(unsigned short)arg2;
- (id)collapseFromWithJavaLangCharSequence:(id)arg1 withChar:(unsigned short)arg2;
- (id)trimTrailingFromWithJavaLangCharSequence:(id)arg1;
- (id)trimLeadingFromWithJavaLangCharSequence:(id)arg1;
- (id)trimFromWithJavaLangCharSequence:(id)arg1;
- (id)replaceFromWithJavaLangCharSequence:(id)arg1 withJavaLangCharSequence:(id)arg2;
- (id)replaceFromWithJavaLangCharSequence:(id)arg1 withChar:(unsigned short)arg2;
- (id)retainFromWithJavaLangCharSequence:(id)arg1;
- (id)removeFromWithJavaLangCharSequence:(id)arg1;
- (int)countInWithJavaLangCharSequence:(id)arg1;
- (int)lastIndexInWithJavaLangCharSequence:(id)arg1;
- (int)indexInWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2;
- (int)indexInWithJavaLangCharSequence:(id)arg1;
- (_Bool)matchesNoneOfWithJavaLangCharSequence:(id)arg1;
- (_Bool)matchesAllOfWithJavaLangCharSequence:(id)arg1;
- (_Bool)matchesAnyOfWithJavaLangCharSequence:(id)arg1;
- (void)setBitsWithJavaUtilBitSet:(id)arg1;
- (id)precomputedInternal;
- (id)precomputed;
- (id)or__WithComGoogleCommonBaseCharMatcher:(id)arg1;
- (id)and__WithComGoogleCommonBaseCharMatcher:(id)arg1;
- (id)negate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

