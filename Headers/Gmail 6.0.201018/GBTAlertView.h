//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface GBTAlertView : UIView
{
    UIImageView *_backgroundView;
    UIImageView *_iconView;
    UILabel *_messageLabel;
}

- (void).cxx_destruct;
- (void)showInView:(id)arg1 forDuration:(double)arg2;
- (void)dismissAlert;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithMessage:(id)arg1 imageName:(id)arg2;

@end

