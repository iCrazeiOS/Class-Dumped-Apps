//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractCollection.h"

@class ComGoogleCommonCacheLocalCache;
@protocol JavaUtilConcurrentConcurrentMap;

@interface ComGoogleCommonCacheLocalCache_Values : JavaUtilAbstractCollection
{
    ComGoogleCommonCacheLocalCache *this$0_;
    id <JavaUtilConcurrentConcurrentMap> map_;
}

- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)__javaClone:(id)arg1;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (_Bool)containsWithId:(id)arg1;
- (_Bool)removeIfWithJavaUtilFunctionPredicate:(id)arg1;
- (id)iterator;
- (void)clear;
- (_Bool)isEmpty;
- (int)size;
- (id)initWithComGoogleCommonCacheLocalCache:(id)arg1 withJavaUtilConcurrentConcurrentMap:(id)arg2;

@end

