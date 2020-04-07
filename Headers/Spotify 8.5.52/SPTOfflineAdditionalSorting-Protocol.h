//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary;
@protocol SPTOfflineAdditionalSortingDelegate;

@protocol SPTOfflineAdditionalSorting <NSObject>
@property(readonly, nonatomic, getter=isReadyForSorting) _Bool readyForSorting;
@property(nonatomic) __weak id <SPTOfflineAdditionalSortingDelegate> delegate;
- (NSArray *)applySortingToItems:(NSArray *)arg1 decoratedItemsDictionary:(NSDictionary *)arg2;
- (void)loadAdditionalSortingData;
@end

