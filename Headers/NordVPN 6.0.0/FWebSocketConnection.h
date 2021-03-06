//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FSRWebSocketDelegate-Protocol.h"

@class FSRWebSocket, NSMutableString, NSNumber, NSString, NSTimer;
@protocol FWebSocketDelegate, OS_dispatch_queue;

@interface FWebSocketConnection : NSObject <FSRWebSocketDelegate>
{
    NSMutableString *frame;
    _Bool everConnected;
    _Bool isClosed;
    NSTimer *keepAlive;
    int _totalFrames;
    id <FWebSocketDelegate> delegate;
    FSRWebSocket *webSocket;
    NSNumber *connectionId;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) int totalFrames; // @synthesize totalFrames=_totalFrames;
@property(retain, nonatomic) NSNumber *connectionId; // @synthesize connectionId;
@property(retain, nonatomic) FSRWebSocket *webSocket; // @synthesize webSocket;
@property(nonatomic) __weak id <FWebSocketDelegate> delegate; // @synthesize delegate;
- (void)resetKeepAlive;
- (void)onClosed;
- (void)shutdown;
- (void)closeIfNeverConnected;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)handleIncomingFrame:(id)arg1;
- (void)appendFrame:(id)arg1;
- (id)extractFrameCount:(id)arg1;
- (void)handleNewFrameCount:(int)arg1;
- (void)nop:(id)arg1;
- (void)send:(id)arg1;
- (void)start;
- (void)close;
- (void)open;
@property(readonly, nonatomic) _Bool buffering;
@property(readonly, nonatomic) NSString *userAgent;
- (id)initWith:(id)arg1 andQueue:(id)arg2 googleAppID:(id)arg3 lastSessionID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

