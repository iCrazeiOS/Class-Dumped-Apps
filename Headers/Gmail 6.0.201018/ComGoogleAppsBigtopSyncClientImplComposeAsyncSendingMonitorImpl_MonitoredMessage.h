//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopSyncClientImplComposeAsyncSendingMonitorImpl_MonitoredMessage_PendingCancelSend, ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableList, ComGoogleCommonCollectImmutableSet;
@protocol JBTId, JavaUtilSet, JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplComposeAsyncSendingMonitorImpl_MonitoredMessage : NSObject
{
    id <JavaUtilSet> completedStates_;
    id <JBTId> conversationId_;
    ComGoogleCommonBaseOptional *sentItemServerPermId_;
    ComGoogleCommonCollectImmutableList *messageLabelsBeforeSend_;
    id <JavaxInjectProvider> messageBasedUiEnabled_;
    ComGoogleCommonCollectImmutableSet *additionalTransactionsToUndo_;
    _Bool isScheduledSend_;
    ComGoogleCommonBaseOptional *scheduledSendTimeMs_;
    _Bool registeredForCancelOnly_;
    ComGoogleAppsBigtopSyncClientImplComposeAsyncSendingMonitorImpl_MonitoredMessage_PendingCancelSend *pendingCancelSend_;
    _Bool cancelSendInProgress_;
    ComGoogleCommonCollectImmutableList *monitoredConversationIds_;
    _Bool isUndoScheduledSend_;
}

- (void)dealloc;
- (id)undoAdditionalTransactions;
- (_Bool)isRegisteredForCancelOnly;
- (void)executePendingCancelSendWithJBTSendingMonitor_SendingStateChangedEvent:(id)arg1;
- (_Bool)setCancelSendInProgressWithBoolean:(_Bool)arg1;
- (_Bool)isCancelSendInProgress;
- (void)setPendingCancelSendWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)hasPendingCancelSend;
- (_Bool)isSentItemServerPermIdDifferentThanConversationId;
- (id)getSentItemServerPermId;
- (id)getScheduledSendTimeMs;

@end

