//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRCalendarDay.h"

@class AIRCalendarReservation, AIRMutableCalendarDayPrice, NSString;

@interface AIRMutableCalendarDay : AIRCalendarDay
{
    _Bool _available;
    _Bool _availability;
    AIRMutableCalendarDayPrice *_price;
    NSString *_rawAvailability;
    NSString *_notes;
    AIRCalendarReservation *_reservation;
}

+ (id)mutableCalendarDayWithCalendarDay:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool availability; // @synthesize availability=_availability;
@property(copy, nonatomic) AIRCalendarReservation *reservation; // @synthesize reservation=_reservation;
@property(copy, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(copy, nonatomic) NSString *rawAvailability; // @synthesize rawAvailability=_rawAvailability;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(copy, nonatomic) AIRMutableCalendarDayPrice *price; // @synthesize price=_price;
- (void)updateAvailability:(id)arg1;

@end

