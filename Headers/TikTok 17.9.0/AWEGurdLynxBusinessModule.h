//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESGurdEventDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface AWEGurdLynxBusinessModule : NSObject <IESGurdEventDelegate>
{
    NSMutableDictionary *_channelLoadDict;
    NSMutableDictionary *_channelFinishDict;
}

+ (void)_syncResourcesWithChannels:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_syncDefaultPriorityResources;
+ (void)_syncHighPriorityResources;
+ (void)bytedSettingDidChange;
+ (void)syncResourcesWithChannel:(id)arg1 isUrgent:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)syncResourcesIfNeeded;
+ (_Bool)isSingleLynxFileForChannel:(id)arg1;
+ (id)lynxFilePathForChannel:(id)arg1;
+ (id)accessKeyDirectory;
+ (void)postLaunchInit;
+ (_Bool)enableGurd;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *channelFinishDict; // @synthesize channelFinishDict=_channelFinishDict;
@property(retain, nonatomic) NSMutableDictionary *channelLoadDict; // @synthesize channelLoadDict=_channelLoadDict;
- (void)gurdDidFinishApplyingPackageForAccessKey:(id)arg1 channel:(id)arg2 succeed:(_Bool)arg3 error:(id)arg4;
- (void)gurdDidFinishUnzippingPackageForAccessKey:(id)arg1 channel:(id)arg2 packageInfo:(id)arg3;
- (void)gurdDidFinishDownloadingPackageForAccessKey:(id)arg1 channel:(id)arg2 packageInfo:(id)arg3;
- (void)gurdWillDownloadPackageForAccessKey:(id)arg1 channel:(id)arg2 isPatch:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

