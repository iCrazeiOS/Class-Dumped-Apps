//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@interface DrishtiGraphTrace_StreamTrace : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long eventData; // @dynamic eventData;
@property(nonatomic) long long finishTime; // @dynamic finishTime;
@property(nonatomic) _Bool hasEventData; // @dynamic hasEventData;
@property(nonatomic) _Bool hasFinishTime; // @dynamic hasFinishTime;
@property(nonatomic) _Bool hasPacketId; // @dynamic hasPacketId;
@property(nonatomic) _Bool hasPacketTimestamp; // @dynamic hasPacketTimestamp;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(nonatomic) _Bool hasStreamId; // @dynamic hasStreamId;
@property(nonatomic) long long packetId; // @dynamic packetId;
@property(nonatomic) long long packetTimestamp; // @dynamic packetTimestamp;
@property(nonatomic) long long startTime; // @dynamic startTime;
@property(nonatomic) int streamId; // @dynamic streamId;

@end

