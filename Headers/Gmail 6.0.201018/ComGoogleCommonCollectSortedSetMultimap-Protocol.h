//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectSetMultimap-Protocol.h"
#import "JavaObject-Protocol.h"

@protocol JavaLangIterable, JavaUtilComparator, JavaUtilMap, JavaUtilSortedSet;

@protocol ComGoogleCommonCollectSortedSetMultimap <ComGoogleCommonCollectSetMultimap, JavaObject>
- (id <JavaUtilComparator>)valueComparator;
- (id <JavaUtilMap>)asMap;
- (id <JavaUtilSortedSet>)replaceValuesWithId:(id)arg1 withJavaLangIterable:(id <JavaLangIterable>)arg2;
- (id <JavaUtilSortedSet>)removeAllWithId:(id)arg1;
- (id <JavaUtilSortedSet>)getWithId:(id)arg1;
@end

