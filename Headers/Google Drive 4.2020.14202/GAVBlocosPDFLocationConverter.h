//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GAVBlocosPDFLocationConverter : NSObject
{
}

+ (id)rectangleForFrame:(struct CGRect)arg1 pageNumber:(unsigned long long)arg2 pdfView:(id)arg3;
+ (id)pageRectanglesForFrame:(struct CGRect)arg1 pageNumber:(unsigned long long)arg2 pdfView:(id)arg3;
+ (struct CGRect)frameForRectangle:(id)arg1 pageNumber:(unsigned long long)arg2 pdfView:(id)arg3;
+ (id)framesForRectangleList:(id)arg1 pdfView:(id)arg2;
+ (id)framesForSingleRect:(id)arg1 pdfView:(id)arg2;
+ (id)locationForInlineCommentStartingFrame:(struct CGRect)arg1 startingPageNumber:(unsigned long long)arg2 endingFrame:(struct CGRect)arg3 endingPageNumber:(unsigned long long)arg4 pdfView:(id)arg5;
+ (id)locationForPositionalCommentFrame:(struct CGRect)arg1 pageNumber:(unsigned long long)arg2 image:(id)arg3;
+ (id)framesForLocation:(id)arg1 pdfView:(id)arg2;

@end

