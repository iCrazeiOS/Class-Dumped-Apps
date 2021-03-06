//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGRealtimeServerPayloadHandlerRegistryProtocol-Protocol.h>

@class NSMapTable, NSString;

@interface IGRealtimeServerPayloadHandlerRegistry : NSObject <IGRealtimeServerPayloadHandlerRegistryProtocol>
{
    NSMapTable *_topicPrefixToHandlerMapping;
    NSMapTable *_eventToHandlerMapping;
    NSMapTable *_actionToHandlerMapping;
}

- (void).cxx_destruct;
- (void)unregisterServerPayloadHandler:(id)arg1 forRoutingRule:(id)arg2;
- (void)registerServerPayloadHandler:(id)arg1 forRoutingRule:(id)arg2;
- (id)serverPayloadHandlerForPayload:(id)arg1 topic:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

