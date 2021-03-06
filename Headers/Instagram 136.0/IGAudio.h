//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface IGAudio : FBValueObject <NSCopying, NSCoding>
{
    NSString *_mediaId;
    NSString *_userPk;
    NSString *_organicTrackingToken;
    NSURL *_playbackURL;
    unsigned long long _durationMs;
}

@property(readonly, nonatomic) unsigned long long durationMs; // @synthesize durationMs=_durationMs;
@property(readonly, copy, nonatomic) NSURL *playbackURL; // @synthesize playbackURL=_playbackURL;
@property(readonly, copy, nonatomic) NSString *organicTrackingToken; // @synthesize organicTrackingToken=_organicTrackingToken;
@property(readonly, copy, nonatomic) NSString *userPk; // @synthesize userPk=_userPk;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMediaId:(id)arg1 userPk:(id)arg2 organicTrackingToken:(id)arg3 playbackURL:(id)arg4 durationMs:(unsigned long long)arg5;
- (id)initWithCoder:(id)arg1;

@end

