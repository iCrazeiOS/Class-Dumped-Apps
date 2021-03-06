//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ADEumScreenshotController : NSObject
{
    _Bool _lowMemoryPause;
    _Bool _screenIsDirty;
    _Bool _screenshotsBlocked;
    double _lastScreenCaptureTime;
    long long _availableMemoryAtWarning;
    NSString *_previousScreenshotId;
    NSNumber *_periodicRate;
    double _animationDelay;
    double _animationDuration;
    double _animationStart;
    double _animationStop;
}

+ (id)sharedInstance;
+ (void)load;
@property(nonatomic) double animationStop; // @synthesize animationStop=_animationStop;
@property(nonatomic) double animationStart; // @synthesize animationStart=_animationStart;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double animationDelay; // @synthesize animationDelay=_animationDelay;
@property(nonatomic) _Bool screenshotsBlocked; // @synthesize screenshotsBlocked=_screenshotsBlocked;
@property(nonatomic) _Bool screenIsDirty; // @synthesize screenIsDirty=_screenIsDirty;
@property(retain, nonatomic) NSNumber *periodicRate; // @synthesize periodicRate=_periodicRate;
@property(retain, nonatomic) NSString *previousScreenshotId; // @synthesize previousScreenshotId=_previousScreenshotId;
@property(nonatomic) _Bool lowMemoryPause; // @synthesize lowMemoryPause=_lowMemoryPause;
@property(nonatomic) long long availableMemoryAtWarning; // @synthesize availableMemoryAtWarning=_availableMemoryAtWarning;
@property(nonatomic) double lastScreenCaptureTime; // @synthesize lastScreenCaptureTime=_lastScreenCaptureTime;
- (void).cxx_destruct;
- (void)watchForLifecycle;
- (_Bool)hasLowMemory;
- (_Bool)isReadyForScreenshot:(long long)arg1;
- (void)handleUIViewAnimation:(id)arg1;
- (id)captureVCAnimation:(long long)arg1;
- (void)captureWillResignActive;
- (void)captureTouchScreenshot:(id)arg1;
- (void)captureDirtyScreenshot;
- (void)captureDemandScreenshot;
- (void)captureScreenshotPeriodic:(id)arg1;
- (void)startScreenshotAutocapture;
- (id)makeReportName:(long long)arg1;
- (id)init;

@end

