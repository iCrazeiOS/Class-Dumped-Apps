//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WJ2AesGCMSecureMessageSerializer, WJ2AuthenticatedECDHEKeyExchangeRequestSerializer, WJ2AuthenticatedECDHEKeyExchangeResponseSerializer, WJ2BooleanSerializer, WJ2CBLRegistrationDetailsSerializer, WJ2CBLRegistrationRequestSerializer, WJ2CBLRegistrationUpdatedEventSerializer, WJ2ConfigurationKeySetSerializer, WJ2DataMapSerializer, WJ2DeviceDetailsSerializer, WJ2IntegerSerializer, WJ2JPAKERoundOnePayloadSerializer, WJ2JPAKERoundThreePayloadSerializer, WJ2JPAKERoundTwoPayloadSerializer, WJ2KeyExchangeErrorSerializer, WJ2ProvisionableCommandInterfaceUpdatedEventSerializer, WJ2ProvisionableDeviceAuthenticationDataSerializer, WJ2ProvisionableEventInterfaceUpdatedEventSerializer, WJ2ProvisionableEventNotificationSerializer, WJ2ProvisionableEventTypeCollectionSerializer, WJ2ProvisionableEventTypeSerializer, WJ2ProvisioningCommandResponseSerializer, WJ2ProvisioningCommandSerializer, WJ2ProvisioningStatusSerializer, WJ2StartProvisioningRequestSerializer, WJ2StartProvisioningResponseSerializer, WJ2StringSerializer, WJ2UnauthenticatedECDHEKeyExchangeRequestSerializer, WJ2UnauthenticatedECDHEKeyExchangeResponseSerializer, WJ2UuidCollectionSerializer, WJ2UuidSerializer, WJ2VisibleNetworksUpdatedEventSerializer, WJ2WhisperJoinBlePacketSerializer, WJ2WifiBaseConfigurationCollectionSerializer, WJ2WifiBaseConfigurationSerializer, WJ2WifiConfigurationSerializer, WJ2WifiConnectionDetailsSerializer, WJ2WifiConnectionUpdatedEventSerializer, WJ2WifiNetworkSerializer, WJ2WifiScanResultCollectionSerializer, WJ2WifiScanResultSerializer;

@interface WJ2Serializer : NSObject
{
    NSMutableDictionary *_serializerMap;
    WJ2ProvisioningStatusSerializer *_provisioningStatusSerializer;
    WJ2StringSerializer *_stringSerializer;
    WJ2BooleanSerializer *_booleanSerializer;
    WJ2IntegerSerializer *_integerSerializer;
    WJ2UuidSerializer *_uuidSerializer;
    WJ2UuidCollectionSerializer *_uuidCollectionSerializer;
    WJ2ConfigurationKeySetSerializer *_configurationKeySetSerializer;
    WJ2DataMapSerializer *_dataMapSerializer;
    WJ2DeviceDetailsSerializer *_detailsSerializer;
    WJ2CBLRegistrationDetailsSerializer *_registrationDetailsSerializer;
    WJ2CBLRegistrationRequestSerializer *_registrationRequestSerializer;
    WJ2WifiBaseConfigurationSerializer *_wifiBaseConfigurationSerializer;
    WJ2WifiBaseConfigurationCollectionSerializer *_wifiBaseConfigurationCollectionSerializer;
    WJ2WifiConfigurationSerializer *_wifiConfigurationSerializer;
    WJ2WifiConnectionDetailsSerializer *_wifiConnectionDetailsSerializer;
    WJ2WifiNetworkSerializer *_wifiNetworkSerializer;
    WJ2WifiScanResultSerializer *_wifiScanResultSerializer;
    WJ2WifiScanResultCollectionSerializer *_wifiScanResultCollectionSerializer;
    WJ2WhisperJoinBlePacketSerializer *_whisperJoinBlePacketSerializer;
    WJ2StartProvisioningRequestSerializer *_startProvisioningRequestSerializer;
    WJ2StartProvisioningResponseSerializer *_startProvisioningResponseSerializer;
    WJ2ProvisioningCommandSerializer *_provisioningCommandSerializer;
    WJ2ProvisioningCommandResponseSerializer *_provisioningCommandResponseSerializer;
    WJ2CBLRegistrationUpdatedEventSerializer *_cblRegistrationUpdatedEventSerializer;
    WJ2ProvisionableEventNotificationSerializer *_provisionableEventNotificationSerializer;
    WJ2ProvisionableCommandInterfaceUpdatedEventSerializer *_provisionableCommandInterfaceUpdatedEventSerializer;
    WJ2ProvisionableEventTypeSerializer *_provisionableEventTypeSerializer;
    WJ2ProvisionableEventTypeCollectionSerializer *_provisionableEventTypeCollectionSerializer;
    WJ2ProvisionableEventInterfaceUpdatedEventSerializer *_provisionableEventInterfaceUpdatedEventSerializer;
    WJ2VisibleNetworksUpdatedEventSerializer *_visibleNetworksUpdatedEventSerializer;
    WJ2WifiConnectionUpdatedEventSerializer *_connectionUpdatedEventSerializer;
    WJ2AesGCMSecureMessageSerializer *_aesGCMSecureMessageSerializer;
    WJ2AuthenticatedECDHEKeyExchangeRequestSerializer *_authenticatedECDHEKeyExchangeRequestSerializer;
    WJ2AuthenticatedECDHEKeyExchangeResponseSerializer *_authenticatedECDHEKeyExchangeResponseSerializer;
    WJ2ProvisionableDeviceAuthenticationDataSerializer *_provisionableDeviceAuthenticationDataSerializer;
    WJ2UnauthenticatedECDHEKeyExchangeRequestSerializer *_unauthenticatedECDHEKeyExchangeRequestSerializer;
    WJ2UnauthenticatedECDHEKeyExchangeResponseSerializer *_unauthenticatedECDHEKeyExchangeResponseSerializer;
    WJ2KeyExchangeErrorSerializer *_keyExchangeErrorSerializer;
    WJ2JPAKERoundOnePayloadSerializer *_jpakeRoundOnePayloadSerializer;
    WJ2JPAKERoundTwoPayloadSerializer *_jpakeRoundTwoPayloadSerializer;
    WJ2JPAKERoundThreePayloadSerializer *_jpakeRoundThreePayloadSerializer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) WJ2JPAKERoundThreePayloadSerializer *jpakeRoundThreePayloadSerializer; // @synthesize jpakeRoundThreePayloadSerializer=_jpakeRoundThreePayloadSerializer;
@property(retain, nonatomic) WJ2JPAKERoundTwoPayloadSerializer *jpakeRoundTwoPayloadSerializer; // @synthesize jpakeRoundTwoPayloadSerializer=_jpakeRoundTwoPayloadSerializer;
@property(retain, nonatomic) WJ2JPAKERoundOnePayloadSerializer *jpakeRoundOnePayloadSerializer; // @synthesize jpakeRoundOnePayloadSerializer=_jpakeRoundOnePayloadSerializer;
@property(retain, nonatomic) WJ2KeyExchangeErrorSerializer *keyExchangeErrorSerializer; // @synthesize keyExchangeErrorSerializer=_keyExchangeErrorSerializer;
@property(retain, nonatomic) WJ2UnauthenticatedECDHEKeyExchangeResponseSerializer *unauthenticatedECDHEKeyExchangeResponseSerializer; // @synthesize unauthenticatedECDHEKeyExchangeResponseSerializer=_unauthenticatedECDHEKeyExchangeResponseSerializer;
@property(retain, nonatomic) WJ2UnauthenticatedECDHEKeyExchangeRequestSerializer *unauthenticatedECDHEKeyExchangeRequestSerializer; // @synthesize unauthenticatedECDHEKeyExchangeRequestSerializer=_unauthenticatedECDHEKeyExchangeRequestSerializer;
@property(retain, nonatomic) WJ2ProvisionableDeviceAuthenticationDataSerializer *provisionableDeviceAuthenticationDataSerializer; // @synthesize provisionableDeviceAuthenticationDataSerializer=_provisionableDeviceAuthenticationDataSerializer;
@property(retain, nonatomic) WJ2AuthenticatedECDHEKeyExchangeResponseSerializer *authenticatedECDHEKeyExchangeResponseSerializer; // @synthesize authenticatedECDHEKeyExchangeResponseSerializer=_authenticatedECDHEKeyExchangeResponseSerializer;
@property(retain, nonatomic) WJ2AuthenticatedECDHEKeyExchangeRequestSerializer *authenticatedECDHEKeyExchangeRequestSerializer; // @synthesize authenticatedECDHEKeyExchangeRequestSerializer=_authenticatedECDHEKeyExchangeRequestSerializer;
@property(retain, nonatomic) WJ2AesGCMSecureMessageSerializer *aesGCMSecureMessageSerializer; // @synthesize aesGCMSecureMessageSerializer=_aesGCMSecureMessageSerializer;
@property(retain, nonatomic) WJ2WifiConnectionUpdatedEventSerializer *connectionUpdatedEventSerializer; // @synthesize connectionUpdatedEventSerializer=_connectionUpdatedEventSerializer;
@property(retain, nonatomic) WJ2VisibleNetworksUpdatedEventSerializer *visibleNetworksUpdatedEventSerializer; // @synthesize visibleNetworksUpdatedEventSerializer=_visibleNetworksUpdatedEventSerializer;
@property(retain, nonatomic) WJ2ProvisionableEventInterfaceUpdatedEventSerializer *provisionableEventInterfaceUpdatedEventSerializer; // @synthesize provisionableEventInterfaceUpdatedEventSerializer=_provisionableEventInterfaceUpdatedEventSerializer;
@property(retain, nonatomic) WJ2ProvisionableEventTypeCollectionSerializer *provisionableEventTypeCollectionSerializer; // @synthesize provisionableEventTypeCollectionSerializer=_provisionableEventTypeCollectionSerializer;
@property(retain, nonatomic) WJ2ProvisionableEventTypeSerializer *provisionableEventTypeSerializer; // @synthesize provisionableEventTypeSerializer=_provisionableEventTypeSerializer;
@property(retain, nonatomic) WJ2ProvisionableCommandInterfaceUpdatedEventSerializer *provisionableCommandInterfaceUpdatedEventSerializer; // @synthesize provisionableCommandInterfaceUpdatedEventSerializer=_provisionableCommandInterfaceUpdatedEventSerializer;
@property(retain, nonatomic) WJ2ProvisionableEventNotificationSerializer *provisionableEventNotificationSerializer; // @synthesize provisionableEventNotificationSerializer=_provisionableEventNotificationSerializer;
@property(retain, nonatomic) WJ2CBLRegistrationUpdatedEventSerializer *cblRegistrationUpdatedEventSerializer; // @synthesize cblRegistrationUpdatedEventSerializer=_cblRegistrationUpdatedEventSerializer;
@property(retain, nonatomic) WJ2ProvisioningCommandResponseSerializer *provisioningCommandResponseSerializer; // @synthesize provisioningCommandResponseSerializer=_provisioningCommandResponseSerializer;
@property(retain, nonatomic) WJ2ProvisioningCommandSerializer *provisioningCommandSerializer; // @synthesize provisioningCommandSerializer=_provisioningCommandSerializer;
@property(retain, nonatomic) WJ2StartProvisioningResponseSerializer *startProvisioningResponseSerializer; // @synthesize startProvisioningResponseSerializer=_startProvisioningResponseSerializer;
@property(retain, nonatomic) WJ2StartProvisioningRequestSerializer *startProvisioningRequestSerializer; // @synthesize startProvisioningRequestSerializer=_startProvisioningRequestSerializer;
@property(retain, nonatomic) WJ2WhisperJoinBlePacketSerializer *whisperJoinBlePacketSerializer; // @synthesize whisperJoinBlePacketSerializer=_whisperJoinBlePacketSerializer;
@property(retain, nonatomic) WJ2WifiScanResultCollectionSerializer *wifiScanResultCollectionSerializer; // @synthesize wifiScanResultCollectionSerializer=_wifiScanResultCollectionSerializer;
@property(retain, nonatomic) WJ2WifiScanResultSerializer *wifiScanResultSerializer; // @synthesize wifiScanResultSerializer=_wifiScanResultSerializer;
@property(retain, nonatomic) WJ2WifiNetworkSerializer *wifiNetworkSerializer; // @synthesize wifiNetworkSerializer=_wifiNetworkSerializer;
@property(retain, nonatomic) WJ2WifiConnectionDetailsSerializer *wifiConnectionDetailsSerializer; // @synthesize wifiConnectionDetailsSerializer=_wifiConnectionDetailsSerializer;
@property(retain, nonatomic) WJ2WifiConfigurationSerializer *wifiConfigurationSerializer; // @synthesize wifiConfigurationSerializer=_wifiConfigurationSerializer;
@property(retain, nonatomic) WJ2WifiBaseConfigurationCollectionSerializer *wifiBaseConfigurationCollectionSerializer; // @synthesize wifiBaseConfigurationCollectionSerializer=_wifiBaseConfigurationCollectionSerializer;
@property(retain, nonatomic) WJ2WifiBaseConfigurationSerializer *wifiBaseConfigurationSerializer; // @synthesize wifiBaseConfigurationSerializer=_wifiBaseConfigurationSerializer;
@property(retain, nonatomic) WJ2CBLRegistrationRequestSerializer *registrationRequestSerializer; // @synthesize registrationRequestSerializer=_registrationRequestSerializer;
@property(retain, nonatomic) WJ2CBLRegistrationDetailsSerializer *registrationDetailsSerializer; // @synthesize registrationDetailsSerializer=_registrationDetailsSerializer;
@property(retain, nonatomic) WJ2DeviceDetailsSerializer *detailsSerializer; // @synthesize detailsSerializer=_detailsSerializer;
@property(retain, nonatomic) WJ2DataMapSerializer *dataMapSerializer; // @synthesize dataMapSerializer=_dataMapSerializer;
@property(retain, nonatomic) WJ2ConfigurationKeySetSerializer *configurationKeySetSerializer; // @synthesize configurationKeySetSerializer=_configurationKeySetSerializer;
@property(retain, nonatomic) WJ2UuidCollectionSerializer *uuidCollectionSerializer; // @synthesize uuidCollectionSerializer=_uuidCollectionSerializer;
@property(retain, nonatomic) WJ2UuidSerializer *uuidSerializer; // @synthesize uuidSerializer=_uuidSerializer;
@property(retain, nonatomic) WJ2IntegerSerializer *integerSerializer; // @synthesize integerSerializer=_integerSerializer;
@property(retain, nonatomic) WJ2BooleanSerializer *booleanSerializer; // @synthesize booleanSerializer=_booleanSerializer;
@property(retain, nonatomic) WJ2StringSerializer *stringSerializer; // @synthesize stringSerializer=_stringSerializer;
@property(retain, nonatomic) WJ2ProvisioningStatusSerializer *provisioningStatusSerializer; // @synthesize provisioningStatusSerializer=_provisioningStatusSerializer;
@property(retain, nonatomic) NSMutableDictionary *serializerMap; // @synthesize serializerMap=_serializerMap;
- (void).cxx_destruct;
- (id)deserialize:(id)arg1 intoType:(Class)arg2;
- (id)serialize:(id)arg1;
- (void)addSerializer:(id)arg1 forClass:(Class)arg2;
- (void)initSerializers;
- (id)init;

@end

