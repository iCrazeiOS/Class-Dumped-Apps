//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PDFCResult;

@interface PDFCSkippedAnnotationResult : NSObject
{
    PDFCResult *_result;
    NSArray *_skippedAnnotations;
}

+ (id)SkippedAnnotationResultWithResult:(id)arg1 skippedAnnotations:(id)arg2;
@property(readonly, nonatomic) NSArray *skippedAnnotations; // @synthesize skippedAnnotations=_skippedAnnotations;
@property(readonly, nonatomic) PDFCResult *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResult:(id)arg1 skippedAnnotations:(id)arg2;

@end

