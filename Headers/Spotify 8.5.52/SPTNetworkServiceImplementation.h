//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNetworkService-Protocol.h"

@class NSString, SPTAllocationContext, SPTHTTPService, SPTImageLoaderService, SPTImageLoaderServiceManager, SPTNetworkConnectivityControllerImplementation, SPTVideoURLAssetLoaderImplementation;
@protocol SPTContainerService, SPTCoreService, SPTImageLoaderFactory;

@interface SPTNetworkServiceImplementation : NSObject <SPTNetworkService>
{
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    SPTNetworkConnectivityControllerImplementation *_networkConnectivityController;
    SPTImageLoaderService *_imageLoaderService;
    SPTImageLoaderServiceManager *_imageLoaderServiceManager;
    SPTHTTPService *_httpService;
    SPTVideoURLAssetLoaderImplementation *_videoAssetLoader;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTVideoURLAssetLoaderImplementation *videoAssetLoader; // @synthesize videoAssetLoader=_videoAssetLoader;
@property(retain, nonatomic) SPTHTTPService *httpService; // @synthesize httpService=_httpService;
@property(retain, nonatomic) SPTImageLoaderServiceManager *imageLoaderServiceManager; // @synthesize imageLoaderServiceManager=_imageLoaderServiceManager;
@property(retain, nonatomic) SPTImageLoaderService *imageLoaderService; // @synthesize imageLoaderService=_imageLoaderService;
@property(retain, nonatomic) SPTNetworkConnectivityControllerImplementation *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)invalidateSessionFactories;
- (id)provideHermesController;
- (id)provideReachabilityForInternetConnection;
- (id)provideNetworkConnectivityController;
- (id)provideHTTPService;
- (id)provideDataLoaderService;
- (id)provideVideoAssetLoaderWithHTTPMaximumConnectionsPerHost:(long long)arg1 timeoutIntervalForRequest:(double)arg2 timeoutIntervalForResource:(double)arg3;
- (id)provideVideoAssetLoader;
- (id)provideImageLoaderService;
- (id)provideImageLoaderServiceManager;
- (id)provideImageLoaderFactory;
- (id)provideDataLoaderFactory;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

