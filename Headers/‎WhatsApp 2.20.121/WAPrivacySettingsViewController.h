//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

@class NSMutableArray, WAActivityLabel, WAPrivacyPolicy, WATableRow, WATableSection;

@interface WAPrivacySettingsViewController : WAStaticTableViewController
{
    WATableRow *_lastSeenRow;
    WATableRow *_profilePicRow;
    WATableRow *_statusV2Row;
    WATableRow *_statusV3Row;
    WATableRow *_groupAddRow;
    WATableRow *_liveLocationRow;
    WATableRow *_blockedRow;
    WATableRow *_readReceiptsRow;
    WATableRow *_biometricPrivacyRow;
    WATableSection *_biometricPrivacySection;
    WAActivityLabel *_activityLabel;
    double _activityStartTime;
    _Bool _needPrivacyRefresh;
    _Bool _privacyFetchFailed;
    NSMutableArray *_chatSessionsSharingLiveLocation;
    WAPrivacyPolicy *_privacyPolicy;
}

- (void).cxx_destruct;
- (void)xmppConnectionStateDidChange:(id)arg1;
- (void)privacyPolicyDidChange:(id)arg1;
- (void)liveLocationSharingEndDateDidChange:(id)arg1;
- (void)blockedContactsListDidChange:(id)arg1;
- (void)wa_applicationWillEnterForeground;
- (void)switchReadReceiptsAction:(id)arg1;
- (void)updateBlockedContactsCountDisplay;
- (void)updateLiveLocationCurrentlySharingDisplay;
- (void)showLiveLocationController;
- (void)showBlacklistController;
- (void)setupTableRow:(id)arg1 sectionIndex:(unsigned long long)arg2 privacySettingsValue:(unsigned long long)arg3 canEnableDisableRow:(_Bool)arg4;
- (void)updatePrivacyValues;
- (void)updateBiometricPrivacySection;
- (void)setUpTableView;
- (void)refreshPrivacyIfNeeded;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

