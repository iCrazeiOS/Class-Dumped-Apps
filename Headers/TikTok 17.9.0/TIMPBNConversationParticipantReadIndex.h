//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface TIMPBNConversationParticipantReadIndex : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(nonatomic) long long conversationShortId; // @dynamic conversationShortId;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasConversationShortId; // @dynamic hasConversationShortId;
@property(retain, nonatomic) NSMutableArray *participantReadIndexArray; // @dynamic participantReadIndexArray;
@property(readonly, nonatomic) unsigned long long participantReadIndexArray_Count; // @dynamic participantReadIndexArray_Count;

@end

