//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSNetworkWebChannelPushServiceImpl, JavaUtilConcurrentAtomicAtomicInteger;
@protocol ComGoogleNetWebchannelClientAsyncWebChannel, JavaUtilList;

@interface DYNSNetworkWebChannelPushServiceImpl_AckManager : NSObject
{
    DYNSNetworkWebChannelPushServiceImpl *this$0_;
    _Bool isChannelOpen_;
    id <JavaUtilList> currentBatchedAcks_;
    JavaUtilConcurrentAtomicAtomicInteger *batchSequenceNumber_;
    id <ComGoogleNetWebchannelClientAsyncWebChannel> channel_;
}

- (void)dealloc;
- (void)appendSampleIdWithNSString:(id)arg1;
- (_Bool)sendBatchedAcks;
- (void)markChannelClosed;
- (void)markChannelOpen;

@end

