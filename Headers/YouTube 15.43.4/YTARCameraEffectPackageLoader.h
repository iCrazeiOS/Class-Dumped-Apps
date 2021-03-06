//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSMutableDictionary, NSURL, NSURLSession, XNOEffectPackageProto, YTARCameraEffectManager;
@protocol YTARCameraEffectPackageLoaderDelegate;

@interface YTARCameraEffectPackageLoader : NSObject
{
    NSMutableDictionary *_effectIDToLoadedEffectMap;
    YTARCameraEffectManager *_effectManager;
    GIMMe *_gimme;
    id <YTARCameraEffectPackageLoaderDelegate> _delegate;
    NSURLSession *_session;
    unsigned long long _loadingState;
    NSURL *_effectPackageURL;
    XNOEffectPackageProto *_loadedEffectPackageProto;
}

+ (_Bool)isRelativeURL:(id)arg1;
+ (id)baseURLFromEffectPackageURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) XNOEffectPackageProto *loadedEffectPackageProto; // @synthesize loadedEffectPackageProto=_loadedEffectPackageProto;
@property(readonly, nonatomic) NSURL *effectPackageURL; // @synthesize effectPackageURL=_effectPackageURL;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <YTARCameraEffectPackageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)addBaseURL:(id)arg1 toEffectPackage:(id)arg2;
- (id)errorWithDebugDescription:(id)arg1;
- (void)addEffectInputs:(id)arg1 toEffectProto:(id)arg2;
- (void)loadEffectsWithInputs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadedEffectWithID:(id)arg1;
- (void)fetchEffectPackageWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadEffectsFromEffectPackage;
- (id)init;
- (id)initWithEffectPackageProto:(id)arg1;
- (id)initWithEffectPackageURL:(id)arg1;

@end

