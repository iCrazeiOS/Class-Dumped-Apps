//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

#import "WARestorable-Protocol.h"

@class NSString;

@interface WAAccountViewController : WAStaticTableViewController <WARestorable>
{
}

- (void)setUpTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)openDataReportScreenAnimated:(_Bool)arg1;
- (void)deleteAccountAction;
- (void)changeNumberAction;
- (void)show2FASettings;
- (void)showAccountSecuritySettings;
- (void)setPrivacyAction;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

