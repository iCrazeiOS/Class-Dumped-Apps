//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsGeo : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _country_codeIsSet;
    _Bool _regionIsSet;
    _Bool _cityIsSet;
    _Bool _time_zoneIsSet;
    _Bool _anonymous;
    _Bool _anonymousIsSet;
    _Bool _anonymous_vpn;
    _Bool _anonymous_vpnIsSet;
    _Bool _hosting_provider;
    _Bool _hosting_providerIsSet;
    _Bool _public_proxy;
    _Bool _public_proxyIsSet;
    _Bool _tor_exit_node;
    _Bool _tor_exit_nodeIsSet;
    _Bool _metro_codeIsSet;
    NSString *_country_code;
    NSString *_region;
    NSString *_city;
    NSString *_time_zone;
    long long _metro_code;
}

@property(nonatomic) _Bool metro_codeIsSet; // @synthesize metro_codeIsSet=_metro_codeIsSet;
@property(nonatomic) long long metro_code; // @synthesize metro_code=_metro_code;
@property(nonatomic) _Bool tor_exit_nodeIsSet; // @synthesize tor_exit_nodeIsSet=_tor_exit_nodeIsSet;
@property(nonatomic) _Bool tor_exit_node; // @synthesize tor_exit_node=_tor_exit_node;
@property(nonatomic) _Bool public_proxyIsSet; // @synthesize public_proxyIsSet=_public_proxyIsSet;
@property(nonatomic) _Bool public_proxy; // @synthesize public_proxy=_public_proxy;
@property(nonatomic) _Bool hosting_providerIsSet; // @synthesize hosting_providerIsSet=_hosting_providerIsSet;
@property(nonatomic) _Bool hosting_provider; // @synthesize hosting_provider=_hosting_provider;
@property(nonatomic) _Bool anonymous_vpnIsSet; // @synthesize anonymous_vpnIsSet=_anonymous_vpnIsSet;
@property(nonatomic) _Bool anonymous_vpn; // @synthesize anonymous_vpn=_anonymous_vpn;
@property(nonatomic) _Bool anonymousIsSet; // @synthesize anonymousIsSet=_anonymousIsSet;
@property(nonatomic) _Bool anonymous; // @synthesize anonymous=_anonymous;
@property(nonatomic) _Bool time_zoneIsSet; // @synthesize time_zoneIsSet=_time_zoneIsSet;
@property(copy, nonatomic) NSString *time_zone; // @synthesize time_zone=_time_zone;
@property(nonatomic) _Bool cityIsSet; // @synthesize cityIsSet=_cityIsSet;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(nonatomic) _Bool regionIsSet; // @synthesize regionIsSet=_regionIsSet;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(nonatomic) _Bool country_codeIsSet; // @synthesize country_codeIsSet=_country_codeIsSet;
@property(copy, nonatomic) NSString *country_code; // @synthesize country_code=_country_code;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetMetro_code;
- (void)unsetTor_exit_node;
- (void)unsetPublic_proxy;
- (void)unsetHosting_provider;
- (void)unsetAnonymous_vpn;
- (void)unsetAnonymous;
- (void)unsetTime_zone;
- (void)unsetCity;
- (void)unsetRegion;
- (void)unsetCountry_code;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCountry_code:(id)arg1 region:(id)arg2 city:(id)arg3 time_zone:(id)arg4 anonymous:(_Bool)arg5 anonymous_vpn:(_Bool)arg6 hosting_provider:(_Bool)arg7 public_proxy:(_Bool)arg8 tor_exit_node:(_Bool)arg9 metro_code:(long long)arg10;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

