//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCollectionViewCellNode.h"

@class CarouselItemNode;

@interface CarouselItemCellNode : BaseCollectionViewCellNode
{
    CarouselItemNode *_itemNode;
}

@property(retain, nonatomic) CarouselItemNode *itemNode; // @synthesize itemNode=_itemNode;
- (void).cxx_destruct;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)didEndDisplayingCell;
- (void)didPassVisibilityThreshold;
- (void)didBecomeFullyVisible;
- (void)willBeginDisplayingCell;
- (id)initWithCarouselItemNode:(id)arg1;

@end

