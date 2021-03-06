//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHCFaceInstance, NSSet;
@protocol HMEFace;

@protocol HMEFaceObserver <NSObject>

@optional
- (void)didUpdateEditableState:(long long)arg1 forFaceInstances:(NSSet *)arg2 face:(id <HMEFace>)arg3;
- (void)didUpdateImageLoadingStateForFaceInstance:(GHCFaceInstance *)arg1 face:(id <HMEFace>)arg2;
- (void)didUpdateHeroImageLoadingStateForFace:(id <HMEFace>)arg1;
- (void)didUpdateHeroImageForFace:(id <HMEFace>)arg1;
- (void)didUpdateFaceInstancesForFace:(id <HMEFace>)arg1;
- (void)didUpdateLastTrackForFace:(id <HMEFace>)arg1;
- (void)didUpdateNameForFace:(id <HMEFace>)arg1;
- (void)didUpdateCategoryForFace:(id <HMEFace>)arg1;
- (void)didUpdateEditableStateForFace:(id <HMEFace>)arg1;
@end

