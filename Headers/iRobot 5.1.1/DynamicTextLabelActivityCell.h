//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class Label, NSLayoutConstraint, UIActivityIndicatorView;

@interface DynamicTextLabelActivityCell : UITableViewCell
{
    Label *_label;
    UIActivityIndicatorView *_activity;
    NSLayoutConstraint *_leadingSpaceToSuperviewH;
    NSLayoutConstraint *_trailingSpaceToSuperviewH;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *trailingSpaceToSuperviewH; // @synthesize trailingSpaceToSuperviewH=_trailingSpaceToSuperviewH;
@property(retain, nonatomic) NSLayoutConstraint *leadingSpaceToSuperviewH; // @synthesize leadingSpaceToSuperviewH=_leadingSpaceToSuperviewH;
@property(retain, nonatomic) UIActivityIndicatorView *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) Label *label; // @synthesize label=_label;
- (void)updateConstraints;
- (double)height;

@end

