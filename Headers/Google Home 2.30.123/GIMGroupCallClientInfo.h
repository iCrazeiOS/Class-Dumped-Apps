//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMClientGroupCallState, GIMUserRegistrationId;

@interface GIMGroupCallClientInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIMUserRegistrationId *callParticipant; // @dynamic callParticipant;
@property(retain, nonatomic) GIMClientGroupCallState *callState; // @dynamic callState;
@property(nonatomic) _Bool hasCallParticipant; // @dynamic hasCallParticipant;
@property(nonatomic) _Bool hasCallState; // @dynamic hasCallState;

@end

