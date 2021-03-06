//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/NSURLSessionDataDelegate-Protocol.h>
#import <DropboxExtensions/NSURLSessionDelegate-Protocol.h>
#import <DropboxExtensions/NSURLSessionDownloadDelegate-Protocol.h>
#import <DropboxExtensions/NSURLSessionTaskDelegate-Protocol.h>

@class DBBackgroundURLSessionDispatcher, NSOperationQueue, NSString;
@protocol DBURLSessionReconnectEventHandler;

@interface DBURLSessionDelegateManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>
{
    struct NSMutableDictionary *_connectedTaskDelegates;
    struct NSMutableDictionary *_pendingReconnectTaskDelegates;
    DBBackgroundURLSessionDispatcher *_sessionDispatcher;
    unsigned long long _reconnectConfigType;
    id <DBURLSessionReconnectEventHandler> _reconnectEventHandler;
    NSOperationQueue *_queue;
}

+ (_Bool)db_shouldDelayNotifyReconnectGetTasksFailureForConfigType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)db_downloadTaskDelegateForTask:(id)arg1;
- (id)db_dataTaskDelegateForTask:(id)arg1;
- (id)db_taskDelegateForTask:(id)arg1;
- (void)db_notifyFailureForTaskDelegates:(struct NSDictionary *)arg1 reconnectFailureReason:(unsigned long long)arg2;
- (id)db_attemptReconnectTask:(id)arg1;
- (void)db_handleFetchedTasksWithSession:(id)arg1 dataTasks:(id)arg2 uploadTasks:(id)arg3 downloadTasks:(id)arg4;
- (void)reconnectTasksToSession:(id)arg1;
- (void)setTaskDelegate:(id)arg1 forTask:(id)arg2;
- (id)initWithBackgroundSessionDispatcher:(id)arg1 withTaskDelegates:(struct NSDictionary *)arg2 reconnectConfigType:(unsigned long long)arg3 reconnectEventHandler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

