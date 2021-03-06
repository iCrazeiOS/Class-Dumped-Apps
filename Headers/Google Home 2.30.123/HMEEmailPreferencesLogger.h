//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AnalyticsLogger;

@interface HMEEmailPreferencesLogger : NSObject
{
    id <AnalyticsLogger> _analyticsLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
- (void)logEventWithType:(int)arg1 andValue:(id)arg2;
- (void)logDoubleOptinPreferencesForNotificationType:(long long)arg1 withPreference:(int)arg2;
- (void)logEmailOptinPreferencesForNotificationType:(long long)arg1 withValue:(_Bool)arg2;
- (void)logDoubleOptinEmailResendWasClickedForNotificationType:(long long)arg1;
- (void)logAccountPreferencesEmailSeenForNotificationType:(long long)arg1 withValue:(_Bool)arg2;
- (id)initWithAnalyticsLogger:(id)arg1;

@end

