//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIImpressionEvent, SPTUBIMobilePodcastFeaturedTracklist_Tracklist_HeaderEventFactory, SPTUBIMobilePodcastFeaturedTracklist_Tracklist_ItemEventFactory;

@protocol SPTUBIMobilePodcastFeaturedTracklist_TracklistEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobilePodcastFeaturedTracklist_Tracklist_ItemEventFactory>)itemFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIMobilePodcastFeaturedTracklist_Tracklist_HeaderEventFactory>)headerFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

