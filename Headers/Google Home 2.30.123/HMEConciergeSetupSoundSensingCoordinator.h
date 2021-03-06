//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEConciergeActionDelegate-Protocol.h"
#import "HMEConciergeModuleCoordinator-Protocol.h"
#import "HMEConciergeSelectionViewControllerDelegate-Protocol.h"

@class GHCGetSoundSensingSetupRenderingDetailsResponse, HMESetupNavigationController, NSString, SetupAnalyticsLogger;
@protocol HMEConciergeModelController, HMEConciergeModuleCoordinatorDelegate, HMEStructureData, HMEUserData;

@interface HMEConciergeSetupSoundSensingCoordinator : NSObject <HMEConciergeSelectionViewControllerDelegate, HMEConciergeActionDelegate, HMEConciergeModuleCoordinator>
{
    int _module;
    id <HMEConciergeModuleCoordinatorDelegate> _delegate;
    id <HMEConciergeModelController> _conciergeData;
    id <HMEUserData> _userData;
    id <HMEStructureData> _structureData;
    NSString *_structureID;
    SetupAnalyticsLogger *_setupAnalyticsLogger;
    HMESetupNavigationController *_navigationController;
    GHCGetSoundSensingSetupRenderingDetailsResponse *_renderingDetails;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GHCGetSoundSensingSetupRenderingDetailsResponse *renderingDetails; // @synthesize renderingDetails=_renderingDetails;
@property(retain, nonatomic) HMESetupNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) SetupAnalyticsLogger *setupAnalyticsLogger; // @synthesize setupAnalyticsLogger=_setupAnalyticsLogger;
@property(readonly, nonatomic) NSString *structureID; // @synthesize structureID=_structureID;
@property(readonly, nonatomic) id <HMEStructureData> structureData; // @synthesize structureData=_structureData;
@property(readonly, nonatomic) id <HMEUserData> userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) id <HMEConciergeModelController> conciergeData; // @synthesize conciergeData=_conciergeData;
@property(readonly, nonatomic) int module; // @synthesize module=_module;
@property(nonatomic) __weak id <HMEConciergeModuleCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)setupNavigationItem;
- (void)finish;
- (void)showErrorScreen:(id)arg1 retryBlock:(CDUnknownBlockType)arg2;
- (void)showError:(id)arg1;
- (void)markSetupAsCompleted;
- (void)updateSettingsFromPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)viewControllerFromProto:(id)arg1;
- (void)requestRenderingDetails;
- (void)didTapBackButton;
- (void)deviceSelectionScreenDidProceed;
- (void)soundTypeScreenDidProceed;
- (void)conciergeSetupSoundSensingScreenDidSkip;
- (void)conciergeSetupSoundSensingScreenDidProceed;
- (void)showDeviceSelectionScreen;
- (void)showSoundTypeScreen;
- (void)viewController:(id)arg1 didPerformAction:(id)arg2;
- (void)showIntroScreen;
- (void)conciergeSelectionViewControllerDidTapSkip:(id)arg1;
- (void)conciergeSelectionViewControllerDidTapAccept:(id)arg1;
- (void)startInNavigationController:(id)arg1;
- (void)preload;
- (id)initWithStructureID:(id)arg1 conciergeData:(id)arg2 setupAnalyticsLogger:(id)arg3 structureData:(id)arg4 userData:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

