//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSString;

@interface IGDirectOutgoingStoryInteractionType : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    NSString *_quiz_quizStickerId;
    unsigned long long _quiz_quizVoteIndex;
    NSString *_quiz_quizVote;
}

+ (id)view;
+ (id)quizWithQuizStickerId:(id)arg1 quizVoteIndex:(unsigned long long)arg2 quizVote:(id)arg3;
- (void).cxx_destruct;
- (void)matchView:(CDUnknownBlockType)arg1 quiz:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanView:(CDUnknownBlockType)arg1 quiz:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

