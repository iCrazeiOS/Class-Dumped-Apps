//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataImapFetcherImapAttachmentOrOriginalMessageBodyFetcher;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataImapChangesImapDraftAttachmentHelper : NSObject
{
    ComGoogleAppsBigtopDataImapFetcherImapAttachmentOrOriginalMessageBodyFetcher *attachmentFetcher_;
    id <JavaxInjectProvider> imapExecutor_;
}

+ (void)initialize;
- (void)dealloc;
- (id)downloadAndConvertAttachmentUrisWithComGoogleAppsBigtopDataItemsItemsSlicesProtos_DetailedMessage:(id)arg1;
- (id)cleanUpDraftAttachmentFilesWithComGoogleAppsBigtopDataMimeMimeProto_MimeMessage:(id)arg1;

@end

