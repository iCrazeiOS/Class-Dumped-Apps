//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Apollo17PasteableTextView.h"

@class NSAttributedString, NSString, UIFont;

@interface _TtC6Apollo13InputTextView : _TtC6Apollo17PasteableTextView
{
    // Error parsing type: , name: isImagePasteEnabled
    // Error parsing type: , name: placeholderLabel
    // Error parsing type: , name: placeholder
    // Error parsing type: , name: placeholderTextColor
    // Error parsing type: , name: placeholderLabelInsets
    // Error parsing type: , name: messageInputBar
    // Error parsing type: , name: placeholderLabelConstraintSet
}

- (void).cxx_destruct;
- (void)redrawTextAttachments;
- (void)textViewTextDidChange;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)init;
@property(nonatomic) struct UIEdgeInsets scrollIndicatorInsets;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
@property(nonatomic) long long textAlignment;
@property(nonatomic, retain) UIFont *font;
@property(nonatomic, retain) NSAttributedString *attributedText;
@property(nonatomic, copy) NSString *text;

@end

