//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSDataModelsTopicReadState.h"

@class DYNSCommonTopicId;

@interface DYNSDataModelsAutoValue_TopicReadState : DYNSDataModelsTopicReadState
{
    DYNSCommonTopicId *topicId_;
    long long lastReadTimeMicros_;
    _Bool isMuted_;
    long long userStatesUpdateTimeMicros_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (long long)getUserStatesUpdateTimeMicros;
- (_Bool)getIsMuted;
- (long long)getLastReadTimeMicros;
- (id)getTopicId;

@end

