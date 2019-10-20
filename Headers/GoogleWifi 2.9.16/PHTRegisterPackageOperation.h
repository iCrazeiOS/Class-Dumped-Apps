//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PHTBaseOperation.h"

@class NSArray, NSData, NSString, PHTPhenotypeCache;

@interface PHTRegisterPackageOperation : PHTBaseOperation
{
    PHTPhenotypeCache *_cache;
    NSString *_packageName;
    long long _version;
    NSArray *_logSources;
    NSData *_params;
    NSString *_bundleID;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSData *params; // @synthesize params=_params;
@property(retain, nonatomic) NSArray *logSources; // @synthesize logSources=_logSources;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(retain, nonatomic) PHTPhenotypeCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)logSourcesInDatabase:(id *)arg1;
- (id)registerPackageInTransaction:(_Bool *)arg1;
- (void)execute;
- (id)applicationInfo;
- (_Bool)shouldBeLogged;
- (id)initWithWithCounterName:(id)arg1 logger:(id)arg2 database:(id)arg3 cache:(id)arg4 packageName:(id)arg5 version:(long long)arg6 logSources:(id)arg7 params:(id)arg8 bundleID:(id)arg9 callback:(CDUnknownBlockType)arg10;

@end

