//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

@class SPTRequestLifetime, SettingsSwitchTableViewCell;
@protocol SPTGaiaLocalNetworkPermissionAPI, SPTResolver;

@interface LocalFilesSyncSettingsSection : SettingsSection
{
    SettingsSwitchTableViewCell *_localFilesEnabledCell;
    id <SPTResolver> _resolver;
    id <SPTGaiaLocalNetworkPermissionAPI> _localNetworkPermissionManager;
    SPTRequestLifetime *_lifetime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTRequestLifetime *lifetime; // @synthesize lifetime=_lifetime;
@property(readonly, nonatomic) id <SPTGaiaLocalNetworkPermissionAPI> localNetworkPermissionManager; // @synthesize localNetworkPermissionManager=_localNetworkPermissionManager;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) SettingsSwitchTableViewCell *localFilesEnabledCell; // @synthesize localFilesEnabledCell=_localFilesEnabledCell;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (void)setEnabled:(_Bool)arg1;
- (void)getEnabled;
- (_Bool)parseResponse:(id)arg1;
- (void)enabledChanged:(id)arg1;
- (void)dealloc;
- (id)footerText;
- (id)initWithSettingsViewController:(id)arg1 resolver:(id)arg2 localNetworkPermissionManager:(id)arg3;

@end

