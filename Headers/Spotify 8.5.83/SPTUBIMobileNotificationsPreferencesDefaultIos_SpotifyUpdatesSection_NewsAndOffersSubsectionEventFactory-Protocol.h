//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileNotificationsPreferencesDefaultIos_SpotifyUpdatesSection_NewsAndOffersSubsection_EmailNotificationEventFactory, SPTUBIMobileNotificationsPreferencesDefaultIos_SpotifyUpdatesSection_NewsAndOffersSubsection_PushNotificationEventFactory;

@protocol SPTUBIMobileNotificationsPreferencesDefaultIos_SpotifyUpdatesSection_NewsAndOffersSubsectionEventFactory <NSObject>
- (id <SPTUBIMobileNotificationsPreferencesDefaultIos_SpotifyUpdatesSection_NewsAndOffersSubsection_EmailNotificationEventFactory>)emailNotificationFactory;
- (id <SPTUBIMobileNotificationsPreferencesDefaultIos_SpotifyUpdatesSection_NewsAndOffersSubsection_PushNotificationEventFactory>)pushNotificationFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

