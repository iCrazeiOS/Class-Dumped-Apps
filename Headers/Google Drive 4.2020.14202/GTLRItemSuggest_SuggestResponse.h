//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GTLRObject.h>

@class GTLRItemSuggest_PredictionSessionId, GTLRItemSuggest_SessionId, NSArray, NSString;

@interface GTLRItemSuggest_SuggestResponse : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSArray *item; // @dynamic item;
@property(retain, nonatomic) GTLRItemSuggest_PredictionSessionId *predictionSessionId; // @dynamic predictionSessionId;
@property(retain, nonatomic) GTLRItemSuggest_SessionId *sessionId; // @dynamic sessionId;
@property(copy, nonatomic) NSString *status; // @dynamic status;
@property(copy, nonatomic) NSString *suggestionSessionId; // @dynamic suggestionSessionId;

@end

