//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePlatform/_TtC12CorePlatform17IoTSessionManager.h>

#import <CorePlatform/CMRNetworkSessionHandler-Protocol.h>

@interface _TtC12CorePlatform17IoTSessionManager (CorePlatform) <CMRNetworkSessionHandler>
- (void)readBinary:(id)arg1 attributes:(id)arg2;
- (void)sendBinary:(id)arg1 data:(id)arg2 attributes:(id)arg3;
- (void)sendJSONWithCallback:(id)arg1 json:(id)arg2 attributes:(id)arg3 callback:(id)arg4;
- (_Bool)sessionStarted:(id)arg1;
- (void)endSession:(id)arg1;
- (void)startSession:(id)arg1;
@end

