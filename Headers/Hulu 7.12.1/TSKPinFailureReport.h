//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface TSKPinFailureReport : NSObject
{
    _Bool _includeSubdomains;
    _Bool _enforcePinning;
    NSString *_appBundleId;
    NSString *_appVersion;
    NSString *_appPlatform;
    NSString *_appPlatformVersion;
    NSString *_appVendorId;
    NSString *_trustkitVersion;
    NSString *_notedHostname;
    NSString *_hostname;
    NSNumber *_port;
    NSDate *_dateTime;
    NSArray *_validatedCertificateChain;
    NSArray *_knownPins;
    long long _validationResult;
    NSDate *_knownPinsExpirationDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *knownPinsExpirationDate; // @synthesize knownPinsExpirationDate=_knownPinsExpirationDate;
@property(readonly, nonatomic) _Bool enforcePinning; // @synthesize enforcePinning=_enforcePinning;
@property(readonly, nonatomic) long long validationResult; // @synthesize validationResult=_validationResult;
@property(readonly, nonatomic) NSArray *knownPins; // @synthesize knownPins=_knownPins;
@property(readonly, nonatomic) NSArray *validatedCertificateChain; // @synthesize validatedCertificateChain=_validatedCertificateChain;
@property(readonly, nonatomic) _Bool includeSubdomains; // @synthesize includeSubdomains=_includeSubdomains;
@property(readonly, nonatomic) NSDate *dateTime; // @synthesize dateTime=_dateTime;
@property(readonly, nonatomic) NSNumber *port; // @synthesize port=_port;
@property(readonly, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, nonatomic) NSString *notedHostname; // @synthesize notedHostname=_notedHostname;
@property(readonly, nonatomic) NSString *trustkitVersion; // @synthesize trustkitVersion=_trustkitVersion;
@property(readonly, nonatomic) NSString *appVendorId; // @synthesize appVendorId=_appVendorId;
@property(readonly, nonatomic) NSString *appPlatformVersion; // @synthesize appPlatformVersion=_appPlatformVersion;
@property(readonly, nonatomic) NSString *appPlatform; // @synthesize appPlatform=_appPlatform;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
- (id)requestToUri:(id)arg1;
- (id)json;
- (id)initWithAppBundleId:(id)arg1 appVersion:(id)arg2 appPlatform:(id)arg3 appPlatformVersion:(id)arg4 appVendorId:(id)arg5 trustkitVersion:(id)arg6 hostname:(id)arg7 port:(id)arg8 dateTime:(id)arg9 notedHostname:(id)arg10 includeSubdomains:(_Bool)arg11 enforcePinning:(_Bool)arg12 validatedCertificateChain:(id)arg13 knownPins:(id)arg14 validationResult:(long long)arg15 expirationDate:(id)arg16;

@end

