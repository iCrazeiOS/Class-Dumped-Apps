//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilCollections_UnmodifiableSortedMap.h"

#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilNavigableMap-Protocol.h"

@class NSString;
@protocol JavaUtilNavigableMap;

@interface JavaUtilCollections_UnmodifiableNavigableMap : JavaUtilCollections_UnmodifiableSortedMap <JavaUtilNavigableMap, JavaIoSerializable>
{
    id <JavaUtilNavigableMap> nm_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)tailMapWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)headMapWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)subMapWithId:(id)arg1 withBoolean:(_Bool)arg2 withId:(id)arg3 withBoolean:(_Bool)arg4;
- (id)descendingKeySet;
- (id)navigableKeySet;
- (id)descendingMap;
- (id)pollLastEntry;
- (id)pollFirstEntry;
- (id)lastEntry;
- (id)firstEntry;
- (id)higherEntryWithId:(id)arg1;
- (id)ceilingEntryWithId:(id)arg1;
- (id)floorEntryWithId:(id)arg1;
- (id)lowerEntryWithId:(id)arg1;
- (id)higherKeyWithId:(id)arg1;
- (id)ceilingKeyWithId:(id)arg1;
- (id)floorKeyWithId:(id)arg1;
- (id)lowerKeyWithId:(id)arg1;
- (id)initWithJavaUtilNavigableMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

