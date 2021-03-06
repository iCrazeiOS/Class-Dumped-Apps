//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/NSCopying-Protocol.h>

@class TAVScribeThriftLiveBroadcastDetails, TAVScribeThriftLiveVideoEventDetails;

@interface TAVAnalyticsPresentationScribeParameters : NSObject <NSCopying>
{
    TAVScribeThriftLiveBroadcastDetails *_liveBroadcastDetails;
    TAVScribeThriftLiveVideoEventDetails *_liveVideoEventDetails;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) TAVScribeThriftLiveVideoEventDetails *liveVideoEventDetails; // @synthesize liveVideoEventDetails=_liveVideoEventDetails;
@property(readonly, copy, nonatomic) TAVScribeThriftLiveBroadcastDetails *liveBroadcastDetails; // @synthesize liveBroadcastDetails=_liveBroadcastDetails;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLiveBroadcastDetails:(id)arg1 liveVideoEventDetails:(id)arg2;
- (id)init;

@end

