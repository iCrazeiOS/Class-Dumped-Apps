//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMapEntry.h"

@class ComGoogleCommonCollectMapMakerInternalMap;

@interface ComGoogleCommonCollectMapMakerInternalMap_WriteThroughEntry : ComGoogleCommonCollectAbstractMapEntry
{
    id key_;
    id value_;
    ComGoogleCommonCollectMapMakerInternalMap *this$0_;
}

- (void)dealloc;
- (id)setValueWithId:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getValue;
- (id)getKey;
- (id)initWithComGoogleCommonCollectMapMakerInternalMap:(id)arg1 withId:(id)arg2 withId:(id)arg3;

@end

