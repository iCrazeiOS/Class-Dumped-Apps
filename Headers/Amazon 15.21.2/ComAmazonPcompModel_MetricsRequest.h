//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface ComAmazonPcompModel_MetricsRequest : CoralModel <NSCoding, NSCopying>
{
    NSString *_sessionId;
    NSString *_requestId;
    NSString *_scope;
    NSString *_metric;
    NSString *_throwable;
    NSString *_marketplace;
    NSString *_domain;
    NSString *_url;
    NSDictionary *_timings;
    NSDictionary *_counters;
    NSArray *_metadata;
    NSArray *_hints;
}

+ (id)mapTypeForProperty:(id)arg1;
+ (id)listTypeForProperty:(id)arg1;
+ (id)type;
@property(retain, nonatomic) NSArray *hints; // @synthesize hints=_hints;
@property(retain, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSDictionary *counters; // @synthesize counters=_counters;
@property(retain, nonatomic) NSDictionary *timings; // @synthesize timings=_timings;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *marketplace; // @synthesize marketplace=_marketplace;
@property(copy, nonatomic) NSString *throwable; // @synthesize throwable=_throwable;
@property(copy, nonatomic) NSString *metric; // @synthesize metric=_metric;
@property(copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;

@end

