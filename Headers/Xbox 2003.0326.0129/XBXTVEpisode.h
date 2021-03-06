//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXMediaItem.h"

@class NSArray, NSNumber, NSString;

@interface XBXTVEpisode : XBXMediaItem
{
    unsigned int _seasonNumber;
    unsigned int _episodeNumber;
    NSArray *_actors;
    NSArray *_roles;
    NSArray *_providers;
    NSArray *_genres;
    NSArray *_airings;
    NSString *_releaseDate;
    NSString *_duration;
    NSNumber *_metacriticScore;
    NSString *_seriesTitle;
    NSString *_seasonTitle;
    NSString *_parentalRating;
    NSString *_networkName;
    NSString *_seriesEdsId;
    NSString *_seasonEdsId;
}

@property(copy, nonatomic) NSString *seasonEdsId; // @synthesize seasonEdsId=_seasonEdsId;
@property(copy, nonatomic) NSString *seriesEdsId; // @synthesize seriesEdsId=_seriesEdsId;
@property(nonatomic) unsigned int episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(nonatomic) unsigned int seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(copy, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(copy, nonatomic) NSString *parentalRating; // @synthesize parentalRating=_parentalRating;
@property(copy, nonatomic) NSString *seasonTitle; // @synthesize seasonTitle=_seasonTitle;
@property(copy, nonatomic) NSString *seriesTitle; // @synthesize seriesTitle=_seriesTitle;
@property(retain, nonatomic) NSNumber *metacriticScore; // @synthesize metacriticScore=_metacriticScore;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(retain, nonatomic) NSArray *airings; // @synthesize airings=_airings;
@property(retain, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(retain, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(retain, nonatomic) NSArray *roles; // @synthesize roles=_roles;
@property(retain, nonatomic) NSArray *actors; // @synthesize actors=_actors;
- (void).cxx_destruct;
- (id)getProvidersIfApplicable;

@end

