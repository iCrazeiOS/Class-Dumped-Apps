//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString, TIMPBNResponseBody;

@interface TIMPBNResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) TIMPBNResponseBody *body; // @dynamic body;
@property(nonatomic) int cmd; // @dynamic cmd;
@property(copy, nonatomic) NSString *errorDesc; // @dynamic errorDesc;
@property(nonatomic) _Bool hasBody; // @dynamic hasBody;
@property(nonatomic) _Bool hasCmd; // @dynamic hasCmd;
@property(nonatomic) _Bool hasErrorDesc; // @dynamic hasErrorDesc;
@property(nonatomic) _Bool hasInboxType; // @dynamic hasInboxType;
@property(nonatomic) _Bool hasLogId; // @dynamic hasLogId;
@property(nonatomic) _Bool hasRequestArrivedTime; // @dynamic hasRequestArrivedTime;
@property(nonatomic) _Bool hasSequenceId; // @dynamic hasSequenceId;
@property(nonatomic) _Bool hasServerExecutionEndTime; // @dynamic hasServerExecutionEndTime;
@property(nonatomic) _Bool hasStartTimeStamp; // @dynamic hasStartTimeStamp;
@property(nonatomic) _Bool hasStatusCode; // @dynamic hasStatusCode;
@property(retain, nonatomic) NSMutableDictionary *headers; // @dynamic headers;
@property(readonly, nonatomic) unsigned long long headers_Count; // @dynamic headers_Count;
@property(nonatomic) int inboxType; // @dynamic inboxType;
@property(copy, nonatomic) NSString *logId; // @dynamic logId;
@property(nonatomic) long long requestArrivedTime; // @dynamic requestArrivedTime;
@property(nonatomic) long long sequenceId; // @dynamic sequenceId;
@property(nonatomic) long long serverExecutionEndTime; // @dynamic serverExecutionEndTime;
@property(nonatomic) long long startTimeStamp; // @dynamic startTimeStamp;
@property(nonatomic) int statusCode; // @dynamic statusCode;

@end

