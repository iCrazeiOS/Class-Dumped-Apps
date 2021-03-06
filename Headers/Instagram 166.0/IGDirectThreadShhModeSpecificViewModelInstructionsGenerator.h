//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectThreadViewModelInstructionsGenerating-Protocol.h>

@class NSString;
@protocol IGDirectInteropFeatureGating;

@interface IGDirectThreadShhModeSpecificViewModelInstructionsGenerator : NSObject <IGDirectThreadViewModelInstructionsGenerating>
{
    id <IGDirectInteropFeatureGating> _featureSetProvider;
    NSString *_currentUserId;
}

- (void).cxx_destruct;
- (void)_appendSeparatorToResults:(id)arg1 isShhModeSeparator:(_Bool)arg2 threadTheme:(id)arg3;
- (void)_insertSeparatorAndTitleIfNecessaryAboveMessageId:(id)arg1 inResults:(id)arg2 isMessageInShhMode:(_Bool)arg3 isShhModeActive:(_Bool)arg4 threadTheme:(id)arg5 availableNUXes:(id)arg6;
- (void)_prependShhModeTitleAndDescriptionToResults:(id)arg1 availableNUXes:(id)arg2 secondaryTextColor:(id)arg3;
- (void)_appendCollapsedPillToResults:(id)arg1 messageId:(id)arg2 isShhModeActive:(_Bool)arg3 numberOfCollapsedMessages:(unsigned long long)arg4 textColor:(id)arg5;
- (void)_insertCollapsedPillIfNecessaryInResults:(id)arg1 aboveMessageId:(id)arg2 collapsedSectionMessageId:(id)arg3 isShhModeActive:(_Bool)arg4 numberOfCollapsedMessages:(unsigned long long)arg5 textColor:(id)arg6;
- (unsigned long long)_collapseMessageIfNecessaryWithMessageId:(id)arg1 inResults:(id)arg2 messageIsInCurrentMode:(_Bool)arg3 shouldCollapseMessage:(_Bool)arg4 numberOfCollapsedMessages:(unsigned long long)arg5;
- (id)generateInstructionsForMessages:(id)arg1 generationInput:(id)arg2;
- (id)initWithFeatureSetProvider:(id)arg1 currentUserId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

