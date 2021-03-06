//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, NSUndoManager, TSETweet, TSETweetAttachmentView, TSETweetTextView, UIColor, UILabel;
@protocol TSETweetTextViewContainerDelegate;

@interface TSETweetTextViewContainer : UIView <UITextViewDelegate>
{
    long long _containerConstraintsToken;
    long long _attachmentViewConstraintsToken;
    id <TSETweetTextViewContainerDelegate> _delegate;
    TSETweetTextView *_textView;
    UILabel *_placeholderLabel;
    UILabel *_characterCounterLabel;
    TSETweet *_tweet;
    TSETweetAttachmentView *_attachmentView;
    UIColor *_characterCountBelowLimitColor;
    UIColor *_characterCountOverLimitColor;
    NSLayoutConstraint *_textViewHeightConstraint;
    unsigned long long _numberOfLinesToDisplay;
    struct _NSRange _textSelection;
}

@property(nonatomic) unsigned long long numberOfLinesToDisplay; // @synthesize numberOfLinesToDisplay=_numberOfLinesToDisplay;
@property(retain, nonatomic) NSLayoutConstraint *textViewHeightConstraint; // @synthesize textViewHeightConstraint=_textViewHeightConstraint;
@property(retain, nonatomic) UIColor *characterCountOverLimitColor; // @synthesize characterCountOverLimitColor=_characterCountOverLimitColor;
@property(retain, nonatomic) UIColor *characterCountBelowLimitColor; // @synthesize characterCountBelowLimitColor=_characterCountBelowLimitColor;
@property(retain, nonatomic) TSETweetAttachmentView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(copy, nonatomic) TSETweet *tweet; // @synthesize tweet=_tweet;
@property(readonly, nonatomic) UILabel *characterCounterLabel; // @synthesize characterCounterLabel=_characterCounterLabel;
@property(readonly, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(readonly, nonatomic) TSETweetTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <TSETweetTextViewContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct _NSRange textSelection; // @synthesize textSelection=_textSelection;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)_tseui_hidePlaceholder:(_Bool)arg1;
- (void)_scrollToCursorWithRetry:(_Bool)arg1;
@property(readonly) NSUndoManager *undoManager;
- (void)_tseui_notifyDelegateWithUpdatedText;
- (void)updateText:(id)arg1;
- (void)configureWithTweet:(id)arg1;
@property(readonly, nonatomic) unsigned long long minNumberOfLinesToDisplay; // @dynamic minNumberOfLinesToDisplay;
- (void)_tseui_updateLineCount;
- (void)_tseui_updateCharacterCount;
- (void)addAttachmentViewConstraints;
- (void)updateConstraints;
- (void)_tseui_updateTextViewConstraintConstant;
@property(readonly, nonatomic) double textViewHeight;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

