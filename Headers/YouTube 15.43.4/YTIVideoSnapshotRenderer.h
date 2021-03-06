//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIRenderer, YTIThumbnailDetails, YTIVideoManagerVideoTitle;

@interface YTIVideoSnapshotRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeadlineCommand; // @dynamic hasHeadlineCommand;
@property(nonatomic) _Bool hasHeadlineText; // @dynamic hasHeadlineText;
@property(nonatomic) _Bool hasHeadlineViewMoreButton; // @dynamic hasHeadlineViewMoreButton;
@property(nonatomic) _Bool hasLengthString; // @dynamic hasLengthString;
@property(nonatomic) _Bool hasRanking; // @dynamic hasRanking;
@property(nonatomic) _Bool hasRankingByViewsLabel; // @dynamic hasRankingByViewsLabel;
@property(nonatomic) _Bool hasRankingByViewsValue; // @dynamic hasRankingByViewsValue;
@property(nonatomic) _Bool hasTableHeader; // @dynamic hasTableHeader;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasThumbnailCommand; // @dynamic hasThumbnailCommand;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *headlineCommand; // @dynamic headlineCommand;
@property(retain, nonatomic) YTIFormattedString *headlineText; // @dynamic headlineText;
@property(retain, nonatomic) YTIRenderer *headlineViewMoreButton; // @dynamic headlineViewMoreButton;
@property(retain, nonatomic) YTIFormattedString *lengthString; // @dynamic lengthString;
@property(retain, nonatomic) NSMutableArray *metricsArray; // @dynamic metricsArray;
@property(readonly, nonatomic) unsigned long long metricsArray_Count; // @dynamic metricsArray_Count;
@property(retain, nonatomic) YTIRenderer *ranking; // @dynamic ranking;
@property(retain, nonatomic) YTIFormattedString *rankingByViewsLabel; // @dynamic rankingByViewsLabel;
@property(retain, nonatomic) YTIFormattedString *rankingByViewsValue; // @dynamic rankingByViewsValue;
@property(retain, nonatomic) YTIFormattedString *tableHeader; // @dynamic tableHeader;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTICommand *thumbnailCommand; // @dynamic thumbnailCommand;
@property(retain, nonatomic) YTIVideoManagerVideoTitle *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

