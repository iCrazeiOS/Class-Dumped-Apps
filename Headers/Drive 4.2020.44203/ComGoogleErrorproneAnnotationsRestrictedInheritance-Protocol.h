//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangAnnotationAnnotation-Protocol.h"

@class IOSClass, IOSObjectArray, NSString;

@protocol ComGoogleErrorproneAnnotationsRestrictedInheritance <JavaLangAnnotationAnnotation>
@property(readonly) IOSClass *suggestedWhitelistAnnotation;
@property(readonly) _Bool warningOnlyForRefactoring;
@property(readonly) IOSObjectArray *whitelistAnnotations;
@property(readonly) NSString *allowedOnPath;
@property(readonly) NSString *link;
@property(readonly) NSString *explanation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@end

