//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AmazonChimeSDK/NSObject-Protocol.h>

@class NSArray, NSDictionary;

@protocol AudioClientDelegate <NSObject>

@optional
- (void)attendeesPresenceChanged:(NSArray *)arg1;
- (void)audioMetricsChanged:(NSDictionary *)arg1;
- (void)volumeStateChanged:(NSArray *)arg1;
- (void)audioClientStateChanged:(int)arg1 status:(int)arg2;
- (void)signalStrengthChanged:(NSArray *)arg1;
@end

