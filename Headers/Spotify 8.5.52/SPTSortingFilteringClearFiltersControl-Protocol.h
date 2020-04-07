//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStyleable-Protocol.h"

@class NSArray;
@protocol SPTSortingFilteringButtonsContainerStyle, SPTSortingFilteringClearFiltersControlDelegate;

@protocol SPTSortingFilteringClearFiltersControl <GLUEStyleable>
@property(readonly, nonatomic) unsigned long long numberOfFilters;
@property(nonatomic) __weak id <SPTSortingFilteringClearFiltersControlDelegate> delegate;
- (void)removeAllFilters;
- (void)insertFilters:(NSArray *)arg1;
- (void)glue_applyStyle:(id <SPTSortingFilteringButtonsContainerStyle>)arg1;
@end

