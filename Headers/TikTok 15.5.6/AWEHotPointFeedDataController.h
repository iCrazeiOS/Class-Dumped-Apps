//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class NSArray, NSString;
@protocol AWEHotPointDataSource;

@interface AWEHotPointFeedDataController : AWEListDataController
{
    _Bool _isAD;
    _Bool _forbidLoadMore;
    _Bool _isNearByHotPoint;
    NSString *_keyWord;
    NSString *_source;
    NSString *_gid;
    NSString *_itemIDList;
    id <AWEHotPointDataSource> _configDataSource;
    long long _isTrending;
    NSArray *_previousAwemeModels;
    CDUnknownBlockType _insertVideoBlock;
}

+ (id)dataControllerWithModel:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType insertVideoBlock; // @synthesize insertVideoBlock=_insertVideoBlock;
@property(copy, nonatomic) NSArray *previousAwemeModels; // @synthesize previousAwemeModels=_previousAwemeModels;
@property(nonatomic) _Bool isNearByHotPoint; // @synthesize isNearByHotPoint=_isNearByHotPoint;
@property(nonatomic) long long isTrending; // @synthesize isTrending=_isTrending;
@property(nonatomic) _Bool forbidLoadMore; // @synthesize forbidLoadMore=_forbidLoadMore;
@property(nonatomic) __weak id <AWEHotPointDataSource> configDataSource; // @synthesize configDataSource=_configDataSource;
@property(copy, nonatomic) NSString *itemIDList; // @synthesize itemIDList=_itemIDList;
@property(nonatomic) _Bool isAD; // @synthesize isAD=_isAD;
@property(copy, nonatomic) NSString *gid; // @synthesize gid=_gid;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
- (void).cxx_destruct;
- (void)removeOtherHotPointVideos;
- (void)addNewConfigForNextHotPoint;
- (id)addCachedVideosForKeyword:(id)arg1;
- (void)cacheDataControllerIfNeed;
- (_Bool)shouldUseCachedVideosForKeyword:(id)arg1;
- (_Bool)hasNextHotPoint;
- (id)configureParams;
- (void)reloadWithPullType:(long long)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

