//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class NSString;

@interface AWSKinesisGetShardIteratorInput : AWSRequest
{
    NSString *_shardId;
    long long _shardIteratorType;
    NSString *_startingSequenceNumber;
    NSString *_streamName;
}

+ (id)shardIteratorTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
@property(retain, nonatomic) NSString *startingSequenceNumber; // @synthesize startingSequenceNumber=_startingSequenceNumber;
@property(nonatomic) long long shardIteratorType; // @synthesize shardIteratorType=_shardIteratorType;
@property(retain, nonatomic) NSString *shardId; // @synthesize shardId=_shardId;

@end

