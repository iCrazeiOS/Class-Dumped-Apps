//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTSystemHealthCapturer-Protocol.h>

@class NSString, PRMCPUInstantCollectible, PRMMemoryInstantCollectible;
@protocol YTSystemHealthConfig;

@interface YTPrimesCapturer : NSObject <YTSystemHealthCapturer>
{
    id <YTSystemHealthConfig> _config;
    PRMCPUInstantCollectible *_cpuCollectible;
    PRMMemoryInstantCollectible *_memoryCollectible;
}

- (void).cxx_destruct;
- (_Bool)captureSystemHealthMetrics:(id)arg1;
- (_Bool)isEnabled;
- (void)configureWithConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

