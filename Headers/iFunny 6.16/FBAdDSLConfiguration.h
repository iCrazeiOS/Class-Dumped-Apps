//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdDSLConfiguration : NSObject
{
    _Bool _warmupWebViewOnStart;
    _Bool _requireAllCreativesInDiskToShow;
    long long _maxNumberOfReloadWebViewAttemptsBeforeViewDidAppear;
    long long _maxNumberOfReloadWebViewAttemptsAfterViewDidAppear;
    long long _timeToleranceForReloadingWebViewAfterViewDidAppearMS;
}

@property(readonly, nonatomic) _Bool requireAllCreativesInDiskToShow; // @synthesize requireAllCreativesInDiskToShow=_requireAllCreativesInDiskToShow;
@property(readonly, nonatomic) _Bool warmupWebViewOnStart; // @synthesize warmupWebViewOnStart=_warmupWebViewOnStart;
@property(readonly, nonatomic) long long timeToleranceForReloadingWebViewAfterViewDidAppearMS; // @synthesize timeToleranceForReloadingWebViewAfterViewDidAppearMS=_timeToleranceForReloadingWebViewAfterViewDidAppearMS;
@property(readonly, nonatomic) long long maxNumberOfReloadWebViewAttemptsAfterViewDidAppear; // @synthesize maxNumberOfReloadWebViewAttemptsAfterViewDidAppear=_maxNumberOfReloadWebViewAttemptsAfterViewDidAppear;
@property(readonly, nonatomic) long long maxNumberOfReloadWebViewAttemptsBeforeViewDidAppear; // @synthesize maxNumberOfReloadWebViewAttemptsBeforeViewDidAppear=_maxNumberOfReloadWebViewAttemptsBeforeViewDidAppear;
- (id)initWithMaxNumberOfReloadBeforeWebViewDidAppear:(long long)arg1 MaxNumberOfReloadAfterWebViewDidAppear:(long long)arg2 timeToleranceForReloadAfterViewDidAppearMS:(long long)arg3 warmupWebViewOnStart:(_Bool)arg4 requireAllCreativesInDiskToShow:(_Bool)arg5;
- (id)init;

@end

