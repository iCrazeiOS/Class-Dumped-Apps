//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GAMDSparkPriorityDetails_WorkspaceSuggestionActionDetails_AcceptWorkspaceSuggestionDetails, NSString;

@interface GAMDSparkPriorityDetails_WorkspaceSuggestionActionDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GAMDSparkPriorityDetails_WorkspaceSuggestionActionDetails_AcceptWorkspaceSuggestionDetails *acceptWorkspaceSuggestionDetails; // @dynamic acceptWorkspaceSuggestionDetails;
@property(readonly, nonatomic) int actionDetailsOneOfCase; // @dynamic actionDetailsOneOfCase;
@property(nonatomic) _Bool hasPredictionId; // @dynamic hasPredictionId;
@property(nonatomic) _Bool hasPredictionIndex; // @dynamic hasPredictionIndex;
@property(copy, nonatomic) NSString *predictionId; // @dynamic predictionId;
@property(nonatomic) int predictionIndex; // @dynamic predictionIndex;

@end

