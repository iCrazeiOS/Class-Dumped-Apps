//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GSXSearchBoxView, GSXSearchHeaderView, MDCButtonBar, MDFSpritedAnimationView;

@interface GSXFixHeaderTransitionView : UIView
{
    GSXSearchHeaderView *_fromHeaderView;
    GSXSearchHeaderView *_toHeaderView;
    GSXSearchHeaderView *_fromHeaderViewSnapshot;
    MDFSpritedAnimationView *_searchAndArrowBackAnimationView;
    MDCButtonBar *_toLeftButtonBar;
    MDCButtonBar *_toRightButtonBar;
    GSXSearchBoxView *_toSearchBox;
}

- (void).cxx_destruct;
- (struct CGRect)getButtonBarFrameWithFromButtonBar:(id)arg1 toButtonBar:(id)arg2;
- (void)animateWithDuration:(double)arg1 curve:(unsigned long long)arg2 crossFadeAnimation:(CDUnknownBlockType)arg3;
- (void)animateWithDuration:(double)arg1 curve:(unsigned long long)arg2 fadeOutAnimation:(CDUnknownBlockType)arg3 fadeInAnimation:(CDUnknownBlockType)arg4;
- (void)animateHeaderViewWithDuration:(double)arg1 curve:(unsigned long long)arg2;
- (void)completeSearchAndArrowButtonAnimationIfExist;
- (void)animateSearchAndArrowButtonIfExist;
- (void)layoutSubviews;
- (id)initWithFromViewController:(id)arg1 toViewController:(id)arg2 navigationBarLayoutDelegate:(id)arg3;

@end

