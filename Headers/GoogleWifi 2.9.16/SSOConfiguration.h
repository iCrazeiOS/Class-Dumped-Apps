//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol GTMSessionFetcherServiceProtocol, SSOCookieManager, SSOWebViewProvider;

@interface SSOConfiguration : NSObject
{
    _Bool _requiresSignIn;
    _Bool _appExtension;
    _Bool _disableProfileSource;
    _Bool _omitAppNameSingleAppSignOut;
    _Bool _disableUnfilteredIdentities;
    _Bool _enableSafariVC;
    _Bool _disableSafariAuthenticationSession;
    _Bool _enableWebKit;
    _Bool _enableMDM;
    _Bool _enableManageOptionInAccountSelector;
    _Bool _showDefaultAccountSelector;
    _Bool _usesShortAppNameForIncognitoModeButton;
    _Bool _enableIdentitiesRequiringReauth;
    _Bool _temporarilyDisableSafariSignIn;
    NSString *_applicationIdentifier;
    NSString *_clientID;
    NSString *_shortAppName;
    NSString *_applicationScheme;
    NSString *_languageCode;
    id <GTMSessionFetcherServiceProtocol> _fetcherService;
    id <SSOWebViewProvider> _webViewProvider;
    id <SSOCookieManager> _cookieManager;
    NSString *_testDeviceName;
    NSArray *_supportedAccountServices;
}

+ (_Bool)isAuthenticationSessionAvailable;
+ (_Bool)isSafariViewControllerAvailable;
+ (id)libraryUserAgentForRequest:(id)arg1;
+ (_Bool)isLibraryClientID:(id)arg1;
+ (id)libraryClientID;
+ (id)authorizationHost;
+ (id)accountsHost;
+ (id)OAuthAccountManagerHost;
+ (id)APIHost;
+ (void)setAccountNamespace:(long long)arg1;
+ (long long)accountNamespace;
+ (void)setServerEnvironment:(long long)arg1;
@property(nonatomic) _Bool temporarilyDisableSafariSignIn; // @synthesize temporarilyDisableSafariSignIn=_temporarilyDisableSafariSignIn;
@property(nonatomic) _Bool enableIdentitiesRequiringReauth; // @synthesize enableIdentitiesRequiringReauth=_enableIdentitiesRequiringReauth;
@property(nonatomic) _Bool usesShortAppNameForIncognitoModeButton; // @synthesize usesShortAppNameForIncognitoModeButton=_usesShortAppNameForIncognitoModeButton;
@property(readonly, copy, nonatomic) NSArray *supportedAccountServices; // @synthesize supportedAccountServices=_supportedAccountServices;
@property(copy, nonatomic) NSString *testDeviceName; // @synthesize testDeviceName=_testDeviceName;
@property(nonatomic) _Bool showDefaultAccountSelector; // @synthesize showDefaultAccountSelector=_showDefaultAccountSelector;
@property(nonatomic) _Bool enableManageOptionInAccountSelector; // @synthesize enableManageOptionInAccountSelector=_enableManageOptionInAccountSelector;
@property(nonatomic) _Bool enableMDM; // @synthesize enableMDM=_enableMDM;
@property(nonatomic) _Bool enableWebKit; // @synthesize enableWebKit=_enableWebKit;
@property(nonatomic) _Bool disableSafariAuthenticationSession; // @synthesize disableSafariAuthenticationSession=_disableSafariAuthenticationSession;
@property(nonatomic) _Bool enableSafariVC; // @synthesize enableSafariVC=_enableSafariVC;
@property(retain, nonatomic) id <SSOCookieManager> cookieManager; // @synthesize cookieManager=_cookieManager;
@property(retain, nonatomic) id <SSOWebViewProvider> webViewProvider; // @synthesize webViewProvider=_webViewProvider;
@property(retain, nonatomic) id <GTMSessionFetcherServiceProtocol> fetcherService; // @synthesize fetcherService=_fetcherService;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *applicationScheme; // @synthesize applicationScheme=_applicationScheme;
@property(nonatomic) _Bool disableUnfilteredIdentities; // @synthesize disableUnfilteredIdentities=_disableUnfilteredIdentities;
@property(nonatomic) _Bool omitAppNameSingleAppSignOut; // @synthesize omitAppNameSingleAppSignOut=_omitAppNameSingleAppSignOut;
@property(nonatomic) _Bool disableProfileSource; // @synthesize disableProfileSource=_disableProfileSource;
@property(nonatomic, getter=isAppExtension) _Bool appExtension; // @synthesize appExtension=_appExtension;
@property(nonatomic) _Bool requiresSignIn; // @synthesize requiresSignIn=_requiresSignIn;
@property(copy, nonatomic) NSString *shortAppName; // @synthesize shortAppName=_shortAppName;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
- (_Bool)shouldEnableSafariSignIn;
- (id)bootstrapCallbackURLString;
- (id)authCallbackURLString;
- (id)initWithClientID:(id)arg1 supportedAccountServices:(id)arg2;
- (id)initWithClientID:(id)arg1;

@end

