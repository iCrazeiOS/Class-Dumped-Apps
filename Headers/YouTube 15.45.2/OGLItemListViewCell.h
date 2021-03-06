//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class OGLItemListStyling, OGLTextWithImageView, UIImageView;
@protocol OGLListItem, OGLTheming;

@interface OGLItemListViewCell : UITableViewCell
{
    _Bool _hasDrawerContainer;
    _Bool _selectionAnimationDisabled;
    OGLItemListStyling *_listStyling;
    double _minimizedWidth;
    double _minimumLeadingInset;
    id <OGLListItem> _item;
    OGLItemListStyling *_styling;
    OGLTextWithImageView *_textWithImageView;
    UIImageView *_minimizedIconImageView;
    id <OGLTheming> _theme;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)textStyleConfigurationWithItem:(id)arg1 listStyling:(id)arg2;
+ (id)layoutConfiguration:(id)arg1 styling:(id)arg2;
+ (double)heightWithItem:(id)arg1 listStyling:(id)arg2 tableWidth:(double)arg3 minimumLeadingInset:(double)arg4 edgeInsets:(struct UIEdgeInsets)arg5 minimized:(_Bool)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) id <OGLTheming> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIImageView *minimizedIconImageView; // @synthesize minimizedIconImageView=_minimizedIconImageView;
@property(retain, nonatomic) OGLTextWithImageView *textWithImageView; // @synthesize textWithImageView=_textWithImageView;
@property(retain, nonatomic) OGLItemListStyling *styling; // @synthesize styling=_styling;
@property(retain, nonatomic) id <OGLListItem> item; // @synthesize item=_item;
@property(nonatomic) _Bool selectionAnimationDisabled; // @synthesize selectionAnimationDisabled=_selectionAnimationDisabled;
@property(nonatomic) _Bool hasDrawerContainer; // @synthesize hasDrawerContainer=_hasDrawerContainer;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) double minimumLeadingInset; // @synthesize minimumLeadingInset=_minimumLeadingInset;
@property(nonatomic) double minimizedWidth; // @synthesize minimizedWidth=_minimizedWidth;
@property(retain, nonatomic) OGLItemListStyling *listStyling; // @synthesize listStyling=_listStyling;
- (void)accessibilityElementDidBecomeFocused;
- (void)layoutSubviews;
- (id)controlStateStylingForState:(unsigned long long)arg1;
@property(readonly, nonatomic) double leftInsetSurplusDueToSafeArea;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)handleSelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateStyling;
- (void)updateWithItem:(id)arg1 sectionIndex:(unsigned long long)arg2;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

