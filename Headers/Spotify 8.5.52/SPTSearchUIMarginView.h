//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

@interface SPTSearchUIMarginView : UIView
{
    UIView *_arrangedView;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    struct UIEdgeInsets _insets;
}

@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) UIView *arrangedView; // @synthesize arrangedView=_arrangedView;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void).cxx_destruct;
- (void)updateConstraintConstants;

@end

