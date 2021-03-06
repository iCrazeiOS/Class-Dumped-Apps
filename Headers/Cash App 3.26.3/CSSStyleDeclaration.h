//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSRule, NSMutableDictionary, NSString;

@interface CSSStyleDeclaration : NSObject
{
    NSMutableDictionary *internalDictionaryOfStylesByCSSClass;
    NSString *_cssText;
    unsigned long long length;
    CSSRule *parentRule;
}

@property(retain, nonatomic) CSSRule *parentRule; // @synthesize parentRule;
@property(nonatomic) unsigned long long length; // @synthesize length;
@property(retain, nonatomic) NSString *cssText; // @synthesize cssText=_cssText;
@property(retain, nonatomic) NSMutableDictionary *internalDictionaryOfStylesByCSSClass; // @synthesize internalDictionaryOfStylesByCSSClass;
- (void).cxx_destruct;
- (id)description;
- (id)item:(long long)arg1;
- (void)setProperty:(id)arg1 value:(id)arg2 priority:(id)arg3;
- (id)getPropertyPriority:(id)arg1;
- (id)removeProperty:(id)arg1;
- (id)getPropertyCSSValue:(id)arg1;
- (id)getPropertyValue:(id)arg1;
- (id)NSDictionaryFromCSSAttributes:(id)arg1;
- (id)init;

@end

