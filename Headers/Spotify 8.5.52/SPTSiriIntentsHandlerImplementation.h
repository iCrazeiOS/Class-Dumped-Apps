//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginStateControllerObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "SPTSiriIntentsHandler-Protocol.h"

@class NSDictionary, NSString, SPTPlayerContext, SPTSiriIntentsKeepAliveHandler;
@protocol SPTGaiaConnectAPI, SPTLoginStateController, SPTPlayer;

@interface SPTSiriIntentsHandlerImplementation : NSObject <SPTLoginStateControllerObserver, SPTPlayerObserver, SPTSiriIntentsHandler>
{
    _Bool _backgrounded;
    CDUnknownBlockType _intentCompletionHandler;
    CDUnknownBlockType _playCommandCompletionHandler;
    id <SPTPlayer> _player;
    id <SPTLoginStateController> _loginStateController;
    SPTSiriIntentsKeepAliveHandler *_keepAliveHandler;
    id <SPTGaiaConnectAPI> _connectAPI;
    long long _deferralMode;
    SPTPlayerContext *_pendingPlayerContext;
    NSDictionary *_pendingPlayCommandDictionary;
    double _timeSinceBackgrounded;
}

@property(nonatomic) double timeSinceBackgrounded; // @synthesize timeSinceBackgrounded=_timeSinceBackgrounded;
@property(nonatomic, getter=isBackgrounded) _Bool backgrounded; // @synthesize backgrounded=_backgrounded;
@property(copy, nonatomic) NSDictionary *pendingPlayCommandDictionary; // @synthesize pendingPlayCommandDictionary=_pendingPlayCommandDictionary;
@property(retain, nonatomic) SPTPlayerContext *pendingPlayerContext; // @synthesize pendingPlayerContext=_pendingPlayerContext;
@property(readonly, nonatomic) long long deferralMode; // @synthesize deferralMode=_deferralMode;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectAPI; // @synthesize connectAPI=_connectAPI;
@property(retain, nonatomic) SPTSiriIntentsKeepAliveHandler *keepAliveHandler; // @synthesize keepAliveHandler=_keepAliveHandler;
@property(retain, nonatomic) id <SPTLoginStateController> loginStateController; // @synthesize loginStateController=_loginStateController;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(copy, nonatomic) CDUnknownBlockType playCommandCompletionHandler; // @synthesize playCommandCompletionHandler=_playCommandCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType intentCompletionHandler; // @synthesize intentCompletionHandler=_intentCompletionHandler;
- (void).cxx_destruct;
- (_Bool)isPlaying;
- (void)invalidateTimer;
- (void)startApConnectionTimer;
- (id)playOriginFromPlayCommandDictionary:(id)arg1;
- (id)playOptionsFromPlayCommandDictionary:(id)arg1;
- (id)playCommandForMediaIntent:(id)arg1;
- (void)performCompletionHandlerWithResult:(id)arg1 error:(id)arg2;
- (void)performCoreReloginIfNecessary;
- (_Bool)apCouldBeOffline;
- (void)initiatePlaybackWithContext:(id)arg1 playCommandDictionary:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)subscribeToBackgroundAndForegroundNotifications;
- (void)loginStateControllerDidReceiveCoreStateUpdateWithCurrentSession:(id)arg1 withError:(id)arg2 isPermanentError:(_Bool)arg3;
- (_Bool)shouldDeferPlaybackToLaterForSession:(id)arg1;
- (void)playLocalMediaWithPlayCommandURI:(id)arg1;
- (void)handleIntentWithPlayCommandURI:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPlayer:(id)arg1 loginStateController:(id)arg2 keepAliveHandler:(id)arg3 connectAPI:(id)arg4 deferralMode:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

