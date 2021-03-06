//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWERegularWordClassProtocol-Protocol.h"

@class NSString, UIImageView, UILabel, UIView, YYLabel;
@protocol AWERegularWordProtocol;

@interface AWERegularWordDefaultCollectionViewCell : UICollectionViewCell <AWERegularWordClassProtocol>
{
    _Bool _isSearchHistory;
    unsigned long long _cellIndex;
    YYLabel *_wordLabel;
    UIImageView *_imageView;
    id <AWERegularWordProtocol> _model;
    UILabel *_indexLabel;
    UIView *_firstPlaceholderView;
    UIView *_secondPlaceholderView;
}

+ (double)cellHeightForSearchHistory:(_Bool)arg1;
+ (double)cellHeight;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *secondPlaceholderView; // @synthesize secondPlaceholderView=_secondPlaceholderView;
@property(retain, nonatomic) UIView *firstPlaceholderView; // @synthesize firstPlaceholderView=_firstPlaceholderView;
@property(retain, nonatomic) UILabel *indexLabel; // @synthesize indexLabel=_indexLabel;
@property(retain, nonatomic) id <AWERegularWordProtocol> model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) YYLabel *wordLabel; // @synthesize wordLabel=_wordLabel;
@property(nonatomic) unsigned long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(nonatomic) _Bool isSearchHistory; // @synthesize isSearchHistory=_isSearchHistory;
- (void)setupUI;
- (void)setPlaceholderViewStyle:(_Bool)arg1;
- (void)showPlaceholderView:(_Bool)arg1;
- (void)configWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

