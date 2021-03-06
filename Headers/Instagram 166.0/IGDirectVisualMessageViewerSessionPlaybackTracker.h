//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSMutableSet, NSString;

@interface IGDirectVisualMessageViewerSessionPlaybackTracker : NSObject
{
    CDUnknownBlockType _entryPointFilter;
    CDUnknownBlockType _resetReasonFilter;
    NSMutableSet *_viewedVisualMessageKeys;
    NSMutableOrderedSet *_viewedVisualMessageThreadIds;
}

- (void).cxx_destruct;
- (void)resetForReason:(long long)arg1;
- (void)viewedVisualMessage:(id)arg1 entryPoint:(long long)arg2;
- (id)replayableViewedVisualMessagesForThreadId:(id)arg1 publishedMessageSet:(id)arg2;
@property(readonly, copy, nonatomic) NSString *threadIdOfLastViewedUnseenVisualMessage;
- (_Bool)hasViewedVisualMessagesForThreadId:(id)arg1;
- (_Bool)hasViewedVisualMessageWithKey:(id)arg1;
- (id)viewedVisualMessages;
- (id)initWithEntryPointFilter:(CDUnknownBlockType)arg1 resetReasonFilter:(CDUnknownBlockType)arg2;

@end

