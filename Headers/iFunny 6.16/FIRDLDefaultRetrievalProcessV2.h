//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FIRDLJavaScriptExecutorDelegate-Protocol.h>
#import <Funny/FIRDLRetrievalProcessProtocol-Protocol.h>

@class FIRDLJavaScriptExecutor, FIRDynamicLinkNetworking, NSString;
@protocol FIRDLRetrievalProcessDelegate;

@interface FIRDLDefaultRetrievalProcessV2 : NSObject <FIRDLJavaScriptExecutorDelegate, FIRDLRetrievalProcessProtocol>
{
    FIRDynamicLinkNetworking *_networkingService;
    NSString *_URLScheme;
    NSString *_APIKey;
    NSString *_FDLSDKVersion;
    NSString *_clipboardContentAtMatchProcessStart;
    FIRDLJavaScriptExecutor *_jsExecutor;
    NSString *_localeFromWebView;
    id <FIRDLRetrievalProcessDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <FIRDLRetrievalProcessDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchLocaleFromWebView;
- (void)clearUsedUniqueMatchLinkToCheckFromClipboard;
- (_Bool)isPasteboardRetrievalEnabled;
- (id)retrievePasteboardContents;
- (id)uniqueMatchLinkToCheck;
- (void)handleRetrievalProcessWithResult:(id)arg1;
- (void)retrievePendingDynamicLinkInternal;
- (void)javaScriptExecutor:(id)arg1 failedWithError:(id)arg2;
- (void)javaScriptExecutor:(id)arg1 completedExecutionWithResult:(id)arg2;
- (void)retrievePendingDynamicLink;
- (id)initWithNetworkingService:(id)arg1 URLScheme:(id)arg2 APIKey:(id)arg3 FDLSDKVersion:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

