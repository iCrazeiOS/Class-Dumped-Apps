//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleGmailProtocolAdsClassicGmailInboxSettings_InboxSection, ComGoogleGmailProtocolAdsClassicGmailInboxSettings_InboxType, ComGoogleGmailProtocolAdsClassicGmailInboxSettings_PriorityInboxType;
@protocol JavaUtilList;

@protocol ComGoogleGmailProtocolAdsClassicGmailInboxSettingsOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleGmailProtocolAdsClassicGmailInboxSettings_PriorityInboxType *)getPriorityInboxType;
- (_Bool)hasPriorityInboxType;
- (ComGoogleGmailProtocolAdsClassicGmailInboxSettings_InboxType *)getAllowedInboxTypeWithInt:(int)arg1;
- (id <JavaUtilList>)getAllowedInboxTypeList;
- (int)getAllowedInboxTypeCount;
- (ComGoogleGmailProtocolAdsClassicGmailInboxSettings_InboxSection *)getSectionsWithInt:(int)arg1;
- (id <JavaUtilList>)getSectionsList;
- (int)getSectionsCount;
- (ComGoogleGmailProtocolAdsClassicGmailInboxSettings_InboxType *)getInboxType;
- (_Bool)hasInboxType;
@end

