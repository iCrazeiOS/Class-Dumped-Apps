//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"
#import "SNPFeatureStoreModuleTesting-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface SNPFeatureStoreModule : NSObject <SNPFeatureStoreModuleTesting, RCTBridgeModule>
{
    RCTBridge *_bridge;
}

+ (id)errorFromException:(id)arg1;
+ (const struct RCTMethodInfo *)__rct_export__1243;
+ (const struct RCTMethodInfo *)__rct_export__1182;
+ (const struct RCTMethodInfo *)__rct_export__1011;
+ (const struct RCTMethodInfo *)__rct_export__520;
+ (id)SNP_CONSTANTS;
+ (id)ssnap_constant_CACHE_FLAG_DEFAULT;
+ (id)ssnap_constant_CACHE_FLAG_CDN;
+ (id)ssnap_constant_CACHE_FLAG_DISK;
+ (void)load;
+ (id)moduleName;
@property(retain) RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)fetchManifestAsync:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)isSignatureVerificationActiveAsync:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)loadByUrl:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)loadByName:(id)arg1 withContext:(id)arg2 cdnFallBack:(_Bool)arg3 resolve:(CDUnknownBlockType)arg4 reject:(CDUnknownBlockType)arg5;
- (id)constantsToExport;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

