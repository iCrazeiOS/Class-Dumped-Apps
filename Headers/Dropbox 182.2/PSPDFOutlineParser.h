//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PSPDFDocumentProvider, PSPDFOrderedDictionary, PSPDFOutlineElement;

@interface PSPDFOutlineParser : NSObject
{
    PSPDFOrderedDictionary *_outlinePageDict;
    struct recursive_mutex _outlineParserLock;
    _Bool _outlineParsed;
    PSPDFDocumentProvider *_documentProvider;
    PSPDFOutlineElement *_outlineStore;
    unsigned long long _firstVisibleElement;
}

@property(nonatomic) unsigned long long firstVisibleElement; // @synthesize firstVisibleElement=_firstVisibleElement;
@property(retain) PSPDFOutlineElement *outlineStore; // @synthesize outlineStore=_outlineStore;
@property(readonly, nonatomic) __weak PSPDFDocumentProvider *documentProvider; // @synthesize documentProvider=_documentProvider;
@property(getter=isOutlineParsed) _Bool outlineParsed; // @synthesize outlineParsed=_outlineParsed;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buildPageNameCache:(id)arg1;
- (void)recursiveOutlineCrawler:(id)arg1;
- (id)outlineElementForPageAtIndex:(unsigned long long)arg1 exactPageOnly:(_Bool)arg2;
- (void)parseOutlineIfNeeded;
@property(retain, nonatomic) PSPDFOutlineElement *outline;
@property(readonly, nonatomic, getter=isOutlineAvailable) _Bool outlineAvailable;
- (id)description;
- (id)initWithDocumentProvider:(id)arg1;
- (id)init;

@end

