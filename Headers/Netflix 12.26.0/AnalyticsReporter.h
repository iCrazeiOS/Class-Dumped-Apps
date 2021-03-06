//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NrdCrashReporterDelegateProtocol-Protocol.h"

@interface AnalyticsReporter : NSObject <NrdCrashReporterDelegateProtocol>
{
    _Bool _crashReportingEnabled;
    _Bool _breadcrumbLoggingEnabled;
    _Bool _isAardvarkInitialized;
    _Bool _exceptionLoggingEnabled;
    double _lastTime;
}

+ (void)addCustomKey:(id)arg1 andFloatValue:(float)arg2;
+ (void)addCustomKey:(id)arg1 andIntValue:(int)arg2;
+ (void)addCustomKey:(id)arg1 andBoolValue:(_Bool)arg2;
+ (void)addCustomKey:(id)arg1 andObjectValue:(id)arg2;
+ (void)logHandledException:(id)arg1;
+ (void)logToAardvark:(id)arg1;
+ (void)leaveBreadcrumb:(id)arg1;
+ (_Bool)crashReportingEnabled;
+ (void)setCrashReportingEnabled:(_Bool)arg1;
+ (void)refreshCrashReportingInfo:(id)arg1;
+ (void)startCrashMonitoring:(id)arg1 andBugsnagAppID:(id)arg2;
+ (id)sharedInstance;
@property(nonatomic) _Bool exceptionLoggingEnabled; // @synthesize exceptionLoggingEnabled=_exceptionLoggingEnabled;
@property(nonatomic) _Bool isAardvarkInitialized; // @synthesize isAardvarkInitialized=_isAardvarkInitialized;
@property(nonatomic) _Bool breadcrumbLoggingEnabled; // @synthesize breadcrumbLoggingEnabled=_breadcrumbLoggingEnabled;
@property(nonatomic) _Bool crashReportingEnabled; // @synthesize crashReportingEnabled=_crashReportingEnabled;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
- (_Bool)shouldEnableBugReporter;
- (void)configLoaded:(id)arg1;
- (void)orientationChanged:(id)arg1;
- (void)lastRunCrashDetected:(id)arg1;
- (id)init;

@end

