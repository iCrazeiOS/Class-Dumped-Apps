//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YTColdConfig, YTHotConfig;
@protocol YTIdentityProvider, YTInnerTubeConfig, YTReachabilityController, YTServiceRegistryScope;

@interface YTInnerTubeContextFactory : NSObject
{
    id <YTServiceRegistryScope> _serviceRegistryScope;
    id <YTInnerTubeConfig> _innerTubeConfig;
    YTHotConfig *_hotConfig;
    YTColdConfig *_coldConfig;
    id <YTReachabilityController> _reachabilityController;
    id <YTIdentityProvider> _identityProvider;
    _Bool _applyInnerTubeContextDecorators;
    NSString *_stableDeviceID;
}

+ (id)preferredContentSizeCategory;
+ (double)screenPixelDensity;
+ (struct CGSize)windowSize;
+ (struct CGSize)portraitScreenSize;
- (void).cxx_destruct;
- (id)stableDeviceID;
- (id)clientInfoWithSendDeviceIdentifier:(_Bool)arg1;
- (id)contextWithIdentity:(id)arg1 clickTrackingParams:(id)arg2 sendDeviceIdentifier:(_Bool)arg3 clientScreenNonce:(id)arg4 consistencyTokenJars:(id)arg5;
- (id)contextWithIdentity:(id)arg1 clickTrackingParams:(id)arg2 sendDeviceIdentifier:(_Bool)arg3;
- (id)contextWithIdentity:(id)arg1;
- (id)init;
- (id)initWithServiceRegistryScope:(id)arg1 coldConfig:(id)arg2 hotConfig:(id)arg3 innerTubeConfig:(id)arg4 reachabilityController:(id)arg5;

@end

