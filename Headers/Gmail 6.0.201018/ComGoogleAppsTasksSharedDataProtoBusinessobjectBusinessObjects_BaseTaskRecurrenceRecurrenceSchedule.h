//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TDLTaskRecurrence_RecurrenceSchedule;

@interface ComGoogleAppsTasksSharedDataProtoBusinessobjectBusinessObjects_BaseTaskRecurrenceRecurrenceSchedule : NSObject
{
    TDLTaskRecurrence_RecurrenceSchedule *data_;
}

- (void)dealloc;
- (id)asProto;
- (_Bool)getBypassAutomaticRolling;
- (int)getInstanceNumberLimit;
- (id)getDateBoundary;
- (_Bool)hasDateBoundary;
- (id)getFirstInstanceDate;
- (_Bool)hasFirstInstanceDate;
- (int)getIntervalMultiplier;
- (id)getYearly;
- (_Bool)hasYearly;
- (id)getMonthly;
- (_Bool)hasMonthly;
- (id)getWeekly;
- (_Bool)hasWeekly;
- (id)getDaily;
- (_Bool)hasDaily;

@end

