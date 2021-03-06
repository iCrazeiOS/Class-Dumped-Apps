//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAChatStorageManagedObject.h>

#import <Core/WAMediaItemProtocol-Protocol.h>

@class NSArray, NSData, NSDate, NSNumber, NSSet, NSString, UIColor, WAMessage, WAPBContextInfo_ExternalAdReplyInfo, WAPBMediaItemMetadata, WAPBMediaKeyMetadata, WAPBMessage_ListMessage, WAPBMessage_ListResponseMessage;
@protocol WAServerDate;

@interface WAMediaItem : WAChatStorageManagedObject <WAMediaItemProtocol>
{
    WAPBMediaItemMetadata *_decodedMetadata;
    WAPBMediaKeyMetadata *_decodedMediaKeyMetadata;
    _Bool _mediaSaved;
    int _httpRetryCount;
    NSString *_mediaHostIp;
}

+ (id)absolutePathFrom:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isMediaSaved) _Bool mediaSaved; // @synthesize mediaSaved=_mediaSaved;
@property(copy, nonatomic) NSString *mediaHostIp; // @synthesize mediaHostIp=_mediaHostIp;
@property(nonatomic) int httpRetryCount; // @synthesize httpRetryCount=_httpRetryCount;
@property(readonly, nonatomic) _Bool isAnimatedSticker;
@property(retain, nonatomic) WAPBMessage_ListResponseMessage *listResponseMessage;
@property(retain, nonatomic) WAPBMessage_ListMessage *listMessage;
@property(copy, nonatomic) NSString *xmppExternalAdReplyThumbnailPath;
@property(retain, nonatomic) WAPBContextInfo_ExternalAdReplyInfo *externalAdReplyInfo;
- (id)mediaKeyMetadata;
@property(readonly, nonatomic) unsigned long long wa_reuseReason;
@property(readonly, nonatomic) NSDate<WAServerDate> *wa_mediaKeyDate;
@property(copy, nonatomic) NSData *wa_encHash;
@property(readonly, nonatomic) NSData *wa_mediaKey;
- (void)setMediaKey:(id)arg1 encHash:(id)arg2 mediaKeyDate:(id)arg3 reuseReason:(unsigned long long)arg4;
@property(readonly, nonatomic) long long contentProvider;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) int fontType;
@property(readonly, nonatomic, getter=isContactVCard) _Bool contactVCard;
@property(readonly, nonatomic) NSArray *interactiveAnnotations;
@property(readonly, nonatomic) NSSet *mentionsUserJIDSet;
@property(readonly, nonatomic) NSString *matchedText;
@property(readonly, nonatomic) NSString *canonicalURL;
@property(readonly, nonatomic) NSString *snippet;
@property(readonly, nonatomic) _Bool verifiedFileSize;
@property(readonly, nonatomic) unsigned int playbackCount;
@property(readonly, nonatomic) unsigned int attemptCount;
@property(readonly, copy, nonatomic) NSString *directPath;
@property(copy, nonatomic) WAPBMediaItemMetadata *decodedMetadata;
- (_Bool)hasMetadata;

// Remaining properties
@property(copy, nonatomic) NSString *authorName; // @dynamic authorName;
@property(nonatomic) short cloudStatus; // @dynamic cloudStatus;
@property(copy, nonatomic) NSString *collectionName; // @dynamic collectionName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) int fileSize; // @dynamic fileSize;
@property(readonly) unsigned long long hash;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(copy, nonatomic) NSData *mediaKey; // @dynamic mediaKey;
@property(copy, nonatomic) NSString *mediaLocalPath; // @dynamic mediaLocalPath;
@property(nonatomic) int mediaOrigin; // @dynamic mediaOrigin;
@property(copy, nonatomic) NSString *mediaURL; // @dynamic mediaURL;
@property(retain, nonatomic) NSDate<WAServerDate> *mediaUrlDate; // @dynamic mediaUrlDate;
@property(retain, nonatomic) WAMessage *message; // @dynamic message;
@property(copy, nonatomic) NSData *metadata; // @dynamic metadata;
@property(retain, nonatomic) NSNumber *movieDuration; // @dynamic movieDuration;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *thumbnailLocalPath; // @dynamic thumbnailLocalPath;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSSet *vCardMentions; // @dynamic vCardMentions;
@property(copy, nonatomic) NSString *vCardName; // @dynamic vCardName;
@property(copy, nonatomic) NSString *vCardString; // @dynamic vCardString;
@property(copy, nonatomic) NSString *xmppThumbPath; // @dynamic xmppThumbPath;

@end

