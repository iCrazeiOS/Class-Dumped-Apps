//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutYAxisAnchor, UIScrollView, UIView;

@interface _TtC8RedditUI22FloatingPillController : NSObject
{
    // Error parsing type: , name: floatingPillView
    // Error parsing type: , name: topConstraint
    // Error parsing type: , name: scrollViewObservation
    // Error parsing type: , name: startingOffset
    // Error parsing type: , name: initialContentOrigin
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: hideResistance
    // Error parsing type: , name: $__lazy_storage_$_headerAnchor
}

- (void).cxx_destruct;
- (id)init;
- (void)didPanWithRecognizer:(id)arg1;
- (void)hideWithAnimationDuration:(double)arg1;
- (void)showWithAnimationDuration:(double)arg1 shouldObserveContentOffset:(_Bool)arg2;
- (id)initWithScrollView:(id)arg1 floatingPillView:(id)arg2;
@property(nonatomic, retain) NSLayoutYAxisAnchor *headerAnchor;
@property(nonatomic) double hideResistance; // @synthesize hideResistance;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic, readonly) UIView *floatingPillView; // @synthesize floatingPillView;

@end

