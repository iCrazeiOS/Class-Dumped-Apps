//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSString, YTILatencyActionInfo;

@protocol YTLegacyCSIAction <NSObject>
@property(copy, nonatomic) NSString *actionName;
- (YTILatencyActionInfo *)latencyActionInfo;
- (double)lastActivityTime;
- (void)report;
- (_Bool)endOngoingTick:(int)arg1;
- (void)startTick:(int)arg1;
- (_Bool)endOngoingTickVariable:(NSString *)arg1;
- (void)startTickVariable:(NSString *)arg1;
- (void)setUserAuthenticated:(_Bool)arg1;
- (_Bool)stopped;
- (void)stopAction;
@end

