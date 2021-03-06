//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ContentAnalyticsEvent, HMEModel, NSString;
@protocol AnalyticsLogger, HMEAssistCardViewModel;

@protocol HMESuggestionData <NSObject>
- (void)refetch;
- (void)logAnalyticsEvent:(ContentAnalyticsEvent *)arg1 forModel:(id <HMEAssistCardViewModel>)arg2 analyticsLogger:(id <AnalyticsLogger>)arg3;
- (void)dismissCardWithModel:(id <HMEAssistCardViewModel>)arg1;
- (HMEModel *)suggestionList;

@optional
- (void)dismissInnerCardWithContentID:(NSString *)arg1 inModel:(id <HMEAssistCardViewModel>)arg2;
@end

