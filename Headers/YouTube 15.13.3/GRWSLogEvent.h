//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GRWSClearcutEvent, GRWSMagiceyeEvent, GRWSPermissionEvent, GRWSVisualElementEvent;

@interface GRWSLogEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GRWSClearcutEvent *clearcutEvent; // @dynamic clearcutEvent;
@property(readonly, nonatomic) int eventOneOfCase; // @dynamic eventOneOfCase;
@property(retain, nonatomic) GRWSMagiceyeEvent *magiceyeEvent; // @dynamic magiceyeEvent;
@property(retain, nonatomic) GRWSPermissionEvent *permissionEvent; // @dynamic permissionEvent;
@property(retain, nonatomic) GRWSVisualElementEvent *visualElementEvent; // @dynamic visualElementEvent;

@end

