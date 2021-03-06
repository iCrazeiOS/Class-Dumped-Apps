//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRApp, CRSDKSettings, NSManagedObjectContext;

@interface CRExceptionGenerator : NSObject
{
    CRApp *_app;
    NSManagedObjectContext *_context;
    CRSDKSettings *_sdkSettings;
}

@property(retain) CRSDKSettings *sdkSettings; // @synthesize sdkSettings=_sdkSettings;
@property(retain) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain) CRApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (id)errorTraceStringForStacktraceArray:(id)arg1;
- (void)logError:(id)arg1 stackTrace:(id)arg2;
- (void)logHandledException:(id)arg1 stackTrace:(id)arg2;
- (void)logHandledException:(id)arg1;
- (void)logEventWithError:(id)arg1 stackTrace:(id)arg2 timestamp:(id)arg3;
- (void)logEventWithException:(id)arg1 stackTrace:(id)arg2 timestamp:(id)arg3;
- (void)logLegacyEventWithException:(id)arg1 stackTrace:(id)arg2 timestamp:(id)arg3;
- (void)logErrorBreadcrumbWithException:(id)arg1 timestamp:(id)arg2;
- (id)threadNameForThread:(id)arg1;
- (id)threadNumberForThread:(id)arg1;
- (id)initWithContext:(id)arg1 app:(id)arg2 sdkSettings:(id)arg3;

@end

