//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCoreLHLSLib/TAVPlayerTechnologyBuilder-Protocol.h>

@class NSURL;
@protocol LHLSNetworkSession, TAVPlayerOutputViewFactory;

@interface TAVLHLSTechnologyBuilder : NSObject <TAVPlayerTechnologyBuilder>
{
    _Bool _isLive;
    NSURL *_url;
    id <LHLSNetworkSession> _networkSession;
    id <TAVPlayerOutputViewFactory> _outputViewFactory;
    long long _playerClientVersion;
}

@property(readonly, nonatomic) long long playerClientVersion; // @synthesize playerClientVersion=_playerClientVersion;
@property(readonly, nonatomic) id <TAVPlayerOutputViewFactory> outputViewFactory; // @synthesize outputViewFactory=_outputViewFactory;
@property(readonly, nonatomic) id <LHLSNetworkSession> networkSession; // @synthesize networkSession=_networkSession;
@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)playerTechnologyForPlaylistItem:(id)arg1 withControlState:(id)arg2 initialPlaybackTime:(CDStruct_1b6d18a9)arg3 observer:(id)arg4;
- (id)init;
- (id)initWithURL:(id)arg1 isLive:(_Bool)arg2 networkSession:(id)arg3 outputViewFactory:(id)arg4 playerClientVersion:(long long)arg5;

@end

