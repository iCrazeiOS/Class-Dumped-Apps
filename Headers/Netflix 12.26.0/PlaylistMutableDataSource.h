//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NFPlaylistPlayerMutableDataSource-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol NFPlaylist, NFPlaylistPlayerDataSourceChangeObserver;

@interface PlaylistMutableDataSource : NSObject <NFPlaylistPlayerMutableDataSource>
{
    id <NFPlaylist> _initialPlaylist;
    id <NFPlaylistPlayerDataSourceChangeObserver> _changeObserver;
    id <NFPlaylist> _playlist;
    NSDictionary *_trackingInfo;
    NSMutableDictionary *_nextSegmentOverrides;
}

@property(retain, nonatomic) NSMutableDictionary *nextSegmentOverrides; // @synthesize nextSegmentOverrides=_nextSegmentOverrides;
@property(retain, nonatomic) NSDictionary *trackingInfo; // @synthesize trackingInfo=_trackingInfo;
@property(retain, nonatomic) id <NFPlaylist> playlist; // @synthesize playlist=_playlist;
@property(nonatomic) __weak id <NFPlaylistPlayerDataSourceChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
@property(retain, nonatomic) id <NFPlaylist> initialPlaylist; // @synthesize initialPlaylist=_initialPlaylist;
- (void).cxx_destruct;
- (void)depthFirstTraversalFromSegment:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)currentPlaybackPathTraversalFromSegment:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)player:(id)arg1 trackingInfoForSegment:(id)arg2;
- (id)transitionFromSourceSegment:(id)arg1 toDestinationSegment:(id)arg2;
- (id)player:(id)arg1 transitionsFromSourceSegment:(id)arg2;
- (id)transitionsFromSourceSegment:(id)arg1;
- (id)player:(id)arg1 nextSegmentAfterSegment:(id)arg2;
- (double)initialStartTimeForPlayer:(id)arg1;
- (id)initialSegmentForPlayer:(id)arg1;
- (id)segmentById:(id)arg1;
- (void)updatePlaylist:(id)arg1 trackingInfo:(id)arg2 startPosition:(CDStruct_aa637a14)arg3;
- (void)updateNextSegmentWeightsForSegment:(id)arg1 nextSegmentWeights:(id)arg2;
- (void)clearNextSegmentAfter:(id)arg1;
- (void)setNextSegmentAfter:(id)arg1 to:(id)arg2;
- (id)initWithPlaylist:(id)arg1 trackingInfo:(id)arg2;
- (id)initWithPlaylist:(id)arg1 trackingInfo:(id)arg2 startPosition:(CDStruct_aa637a14)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

