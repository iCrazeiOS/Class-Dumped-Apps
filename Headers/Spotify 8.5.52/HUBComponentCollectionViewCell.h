//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class HUBComponentView, NSUUID;

@interface HUBComponentCollectionViewCell : UICollectionViewCell
{
    NSUUID *_identifier;
    HUBComponentView *_componentView;
}

@property(retain, nonatomic) HUBComponentView *componentView; // @synthesize componentView=_componentView;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

