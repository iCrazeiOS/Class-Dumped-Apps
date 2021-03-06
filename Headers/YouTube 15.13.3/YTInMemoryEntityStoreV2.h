//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTElementsStoreObserver-Protocol.h>
#import <Module_Framework/YTInMemoryEntityStore-Protocol.h>
#import <Module_Framework/YTInMemoryEntityStore_Private-Protocol.h>
#import <Module_Framework/YTUserChangedObserver-Protocol.h>

@class GIMMe, NSMapTable, NSRecursiveLock, NSString, YTEntityStoreObservers, YTInMemoryEntityStoreFaultObservers;
@protocol YTIdentityProvider;

@interface YTInMemoryEntityStoreV2 : NSObject <YTUserChangedObserver, YTInMemoryEntityStore, YTInMemoryEntityStore_Private, YTElementsStoreObserver>
{
    struct shared_ptr<youtube::elements::Store> _store;
    struct shared_ptr<youtube::entities::client::YTElementsStoreObserverBridge> _cppStoreObserver;
    struct shared_ptr<youtube::entities::client::YTElementsStoreFaultObserverBridge> _cppStoreFaultObserver;
    struct unique_ptr<youtube::elements::Store::Subscription, std::__1::default_delete<youtube::elements::Store::Subscription>> _cppStoreAllEventsSubscription;
    struct unique_ptr<youtube::elements::Store::FaultSubscription, std::__1::default_delete<youtube::elements::Store::FaultSubscription>> _cppStoreFaultSubscription;
    struct unordered_map<unsigned long, Class, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, Class>>> _entityTypeToClassMap;
    NSRecursiveLock *_lock;
    YTEntityStoreObservers *_observers;
    YTInMemoryEntityStoreFaultObservers *_faultObservers;
    id <YTIdentityProvider> _identityProvider;
    NSString *_currentDataSyncID;
    NSMapTable *_entityMergers;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)locked:(CDUnknownBlockType)arg1;
- (Class)getEntityClassForKey:(id)arg1;
- (Class)getEntityClassForEntityType:(unsigned long long)arg1;
- (void)notifyObserversOfEntityStoreChanges:(id)arg1;
- (void)notifyKeyObserversRemoved;
- (void)internalRemoveEntityForKey:(id)arg1;
- (void)internalAddEntity:(id)arg1 options:(unsigned int)arg2 batchUpdateTimestamp:(double)arg3;
- (void)internalUserDidChange;
- (void)enforceCorrectIdentity;
- (_Bool)isStoreIdentityEqualToActiveIdentity;
- (void)removeFaultObserver:(id)arg1;
- (void)removeFaultObserver:(id)arg1 fromEntityClass:(Class)arg2;
- (void)removeFaultObserver:(id)arg1 fromEntityKeys:(id)arg2;
- (void)addFaultObserver:(id)arg1 forEntityClass:(Class)arg2;
- (void)addFaultObserver:(id)arg1 forEntityKeys:(id)arg2;
- (void)elementsStoreDidFault:(struct string_view)arg1;
- (void)elementsStoreDidUpdate:(const struct TransactionRecord *)arg1;
- (void)userDidChange;
- (void)removeEntityStoreObserver:(id)arg1;
- (void)removeEntityStoreObserver:(id)arg1 fromClass:(Class)arg2;
- (void)removeEntityStoreObserver:(id)arg1 fromKey:(id)arg2;
- (void)addEntityStoreObserver:(id)arg1 toClass:(Class)arg2 options:(unsigned long long)arg3;
- (void)addEntityStoreObserver:(id)arg1 toKey:(id)arg2 options:(unsigned long long)arg3;
- (void)commitPendingEdits:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)edit;
- (void)entitiesForKeys:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)entitiesForKeys:(id)arg1 error:(id *)arg2;
- (id)entityForKey:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

