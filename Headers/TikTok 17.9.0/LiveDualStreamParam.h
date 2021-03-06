//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiveVideoParam;

@interface LiveDualStreamParam : NSObject
{
    long long _remoteDefaultStreamType;
    long long _isAutoSwitch;
    long long _autoSwitchUserNumber;
    LiveVideoParam *_hdVideoParam;
    LiveVideoParam *_sdVideoParam;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LiveVideoParam *sdVideoParam; // @synthesize sdVideoParam=_sdVideoParam;
@property(retain, nonatomic) LiveVideoParam *hdVideoParam; // @synthesize hdVideoParam=_hdVideoParam;
@property(nonatomic) long long autoSwitchUserNumber; // @synthesize autoSwitchUserNumber=_autoSwitchUserNumber;
@property(nonatomic) long long isAutoSwitch; // @synthesize isAutoSwitch=_isAutoSwitch;
@property(nonatomic) long long remoteDefaultStreamType; // @synthesize remoteDefaultStreamType=_remoteDefaultStreamType;
- (id)init;

@end

