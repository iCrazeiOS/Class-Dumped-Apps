//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "EditorContentView-Protocol.h"
#import "GBTScrollable-Protocol.h"

@class NSArray, NSMutableAttributedString, NSString, UITextRange;
@protocol EditorContentViewDelegate, UITextInputDelegate;

@interface EditorTextView : UIView <EditorContentView, GBTScrollable>
{
    NSArray *_lines;
    NSMutableAttributedString *_mutableContent;
    _Bool _newFrameNeeded;
    struct CGSize _suggestedTextSize;
    struct __CTFrame *_textFrameRef;
    struct __CTFramesetter *_textFrameSetter;
    id <EditorContentViewDelegate> contentViewDelegate;
    id <UITextInputDelegate> inputDelegate;
    UITextRange *selectedTextRange;
    id tag;
    struct CGPoint _scrollableContentOffset;
}

+ (id)textViewWithText:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint scrollableContentOffset; // @synthesize scrollableContentOffset=_scrollableContentOffset;
@property(retain, nonatomic) id tag; // @synthesize tag;
@property(retain, nonatomic) UITextRange *selectedTextRange; // @synthesize selectedTextRange;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate;
@property(nonatomic) __weak id <EditorContentViewDelegate> contentViewDelegate; // @synthesize contentViewDelegate;
@property(readonly, nonatomic) id content; // @synthesize content=_mutableContent;
- (void)releaseFrameReferences;
- (double)lineTopForLine:(struct __CTLine *)arg1 lineOrigin:(struct CGPoint)arg2;
- (long long)lineIndexForPosition:(id)arg1;
- (double)lineHeightForLine:(struct __CTLine *)arg1;
- (void)createFrameAndSetterIfNeeded;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)accessibilityHint;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
@property(readonly, nonatomic) struct CGSize scrollSize; // @dynamic scrollSize;
@property(readonly, nonatomic) struct CGRect realFrame; // @dynamic realFrame;
- (id)textInRange:(id)arg1;
- (id)textAtLineNumber:(long long)arg1;
- (id)splitAtPosition:(id)arg1;
- (id)selectionRectsForRange:(id)arg1 isEndOfRange:(_Bool)arg2;
- (void)removeAttributes:(id)arg1 forRange:(id)arg2;
- (struct CGRect)rectForLineNumber:(long long)arg1;
- (id)positionAtCharacterOffset:(long long)arg1;
- (_Bool)mergeIfPossible:(id)arg1;
- (long long)lineNumberAtPosition:(id)arg1;
- (void)insertContent:(id)arg1 atPosition:(id)arg2;
- (struct CGRect)expandCaretRect:(struct CGRect)arg1;
- (void)deleteContentInRange:(id)arg1;
- (id)contentInRange:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (long long)characterOffsetAtPosition:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)attributesAtPosition:(id)arg1;
- (void)addAttributes:(id)arg1 forRange:(id)arg2;
- (unsigned long long)textLength;
@property(readonly, nonatomic) NSString *text; // @dynamic text;
@property(readonly, nonatomic) _Bool resizeCausesReflow; // @dynamic resizeCausesReflow;
@property(readonly, nonatomic) long long numberOfLines; // @dynamic numberOfLines;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool contentLoadResultsInContentChange; // @dynamic contentLoadResultsInContentChange;
@property(readonly, nonatomic) unsigned long long contentLength; // @dynamic contentLength;
@property(readonly, nonatomic) _Bool contentIsExtendable; // @dynamic contentIsExtendable;
@property(readonly, nonatomic) _Bool allowsHorizontalScrolling;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 content:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

