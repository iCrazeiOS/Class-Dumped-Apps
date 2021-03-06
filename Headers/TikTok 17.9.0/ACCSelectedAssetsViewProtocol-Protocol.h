//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ACCCutSameFragmentModel, ACCMVTemplateModel, AWEAssetModel, NSMutableArray, UICollectionView;

@protocol ACCSelectedAssetsViewProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType deleteAssetModelBlock;
@property(retain, nonatomic) NSMutableArray *assetModelArray;
@property(readonly, nonatomic) UICollectionView *collectionView;

@optional
@property(nonatomic) _Bool isVideoAndPicMixed;
@property(retain, nonatomic) ACCCutSameFragmentModel *singleFragmentModel;
@property(retain, nonatomic) ACCMVTemplateModel *templateModel;
@property(copy, nonatomic) CDUnknownBlockType touchAssetModelBlock;
@property(copy, nonatomic) CDUnknownBlockType changeOrderBlock;
- (void)scrollToNextSelectCell;
- (NSMutableArray *)currentAssetModelArray;
- (_Bool)checkAssetModelValid:(AWEAssetModel *)arg1 previewing:(_Bool)arg2;
- (void)reloadSelectView;
@end

