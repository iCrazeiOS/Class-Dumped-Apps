//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsCustomFeed : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _owner_idIsSet;
    _Bool _number_subredditsIsSet;
    _Bool _number_followersIsSet;
    _Bool _is_nsfw;
    _Bool _is_nsfwIsSet;
    _Bool _cover_art_urlIsSet;
    _Bool _visibilityIsSet;
    int _number_subreddits;
    int _number_followers;
    NSString *_id;
    NSString *_owner_id;
    NSString *_cover_art_url;
    NSString *_visibility;
}

@property(nonatomic) _Bool visibilityIsSet; // @synthesize visibilityIsSet=_visibilityIsSet;
@property(copy, nonatomic) NSString *visibility; // @synthesize visibility=_visibility;
@property(nonatomic) _Bool cover_art_urlIsSet; // @synthesize cover_art_urlIsSet=_cover_art_urlIsSet;
@property(copy, nonatomic) NSString *cover_art_url; // @synthesize cover_art_url=_cover_art_url;
@property(nonatomic) _Bool is_nsfwIsSet; // @synthesize is_nsfwIsSet=_is_nsfwIsSet;
@property(nonatomic) _Bool is_nsfw; // @synthesize is_nsfw=_is_nsfw;
@property(nonatomic) _Bool number_followersIsSet; // @synthesize number_followersIsSet=_number_followersIsSet;
@property(nonatomic) int number_followers; // @synthesize number_followers=_number_followers;
@property(nonatomic) _Bool number_subredditsIsSet; // @synthesize number_subredditsIsSet=_number_subredditsIsSet;
@property(nonatomic) int number_subreddits; // @synthesize number_subreddits=_number_subreddits;
@property(nonatomic) _Bool owner_idIsSet; // @synthesize owner_idIsSet=_owner_idIsSet;
@property(copy, nonatomic) NSString *owner_id; // @synthesize owner_id=_owner_id;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetVisibility;
- (void)unsetCover_art_url;
- (void)unsetIs_nsfw;
- (void)unsetNumber_followers;
- (void)unsetNumber_subreddits;
- (void)unsetOwner_id;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 owner_id:(id)arg2 number_subreddits:(int)arg3 number_followers:(int)arg4 is_nsfw:(_Bool)arg5 cover_art_url:(id)arg6 visibility:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

