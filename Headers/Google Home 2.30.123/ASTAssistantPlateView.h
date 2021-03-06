//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ASTContentItemDelegate-Protocol.h"
#import "ASTContentTableViewDelegate-Protocol.h"
#import "ASTSuggestionRowDelegate-Protocol.h"
#import "ASTThemable-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class ASTAPIProvider, ASTAssistantPlateViewContext, ASTContentCollection, ASTContentTableView, ASTPlateHeaderView, ASTPlateInputView, ASTPlatePrivacyPolicyToSView, ASTSuggestionRow, NSArray, NSLayoutConstraint, NSObject, NSString, UIImage, UILayoutGuide, UIStackView;
@protocol ASTContentItem;

@interface ASTAssistantPlateView : UIView <ASTThemable, ASTSuggestionRowDelegate, UITextViewDelegate, ASTContentTableViewDelegate, ASTContentItemDelegate>
{
    _Bool _micOnLeft;
    _Bool _shouldClearContent;
    _Bool _displayTextOnHeader;
    _Bool _hideHeaderContent;
    _Bool _hideSuggestions;
    _Bool _extendContentToEdge;
    _Bool _hidePullIndicator;
    ASTAPIProvider *_provider;
    ASTAssistantPlateViewContext *_context;
    ASTContentCollection *_contentCollection;
    NSArray *_defaultSuggestions;
    UILayoutGuide *_containerGuide;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    ASTPlateHeaderView *_headerView;
    UIView *_contentSection;
    ASTContentTableView *_contentView;
    NSLayoutConstraint *_contentSectionContraint;
    NSObject<ASTContentItem> *_contentItem;
    UIView *_contentItemView;
    UIStackView *_bottomSection;
    ASTPlateInputView *_plateInputView;
    ASTSuggestionRow *_suggestionsRow;
    ASTPlatePrivacyPolicyToSView *_tosAndPPView;
    NSLayoutConstraint *_avatarWidthConstraint;
    struct UIEdgeInsets _padding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *avatarWidthConstraint; // @synthesize avatarWidthConstraint=_avatarWidthConstraint;
@property(retain, nonatomic) ASTPlatePrivacyPolicyToSView *tosAndPPView; // @synthesize tosAndPPView=_tosAndPPView;
@property(retain, nonatomic) ASTSuggestionRow *suggestionsRow; // @synthesize suggestionsRow=_suggestionsRow;
@property(retain, nonatomic) ASTPlateInputView *plateInputView; // @synthesize plateInputView=_plateInputView;
@property(retain, nonatomic) UIStackView *bottomSection; // @synthesize bottomSection=_bottomSection;
@property(retain, nonatomic) UIView *contentItemView; // @synthesize contentItemView=_contentItemView;
@property(retain, nonatomic) NSObject<ASTContentItem> *contentItem; // @synthesize contentItem=_contentItem;
@property(retain, nonatomic) NSLayoutConstraint *contentSectionContraint; // @synthesize contentSectionContraint=_contentSectionContraint;
@property(retain, nonatomic) ASTContentTableView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *contentSection; // @synthesize contentSection=_contentSection;
@property(retain, nonatomic) ASTPlateHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) UILayoutGuide *containerGuide; // @synthesize containerGuide=_containerGuide;
@property(nonatomic) _Bool hidePullIndicator; // @synthesize hidePullIndicator=_hidePullIndicator;
@property(nonatomic) _Bool extendContentToEdge; // @synthesize extendContentToEdge=_extendContentToEdge;
@property(nonatomic) _Bool hideSuggestions; // @synthesize hideSuggestions=_hideSuggestions;
@property(nonatomic) _Bool hideHeaderContent; // @synthesize hideHeaderContent=_hideHeaderContent;
@property(nonatomic) _Bool displayTextOnHeader; // @synthesize displayTextOnHeader=_displayTextOnHeader;
@property(nonatomic) _Bool shouldClearContent; // @synthesize shouldClearContent=_shouldClearContent;
@property(retain, nonatomic) NSArray *defaultSuggestions; // @synthesize defaultSuggestions=_defaultSuggestions;
@property(retain, nonatomic) ASTContentCollection *contentCollection; // @synthesize contentCollection=_contentCollection;
@property(readonly, nonatomic) ASTAssistantPlateViewContext *context; // @synthesize context=_context;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) ASTAPIProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) _Bool micOnLeft; // @synthesize micOnLeft=_micOnLeft;
- (void)suggestionRow:(id)arg1 didTapOnSuggestionItem:(id)arg2;
- (_Bool)isShowingAssistantResponse;
- (void)updatePullIndicatorState;
- (void)clearContentIfNeeded;
- (void)removeAssistantResponsesDeferred:(_Bool)arg1;
- (id)suggestionStyleForTheme:(unsigned long long)arg1;
- (double)safeBottomExtentLength;
- (double)bottomExtentLength;
- (struct UIEdgeInsets)defaultContentItemMargin;
- (void)removeFromSuperview;
@property(retain, nonatomic) UIImage *avatarImage;
- (void)setGlifToReplyState:(id)arg1;
- (void)setGlifToThinkingState;
- (void)setGlifToIdleState;
- (void)setGlifToListeningState:(id)arg1;
- (id)findLastItemOfClass:(Class)arg1;
- (void)removeContentItem:(id)arg1;
- (void)showContentItems:(id)arg1 options:(unsigned long long)arg2;
- (void)showContentItem:(id)arg1 textOnHeader:(_Bool)arg2;
- (void)showContentItem:(id)arg1 exclusively:(_Bool)arg2;
- (void)showContentItem:(id)arg1;
- (void)showContentItems:(id)arg1 margin:(struct UIEdgeInsets)arg2 options:(unsigned long long)arg3;
- (void)showSuggestions:(id)arg1;
- (void)resetAccessibilityContentFocus;
- (void)reset;
- (void)updateWithStableText:(id)arg1 unstableText:(id)arg2;
- (void)updateWithFinalText:(id)arg1;
- (void)showErrorMessage:(id)arg1;
- (void)showAssistantTextResponse:(id)arg1;
- (void)hideTOSAndPrivacyPolicyLinks;
- (void)showTOSAndPrivacyPolicyLinks;
- (void)updateContentSectionSizeAnimated:(_Bool)arg1;
- (void)setExtendContentToEdge:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) struct CGRect safeEditingArea;
- (void)notifyItem:(id)arg1 change:(unsigned long long)arg2;
- (void)contentHasChangedInView:(id)arg1;
- (void)applyTheme:(unsigned long long)arg1;
- (_Bool)isViewInContentSection:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)activateTextInput;
- (void)setupBottomSection;
- (void)setupContentSection;
- (void)setupSubviews;
- (id)initWithContext:(id)arg1 defaultSuggestions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

