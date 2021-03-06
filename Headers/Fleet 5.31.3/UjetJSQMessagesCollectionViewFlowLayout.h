//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableSet, UIDynamicAnimator, UIFont, UjetJSQMessagesCollectionView;
@protocol UjetJSQMessagesBubbleSizeCalculating;

@interface UjetJSQMessagesCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    _Bool _springinessEnabled;
    id <UjetJSQMessagesBubbleSizeCalculating> _bubbleSizeCalculator;
    unsigned long long _springResistanceFactor;
    UIFont *_messageBubbleFont;
    double _messageBubbleLeftRightMargin;
    unsigned long long _cacheLimit;
    UIDynamicAnimator *_dynamicAnimator;
    NSMutableSet *_visibleIndexPaths;
    double _latestDelta;
    struct CGSize _incomingAvatarViewSize;
    struct CGSize _outgoingAvatarViewSize;
    struct UIEdgeInsets _messageBubbleTextViewFrameInsets;
    struct UIEdgeInsets _messageBubbleTextViewTextContainerInsets;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
@property(nonatomic) double latestDelta; // @synthesize latestDelta=_latestDelta;
@property(retain, nonatomic) NSMutableSet *visibleIndexPaths; // @synthesize visibleIndexPaths=_visibleIndexPaths;
@property(retain, nonatomic) UIDynamicAnimator *dynamicAnimator; // @synthesize dynamicAnimator=_dynamicAnimator;
@property(nonatomic) unsigned long long cacheLimit; // @synthesize cacheLimit=_cacheLimit;
@property(nonatomic) struct CGSize outgoingAvatarViewSize; // @synthesize outgoingAvatarViewSize=_outgoingAvatarViewSize;
@property(nonatomic) struct CGSize incomingAvatarViewSize; // @synthesize incomingAvatarViewSize=_incomingAvatarViewSize;
@property(nonatomic) struct UIEdgeInsets messageBubbleTextViewTextContainerInsets; // @synthesize messageBubbleTextViewTextContainerInsets=_messageBubbleTextViewTextContainerInsets;
@property(nonatomic) struct UIEdgeInsets messageBubbleTextViewFrameInsets; // @synthesize messageBubbleTextViewFrameInsets=_messageBubbleTextViewFrameInsets;
@property(nonatomic) double messageBubbleLeftRightMargin; // @synthesize messageBubbleLeftRightMargin=_messageBubbleLeftRightMargin;
@property(retain, nonatomic) UIFont *messageBubbleFont; // @synthesize messageBubbleFont=_messageBubbleFont;
@property(nonatomic) unsigned long long springResistanceFactor; // @synthesize springResistanceFactor=_springResistanceFactor;
@property(nonatomic) _Bool springinessEnabled; // @synthesize springinessEnabled=_springinessEnabled;
- (void).cxx_destruct;
- (void)jsq_adjustSpringBehavior:(id)arg1 forTouchLocation:(struct CGPoint)arg2;
- (void)jsq_removeNoLongerVisibleBehaviorsFromVisibleItemsIndexPaths:(id)arg1;
- (void)jsq_addNewlyVisibleBehaviorsFromVisibleItems:(id)arg1;
- (id)jsq_springBehaviorWithLayoutAttributesItem:(id)arg1;
- (void)jsq_configureMessageCellLayoutAttributes:(id)arg1;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (struct CGSize)messageBubbleSizeForItemAtIndexPath:(id)arg1;
- (void)jsq_resetDynamicAnimator;
- (void)jsq_resetLayout;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)jsq_didReceiveDeviceOrientationDidChangeNotification:(id)arg1;
- (void)jsq_didReceiveApplicationMemoryWarningNotification:(id)arg1;
@property(retain, nonatomic) id <UjetJSQMessagesBubbleSizeCalculating> bubbleSizeCalculator; // @synthesize bubbleSizeCalculator=_bubbleSizeCalculator;
@property(readonly, nonatomic) double itemWidth;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;
- (void)jsq_configureFlowLayout;

// Remaining properties
@property(readonly, nonatomic) UjetJSQMessagesCollectionView *collectionView; // @dynamic collectionView;

@end

