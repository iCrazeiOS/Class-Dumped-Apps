//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DCPPlaybackBegin, DCPPlaybackEnd, DCPPlaybackPacket, DCPRedirect, NSDictionary, NSError, NXSConnection, NXSError;

@protocol NXSConnectionDelegate <NSObject>
- (void)connection:(NXSConnection *)arg1 didReceiveRedirect:(DCPRedirect *)arg2;
- (void)connection:(NXSConnection *)arg1 didReceivePlaybackEnd:(DCPPlaybackEnd *)arg2;
- (void)connection:(NXSConnection *)arg1 didReceivePlaybackPacket:(DCPPlaybackPacket *)arg2;
- (void)connection:(NXSConnection *)arg1 didReceivePlaybackBegin:(DCPPlaybackBegin *)arg2;
- (void)connection:(NXSConnection *)arg1 didReceiveError:(NXSError *)arg2;
- (void)connection:(NXSConnection *)arg1 didDisconnectWithError:(NSError *)arg2;
- (void)connection:(NXSConnection *)arg1 willDisconnectWithError:(NSError *)arg2;
- (void)connection:(NXSConnection *)arg1 didEstablishConnection:(NSDictionary *)arg2;
@end

