//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOSideViewSection.h"

@class NSArray;

@interface JETSideViewSection : GOOSideViewSection
{
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (unsigned long long)numberOfItems;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)initWithTitle:(id)arg1 items:(id)arg2;

@end

