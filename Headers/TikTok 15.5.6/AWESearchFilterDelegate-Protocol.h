//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWESearchFilterView;

@protocol AWESearchFilterDelegate <NSObject>

@optional
- (void)filterView:(AWESearchFilterView *)arg1 didSelectFilterInSection:(unsigned long long)arg2;
- (void)filterView:(AWESearchFilterView *)arg1 didFinishedSelectedFilterInSection:(unsigned long long)arg2 status:(_Bool)arg3;
- (void)filterView:(AWESearchFilterView *)arg1 didFinishedSelectedSubItemInSection:(unsigned long long)arg2;
@end

