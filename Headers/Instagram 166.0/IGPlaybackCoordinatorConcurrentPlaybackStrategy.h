//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGPlaybackCoordinatorStrategy-Protocol.h>

@class NSString;

@interface IGPlaybackCoordinatorConcurrentPlaybackStrategy : NSObject <IGPlaybackCoordinatorStrategy>
{
    double _appearancePlaybackThreshold;
    double _disappearancePlaybackThreshold;
}

- (long long)_resolvePlaybackState:(id)arg1;
- (id)resolve:(id)arg1;
@property(readonly, nonatomic) _Bool requiresUpdatesOnVisibilityUnchanged;
- (id)initWithDefaultPlaybackThresholdValues;
- (id)initWithAppearancePlaybackThreshold:(double)arg1 disappearancePlaybackThreshold:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

