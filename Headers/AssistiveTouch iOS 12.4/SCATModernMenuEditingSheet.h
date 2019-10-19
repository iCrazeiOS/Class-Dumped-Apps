//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATModernMenuSheet.h"

@class SCATModernMenuItem;

@interface SCATModernMenuEditingSheet : SCATModernMenuSheet
{
    _Bool _selectionModeOn;
    SCATModernMenuItem *_selectionModeToggleItem;
    SCATModernMenuItem *_selectWordOrNoneItem;
    struct _NSRange _startingRangeForSelection;
}

+ (_Bool)isValidForElement:(id)arg1;
@property(retain, nonatomic) SCATModernMenuItem *selectWordOrNoneItem; // @synthesize selectWordOrNoneItem=_selectWordOrNoneItem;
@property(retain, nonatomic) SCATModernMenuItem *selectionModeToggleItem; // @synthesize selectionModeToggleItem=_selectionModeToggleItem;
@property(nonatomic) struct _NSRange startingRangeForSelection; // @synthesize startingRangeForSelection=_startingRangeForSelection;
@property(nonatomic) _Bool selectionModeOn; // @synthesize selectionModeOn=_selectionModeOn;
- (void).cxx_destruct;
- (id)_identifierForTextMovementDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2;
- (void)_handleCompletedCutCopyPasteOperationForTextElement:(id)arg1;
- (void)_selectWordForTextElement:(id)arg1;
- (void)_selectNoneForTextElement:(id)arg1;
- (void)_moveCursorForTextElement:(id)arg1 direction:(unsigned long long)arg2 unit:(unsigned long long)arg3;
- (_Bool)_adjustSelectionForTextElement:(id)arg1 direction:(unsigned long long)arg2 unit:(unsigned long long)arg3 selectedRange:(struct _NSRange)arg4 startingRangeForSelection:(struct _NSRange)arg5;
- (void)menuItemWasActivated:(id)arg1;
- (_Bool)shouldUpdateMenuItem:(id)arg1;
- (id)alternateTipElement;
- (long long)preferredTipObject;
- (id)makeMenuItemsIfNeeded;
- (_Bool)shouldIncludeBackItem;

@end

