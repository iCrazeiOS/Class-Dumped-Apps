//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSOIdentityContentView.h"

@class QTMButton, QTMSwitch, SSOAccountSelectorIdentityContentViewObject, UIButton, UILabel;

@interface SSOAccountSelectorIdentityContentView : SSOIdentityContentView
{
    SSOAccountSelectorIdentityContentViewObject *_accountSelectorIdentityObject;
    UILabel *_subDetailTextLabel;
    UIButton *_checkedView;
    QTMButton *_removeButton;
    QTMSwitch *_selectedSwitch;
}

+ (long long)numberOfSubDetailTextLines;
+ (id)subDetailTextFont;
+ (id)subDetailTextFromObject:(id)arg1;
+ (double)textHeightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)switchDidChange:(id)arg1;
- (struct CGRect)boundsForText;
- (struct CGRect)frameForAccessoryView:(id)arg1;
- (void)updateTextLabelVisibility:(id)arg1;
- (void)updateAccessoryViewVisibility:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (void)prepareForReuse;
- (void)removeDidTap:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

