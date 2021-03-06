//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESFalconManager : NSObject
{
}

+ (id)customInterceptors;
+ (void)setInterceptionEnable:(_Bool)arg1;
+ (_Bool)interceptionEnable;
+ (void)setInterceptionDelegate:(id)arg1;
+ (id)interceptionDelegate;
+ (void)setInterceptionLock:(_Bool)arg1;
+ (_Bool)interceptionLock;
+ (void)setInterceptionWKHttpScheme:(_Bool)arg1;
+ (_Bool)interceptionWKHttpScheme;
+ (void)setWebpDecodeEnable:(_Bool)arg1;
+ (_Bool)webpDecodeEnable;
+ (unsigned long long)_findCustomInterceptionInsertIndex:(id)arg1;
+ (void)createGurdInterceptorIfNeeded;
+ (void)createFileInterceptorIfNeeded;
+ (id)_customInterceptionFalconMetaDataForURLRequest:(id)arg1;
+ (id)_defaultInterceptionFalconMetaDataForURLRequest:(id)arg1;
+ (id)falconDataForURLRequest:(id)arg1;
+ (id)falconMetaDataForURLRequest:(id)arg1;
+ (void)unregisterCustomInterceptor:(id)arg1;
+ (void)registerCustomInterceptor:(id)arg1;
+ (void)unregisterPatterns:(id)arg1;
+ (void)registerPatterns:(id)arg1 forGurdAccessKey:(id)arg2;
+ (void)registerPattern:(id)arg1 forGurdAccessKey:(id)arg2;
+ (void)registerPatterns:(id)arg1 forSearchPath:(id)arg2;
+ (void)registerPattern:(id)arg1 forSearchPath:(id)arg2;
+ (void)initialize;
+ (void)callingOutFalconInterceptedRequest:(id)arg1 willLoadFromCache:(_Bool)arg2;

@end

