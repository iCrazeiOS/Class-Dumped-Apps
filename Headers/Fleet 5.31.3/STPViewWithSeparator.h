//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

@interface STPViewWithSeparator : UIView
{
    UIView *_topSeparator;
    NSLayoutConstraint *_separatorHeightConstraint;
}

- (void).cxx_destruct;
- (double)_currentPixelHeight;
- (void)didMoveToWindow;
@property(nonatomic, getter=isTopSeparatorHidden) _Bool topSeparatorHidden;
- (void)_addSeparators;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

