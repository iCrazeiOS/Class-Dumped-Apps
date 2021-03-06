//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SGSocialDataModelDelegate, XBXSLSSocialLikeCallback;

@protocol SGISocialDataModel <NSObject>
- (void)unregisterFromPendingRequests:(id)arg1;
- (_Bool)setLikeWithRootPath:(NSString *)arg1 like:(_Bool)arg2 callbackDelegate:(id <XBXSLSSocialLikeCallback>)arg3 requestContext:(id)arg4;
- (void)deleteSocialItemWithPath:(NSString *)arg1 rootPath:(NSString *)arg2 itemType:(long long)arg3 callbackDelegate:(id <SGSocialDataModelDelegate>)arg4 requestContext:(id)arg5;
- (void)deleteActivityFeedItemWithPath:(NSString *)arg1 callbackDelegate:(id <SGSocialDataModelDelegate>)arg2 requestContext:(id)arg3;
- (void)postSocialShareWithPath:(NSString *)arg1 caption:(NSString *)arg2 callbackDelegate:(id <SGSocialDataModelDelegate>)arg3 requestContext:(id)arg4;
- (void)postSocialComment:(NSString *)arg1 forRootPath:(NSString *)arg2 callbackDelegate:(id <SGSocialDataModelDelegate>)arg3 requestContext:(id)arg4;
- (void)getSocialItemsWithRootPath:(NSString *)arg1 requestItemType:(long long)arg2 maxItems:(long long)arg3 callbackDelegate:(id <SGSocialDataModelDelegate>)arg4 requestContext:(id)arg5;
- (void)getCurrentUserLikeStatusWithRootPath:(NSString *)arg1 callbackDelegate:(id <SGSocialDataModelDelegate>)arg2 requestContext:(id)arg3;
- (void)getSocialSummaryWithRootPath:(NSString *)arg1 callbackDelegate:(id <SGSocialDataModelDelegate>)arg2 requestContext:(id)arg3;
@end

