//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGVideoCallLoggingContext;

@interface IGVideoCallAudioRouteObserver : NSObject
{
    IGVideoCallLoggingContext *_loggingContext;
}

- (void).cxx_destruct;
- (void)_logAudioRouteWithAction:(long long)arg1 reason:(id)arg2;
- (void)_audioRouteChanged:(id)arg1;
- (void)stopObservingAudioRouteChanges;
- (void)startObservingAudioRouteChanges;
- (id)initWithLoggingContext:(id)arg1;

@end

