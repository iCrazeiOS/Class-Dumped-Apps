//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FCDRPCService.h"

#import "GWCNetworkSettingsService-Protocol.h"

@class FCDRPC, NSArray, NSString;
@protocol FCDRPCAuthorizer, FCDRPCManager, FCDTransport;

@interface GWCNetworkSettingsServiceImpl : FCDRPCService <GWCNetworkSettingsService>
{
    FCDRPC *_rpcs[25];
}

+ (id)oauthScopesForRPCID:(id)arg1;
+ (id)serviceHostNames;
+ (id)servicePackage;
+ (id)serviceName;
- (void).cxx_destruct;
@property(readonly, nonatomic) FCDRPC *updateGuestNetworkPskVisibilityRPC;
@property(readonly, nonatomic) FCDRPC *updateWpa3RPC;
@property(readonly, nonatomic) FCDRPC *updateStadiaPrioritizationRPC;
@property(readonly, nonatomic) FCDRPC *updateApplicationPrioritizationRPC;
@property(readonly, nonatomic) FCDRPC *updateLanAddressesRPC;
@property(readonly, nonatomic) FCDRPC *updateUpnpConfigRPC;
@property(readonly, nonatomic) FCDRPC *updatePrioritizedStationRPC;
@property(readonly, nonatomic) FCDRPC *updatePrimaryWirelessConfigRPC;
@property(readonly, nonatomic) FCDRPC *updateMeshNetworkRPC;
@property(readonly, nonatomic) FCDRPC *updateIpv6ConfigRPC;
@property(readonly, nonatomic) FCDRPC *updateGuestWirelessConfigRPC;
@property(readonly, nonatomic) FCDRPC *updateDnsRPC;
@property(readonly, nonatomic) FCDRPC *updateDefaultPrioritizedStationRPC;
@property(readonly, nonatomic) FCDRPC *updateBridgeModeRPC;
@property(readonly, nonatomic) FCDRPC *startWifiblasterSpeedTestRPC;
@property(readonly, nonatomic) FCDRPC *startWanSpeedTestRPC;
@property(readonly, nonatomic) FCDRPC *startMeshSpeedTestRPC;
@property(readonly, nonatomic) FCDRPC *getPsksRPC;
@property(readonly, nonatomic) FCDRPC *enableLocalSpeedTestRPC;
@property(readonly, nonatomic) FCDRPC *deletePrioritizedStationRPC;
@property(readonly, nonatomic) FCDRPC *deletePortForwardingRPC;
@property(readonly, nonatomic) FCDRPC *createPortForwardingRPC;
@property(readonly, nonatomic) FCDRPC *deleteExposedPortRPC;
@property(readonly, nonatomic) FCDRPC *createExposedPortRPC;
@property(readonly, nonatomic) FCDRPC *createOperationForGetPsksRPC;
- (id)initWithAuthorizer:(id)arg1 RPCManager:(id)arg2 transport:(id)arg3 globalInterceptorsProvider:(id)arg4 serviceInterceptorsProvider:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) id <FCDRPCAuthorizer> authorizer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *interceptors;
@property(readonly, nonatomic) id <FCDRPCManager> rpcManager;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <FCDTransport> transport;

@end

