//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKDevice, GCKMediaMetadata, GCKRemoteMediaClient, GCKSessionTraits, NSDictionary, NSString;
@protocol GCKSessionDelegate;

@interface GCKSession : NSObject
{
    _Bool _suspended;
    _Bool _currentDeviceMuted;
    float _currentDeviceVolume;
    float _deviceVolumeIncrement;
    GCKDevice *_device;
    NSString *_sessionID;
    NSDictionary *_sessionOptions;
    long long _connectionState;
    NSString *_deviceStatusText;
    GCKSessionTraits *_traits;
    GCKRemoteMediaClient *_remoteMediaClient;
    GCKMediaMetadata *_mediaMetadata;
    id <GCKSessionDelegate> _internalDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GCKSessionDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) float deviceVolumeIncrement; // @synthesize deviceVolumeIncrement=_deviceVolumeIncrement;
@property(readonly, nonatomic) GCKMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(readonly, nonatomic) GCKRemoteMediaClient *remoteMediaClient; // @synthesize remoteMediaClient=_remoteMediaClient;
@property(nonatomic) _Bool currentDeviceMuted; // @synthesize currentDeviceMuted=_currentDeviceMuted;
@property(nonatomic) float currentDeviceVolume; // @synthesize currentDeviceVolume=_currentDeviceVolume;
@property(readonly, copy, nonatomic) GCKSessionTraits *traits; // @synthesize traits=_traits;
@property(copy, nonatomic) NSString *deviceStatusText; // @synthesize deviceStatusText=_deviceStatusText;
@property(readonly, nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
@property(retain, nonatomic) NSDictionary *sessionOptions; // @synthesize sessionOptions=_sessionOptions;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) GCKDevice *device; // @synthesize device=_device;
- (void)notifyDidFailToMoveEndpoint:(id)arg1 error:(id)arg2;
- (void)notifyDidMoveEndpoint;
- (void)notifyWillMoveEndpoint:(id)arg1;
- (void)joinAnyApplication;
- (id)setDeviceMuted:(_Bool)arg1;
- (id)setDeviceVolume:(float)arg1;
- (void)internalJoinAnyApplication;
- (void)internalEndWithAction:(long long)arg1;
- (void)internalResume;
- (void)internalStart;
- (id)initWithDevice:(id)arg1 traits:(id)arg2 sessionID:(id)arg3;
- (id)initWithDevice:(id)arg1 traits:(id)arg2 sessionID:(id)arg3 sessionOptions:(id)arg4;
- (id)description;
- (void)notifyDidResume;
- (void)notifyDidSuspendWithReason:(long long)arg1;
- (void)notifyDidReceiveDeviceStatus:(id)arg1;
- (void)notifyDidReceiveDeviceVolume:(float)arg1 muted:(_Bool)arg2;
- (void)notifyDidEndWithError:(id)arg1 willTryToResume:(_Bool)arg2;
- (void)notifyDidFailToStartWithError:(id)arg1;
- (void)notifyDidStartWithSessionID:(id)arg1;
- (void)endWithAction:(long long)arg1;
- (void)resume;
- (void)start;

@end

