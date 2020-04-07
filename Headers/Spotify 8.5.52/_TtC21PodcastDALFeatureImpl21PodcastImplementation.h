//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcast-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol SPTPodcastEpisode;

@interface _TtC21PodcastDALFeatureImpl21PodcastImplementation : NSObject <SPTPodcast>
{
    // Error parsing type: , name: title
    // Error parsing type: , name: descriptionText
    // Error parsing type: , name: podcastDescription
    // Error parsing type: , name: publisher
    // Error parsing type: , name: url
    // Error parsing type: , name: latestPlayedEpisodeURL
    // Error parsing type: , name: imageURL
    // Error parsing type: , name: isFollowing
    // Error parsing type: , name: mediaType
    // Error parsing type: , name: numberOfFollowers
    // Error parsing type: , name: consumptionOrder
    // Error parsing type: , name: unrangedLength
    // Error parsing type: , name: trailerEpisode
    // Error parsing type: , name: episodes
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, copy) NSArray *episodes;
@property(nonatomic, retain) id <SPTPodcastEpisode> trailerEpisode; // @synthesize trailerEpisode;
@property(nonatomic) unsigned long long unrangedLength; // @synthesize unrangedLength;
@property(nonatomic) long long consumptionOrder; // @synthesize consumptionOrder;
@property(nonatomic) long long numberOfFollowers; // @synthesize numberOfFollowers;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType;
@property(nonatomic) _Bool following; // @synthesize following=isFollowing;
- (_Bool)isFollowing;
@property(nonatomic, copy) NSURL *imageURL;
@property(nonatomic, copy) NSURL *latestPlayedEpisodeURL;
@property(nonatomic, copy) NSURL *URL;
@property(nonatomic, copy) NSString *publisher;
@property(nonatomic, copy) NSString *descriptionText;
@property(nonatomic, copy) NSString *title;

@end

