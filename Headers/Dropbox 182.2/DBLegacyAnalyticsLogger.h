//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBLegacyAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface DBLegacyAnalyticsLogger : NSObject <DBLegacyAnalyticsLogging>
{
    NSString *_userId;
    NSDictionary *_persistentExtraParams;
}

- (void).cxx_destruct;
- (void)logEventRawJson:(id)arg1;
- (void)logTraceUserIdWithEvent:(id)arg1 params:(id)arg2 machStartTime:(unsigned long long)arg3 machEndTime:(unsigned long long)arg4;
- (void)logTraceEvent:(id)arg1 params:(id)arg2 machStartTime:(unsigned long long)arg3 machEndTime:(unsigned long long)arg4;
- (void)logUserIdAndPersistentExtraParamsWithEvent:(id)arg1 params:(id)arg2;
- (void)logUserIdAndPersistentExtraParamsWithEvent:(id)arg1;
- (void)logPersistentExtraParamsWithEvent:(id)arg1 params:(id)arg2;
- (void)logPersistentExtraParamsWithEvent:(id)arg1;
- (void)logUserIdWithEvent:(id)arg1 params:(id)arg2;
- (id)db_augmentParamsWithUserId:(id)arg1;
- (void)logUserIdWithEvent:(id)arg1;
- (void)logEvent:(id)arg1 params:(id)arg2;
- (void)logEvent:(id)arg1;
- (id)initWithoutUserIdAndPersistentExtraParams:(id)arg1;
- (id)initWithoutUser;
- (id)initWithUserId:(id)arg1 andPersistentExtraParams:(id)arg2;
- (id)initWithUserId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

