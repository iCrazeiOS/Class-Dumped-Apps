//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RealmSwiftObject.h"

@class NSDate, NSString, _TtC96googlemac_iPhone_ConferenceKit_Source_Services_Calendar_Implementation_CalendarStoreImpl_ImplLib27CalendarResponseSummaryData;

@interface _TtC96googlemac_iPhone_ConferenceKit_Source_Services_Calendar_Implementation_CalendarStoreImpl_ImplLib17CalendarEntryData : RealmSwiftObject
{
    // Error parsing type: , name: id
    // Error parsing type: , name: title
    // Error parsing type: , name: startDate
    // Error parsing type: , name: endDate
    // Error parsing type: , name: fetchDate
    // Error parsing type: , name: isRejoinableMeeting
    // Error parsing type: , name: entryDescription
    // Error parsing type: , name: location
    // Error parsing type: , name: hangoutURL
    // Error parsing type: , name: isRecurringEvent
    // Error parsing type: , name: isPrivate
    // Error parsing type: , name: hasOmittedAttendees
    // Error parsing type: , name: canGuestsSeeOtherGuests
    // Error parsing type: , name: canGuestsInviteOthers
    // Error parsing type: , name: isAllDay
    // Error parsing type: , name: livestreamURL
    // Error parsing type: , name: meetingCode
    // Error parsing type: , name: meetingURL
    // Error parsing type: , name: meetingPhoneNumber
    // Error parsing type: , name: meetingPINCode
    // Error parsing type: , name: internationalPIN
    // Error parsing type: , name: languageCode
    // Error parsing type: , name: regionCode
    // Error parsing type: , name: responsSummaryData
    // Error parsing type: , name: attendees
    // Error parsing type: , name: resources
    // Error parsing type: , name: attachments
    // Error parsing type: , name: formattedLocations
    // Error parsing type: , name: numberClasses
}

+ (id)primaryKey;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 schema:(id)arg2;
- (id)initWithRealm:(id)arg1 schema:(id)arg2;
- (id)init;
@property(nonatomic, retain) _TtC96googlemac_iPhone_ConferenceKit_Source_Services_Calendar_Implementation_CalendarStoreImpl_ImplLib27CalendarResponseSummaryData *responsSummaryData; // @synthesize responsSummaryData;
@property(nonatomic, copy) NSString *regionCode;
@property(nonatomic, copy) NSString *languageCode;
@property(nonatomic, copy) NSString *internationalPIN;
@property(nonatomic, copy) NSString *meetingPINCode;
@property(nonatomic, copy) NSString *meetingPhoneNumber;
@property(nonatomic, copy) NSString *meetingURL;
@property(nonatomic, copy) NSString *meetingCode;
@property(nonatomic, copy) NSString *livestreamURL;
@property(nonatomic) _Bool isAllDay; // @synthesize isAllDay;
@property(nonatomic) _Bool canGuestsInviteOthers; // @synthesize canGuestsInviteOthers;
@property(nonatomic) _Bool canGuestsSeeOtherGuests; // @synthesize canGuestsSeeOtherGuests;
@property(nonatomic) _Bool hasOmittedAttendees; // @synthesize hasOmittedAttendees;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate;
@property(nonatomic) _Bool isRecurringEvent; // @synthesize isRecurringEvent;
@property(nonatomic, copy) NSString *hangoutURL;
@property(nonatomic, copy) NSString *location;
@property(nonatomic, copy) NSString *entryDescription;
@property(nonatomic) _Bool isRejoinableMeeting; // @synthesize isRejoinableMeeting;
@property(nonatomic, copy) NSDate *fetchDate;
@property(nonatomic, copy) NSDate *endDate;
@property(nonatomic, copy) NSDate *startDate;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, copy) NSString *id;

@end

