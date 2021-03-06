//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSString;

@interface STTSLDate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int calendar; // @dynamic calendar;
@property(nonatomic) int commonStyle; // @dynamic commonStyle;
@property(nonatomic) int day; // @dynamic day;
@property(copy, nonatomic) NSString *era; // @dynamic era;
@property(nonatomic) _Bool hasCalendar; // @dynamic hasCalendar;
@property(nonatomic) _Bool hasDay; // @dynamic hasDay;
@property(nonatomic) _Bool hasEra; // @dynamic hasEra;
@property(nonatomic) _Bool hasWeekday; // @dynamic hasWeekday;
@property(nonatomic) _Bool hasYear; // @dynamic hasYear;
@property(copy, nonatomic) NSString *monthName; // @dynamic monthName;
@property(nonatomic) int monthNumber; // @dynamic monthNumber;
@property(readonly, nonatomic) int monthOneOfCase; // @dynamic monthOneOfCase;
@property(nonatomic) int specificStyle; // @dynamic specificStyle;
@property(nonatomic) int styleId; // @dynamic styleId;
@property(readonly, nonatomic) int styleOneOfCase; // @dynamic styleOneOfCase;
@property(nonatomic) int weekday; // @dynamic weekday;
@property(nonatomic) int year; // @dynamic year;

@end

