//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol IGTVSearchDataSource;

@protocol IGTVSearchDataSourceListener <NSObject>
- (void)searchDataSource:(id <IGTVSearchDataSource>)arg1 didUpdateResults:(NSArray *)arg2 isEmptyQuery:(_Bool)arg3 isCachedQuery:(_Bool)arg4;
- (void)searchDataSourceDidThrottleNetworkRequest:(id <IGTVSearchDataSource>)arg1 searchQuery:(NSString *)arg2;
- (void)searchDataSourceDidDiscardFetchedResults:(id <IGTVSearchDataSource>)arg1 searchQuery:(NSString *)arg2 numResults:(long long)arg3;
- (void)searchDataSourceDidCompleteFetch:(id <IGTVSearchDataSource>)arg1 searchQuery:(NSString *)arg2 numResults:(long long)arg3;
- (void)searchDataSourceDidFailFetch:(id <IGTVSearchDataSource>)arg1 searchQuery:(NSString *)arg2;
- (void)searchDataSourceDidStartFetch:(id <IGTVSearchDataSource>)arg1 searchQuery:(NSString *)arg2;
@end

