//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MtProtoKit/MTDisposable-Protocol.h>

@class MTMetaDisposable, MTSubscriber, NSMutableArray, NSString;
@protocol MTDisposable;

@interface MTSignalQueueState : NSObject <MTDisposable>
{
    int _lock;
    _Bool _executingSignal;
    _Bool _terminated;
    id <MTDisposable> _disposable;
    MTMetaDisposable *_currentDisposable;
    MTSubscriber *_subscriber;
    NSMutableArray *_queuedSignals;
    _Bool _queueMode;
}

- (void).cxx_destruct;
- (void)dispose;
- (void)beginCompletion;
- (void)headCompleted;
- (void)enqueueSignal:(id)arg1;
- (void)beginWithDisposable:(id)arg1;
- (id)initWithSubscriber:(id)arg1 queueMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

