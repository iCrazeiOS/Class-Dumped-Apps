//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectForwardingMap.h"

@class ComGoogleCommonNetConstrainedMultimaps_ConstrainedListMultimap;
@protocol JavaUtilCollection, JavaUtilMap, JavaUtilSet;

@interface ComGoogleCommonNetConstrainedMultimaps_ConstrainedListMultimap_1AsMap : ComGoogleCommonCollectForwardingMap
{
    ComGoogleCommonNetConstrainedMultimaps_ConstrainedListMultimap *this$0_;
    id <JavaUtilMap> val$asMapDelegate_;
    id <JavaUtilSet> entrySet_;
    id <JavaUtilCollection> values_;
}

- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (_Bool)containsValueWithId:(id)arg1;
- (id)values;
- (id)getWithId:(id)arg1;
- (id)entrySet;
- (id)delegate;

@end

