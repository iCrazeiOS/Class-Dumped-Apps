//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface ASTAPIWhatsNext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool conversationTerminated; // @dynamic conversationTerminated;
@property(nonatomic) _Bool hasConversationTerminated; // @dynamic hasConversationTerminated;
@property(nonatomic) _Bool hasJwnProgram; // @dynamic hasJwnProgram;
@property(nonatomic) _Bool hasResponseCodeRequested; // @dynamic hasResponseCodeRequested;
@property(nonatomic) _Bool hasResponseTimeoutMsecs; // @dynamic hasResponseTimeoutMsecs;
@property(nonatomic) _Bool hasRunMultipleTimes; // @dynamic hasRunMultipleTimes;
@property(nonatomic) _Bool hasUserResponseRequested; // @dynamic hasUserResponseRequested;
@property(copy, nonatomic) NSData *jwnProgram; // @dynamic jwnProgram;
@property(nonatomic) _Bool responseCodeRequested; // @dynamic responseCodeRequested;
@property(nonatomic) int responseTimeoutMsecs; // @dynamic responseTimeoutMsecs;
@property(nonatomic) _Bool runMultipleTimes; // @dynamic runMultipleTimes;
@property(nonatomic) _Bool userResponseRequested; // @dynamic userResponseRequested;

@end

