//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OGLGM2AccountSelectorViewController.h"

@interface OGLDrawerAccountMenuViewController : OGLGM2AccountSelectorViewController
{
}

- (void)orientationChanged;
- (struct CGSize)preferredContentSize;
- (void)closeButtonDidTap;
- (unsigned long long)componentAppearance;
- (unsigned long long)componentType;
- (_Bool)iPadPopoverContentExceedsContainerWithContentHeight:(double)arg1;
- (void)layoutTableView;
- (_Bool)isIPhonePopover;
- (_Bool)shouldHideHeader;
- (void)maybeSetUpHeaderAndFooter;
- (double)topPadding;
- (_Bool)hasHeader;
- (id)actionItems;
- (void)cellVisibilityChangedForCell:(id)arg1 visible:(_Bool)arg2;
- (_Bool)showTurnOnIncognitoModeItem;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)accountsForDisplay;
- (id)customActionsSectionsFromCustomItemsDataSource:(id)arg1;
- (id)viewModelWithConfiguration:(id)arg1 sectionedAccounts:(id)arg2 signedInAccount:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

