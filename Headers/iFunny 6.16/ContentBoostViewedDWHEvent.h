//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFDWHBaseEvent.h>

@class NSString;

@interface ContentBoostViewedDWHEvent : IFDWHBaseEvent
{
    NSString *_contentId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (id)parameters;
- (unsigned long long)defaultTriggeredBy;
- (id)name;
- (id)initWithContentId:(id)arg1;

@end

