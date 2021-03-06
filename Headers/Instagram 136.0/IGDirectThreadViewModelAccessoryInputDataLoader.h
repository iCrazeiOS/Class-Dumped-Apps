//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectOutgoingPermanentMediaLocalCache, IGDirectThreadOutgoingMessagesSortingInfoCache, IGDirectThreadTheme, IGDirectThreadViewMessagesClientStateManager, IGDirectVisualMessageReplayService, IGDirectVisualMessageViewerPresentationManager, IGDirectVisualMessageViewerSessionPlaybackTracker, IGPresenceManager, NSString;
@protocol IGDirectTypingStatusReceiving;

@interface IGDirectThreadViewModelAccessoryInputDataLoader : NSObject
{
    NSString *_threadId;
    IGDirectThreadTheme *_threadTheme;
    id <IGDirectTypingStatusReceiving> _typingStatusReceiver;
    IGPresenceManager *_presenceManager;
    IGDirectVisualMessageReplayService *_visualMessageReplayService;
    IGDirectVisualMessageViewerSessionPlaybackTracker *_visualMessagePlaybackTracker;
    IGDirectVisualMessageViewerPresentationManager *_visualMessagePresentationManager;
    IGDirectThreadOutgoingMessagesSortingInfoCache *_messageSortingInfoCache;
    IGDirectThreadViewMessagesClientStateManager *_messagesClientStateManager;
    IGDirectOutgoingPermanentMediaLocalCache *_permanentMediaLocalCache;
}

- (void).cxx_destruct;
- (id)threadViewModelAccessoryInputForUpdateReason:(unsigned long long)arg1;
- (id)initWithThreadId:(id)arg1 threadTheme:(id)arg2 typingStatusReceiver:(id)arg3 presenceManager:(id)arg4 visualMessageReplayService:(id)arg5 visualMessagePlaybackTracker:(id)arg6 visualMessagePresentationManager:(id)arg7 messageSortingInfoCache:(id)arg8 messagesClientStateManager:(id)arg9 permanentMediaLocalCache:(id)arg10;

@end

