//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopServicesGmailBigTopGmailMessage, ComGoogleAppsBigtopServicesGmailInteractionInfo, ComGoogleAppsBigtopServicesGmailMediaInsertionRequest, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopServicesGmailCreateDraftCommandOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (int)getUsedSmartreplySuggestionIndex;
- (_Bool)hasUsedSmartreplySuggestionIndex;
- (ComGoogleAppsBigtopServicesGmailInteractionInfo *)getInteractionInfo;
- (_Bool)hasInteractionInfo;
- (ComGoogleAppsBigtopServicesGmailMediaInsertionRequest *)getMediaInsertionRequestWithInt:(int)arg1;
- (id <JavaUtilList>)getMediaInsertionRequestList;
- (int)getMediaInsertionRequestCount;
- (_Bool)getUseSendDelay;
- (_Bool)hasUseSendDelay;
- (NSString *)getInResponseToId;
- (_Bool)hasInResponseToId;
- (ComGoogleAppsBigtopServicesGmailBigTopGmailMessage *)getMessage;
- (_Bool)hasMessage;
@end

