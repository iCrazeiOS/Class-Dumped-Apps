//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGExploreNetworkerRequestConfig : NSObject
{
    long long _fetchAction;
    NSString *_maxId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *maxId; // @synthesize maxId=_maxId;
@property(readonly, nonatomic) long long fetchAction; // @synthesize fetchAction=_fetchAction;
- (id)_location;
- (_Bool)isEqual:(id)arg1;
- (id)generateRequestParameters;
- (id)initWithFetchAction:(long long)arg1 maxId:(id)arg2;

@end

