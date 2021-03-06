//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class YTEditStickerViewModel;
@protocol YTEditStickerDataProviderDelegate;

@protocol YTEditStickerDataProvider <NSObject>
@property(nonatomic) __weak id <YTEditStickerDataProviderDelegate> delegate;
- (void)reloadStickerData;
- (unsigned long long)stickerCount;
- (YTEditStickerViewModel *)stickerForIndex:(long long)arg1;
- (void)loadStickersDataWithStickerSize:(struct CGSize)arg1;
@end

