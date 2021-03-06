//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>

@class MetaPollResults, NSArray, NSDate, NSDecimalNumber, NSString;

@interface MetaPoll : NSObject <NSCopying>
{
    NSString *_pollId;
    NSDate *_createdAt;
    NSDate *_endsAt;
    NSString *_creatorPK;
    NSString *_postPK;
    NSString *_subredditPK;
    unsigned long long _totalVoters;
    NSDecimalNumber *_totalVotingPower;
    NSDecimalNumber *_decisionThreshold;
    NSArray *_options;
    MetaPollResults *_results;
}

@property(retain, nonatomic) MetaPollResults *results; // @synthesize results=_results;
@property(readonly, copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSDecimalNumber *decisionThreshold; // @synthesize decisionThreshold=_decisionThreshold;
@property(readonly, copy, nonatomic) NSDecimalNumber *totalVotingPower; // @synthesize totalVotingPower=_totalVotingPower;
@property(readonly, nonatomic) unsigned long long totalVoters; // @synthesize totalVoters=_totalVoters;
@property(readonly, copy, nonatomic) NSString *subredditPK; // @synthesize subredditPK=_subredditPK;
@property(readonly, copy, nonatomic) NSString *postPK; // @synthesize postPK=_postPK;
@property(readonly, copy, nonatomic) NSString *creatorPK; // @synthesize creatorPK=_creatorPK;
@property(readonly, copy, nonatomic) NSDate *endsAt; // @synthesize endsAt=_endsAt;
@property(readonly, copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, copy, nonatomic) NSString *pollId; // @synthesize pollId=_pollId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)updatedPollWithResults:(id)arg1;
- (id)initWithData:(id)arg1;

@end

