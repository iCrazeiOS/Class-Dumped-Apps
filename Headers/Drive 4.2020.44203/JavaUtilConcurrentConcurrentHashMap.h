//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractMap.h"

#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilConcurrentConcurrentMap-Protocol.h"

@class NSString;

@interface JavaUtilConcurrentConcurrentHashMap : JavaUtilAbstractMap <JavaUtilConcurrentConcurrentMap, JavaIoSerializable>
{
    unsigned long long table_;
    unsigned long long nextTable_;
    // Error parsing type: Aq, name: baseCount_
    // Error parsing type: Ai, name: sizeCtl_
    // Error parsing type: Ai, name: transferIndex_
    // Error parsing type: Ai, name: cellsBusy_
    unsigned long long counterCells_;
    unsigned long long keySet_ConcurrentHashMap_;
    unsigned long long values_ConcurrentHashMap_;
    unsigned long long entrySet_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)ensureLoadedWithIOSClass:(id)arg1;
+ (id)untreeifyWithJavaUtilConcurrentConcurrentHashMap_Node:(id)arg1;
+ (int)resizeStampWithInt:(int)arg1;
+ (id)newKeySetWithInt:(int)arg1;
+ (id)newKeySet;
+ (void)setTabAtWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg1 withInt:(int)arg2 withJavaUtilConcurrentConcurrentHashMap_Node:(id)arg3;
+ (_Bool)casTabAtWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg1 withInt:(int)arg2 withJavaUtilConcurrentConcurrentHashMap_Node:(id)arg3 withJavaUtilConcurrentConcurrentHashMap_Node:(id)arg4;
+ (id)tabAtWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg1 withInt:(int)arg2;
+ (int)compareComparablesWithIOSClass:(id)arg1 withId:(id)arg2 withId:(id)arg3;
+ (id)comparableClassForWithId:(id)arg1;
+ (int)tableSizeForWithInt:(int)arg1;
+ (int)spreadWithInt:(int)arg1;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (int)reduceEntriesToIntWithLong:(long long)arg1 withJavaUtilFunctionToIntFunction:(id)arg2 withInt:(int)arg3 withJavaUtilFunctionIntBinaryOperator:(id)arg4;
- (long long)reduceEntriesToLongWithLong:(long long)arg1 withJavaUtilFunctionToLongFunction:(id)arg2 withLong:(long long)arg3 withJavaUtilFunctionLongBinaryOperator:(id)arg4;
- (double)reduceEntriesToDoubleWithLong:(long long)arg1 withJavaUtilFunctionToDoubleFunction:(id)arg2 withDouble:(double)arg3 withJavaUtilFunctionDoubleBinaryOperator:(id)arg4;
- (id)reduceEntriesWithLong:(long long)arg1 withJavaUtilFunctionFunction:(id)arg2 withJavaUtilFunctionBiFunction:(id)arg3;
- (id)reduceEntriesWithLong:(long long)arg1 withJavaUtilFunctionBiFunction:(id)arg2;
- (id)searchEntriesWithLong:(long long)arg1 withJavaUtilFunctionFunction:(id)arg2;
- (void)forEachEntryWithLong:(long long)arg1 withJavaUtilFunctionFunction:(id)arg2 withJavaUtilFunctionConsumer:(id)arg3;
- (void)forEachEntryWithLong:(long long)arg1 withJavaUtilFunctionConsumer:(id)arg2;
- (int)reduceValuesToIntWithLong:(long long)arg1 withJavaUtilFunctionToIntFunction:(id)arg2 withInt:(int)arg3 withJavaUtilFunctionIntBinaryOperator:(id)arg4;
- (long long)reduceValuesToLongWithLong:(long long)arg1 withJavaUtilFunctionToLongFunction:(id)arg2 withLong:(long long)arg3 withJavaUtilFunctionLongBinaryOperator:(id)arg4;
- (double)reduceValuesToDoubleWithLong:(long long)arg1 withJavaUtilFunctionToDoubleFunction:(id)arg2 withDouble:(double)arg3 withJavaUtilFunctionDoubleBinaryOperator:(id)arg4;
- (id)reduceValuesWithLong:(long long)arg1 withJavaUtilFunctionFunction:(id)arg2 withJavaUtilFunctionBiFunction:(id)arg3;
- (id)reduceValuesWithLong:(long long)arg1 withJavaUtilFunctionBiFunction:(id)arg2;
- (id)searchValuesWithLong:(long long)arg1 withJavaUtilFunctionFunction:(id)arg2;
- (void)forEachValueWithLong:(long long)arg1 withJavaUtilFunctionFunction:(id)arg2 withJavaUtilFunctionConsumer:(id)arg3;
- (void)forEachValueWithLong:(long long)arg1 withJavaUtilFunctionConsumer:(id)arg2;
- (int)reduceKeysToIntWithLong:(long long)arg1 withJavaUtilFunctionToIntFunction:(id)arg2 withInt:(int)arg3 withJavaUtilFunctionIntBinaryOperator:(id)arg4;
- (long long)reduceKeysToLongWithLong:(long long)arg1 withJavaUtilFunctionToLongFunction:(id)arg2 withLong:(long long)arg3 withJavaUtilFunctionLongBinaryOperator:(id)arg4;
- (double)reduceKeysToDoubleWithLong:(long long)arg1 withJavaUtilFunctionToDoubleFunction:(id)arg2 withDouble:(double)arg3 withJavaUtilFunctionDoubleBinaryOperator:(id)arg4;
- (id)reduceKeysWithLong:(long long)arg1 withJavaUtilFunctionFunction:(id)arg2 withJavaUtilFunctionBiFunction:(id)arg3;
- (id)reduceKeysWithLong:(long long)arg1 withJavaUtilFunctionBiFunction:(id)arg2;
- (id)searchKeysWithLong:(long long)arg1 withJavaUtilFunctionFunction:(id)arg2;
- (void)forEachKeyWithLong:(long long)arg1 withJavaUtilFunctionFunction:(id)arg2 withJavaUtilFunctionConsumer:(id)arg3;
- (void)forEachKeyWithLong:(long long)arg1 withJavaUtilFunctionConsumer:(id)arg2;
- (int)reduceToIntWithLong:(long long)arg1 withJavaUtilFunctionToIntBiFunction:(id)arg2 withInt:(int)arg3 withJavaUtilFunctionIntBinaryOperator:(id)arg4;
- (long long)reduceToLongWithLong:(long long)arg1 withJavaUtilFunctionToLongBiFunction:(id)arg2 withLong:(long long)arg3 withJavaUtilFunctionLongBinaryOperator:(id)arg4;
- (double)reduceToDoubleWithLong:(long long)arg1 withJavaUtilFunctionToDoubleBiFunction:(id)arg2 withDouble:(double)arg3 withJavaUtilFunctionDoubleBinaryOperator:(id)arg4;
- (id)reduceWithLong:(long long)arg1 withJavaUtilFunctionBiFunction:(id)arg2 withJavaUtilFunctionBiFunction:(id)arg3;
- (id)searchWithLong:(long long)arg1 withJavaUtilFunctionBiFunction:(id)arg2;
- (void)forEachWithLong:(long long)arg1 withJavaUtilFunctionBiFunction:(id)arg2 withJavaUtilFunctionConsumer:(id)arg3;
- (void)forEachWithLong:(long long)arg1 withJavaUtilFunctionBiConsumer:(id)arg2;
- (int)batchForWithLong:(long long)arg1;
- (void)treeifyBinWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg1 withInt:(int)arg2;
- (void)fullAddCountWithLong:(long long)arg1 withBoolean:(_Bool)arg2;
- (long long)sumCount;
- (void)transferWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg1 withJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg2;
- (void)tryPresizeWithInt:(int)arg1;
- (id)helpTransferWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg1 withJavaUtilConcurrentConcurrentHashMap_Node:(id)arg2;
- (void)addCountWithLong:(long long)arg1 withInt:(int)arg2;
- (id)initTable;
- (id)keySetWithId:(id)arg1;
- (long long)mappingCount;
- (id)elements;
- (id)keys;
- (_Bool)containsWithId:(id)arg1;
- (id)mergeWithId:(id)arg1 withId:(id)arg2 withJavaUtilFunctionBiFunction:(id)arg3;
- (id)computeWithId:(id)arg1 withJavaUtilFunctionBiFunction:(id)arg2;
- (id)computeIfPresentWithId:(id)arg1 withJavaUtilFunctionBiFunction:(id)arg2;
- (id)computeIfAbsentWithId:(id)arg1 withJavaUtilFunctionFunction:(id)arg2;
- (_Bool)removeValueIfWithJavaUtilFunctionPredicate:(id)arg1;
- (_Bool)removeEntryIfWithJavaUtilFunctionPredicate:(id)arg1;
- (void)replaceAllWithJavaUtilFunctionBiFunction:(id)arg1;
- (void)forEachWithJavaUtilFunctionBiConsumer:(id)arg1;
- (id)getOrDefaultWithId:(id)arg1 withId:(id)arg2;
- (id)replaceWithId:(id)arg1 withId:(id)arg2;
- (_Bool)replaceWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3;
- (_Bool)removeWithId:(id)arg1 withId:(id)arg2;
- (id)putIfAbsentWithId:(id)arg1 withId:(id)arg2;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (id)entrySet;
- (id)values;
- (id)keySet;
- (void)clear;
- (id)replaceNodeWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3;
- (id)removeWithId:(id)arg1;
- (void)putAllWithJavaUtilMap:(id)arg1;
- (id)putValWithId:(id)arg1 withId:(id)arg2 withBoolean:(_Bool)arg3;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (_Bool)containsValueWithId:(id)arg1;
- (_Bool)containsKeyWithId:(id)arg1;
- (id)getWithId:(id)arg1;
- (_Bool)isEmpty;
- (int)size;
- (id)initWithInt:(int)arg1 withFloat:(float)arg2 withInt:(int)arg3;
- (id)initWithInt:(int)arg1 withFloat:(float)arg2;
- (id)initWithJavaUtilMap:(id)arg1;
- (id)initWithInt:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

