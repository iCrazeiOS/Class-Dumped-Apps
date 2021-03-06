//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplProducersElementProducer-Protocol.h"

@class ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config, ComGoogleCommonBaseOptional, NSString;
@protocol JavaUtilList;

@interface ComGoogleAppsBigtopSyncClientImplSearchAsyncZeroStateSuggestElementProducer : NSObject <ComGoogleAppsBigtopSyncClientImplProducersElementProducer>
{
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory *messageVisibilityHelperFactory_;
    ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config *config_;
    id <JavaUtilList> changes_;
    id <JavaUtilList> elementIds_;
    ComGoogleCommonBaseOptional *listener_;
    _Bool started_;
    _Bool hasEverStarted_;
}

- (void)dealloc;
- (_Bool)hasMore;
- (id)getQueryStrings;
- (id)getConfig;
- (void)updateConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTSpan:(id)arg2;
- (void)clearListener;
- (void)setListenerWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener:(id)arg1;
- (_Bool)isExpectingRemoteResults;
- (_Bool)isExpectingMoreChanges;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startWithJBTSpan:(id)arg1;
- (id)acceptVisitorWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Visitor:(id)arg1;
- (void)replaceElementsWithJavaUtilList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

