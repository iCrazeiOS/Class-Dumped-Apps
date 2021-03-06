//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTICommand, YTIRenderer;

@interface YTISuggestedVideosCompanionAdRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int completionAction; // @dynamic completionAction;
@property(nonatomic) _Bool hasCompletionAction; // @dynamic hasCompletionAction;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasImpressionCommand; // @dynamic hasImpressionCommand;
@property(nonatomic) _Bool hasSuggestedVideosCompanionCompletionAction; // @dynamic hasSuggestedVideosCompanionCompletionAction;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *header; // @dynamic header;
@property(retain, nonatomic) YTICommand *impressionCommand; // @dynamic impressionCommand;
@property(retain, nonatomic) NSMutableArray *suggestedVideosArray; // @dynamic suggestedVideosArray;
@property(readonly, nonatomic) unsigned long long suggestedVideosArray_Count; // @dynamic suggestedVideosArray_Count;
@property(nonatomic) int suggestedVideosCompanionCompletionAction; // @dynamic suggestedVideosCompanionCompletionAction;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

