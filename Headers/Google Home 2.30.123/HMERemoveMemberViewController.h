//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupCustomLayoutViewController.h"

#import "HMEModelObserver-Protocol.h"
#import "HMESetupHeaderViewDelegate-Protocol.h"

@class HMEModel, HMEStatusViewController, NSString;
@protocol AnalyticsLogger, GCAConfigurationFlags, HMELinkOpener, HMERemoveMemberViewControllerDelegate;

@interface HMERemoveMemberViewController : HMESetupCustomLayoutViewController <HMEModelObserver, HMESetupHeaderViewDelegate>
{
    _Bool _isNestStructureOwner;
    _Bool _isCurrentUser;
    _Bool _isConciergeOwner;
    _Bool _containsAndroidTVS;
    id <HMERemoveMemberViewControllerDelegate> _delegate;
    NSString *_name;
    NSString *_email;
    HMEModel *_currentStructure;
    id <HMELinkOpener> _linkOpener;
    id <AnalyticsLogger> _analyticsLogger;
    id <GCAConfigurationFlags> _flags;
    HMEStatusViewController *_statusViewController;
}

+ (id)bodyAttributeDict;
+ (id)subheadAttributeDict;
+ (id)newLineAttributedString;
+ (id)leaveStructureBody;
+ (id)removeDevicesBody;
+ (id)removeDevicesHeader;
+ (id)removeDevicesForOthersBody;
+ (id)removeDevicesForOthersHeader;
+ (id)removeServicesBody;
+ (id)removeServicesHeader;
+ (id)removeServicesForOthersBody;
+ (id)removeServicesForOthersHeader;
+ (id)removeNestAwareFeaturesConciergeBody;
+ (id)removeNestAwareFeaturesBody;
+ (id)removeNestAwareFeaturesHeader;
+ (id)removeNestAwareFeaturesForOthersConciergeBody;
+ (id)removeNestAwareFeaturesForOthersBody;
+ (id)removeNestAwareFeaturesForOthersHeader;
+ (id)removePersonMoreInfoBody;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMEStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) id <HMELinkOpener> linkOpener; // @synthesize linkOpener=_linkOpener;
@property(readonly, nonatomic) _Bool containsAndroidTVS; // @synthesize containsAndroidTVS=_containsAndroidTVS;
@property(readonly, nonatomic) _Bool isConciergeOwner; // @synthesize isConciergeOwner=_isConciergeOwner;
@property(readonly, nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(readonly, nonatomic) _Bool isNestStructureOwner; // @synthesize isNestStructureOwner=_isNestStructureOwner;
@property(readonly, nonatomic) HMEModel *currentStructure; // @synthesize currentStructure=_currentStructure;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <HMERemoveMemberViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)removeMemberFromStructureSabrinaWarningText;
- (id)removeSelfFromStructureSabrinaWarningText;
- (id)primaryButtonText;
- (id)removeDevicesAndServicesTextForOtherUser;
- (id)removeDevicesAndServicesTextForCurrentUser;
- (id)removeNestAwareFeaturesTextForOtherUser;
- (id)removeNestAwareFeaturesTextForCurrentUser;
- (id)removeOtherUserInfoText;
- (id)hangingSubscriptionsSubtitleTextForManagersOnly;
- (id)hangingSubscriptionsSubtitleText;
- (id)titleText;
- (void)showRemoveSabrinaAccountHelp;
- (void)didTapOverflowButton;
- (void)setupContent;
- (void)updateView;
- (void)headerView:(id)arg1 didSelectURL:(id)arg2;
- (void)viewDidLoad;
- (void)modelDidChange:(id)arg1;
- (id)initWithName:(id)arg1 email:(id)arg2 currentStructure:(id)arg3 isNestStructureOwner:(_Bool)arg4 isCurrentUser:(_Bool)arg5 isConciergeOwner:(_Bool)arg6 containsAndroidTVS:(_Bool)arg7 linkOpener:(id)arg8 analyticsLogger:(id)arg9 flags:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

