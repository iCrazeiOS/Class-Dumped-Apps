//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSRegularExpression, NSString;

@interface IDKmzTemplate : NSObject
{
    NSRegularExpression *_variableRgx;
    NSMutableString *_buffer;
    NSString *_headerContent;
    NSString *_footerContent;
    NSString *_styleDefinitionContent;
    NSString *_styleMap1DefinitionContent;
    NSString *_styleMap2DefinitionContent;
    NSString *_styleMapEmptyDefinitionContent;
    NSString *_placemarkDefinitionContent;
}

- (void).cxx_destruct;
@property(retain) NSString *placemarkDefinitionContent; // @synthesize placemarkDefinitionContent=_placemarkDefinitionContent;
@property(retain) NSString *styleMapEmptyDefinitionContent; // @synthesize styleMapEmptyDefinitionContent=_styleMapEmptyDefinitionContent;
@property(retain) NSString *styleMap2DefinitionContent; // @synthesize styleMap2DefinitionContent=_styleMap2DefinitionContent;
@property(retain) NSString *styleMap1DefinitionContent; // @synthesize styleMap1DefinitionContent=_styleMap1DefinitionContent;
@property(retain) NSString *styleDefinitionContent; // @synthesize styleDefinitionContent=_styleDefinitionContent;
@property(retain) NSString *footerContent; // @synthesize footerContent=_footerContent;
@property(retain) NSString *headerContent; // @synthesize headerContent=_headerContent;
@property(retain) NSMutableString *buffer; // @synthesize buffer=_buffer;
@property(retain) NSRegularExpression *variableRgx; // @synthesize variableRgx=_variableRgx;
- (id)getPlacemarkDefinitionContent;
- (id)getStyleMap2DefinitionContent;
- (id)getStyleMap1DefinitionContent;
- (id)getStyleMapEmptyDefinitionContent;
- (id)getStyleDefinitionContent;
- (id)getFooterContent;
- (id)getHeaderContent;
- (id)replaceVars:(id)arg1 inString:(id)arg2;
- (void)writePlacemarkDefinition:(id)arg1;
- (void)writeStyleMapEmptyDefinition:(id)arg1;
- (void)writeStyleMap2Definition:(id)arg1;
- (void)writeStyleMap1Definition:(id)arg1;
- (void)writeStyleDefinition:(id)arg1;
- (void)writeFooter:(id)arg1;
- (void)writeHeader:(id)arg1;
- (id)content;
- (id)init;

@end

