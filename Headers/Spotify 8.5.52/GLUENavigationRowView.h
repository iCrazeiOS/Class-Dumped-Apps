//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStatefulView.h"

#import "GLUENavigationRow-Protocol.h"

@class GLUEAccessoryIconView, GLUELabel, NSLayoutConstraint, NSString;

@interface GLUENavigationRowView : GLUEStatefulView <GLUENavigationRow>
{
    GLUELabel *_titleLabel;
    long long _icon;
    GLUEStatefulView *_navigationContentView;
    GLUEAccessoryIconView *_disclosureIndicatorView;
    GLUEAccessoryIconView *_accessoryIconView;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_accessoryLeadingMarginConstraint;
    NSLayoutConstraint *_titleLeadingMarginConstraint;
    NSLayoutConstraint *_titleToAccessoryIconViewConstraint;
    NSLayoutConstraint *_titleToDisclosureMarginConstraint;
    NSLayoutConstraint *_disclosureTrailingMarginConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *disclosureTrailingMarginConstraint; // @synthesize disclosureTrailingMarginConstraint=_disclosureTrailingMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleToDisclosureMarginConstraint; // @synthesize titleToDisclosureMarginConstraint=_titleToDisclosureMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleToAccessoryIconViewConstraint; // @synthesize titleToAccessoryIconViewConstraint=_titleToAccessoryIconViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLeadingMarginConstraint; // @synthesize titleLeadingMarginConstraint=_titleLeadingMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryLeadingMarginConstraint; // @synthesize accessoryLeadingMarginConstraint=_accessoryLeadingMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewTopConstraint; // @synthesize contentViewTopConstraint=_contentViewTopConstraint;
@property(readonly, nonatomic) GLUEAccessoryIconView *accessoryIconView; // @synthesize accessoryIconView=_accessoryIconView;
@property(readonly, nonatomic) GLUEAccessoryIconView *disclosureIndicatorView; // @synthesize disclosureIndicatorView=_disclosureIndicatorView;
@property(readonly, nonatomic) GLUEStatefulView *navigationContentView; // @synthesize navigationContentView=_navigationContentView;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)applyStateStyle:(id)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)shouldGroupAccessibilityChildren;
- (void)updateConstraintsWithStyle;
- (void)updateConstraints;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly) Class superclass;

@end

