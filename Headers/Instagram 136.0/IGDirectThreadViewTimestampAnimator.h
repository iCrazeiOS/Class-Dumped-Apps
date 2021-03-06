//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UICollectionView, UIPanGestureRecognizer;
@protocol IGDirectThreadViewTimestampAnimatorDelegate;

@interface IGDirectThreadViewTimestampAnimator : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _isDisabled;
    _Bool _shouldIgnorePan;
    id <IGDirectThreadViewTimestampAnimatorDelegate> _delegate;
    UICollectionView *_collectionView;
    UIPanGestureRecognizer *_panGesture;
}

@property(nonatomic) _Bool shouldIgnorePan; // @synthesize shouldIgnorePan=_shouldIgnorePan;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) __weak id <IGDirectThreadViewTimestampAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_animateSnapCellsBackToCenter:(id)arg1;
- (void)_didReceivePan:(id)arg1;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

