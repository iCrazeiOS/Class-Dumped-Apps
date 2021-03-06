//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AWSCore/AWSHTTPURLResponseSerializer-Protocol.h>

@class NSDictionary, NSString;

@interface AWSJSONResponseSerializer : NSObject <AWSHTTPURLResponseSerializer>
{
    NSDictionary *_serviceDefinitionJSON;
    NSString *_actionName;
    Class _outputClass;
}

@property(nonatomic) Class outputClass; // @synthesize outputClass=_outputClass;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSDictionary *serviceDefinitionJSON; // @synthesize serviceDefinitionJSON=_serviceDefinitionJSON;
- (void).cxx_destruct;
- (_Bool)validateResponse:(id)arg1 fromRequest:(id)arg2 data:(id)arg3 error:(id *)arg4;
- (id)responseObjectForResponse:(id)arg1 originalRequest:(id)arg2 currentRequest:(id)arg3 data:(id)arg4 error:(id *)arg5;
- (id)initWithJSONDefinition:(id)arg1 actionName:(id)arg2 outputClass:(Class)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

