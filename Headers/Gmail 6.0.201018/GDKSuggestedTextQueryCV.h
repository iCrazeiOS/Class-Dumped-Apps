//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDKSuggestedQueryCV.h"

@class GDKSuggestedTextQueryCVO, GDKSuggestionLeadingIconView, UILabel;

@interface GDKSuggestedTextQueryCV : GDKSuggestedQueryCV
{
    UILabel *_label;
    GDKSuggestionLeadingIconView *_leadingIconView;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(readonly, nonatomic) GDKSuggestionLeadingIconView *leadingIconView; // @synthesize leadingIconView=_leadingIconView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)prepareForReuse;
- (id)highlightedStringForObject:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (void)updateTextFieldLines;
- (void)traitCollectionDidChange:(id)arg1;
- (void)makeAdditionalConstraints;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) GDKSuggestedTextQueryCVO *object; // @dynamic object;

@end

