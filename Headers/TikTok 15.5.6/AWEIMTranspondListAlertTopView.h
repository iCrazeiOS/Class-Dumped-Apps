//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEUserNameLabel, NSArray, NSString, UICollectionView, UIImageView, UILabel, YYLabel;

@interface AWEIMTranspondListAlertTopView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UILabel *_titleLabel;
    UIImageView *_avatarView;
    AWEUserNameLabel *_userNameLabel;
    UIView *_separateView;
    UIImageView *_videoCoverImage;
    UIImageView *_verifiedLogoView;
    UICollectionView *_collectionView;
    NSArray *_dataList;
    YYLabel *_contentLabel;
    UILabel *_descLabel;
}

+ (id)cropSquareImage:(id)arg1 withSize:(struct CGSize)arg2;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) YYLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIImageView *verifiedLogoView; // @synthesize verifiedLogoView=_verifiedLogoView;
@property(retain, nonatomic) UIImageView *videoCoverImage; // @synthesize videoCoverImage=_videoCoverImage;
@property(retain, nonatomic) UIView *separateView; // @synthesize separateView=_separateView;
@property(retain, nonatomic) AWEUserNameLabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)getContentLabelViewSize;
- (struct CGSize)getCoverImageViewSize;
- (id)p_verifyBadgeImageByUser:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)isSendToUsers:(_Bool)arg1;
- (void)p_setCoverWithShareImpl:(id)arg1;
- (void)p_refreshUIWithShareModel:(id)arg1;
- (void)updateWithShareModels:(id)arg1;
- (void)configWithShareModels:(id)arg1 shareImpl:(id)arg2;
- (void)layoutSubviews;
- (void)p_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

