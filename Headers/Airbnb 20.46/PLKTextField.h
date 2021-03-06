//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIImageView, UILabel, UIView;

@interface PLKTextField : UITextField
{
    _Bool _hidesPlaceholderWhileEditing;
    _Bool _showsTextFieldBorder;
    unsigned long long _textIcon;
    NSString *_info;
    UIImageView *_iconImageView;
    UILabel *_placeholderLabel;
    NSLayoutConstraint *_placeholderLabelCenterYConstraint;
    UILabel *_infoLabel;
    UIView *_infoView;
    UIView *_borderView;
    UIView *_shadowView;
    NSMutableArray *_accessibilityElements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) NSLayoutConstraint *placeholderLabelCenterYConstraint; // @synthesize placeholderLabelCenterYConstraint=_placeholderLabelCenterYConstraint;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool showsTextFieldBorder; // @synthesize showsTextFieldBorder=_showsTextFieldBorder;
@property(nonatomic) _Bool hidesPlaceholderWhileEditing; // @synthesize hidesPlaceholderWhileEditing=_hidesPlaceholderWhileEditing;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(nonatomic) unsigned long long textIcon; // @synthesize textIcon=_textIcon;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)placeholderLabel:(id)arg1 layoutConstraintsWithView:(id)arg2 insets:(struct UIEdgeInsets)arg3;
- (id)iconImageView:(id)arg1 layoutConstraintsWithView:(id)arg2 insets:(struct UIEdgeInsets)arg3;
- (id)layoutConstraintsForView:(id)arg1 inView:(id)arg2 withInsets:(struct UIEdgeInsets)arg3 identifier:(id)arg4;
- (id)infoView:(id)arg1 layoutConstraintsWithView:(id)arg2 insets:(struct UIEdgeInsets)arg3;
- (void)addShadowToView:(id)arg1;
- (id)borderViewInView:(id)arg1;
@property(copy, nonatomic) NSString *editingPlaceholder;
- (struct UIEdgeInsets)edgeInsets;
- (void)setText:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (void)setRightViewMode:(long long)arg1;
- (void)setTextIcon:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

