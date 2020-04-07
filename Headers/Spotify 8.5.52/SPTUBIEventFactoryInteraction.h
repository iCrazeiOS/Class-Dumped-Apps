//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIInteractionEvent-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SPTUBIEventFactoryInteraction : NSObject <SPTUBIInteractionEvent>
{
    NSString *_interactionType;
    NSString *_applicationId;
    NSArray *_components;
    NSString *_action;
    long long _actionVersion;
    NSDictionary *_actionParameters;
    NSArray *_errors;
    NSString *_specificationCommitHash;
    NSString *_generatorCommitHash;
}

@property(readonly, copy, nonatomic) NSString *generatorCommitHash; // @synthesize generatorCommitHash=_generatorCommitHash;
@property(readonly, copy, nonatomic) NSString *specificationCommitHash; // @synthesize specificationCommitHash=_specificationCommitHash;
@property(readonly, copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, copy, nonatomic) NSDictionary *actionParameters; // @synthesize actionParameters=_actionParameters;
@property(readonly, nonatomic) long long actionVersion; // @synthesize actionVersion=_actionVersion;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(readonly, copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
@property(readonly, copy, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1 applicationId:(id)arg2 specificationCommitHash:(id)arg3 components:(id)arg4 action:(id)arg5 actionVersion:(long long)arg6 actionParameters:(id)arg7 errors:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

