//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GBTSmartReplyView, JCSEventType_SmartreplyEventType, NSArray;
@protocol JBTSmartreplySuggestion;

@protocol GBTSmartReplyViewDelegate
- (void)smartReplyViewDidTapBadSuggestions:(GBTSmartReplyView *)arg1;
- (void)smartReplyView:(GBTSmartReplyView *)arg1 didProduceContinuationEvent:(JCSEventType_SmartreplyEventType *)arg2 indicesList:(NSArray *)arg3;
- (void)smartReplyView:(GBTSmartReplyView *)arg1 didProduceSmartReplyEvent:(JCSEventType_SmartreplyEventType *)arg2 forSuggestion:(id <JBTSmartreplySuggestion>)arg3;
- (void)smartReplyView:(GBTSmartReplyView *)arg1 didTapSuggestion:(id <JBTSmartreplySuggestion>)arg2 isContinued:(_Bool)arg3;
@end

