//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BDXLynxSwiperPageView, BDXLynxSwiperViewLayout, UICollectionViewCell;

@protocol BDXLynxSwiperPageViewDataSource <NSObject>
- (BDXLynxSwiperViewLayout *)layoutForPagerView:(BDXLynxSwiperPageView *)arg1;
- (UICollectionViewCell *)pagerView:(BDXLynxSwiperPageView *)arg1 cellForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInPagerView:(BDXLynxSwiperPageView *)arg1;
@end

