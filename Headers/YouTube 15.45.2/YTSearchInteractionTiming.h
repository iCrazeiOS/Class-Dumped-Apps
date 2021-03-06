//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface YTSearchInteractionTiming : NSObject
{
    double _durationUntilFirstEdit;
    double _durationUntilLastEdit;
    double _durationUntilSubmission;
    NSDate *_searchSessionStartDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *searchSessionStartDate; // @synthesize searchSessionStartDate=_searchSessionStartDate;
@property(readonly, nonatomic) double durationUntilSubmission; // @synthesize durationUntilSubmission=_durationUntilSubmission;
@property(readonly, nonatomic) double durationUntilLastEdit; // @synthesize durationUntilLastEdit=_durationUntilLastEdit;
@property(readonly, nonatomic) double durationUntilFirstEdit; // @synthesize durationUntilFirstEdit=_durationUntilFirstEdit;
- (void)recordDurationUntilSubmission;
- (void)recordInteractionTimingOnEdit;
- (void)resetInteractionTiming;
- (void)startInteractionTiming;
- (id)description;

@end

