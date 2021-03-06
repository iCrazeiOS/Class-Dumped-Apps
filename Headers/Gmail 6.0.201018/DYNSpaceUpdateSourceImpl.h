//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNMessagePostingManagerObserver-Protocol.h"
#import "DYNObserverDelegate-Protocol.h"
#import "DYNSpaceMessageEventSource-Protocol.h"

@class NSString;
@protocol DYNObserverManager, DYNSpaceMessageEventSourceDelegate;

@interface DYNSpaceUpdateSourceImpl : NSObject <DYNObserverDelegate, DYNMessagePostingManagerObserver, DYNSpaceMessageEventSource>
{
    id <DYNObserverManager> _observerManager;
    id <DYNSpaceMessageEventSourceDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DYNSpaceMessageEventSourceDelegate> delegate; // @synthesize delegate;
- (void)didPostMessage:(id)arg1;
- (void)didInvalidateGroup:(id)arg1;
- (void)didResetStream:(id)arg1;
- (void)didReceiveMessageReaction:(id)arg1;
- (void)didReceiveMessageEvents:(id)arg1;
- (unsigned long long)observerTypes;
- (id)initWithObserverManagerProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

