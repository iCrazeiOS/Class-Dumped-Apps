//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRWMessageTargetingEvaluable-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface GRWMessageTargeting : NSObject <NSSecureCoding, GRWMessageTargetingEvaluable>
{
    NSArray *_clauses;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *clauses; // @synthesize clauses=_clauses;
@property(readonly, copy) NSString *description;
- (_Bool)isSatisfiedWithCounter:(id)arg1 forAccount:(id)arg2 messagingDelegate:(id)arg3;
- (id)initWithClauses:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

