//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGGameOverviewViewController.h"

#import "XBXFilterControlDelegate-Protocol.h"

@class NSString, UILabel, XBXFilterControl, XBXStackPanelView;

@interface SGGameOverviewViewController_iPhone : SGGameOverviewViewController <XBXFilterControlDelegate>
{
    XBXStackPanelView *_activityContainer;
    XBXStackPanelView *_platformStackPanelView;
    XBXFilterControl *_filterControl;
    XBXStackPanelView *_systemRequirementsStackPanelView;
    XBXStackPanelView *_availableOnStackPanelView;
    UILabel *_minimumRequirementsLabel;
    UILabel *_recommendedRequirementsLabel;
}

@property(nonatomic) __weak UILabel *recommendedRequirementsLabel; // @synthesize recommendedRequirementsLabel=_recommendedRequirementsLabel;
@property(nonatomic) __weak UILabel *minimumRequirementsLabel; // @synthesize minimumRequirementsLabel=_minimumRequirementsLabel;
@property(nonatomic) __weak XBXStackPanelView *availableOnStackPanelView; // @synthesize availableOnStackPanelView=_availableOnStackPanelView;
@property(nonatomic) __weak XBXStackPanelView *systemRequirementsStackPanelView; // @synthesize systemRequirementsStackPanelView=_systemRequirementsStackPanelView;
@property(nonatomic) __weak XBXFilterControl *filterControl; // @synthesize filterControl=_filterControl;
@property(nonatomic) __weak XBXStackPanelView *platformStackPanelView; // @synthesize platformStackPanelView=_platformStackPanelView;
@property(retain, nonatomic) XBXStackPanelView *activityContainer; // @synthesize activityContainer=_activityContainer;
- (void).cxx_destruct;
- (void)updateSystemRequirements:(id)arg1 matchingKeyArrayOrder:(id)arg2 forLabel:(id)arg3;
- (id)getViewModel;
- (void)filterControl:(id)arg1 selectedOption:(id)arg2;
- (void)animateOutSwitchPanelItem:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)animateInSwitchPanelItem:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)initializeSwitchPanelItem:(id)arg1 withData:(id)arg2;
- (id)getContextForIndex:(unsigned long long)arg1;
- (void)onClick:(id)arg1;
- (void)onViewModelRecommendedRequirementsDictionaryChanged;
- (void)onViewModelMinimumRequirementsDictionaryChanged;
- (void)onViewModelCurrentFilterTypeChanged;
- (void)onViewModelSelectedFilterOptionChanged;
- (void)onViewModelFilterOptionsChanged;
- (void)onViewModelExtrasChanged;
- (void)unObserveViewModelPropertiesChanges;
- (void)observeViewModelPropertiesChanges;
- (void)onDestroy;
- (void)onNavigatedFrom:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)onNavigatedTo:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)onInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

