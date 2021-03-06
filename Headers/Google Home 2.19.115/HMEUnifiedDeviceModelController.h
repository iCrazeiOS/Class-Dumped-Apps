//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEAvailableDeviceActionsObserver-Protocol.h"
#import "HMEHomeAutomationDeviceStateCacheListener-Protocol.h"
#import "HMEModelObserver-Protocol.h"
#import "HMEUnifiedDeviceData-Protocol.h"

@class HMECompletionTaskQueue, HMEDeviceEligibilityChecker, HMEModel, HMENetworkModel, NSString;
@protocol GCAConfigurationFlags, HMEAssistantSettingsMultiUserInfo, HMEAvailableDeviceActionsProvider, HMECastChannelData, HMEDeviceData, HMEHomeAutomationDeviceStateCache, HMELocalDeviceAssociationsData, HMELocalDeviceData;

@interface HMEUnifiedDeviceModelController : NSObject <HMEModelObserver, HMEAvailableDeviceActionsObserver, HMEHomeAutomationDeviceStateCacheListener, HMEUnifiedDeviceData>
{
    id <HMEDeviceData> _deviceData;
    id <HMELocalDeviceData> _localDeviceData;
    id <HMELocalDeviceAssociationsData> _localDeviceAssociationsData;
    id <HMECastChannelData> _castChannelData;
    id <HMEHomeAutomationDeviceStateCache> _deviceStateCache;
    id <HMEAssistantSettingsMultiUserInfo> _assistantSettingsMultiUserInfo;
    HMEModel *_localDevicesModel;
    HMEModel *_graphDevicesModel;
    HMEModel *_multizoneGroupsModel;
    HMEModel *_localDeviceAssociationsModel;
    HMEModel *_mediaSessionsModel;
    HMENetworkModel *_unifiedDevicesModel;
    HMENetworkModel *_unifiedMultizoneGroupsModel;
    HMEDeviceEligibilityChecker *_deviceEligibilityChecker;
    id <HMEAvailableDeviceActionsProvider> _deviceActionsProvider;
    HMECompletionTaskQueue *_unifiedDeviceForHGSIDQueue;
    id <GCAConfigurationFlags> _experimentFlags;
}

@property(readonly, nonatomic) id <GCAConfigurationFlags> experimentFlags; // @synthesize experimentFlags=_experimentFlags;
@property(readonly, nonatomic) HMECompletionTaskQueue *unifiedDeviceForHGSIDQueue; // @synthesize unifiedDeviceForHGSIDQueue=_unifiedDeviceForHGSIDQueue;
@property(readonly, nonatomic) id <HMEAvailableDeviceActionsProvider> deviceActionsProvider; // @synthesize deviceActionsProvider=_deviceActionsProvider;
@property(readonly, nonatomic) HMEDeviceEligibilityChecker *deviceEligibilityChecker; // @synthesize deviceEligibilityChecker=_deviceEligibilityChecker;
@property(readonly, nonatomic) HMENetworkModel *unifiedMultizoneGroupsModel; // @synthesize unifiedMultizoneGroupsModel=_unifiedMultizoneGroupsModel;
@property(readonly, nonatomic) HMENetworkModel *unifiedDevicesModel; // @synthesize unifiedDevicesModel=_unifiedDevicesModel;
@property(readonly, nonatomic) HMEModel *mediaSessionsModel; // @synthesize mediaSessionsModel=_mediaSessionsModel;
@property(readonly, nonatomic) HMEModel *localDeviceAssociationsModel; // @synthesize localDeviceAssociationsModel=_localDeviceAssociationsModel;
@property(readonly, nonatomic) HMEModel *multizoneGroupsModel; // @synthesize multizoneGroupsModel=_multizoneGroupsModel;
@property(readonly, nonatomic) HMEModel *graphDevicesModel; // @synthesize graphDevicesModel=_graphDevicesModel;
@property(readonly, nonatomic) HMEModel *localDevicesModel; // @synthesize localDevicesModel=_localDevicesModel;
@property(readonly, nonatomic) id <HMEAssistantSettingsMultiUserInfo> assistantSettingsMultiUserInfo; // @synthesize assistantSettingsMultiUserInfo=_assistantSettingsMultiUserInfo;
@property(readonly, nonatomic) id <HMEHomeAutomationDeviceStateCache> deviceStateCache; // @synthesize deviceStateCache=_deviceStateCache;
@property(readonly, nonatomic) id <HMECastChannelData> castChannelData; // @synthesize castChannelData=_castChannelData;
@property(readonly, nonatomic) id <HMELocalDeviceAssociationsData> localDeviceAssociationsData; // @synthesize localDeviceAssociationsData=_localDeviceAssociationsData;
@property(readonly, nonatomic) id <HMELocalDeviceData> localDeviceData; // @synthesize localDeviceData=_localDeviceData;
@property(readonly, nonatomic) id <HMEDeviceData> deviceData; // @synthesize deviceData=_deviceData;
- (void).cxx_destruct;
- (id)homeAutomationDeviceFromGraphDevice:(id)arg1;
- (id)stereoPairMultizoneGroupForSetupCastDevice:(id)arg1;
- (_Bool)isDeviceControllable:(id)arg1;
- (id)localizedDeviceTypeForCastDevice:(id)arg1;
- (id)localizedDeviceTypeForGraphDevice:(id)arg1;
- (id)localDeviceCloudDeviceIDs;
- (id)localSetupCastDevices;
- (id)graphDeviceForDeviceID:(id)arg1;
- (id)deviceAssociationsForAgentDeviceID:(id)arg1;
- (void)traitDidChange:(id)arg1 forDeviceWithHGSID:(id)arg2;
- (id)buildUnifiedMultizoneGroups;
- (void)updateUnifiedMultizoneGroupsModel;
- (id)unifiedSpacelessDevicesWithAgentID:(id)arg1;
- (id)offlineGraphUnifiedDevices;
- (id)localUnifiedDevices;
- (id)buildUnifiedDevices;
- (void)updateUnifiedDevicesModel;
- (void)availableDeviceActionsDidChange:(id)arg1;
- (void)modelDidChange:(id)arg1;
- (void)forceRefreshModels;
- (void)forceRefreshLocalDeviceAssociations;
- (id)unifiedOfflineUnassignedDevices;
- (id)multizoneDevicesNotInGroup:(id)arg1;
- (id)unifiedThirdPartyDevicesNotInAnyStructureOfCurrentUser;
- (id)unifiedDeviceForDeviceID:(id)arg1;
- (id)unifiedDeviceForCloudDeviceID:(id)arg1;
- (id)unifiedCloudcastDevicesForImport;
- (id)unifiedLocalStereoPairLeaderDeviceForGroupWithUUID:(id)arg1;
- (id)unifiedMultizoneGroupMembersForGroupWithUUID:(id)arg1;
- (id)unifiedMultizoneGroupForUUID:(id)arg1;
- (id)unifiedNonStereoPairMultizoneGroups;
- (id)unifiedMultizoneGroups;
- (id)unifiedLocalDeviceOrMultizoneGroupForDeviceID:(id)arg1;
- (id)unifiedLocalDeviceForDeviceID:(id)arg1;
- (void)unifiedDeviceForHGSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)unifiedDeviceForHGSID:(id)arg1;
- (id)unifiedLocalDeviceForCloudDeviceID:(id)arg1;
- (id)stereoPairAndConnectedToNetworkFilteredLocalDevices;
- (id)stereoPairAndSetupFilteredLocalDevicesWithMultizoneSupport;
- (id)unifiedLocalDevices:(_Bool)arg1 filterUsingStereoPair:(_Bool)arg2;
- (id)unifiedGraphDevices;
- (void)deviceLinkingStatusDidChange:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (id)initWithDeviceData:(id)arg1 localDeviceData:(id)arg2 castChannelData:(id)arg3 localDeviceAssociationsData:(id)arg4 deviceActionsProvider:(id)arg5 deviceEligibilityChecker:(id)arg6 deviceStateCache:(id)arg7 assistantSettingsMultiUserInfo:(id)arg8 experimentFlags:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

