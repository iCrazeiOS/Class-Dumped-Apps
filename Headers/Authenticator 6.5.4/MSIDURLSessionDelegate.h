//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MSAL/NSURLSessionDelegate-Protocol.h>
#import <MSAL/NSURLSessionTaskDelegate-Protocol.h>

@class NSString;

@interface MSIDURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    CDUnknownBlockType _sessionDidReceiveAuthenticationChallengeBlock;
    CDUnknownBlockType _taskDidReceiveAuthenticationChallengeBlock;
    CDUnknownBlockType _taskWillPerformHTTPRedirectionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType taskWillPerformHTTPRedirectionBlock; // @synthesize taskWillPerformHTTPRedirectionBlock=_taskWillPerformHTTPRedirectionBlock;
@property(copy, nonatomic) CDUnknownBlockType taskDidReceiveAuthenticationChallengeBlock; // @synthesize taskDidReceiveAuthenticationChallengeBlock=_taskDidReceiveAuthenticationChallengeBlock;
@property(copy, nonatomic) CDUnknownBlockType sessionDidReceiveAuthenticationChallengeBlock; // @synthesize sessionDidReceiveAuthenticationChallengeBlock=_sessionDidReceiveAuthenticationChallengeBlock;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

