//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class CPBLHangoutGWSLogData, CPBLHangoutLogEntry, CPBLTransportEvent, RtcClient;

@interface CPBLHangoutLogRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CPBLHangoutGWSLogData *gwslogData; // @dynamic gwslogData;
@property(retain, nonatomic) CPBLHangoutLogEntry *hangoutLogEntry; // @dynamic hangoutLogEntry;
@property(nonatomic) _Bool hasGwslogData; // @dynamic hasGwslogData;
@property(nonatomic) _Bool hasHangoutLogEntry; // @dynamic hasHangoutLogEntry;
@property(nonatomic) _Bool hasRtcClient; // @dynamic hasRtcClient;
@property(nonatomic) _Bool hasTransportEvent; // @dynamic hasTransportEvent;
@property(retain, nonatomic) RtcClient *rtcClient; // @dynamic rtcClient;
@property(retain, nonatomic) CPBLTransportEvent *transportEvent; // @dynamic transportEvent;

@end

