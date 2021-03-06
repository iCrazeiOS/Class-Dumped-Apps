//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEDeviceHomeGraphService-Protocol.h"
#import "HMERealtimeMessagingListener-Protocol.h"
#import "HMEStructureData-Protocol.h"

@class HMECoreDataStack, HMEDismissedPendingStructuresManager, NSDate, NSMutableArray, NSString;
@protocol GCAConfigurationFlags, HMEFetchHomeGraphFoyerTraitDelegate, HMEQuickActionsWidgetDevicesModelController, HMEStructureNetworkService;

@interface HMEStructureModelController : NSObject <HMEStructureData, HMEDeviceHomeGraphService, HMERealtimeMessagingListener>
{
    _Bool _isPollingInProgress;
    id <HMEFetchHomeGraphFoyerTraitDelegate> _foyerTraitDelegate;
    long long _homeGraphState;
    id <HMEStructureNetworkService> _networkService;
    HMECoreDataStack *_coreDataStack;
    NSMutableArray *_handlers;
    id <GCAConfigurationFlags> _flags;
    HMEDismissedPendingStructuresManager *_dismissedPendingStructuresManager;
    id <HMEQuickActionsWidgetDevicesModelController> _homeControlWidgetDevicesModelController;
    CDUnknownBlockType _isDataAvailableBlock;
    CDUnknownBlockType _pollingCompletionHandler;
    NSDate *_pollingStartTime;
}

+ (id)pollingCurve;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPollingInProgress; // @synthesize isPollingInProgress=_isPollingInProgress;
@property(retain, nonatomic) NSDate *pollingStartTime; // @synthesize pollingStartTime=_pollingStartTime;
@property(copy, nonatomic) CDUnknownBlockType pollingCompletionHandler; // @synthesize pollingCompletionHandler=_pollingCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType isDataAvailableBlock; // @synthesize isDataAvailableBlock=_isDataAvailableBlock;
@property(readonly, nonatomic) id <HMEQuickActionsWidgetDevicesModelController> homeControlWidgetDevicesModelController; // @synthesize homeControlWidgetDevicesModelController=_homeControlWidgetDevicesModelController;
@property(readonly, nonatomic) HMEDismissedPendingStructuresManager *dismissedPendingStructuresManager; // @synthesize dismissedPendingStructuresManager=_dismissedPendingStructuresManager;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property(readonly, nonatomic) HMECoreDataStack *coreDataStack; // @synthesize coreDataStack=_coreDataStack;
@property(readonly, nonatomic) id <HMEStructureNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) long long homeGraphState; // @synthesize homeGraphState=_homeGraphState;
@property(nonatomic) __weak id <HMEFetchHomeGraphFoyerTraitDelegate> foyerTraitDelegate; // @synthesize foyerTraitDelegate=_foyerTraitDelegate;
- (void)didUpdateDataModel:(id)arg1;
- (_Bool)shouldSkipDevice:(id)arg1;
- (double)pollIntervalForAttempt:(unsigned long long)arg1;
- (void)realtimeMessagingData:(id)arg1 didReceiveRefreshHomeGraphMessage:(id)arg2;
- (void)pollHomeGraphForChangeWithRetryAttempts:(unsigned long long)arg1;
- (double)initialBackoffDelay;
- (void)structureInvitationDidCompleteWithStructure:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)persistStructureProtos:(id)arg1 deletedPendingStructure:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)persistStructureProto:(id)arg1 structureID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateHomeGraphResponse:(id)arg1 withAgentInfoDict:(id)arg2 inManagedObjectContext:(id)arg3;
- (id)getAllUserDevices:(id)arg1;
- (void)updateFirebaseAnalytics:(id)arg1;
- (void)persistHomeGraphResponse:(id)arg1;
- (void)fetchStructureIDsAndComplete;
- (id)fetchStableHash:(id *)arg1;
- (_Bool)newAccountRequiredForWifiMigration;
- (id)migratableNetworks;
- (id)listUnassignedWifiNetworks;
- (id)wifiNetworkForStructure:(id)arg1;
- (id)listApplicantEmailsInStructure:(id)arg1;
- (id)listInviteeEmailsInStructure:(id)arg1;
- (id)listManagerEmailsInStructure:(id)arg1;
- (id)listFieldsInStructure:(id)arg1 structureToFieldListBlock:(CDUnknownBlockType)arg2;
- (id)structureForID:(id)arg1;
- (id)listPendingStructures;
- (id)listStructures;
- (void)fetchWorksWithNestStateForStructure:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createNestStructureForStructure:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPhoenixIDMappingForLegacyIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePairingConfigurationDoneAndAssignSpaceForDevice:(id)arg1 structureID:(id)arg2 spaceID:(id)arg3 orSpaceWithType:(id)arg4 spaceName:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)updatePairingConfigurationDoneForDevice:(id)arg1 hgsDeviceID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchWeavePairingInfoForStructure:(id)arg1 weaveVendorID:(int)arg2 weaveProductID:(int)arg3 weaveDeviceID:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchUserRolesForStructureID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)canAddManagerToStructure:(id)arg1;
- (void)requestInvitationToJoinStructure:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rejectInviteToShareStructure:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acceptInviteToShareStructure:(id)arg1 existingPendingStructureDisplayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)denyInviteToJoinStructure:(id)arg1 applicant:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)grantInviteToJoinStructure:(id)arg1 applicant:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeMember:(id)arg1 fromStructure:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resendInviteToJoinStructure:(id)arg1 invitee:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelInviteToJoinStructure:(id)arg1 invitee:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)inviteToJoinStructure:(id)arg1 invitee:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)inviteToJoinStructureWithInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchDetailsOfInvitedStructureWithID:(id)arg1;
- (id)structureObjectForID:(id)arg1;
- (id)structureObjectsWithError:(id *)arg1;
- (unsigned long long)totalStructureCountWithError:(id *)arg1;
- (unsigned long long)countOfStructuresMatchingDisplayName:(id)arg1 excludingStructureWithID:(id)arg2 error:(id *)arg3;
- (id)fetchUserAddresses;
- (void)persistDeletedWifiNetwork:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)moveDevice:(id)arg1 toStructure:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteStructure:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveStructureToCoreData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifyAddressForStructureID:(id)arg1 location:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAddress:(id)arg1 forStructureID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDisplayName:(id)arg1 forStructure:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createStructureWithDisplayName:(id)arg1 address:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)finishPollingWithResult:(_Bool)arg1;
- (void)pollHomeGraph;
- (void)pollHomeGraphWithIsDataAvailable:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pollHomeGraphForChange;
- (void)fetchHomeGraphUsingHash:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refetchHomeGraphWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchHomeGraphWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long structureLimit;
- (void)didCompleteFetchWithStructureIDs:(id)arg1 foyerTraits:(id)arg2 error:(id)arg3;
- (id)initWithCoreDataStack:(id)arg1 flags:(id)arg2 homeControlWidgetDevicesModelController:(id)arg3 service:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

