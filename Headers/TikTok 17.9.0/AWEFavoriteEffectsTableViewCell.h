//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWENewFaceStickerModel, UIImageView, UILabel, UIView;

@interface AWEFavoriteEffectsTableViewCell : UITableViewCell
{
    CDUnknownBlockType _enterEffectDetailBlock;
    CDUnknownBlockType _beginShootBlock;
    UILabel *_originalSymbolLabel;
    UIView *_infoContainerView;
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_userCountLabel;
    UILabel *_authorNameLabel;
    UIImageView *_shootImageView;
    AWENewFaceStickerModel *_stickerModel;
}

+ (_Bool)shouldSetTitleMediumWeight;
+ (long long)leftMargin;
+ (long long)contentButtonMargin;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) AWENewFaceStickerModel *stickerModel; // @synthesize stickerModel=_stickerModel;
@property(retain, nonatomic) UIImageView *shootImageView; // @synthesize shootImageView=_shootImageView;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) UILabel *userCountLabel; // @synthesize userCountLabel=_userCountLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *infoContainerView; // @synthesize infoContainerView=_infoContainerView;
@property(retain, nonatomic) UILabel *originalSymbolLabel; // @synthesize originalSymbolLabel=_originalSymbolLabel;
@property(copy, nonatomic) CDUnknownBlockType beginShootBlock; // @synthesize beginShootBlock=_beginShootBlock;
@property(copy, nonatomic) CDUnknownBlockType enterEffectDetailBlock; // @synthesize enterEffectDetailBlock=_enterEffectDetailBlock;
- (id)originalSymbolText;
- (void)updateOriginalSymbolLabel:(id)arg1;
- (void)configOriginalSymbolLabel:(id)arg1;
- (id)authorNameLabelTextColor;
- (_Bool)p_shouldShowOriginalSymbol:(id)arg1;
- (void)beginShoot_IMP:(id)arg1;
- (void)beginShoot:(id)arg1;
- (void)enterDetail:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)p_setupUI;
- (void)updateWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

