//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CommentHasMoreStruct, LifeStoryStruct, NSString, ViewUserStruct;

@interface StoryWithCommentStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CommentHasMoreStruct *commentHasmore; // @dynamic commentHasmore;
@property(nonatomic) _Bool hasCommentHasmore; // @dynamic hasCommentHasmore;
@property(nonatomic) _Bool hasRecommendReason; // @dynamic hasRecommendReason;
@property(nonatomic) _Bool hasStory; // @dynamic hasStory;
@property(nonatomic) _Bool hasViewUserList; // @dynamic hasViewUserList;
@property(copy, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(retain, nonatomic) LifeStoryStruct *story; // @dynamic story;
@property(retain, nonatomic) ViewUserStruct *viewUserList; // @dynamic viewUserList;

@end

