//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol DYNSmartReplyMetrics <NSObject>
+ (id)metricsWithDidEditSmartReply:(_Bool)arg1 didUseSmartReply:(_Bool)arg2 lastMessageId:(NSString *)arg3 smartReplyModelExperimentIds:(NSArray *)arg4 totalSuggestionsAvailable:(unsigned long long)arg5 totalSuggestionsDisplayed:(unsigned long long)arg6 usedSuggestionIndex:(unsigned long long)arg7;
@property(readonly, nonatomic) unsigned long long usedSuggestionIndex;
@property(readonly, nonatomic) unsigned long long totalSuggestionsDisplayed;
@property(readonly, nonatomic) unsigned long long totalSuggestionsAvailable;
@property(readonly, nonatomic) NSArray *smartReplyModelExperimentIds;
@property(readonly, nonatomic) NSString *lastMessageId;
@property(readonly, nonatomic) _Bool didUseSmartReply;
@property(readonly, nonatomic) _Bool didEditSmartReply;
@end

