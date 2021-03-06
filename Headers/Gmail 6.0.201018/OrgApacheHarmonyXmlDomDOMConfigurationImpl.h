//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OrgW3cDomDOMConfiguration-Protocol.h"

@class NSString;
@protocol OrgW3cDomDOMErrorHandler;

@interface OrgApacheHarmonyXmlDomDOMConfigurationImpl : NSObject <OrgW3cDomDOMConfiguration>
{
    _Bool cdataSections_;
    _Bool comments_;
    _Bool datatypeNormalization_;
    _Bool entities_;
    id <OrgW3cDomDOMErrorHandler> errorHandler_;
    _Bool namespaces_;
    NSString *schemaLocation_;
    NSString *schemaType_;
    _Bool splitCdataSections_;
    _Bool validate_;
    _Bool wellFormed_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)reportWithShort:(short)arg1 withNSString:(id)arg2;
- (_Bool)isValidWithJavaLangCharSequence:(id)arg1;
- (void)checkTextValidityWithJavaLangCharSequence:(id)arg1;
- (void)normalizeWithOrgW3cDomNode:(id)arg1;
- (id)getParameterNames;
- (id)getParameterWithNSString:(id)arg1;
- (void)setParameterWithNSString:(id)arg1 withId:(id)arg2;
- (_Bool)canSetParameterWithNSString:(id)arg1 withId:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

