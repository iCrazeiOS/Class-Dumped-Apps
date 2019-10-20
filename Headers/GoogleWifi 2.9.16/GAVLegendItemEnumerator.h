//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

#import "GAVLegendItemEnumerator-Protocol.h"

@class NSArray;
@protocol GAVLegend, GAVLegendItemFactory;

@interface GAVLegendItemEnumerator : NSEnumerator <GAVLegendItemEnumerator>
{
    unsigned long long _index;
    id <GAVLegendItemFactory> _itemFactory;
    NSArray *_seriesMetaDataList;
    id <GAVLegend> _legend;
}

@property(nonatomic) __weak id <GAVLegend> legend; // @synthesize legend=_legend;
- (void).cxx_destruct;
- (id)nextObject;
@property(readonly, copy) NSArray *allObjects;
- (id)initWithSeriesList:(id)arg1 itemFactory:(id)arg2 legend:(id)arg3;

@end

