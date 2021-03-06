//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/NSObject-Protocol.h>

@class NSError, NSString, WAMMSMediaUploadResult;

@protocol WAMediaUploadable <NSObject>
@property(readonly, nonatomic) long long httpRetryCount;
@property(readonly, nonatomic) _Bool isMultiVCardMessage;
@property(readonly, nonatomic) _Bool isPTT;
@property(readonly, copy, nonatomic) NSString *wa_MIMEType;
@property(readonly, copy, nonatomic) NSString *directPath;
@property(readonly, copy, nonatomic) NSString *fileHash;
@property(readonly, nonatomic) int mediaOrigin;
@property(readonly, nonatomic) int mediaType;
@property(readonly, copy, nonatomic) NSString *mediaFilePath;
@property(readonly, copy, nonatomic) NSString *stanzaID;
@property(readonly, nonatomic) NSString *uniqueID;
- (_Bool)failWithUploadResult:(WAMMSMediaUploadResult *)arg1 error:(NSError *)arg2 terminal:(_Bool)arg3;
- (void)finishWithUploadResult:(WAMMSMediaUploadResult *)arg1;
- (void)updateWithUploadProgress:(float)arg1;
@end

