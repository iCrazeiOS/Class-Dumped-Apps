//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UITapGestureRecognizer;
@protocol TFNModalHitTestViewDelegate;

@interface TFNModalHitTestView : UIView
{
    id <TFNModalHitTestViewDelegate> _delegate;
    UIView *_modalView;
    UIView *_modalBackgroundView;
    UITapGestureRecognizer *_modalBackgroundTapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *modalBackgroundTapGestureRecognizer; // @synthesize modalBackgroundTapGestureRecognizer=_modalBackgroundTapGestureRecognizer;
@property(retain, nonatomic) UIView *modalBackgroundView; // @synthesize modalBackgroundView=_modalBackgroundView;
@property(retain, nonatomic) UIView *modalView; // @synthesize modalView=_modalView;
@property(nonatomic) __weak id <TFNModalHitTestViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_tfn_gesture_didTapModalBackgroundView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_tfn_modalHitTestView_initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

