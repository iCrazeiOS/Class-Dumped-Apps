//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGTVBadgingResponse, NSArray;
@protocol IGTVChannelDataSourceType, IGTVGuideDataSourceListener;

@protocol IGTVGuideDataSource <NSObject>
@property(readonly, nonatomic) long long fetchStatus;
@property(readonly, nonatomic) IGTVBadgingResponse *badgingResponse;
@property(readonly, nonatomic) id <IGTVChannelDataSourceType> myChannelDataSource;
@property(readonly, nonatomic) NSArray *channelDataSources;
- (void)notifyViewerExit;
- (void)fetch;
- (void)removeListener:(id <IGTVGuideDataSourceListener>)arg1;
- (void)addListener:(id <IGTVGuideDataSourceListener>)arg1;
@end

