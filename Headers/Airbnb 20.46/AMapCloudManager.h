//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AMapCloudManager : NSObject
{
    NSMutableDictionary *_componentClouds;
    NSMutableDictionary *_components;
    NSMutableDictionary *_componentStatus;
}

+ (void)checkCloudTimestampWithResponse:(id)arg1 withRequest:(id)arg2;
+ (id)needCheckCloud:(id)arg1;
+ (void)saveCloudConfigs:(id)arg1 request:(id)arg2 response:(id)arg3 withComponent:(id)arg4 authKeys:(id)arg5;
+ (id)cloudConfigWithAuthKey:(id)arg1;
+ (id)cloudConfigWithComponent:(id)arg1 authKeys:(id)arg2;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *componentStatus; // @synthesize componentStatus=_componentStatus;
@property(retain, nonatomic) NSMutableDictionary *components; // @synthesize components=_components;
@property(retain, nonatomic) NSMutableDictionary *componentClouds; // @synthesize componentClouds=_componentClouds;
- (id)productForRequest:(id)arg1;
- (id)lctForProduct:(id)arg1;
- (id)lctForComponent:(id)arg1;
- (void)checkCloudTimestampWithResponse:(id)arg1 withRequest:(id)arg2;
- (id)needCheckCloud:(id)arg1;
- (void)saveCloudConfigs:(id)arg1 request:(id)arg2 response:(id)arg3 withComponent:(id)arg4 authKeys:(id)arg5;
- (void)loadCloudConfigs;
- (id)cloudConfigWithAuthKey:(id)arg1;
- (id)cloudConfigWithComponent:(id)arg1 authKeys:(id)arg2;
- (id)init;

@end

