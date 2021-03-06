//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIView;
@protocol AWEStoryEntranceLoadingDataSource;

@protocol AWEStoryEntranceLoadingManagerProtocol <NSObject>
- (void)hideUnreadViewOnView:(UIView *)arg1;
- (void)showUnreadViewOnView:(UIView *)arg1 tracker:(void (^)(NSMutableDictionary *))arg2;
- (void)cancelLoadingOnView:(UIView *)arg1;
- (void)enterDetailVCWithUserIDs:(NSArray *)arg1 dataSource:(id <AWEStoryEntranceLoadingDataSource>)arg2 tracker:(void (^)(NSMutableDictionary *))arg3 completion:(void (^)(_Bool, NSError *))arg4;
@end

