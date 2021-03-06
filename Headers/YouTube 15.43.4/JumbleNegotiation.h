//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTMSessionFetcherService, JumbleNegotiationState, NSString, SSOIdentity, SSOService;
@protocol SSOAuthorization;

@interface JumbleNegotiation : NSObject
{
    SSOIdentity *_identity;
    SSOService *_ssoService;
    GTMSessionFetcherService *_fetcherService;
    JumbleNegotiationState *_jumbleNegotiationState;
    NSString *_jumbleTemporalCookie;
    id <SSOAuthorization> _auth;
    NSString *_hostAppID;
}

+ (id)mobileSignals;
+ (id)jumbleNegotiationWithClient:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *hostAppID; // @synthesize hostAppID=_hostAppID;
@property(retain, nonatomic) id <SSOAuthorization> auth; // @synthesize auth=_auth;
@property(retain, nonatomic) NSString *jumbleTemporalCookie; // @synthesize jumbleTemporalCookie=_jumbleTemporalCookie;
@property(retain, nonatomic) JumbleNegotiationState *jumbleNegotiationState; // @synthesize jumbleNegotiationState=_jumbleNegotiationState;
@property(retain, nonatomic) GTMSessionFetcherService *fetcherService; // @synthesize fetcherService=_fetcherService;
@property(retain, nonatomic) SSOService *ssoService; // @synthesize ssoService=_ssoService;
@property(retain, nonatomic) SSOIdentity *identity; // @synthesize identity=_identity;
- (void)handleResponseForReceivedData:(id)arg1 fetchError:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)prepareRequest;
- (_Bool)getAuthorization;
- (void)performNegotiationWithCallback:(CDUnknownBlockType)arg1;
- (id)initForIdentity:(id)arg1 SSOService:(id)arg2 fetcherService:(id)arg3 negotiationState:(id)arg4 temporalCookie:(id)arg5 appID:(id)arg6;

@end

