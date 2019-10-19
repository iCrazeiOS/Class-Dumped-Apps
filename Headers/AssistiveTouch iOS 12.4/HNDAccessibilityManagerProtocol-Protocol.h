//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AXElement, AXElementGroup, NSArray;
@protocol AXGroupable, HNDAccessibilityManagerObserver, HNDAccessibilityManagerProtocol, SCATElement;

@protocol HNDAccessibilityManagerProtocol <NSObject>
+ (id <HNDAccessibilityManagerProtocol>)sharedManager;
- (void)userDidPerformSwitchAction;
- (void)speechEnabledDidChange;
- (void)groupingEnabledDidChange;
- (id <SCATElement>)scannerElementMatchingElement:(id <SCATElement>)arg1;
- (id <SCATElement>)lastKeyboardElement;
- (id <SCATElement>)firstKeyboardItem;
- (id <SCATElement>)previousItemForScanningFromItem:(id <SCATElement>)arg1 didWrap:(_Bool *)arg2;
- (id <SCATElement>)nextItemForScanningFromItem:(id <SCATElement>)arg1 didWrap:(_Bool *)arg2;
- (id <SCATElement>)lastItemForScanningWithElementCommunity:(AXElement *)arg1;
- (id <SCATElement>)firstItemForScanningWithElementCommunity:(AXElement *)arg1;
- (NSArray *)elementsForMatchingBlock:(_Bool (^)(AXElement *))arg1;
- (NSArray *)scrollViewsForAction:(int)arg1 elementsToScroll:(id *)arg2;
- (NSArray *)scrollViewsForAction:(int)arg1;
- (AXElement *)firstResponder;
- (id <AXGroupable>)findGroupableMatchingGroupable:(id <AXGroupable>)arg1;
- (AXElement *)elementAtPoint:(struct CGPoint)arg1;
- (AXElementGroup *)rootKeyboardGroup;
- (id <AXGroupable>)lastScannerGroupable;
- (id <AXGroupable>)firstScannerGroupable;
- (AXElement *)lastScannerElement;
- (AXElement *)firstScannerElement;
- (AXElementGroup *)rootScannerGroup;
- (_Bool)willFetchElements;
- (_Bool)isFetchingElements;
- (void)refreshElements;
- (AXElement *)orbPreviewWindow;
- (AXElement *)nativeFocusElement;
- (NSArray *)elements;
- (_Bool)hasZeroElements;
- (_Bool)applicationIsRTL;
- (_Bool)frontmostAppMayBeLoading;
- (void)removeObserver:(id <HNDAccessibilityManagerObserver>)arg1;
- (void)addObserver:(id <HNDAccessibilityManagerObserver>)arg1;
@end

