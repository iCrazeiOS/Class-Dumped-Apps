//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FIRIAMTimeFetcher;

@interface FIRIAMFetchResponseParser : NSObject
{
    id <FIRIAMTimeFetcher> _timeFetcher;
}

@property(retain, nonatomic) id <FIRIAMTimeFetcher> timeFetcher; // @synthesize timeFetcher=_timeFetcher;
- (void).cxx_destruct;
- (id)convertToMessageDefinitionWithMessageDict:(id)arg1;
- (id)parseTriggeringCondition:(id)arg1;
- (id)parseAPIResponseDictionary:(id)arg1 discardedMsgCount:(long long *)arg2 fetchWaitTimeInSeconds:(id *)arg3;
- (id)initWithTimeFetcher:(id)arg1;

@end

