//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SXCachedImageView, UILabel;

@interface SXBrandShowcaseScrollElement : UICollectionViewCell
{
    SXCachedImageView *_imageView;
    UILabel *_linkLabel;
}

+ (id)sizingCell;
@property(retain, nonatomic) UILabel *linkLabel; // @synthesize linkLabel=_linkLabel;
@property(retain, nonatomic) SXCachedImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (struct CGSize)sizeAndLayoutToFit:(struct CGSize)arg1 setFrames:(_Bool)arg2;
- (void)prepareForReuse;
- (void)updateModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)hideSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

