//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGMusicBookmarkableStoriesAudioProtocol-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGAsyncTask, IGStoryMusicLoggingMetadata, IGUser, NSString;

@interface IGStoryOriginalSoundInfo : NSObject <NSCopying, NSCoding, IGMusicBookmarkableStoriesAudioProtocol>
{
    _Bool _hideRemixing;
    _Bool _isBookmarked;
    NSString *_pk;
    NSString *_audioClusterId;
    NSString *_audioAssetID;
    NSString *_title;
    IGUser *_artist;
    double _durationInMs;
    NSString *_originalMediaID;
    IGAsyncTask *_progressiveDownloadURL;
    IGAsyncTask *_audioAsset;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGAsyncTask *audioAsset; // @synthesize audioAsset=_audioAsset;
@property(readonly, nonatomic) IGAsyncTask *progressiveDownloadURL; // @synthesize progressiveDownloadURL=_progressiveDownloadURL;
@property(nonatomic) _Bool isBookmarked; // @synthesize isBookmarked=_isBookmarked;
@property(readonly, nonatomic) _Bool hideRemixing; // @synthesize hideRemixing=_hideRemixing;
@property(readonly, nonatomic) NSString *originalMediaID; // @synthesize originalMediaID=_originalMediaID;
@property(readonly, nonatomic) double durationInMs; // @synthesize durationInMs=_durationInMs;
@property(readonly, nonatomic) IGUser *artist; // @synthesize artist=_artist;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *audioAssetID; // @synthesize audioAssetID=_audioAssetID;
@property(readonly, copy, nonatomic) NSString *audioClusterId; // @synthesize audioClusterId=_audioClusterId;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAudioAssetID:(id)arg1 title:(id)arg2 progressiveDownloadURLTask:(id)arg3 artist:(id)arg4 durationInMs:(double)arg5 originalMediaID:(id)arg6 hideRemixing:(_Bool)arg7 isBookmarked:(_Bool)arg8;
- (id)initWithAudioAssetID:(id)arg1 title:(id)arg2 progressiveDownloadURL:(id)arg3 artist:(id)arg4 durationInMs:(double)arg5 originalMediaID:(id)arg6 hideRemixing:(_Bool)arg7 isBookmarked:(_Bool)arg8;
@property(copy, nonatomic) NSString *searchSessionID;
@property(retain, nonatomic) IGStoryMusicLoggingMetadata *loggingMetadata;
@property(nonatomic) _Bool isPostcapture;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

