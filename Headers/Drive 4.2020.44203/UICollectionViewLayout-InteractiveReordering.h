//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@interface UICollectionViewLayout (InteractiveReordering)
+ (void)initialize;
- (id)ig_cleanupInvalidationContext:(id)arg1;
- (id)ig_invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 movementCancelled:(_Bool)arg3;
- (id)ig_invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(struct CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(struct CGPoint)arg4;
- (id)updatedTargetForInteractivelyMovingItem:(id)arg1 toIndexPath:(id)arg2 adapter:(id)arg3;
- (id)ig_targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint)arg2;
- (void)ig_hijackLayoutInteractiveReorderingMethodForAdapter:(id)arg1;
@end

