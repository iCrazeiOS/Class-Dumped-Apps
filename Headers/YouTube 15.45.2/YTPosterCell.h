//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class GIMMe, NSString, YTIPosterRenderer, YTImageView;
@protocol YTResponder;

@interface YTPosterCell : YTCollectionViewCell <YTThumbnailMapping, YTCollectionViewCellProtocol>
{
    YTImageView *_posterView;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTIPosterRenderer *_entry;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)largePosterSize;
+ (struct CGSize)smallPosterSize;
- (void).cxx_destruct;
@property(retain, nonatomic) YTIPosterRenderer *entry; // @synthesize entry=_entry;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)thumbnailMappings;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

