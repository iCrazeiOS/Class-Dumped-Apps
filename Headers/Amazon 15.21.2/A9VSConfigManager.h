//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSBaseConfigManager.h"

@class NSArray, NSDictionary, NSString;

@interface A9VSConfigManager : A9VSBaseConfigManager
{
    NSString *_styleFeedFeatureNameKey;
    NSString *_styleFeedLaunchPointKey;
    NSArray *_recommendations;
    NSDictionary *_modesConfig;
    NSDictionary *_styleConfig;
    NSDictionary *_visualSearchConfigData;
    long long _fetchStatus;
}

+ (id)sharedManager;
@property(nonatomic) long long fetchStatus; // @synthesize fetchStatus=_fetchStatus;
@property(retain) NSDictionary *visualSearchConfigData; // @synthesize visualSearchConfigData=_visualSearchConfigData;
@property(retain) NSDictionary *styleConfig; // @synthesize styleConfig=_styleConfig;
@property(retain) NSDictionary *modesConfig; // @synthesize modesConfig=_modesConfig;
@property(retain) NSArray *recommendations; // @synthesize recommendations=_recommendations;
@property(retain, nonatomic) NSString *styleFeedLaunchPointKey; // @synthesize styleFeedLaunchPointKey=_styleFeedLaunchPointKey;
@property(retain, nonatomic) NSString *styleFeedFeatureNameKey; // @synthesize styleFeedFeatureNameKey=_styleFeedFeatureNameKey;
- (void).cxx_destruct;
- (_Bool)isSet:(id)arg1;
- (_Bool)isWeblab:(id)arg1 equalTo:(id)arg2;
- (id)marketplace;
- (_Bool)isVLADFeatureEnabled:(long long)arg1;
- (void)resetFetchStatus;
- (long long)getFetchStatus;
- (id)bundle;
- (id)scanItVersion;
- (void)downloadConfigJSONforVersion:(id)arg1;
- (void)downloadConfigJSONforVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *jsonServerURL;
@property(readonly, nonatomic) NSString *jsonDebugServerURL;
- (id)getVisualSearchConfigURLForVersion:(id)arg1;
- (id)modesListDataWithIds;
- (id)modesListData;
- (id)failureRecommendations;
- (void)retrieveStyleFeedKeys;
- (id)styleConfigurations;
- (id)modesConfigurations;
- (void)updateConfigsFromJSonDict:(id)arg1;
- (void)downloadLatest;
- (id)init;

@end

