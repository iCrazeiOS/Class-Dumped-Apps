//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableDictionary;

@interface ASTCollectionViewLeftAlignedFlowLayout : UICollectionViewFlowLayout
{
    NSMutableDictionary *_cachedAttributes;
    _Bool _shouldSnapToItem;
}

@property(nonatomic) _Bool shouldSnapToItem; // @synthesize shouldSnapToItem=_shouldSnapToItem;
- (void).cxx_destruct;
- (double)interitemSpacingForSectionAtIndex:(long long)arg1;
- (struct CGRect)previousItemFrameFromLayoutAttribute:(id)arg1;
- (void)updateXOriginForAttribute:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;

@end

