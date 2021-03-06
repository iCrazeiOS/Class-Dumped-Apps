//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleGmailProtocolAdsCapabilities, ComGoogleGmailProtocolAdsClassicGmailInboxSettings, ComGoogleGmailProtocolAdsClientInfo_AdvertisingIdInfo, ComGoogleGmailProtocolAdsClientInfo_AppState, ComGoogleGmailProtocolAdsClientInfo_BuildFlavor, ComGoogleGmailProtocolAdsClientInfo_ClientBrowserInfo, ComGoogleGmailProtocolAdsClientInfo_ConversationListDensity, ComGoogleGmailProtocolAdsClientInfo_NetworkType, JBTCBigTopCommonEnums_Codebase, NSString;
@protocol ComGoogleProtobufProtocolStringList, JavaUtilList;

@protocol ComGoogleGmailProtocolAdsClientInfoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleGmailProtocolAdsClientInfo_AdvertisingIdInfo *)getAdvertisingIdInfo;
- (_Bool)hasAdvertisingIdInfo;
- (int)getViewportHeight;
- (_Bool)hasViewportHeight;
- (int)getViewportWidth;
- (_Bool)hasViewportWidth;
- (ComGoogleGmailProtocolAdsClientInfo_ConversationListDensity *)getConversationListDensity;
- (_Bool)hasConversationListDensity;
- (_Bool)getIsDarkThemeActive;
- (_Bool)hasIsDarkThemeActive;
- (ComGoogleGmailProtocolAdsClientInfo_AppState *)getAppState;
- (_Bool)hasAppState;
- (ComGoogleGmailProtocolAdsClientInfo_ClientBrowserInfo *)getEligibleBrowsersForCustomTabWithInt:(int)arg1;
- (id <JavaUtilList>)getEligibleBrowsersForCustomTabList;
- (int)getEligibleBrowsersForCustomTabCount;
- (ComGoogleGmailProtocolAdsClientInfo_ClientBrowserInfo *)getDefaultBrowserForCustomTab;
- (_Bool)hasDefaultBrowserForCustomTab;
- (ComGoogleGmailProtocolAdsClientInfo_ClientBrowserInfo *)getLatestEligibleBrowserForCustomTab;
- (_Bool)hasLatestEligibleBrowserForCustomTab;
- (ComGoogleGmailProtocolAdsClientInfo_ClientBrowserInfo *)getBrowserForCustomTab;
- (_Bool)hasBrowserForCustomTab;
- (_Bool)getTopPromoDisabledByUser;
- (_Bool)hasTopPromoDisabledByUser;
- (ComGoogleGmailProtocolAdsClassicGmailInboxSettings *)getClassicGmailInboxSettings;
- (_Bool)hasClassicGmailInboxSettings;
- (ComGoogleGmailProtocolAdsClientInfo_BuildFlavor *)getBuildFlavor;
- (_Bool)hasBuildFlavor;
- (NSString *)getLanguageWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getLanguageList;
- (int)getLanguageCount;
- (NSString *)getTimezone;
- (_Bool)hasTimezone;
- (float)getDeviceScreenDensity;
- (_Bool)hasDeviceScreenDensity;
- (int)getDeviceWidthDip;
- (_Bool)hasDeviceWidthDip;
- (int)getDeviceHeightDip;
- (_Bool)hasDeviceHeightDip;
- (JBTCBigTopCommonEnums_Codebase *)getCodebase;
- (_Bool)hasCodebase;
- (int)getClientVersion;
- (_Bool)hasClientVersion;
- (NSString *)getLocale;
- (_Bool)hasLocale;
- (ComGoogleGmailProtocolAdsClientInfo_NetworkType *)getNetworkType;
- (_Bool)hasNetworkType;
- (ComGoogleGmailProtocolAdsCapabilities *)getCapabilities;
- (_Bool)hasCapabilities;
- (NSString *)getDeviceInfo;
- (_Bool)hasDeviceInfo;
- (NSString *)getOsVersion;
- (_Bool)hasOsVersion;
- (NSString *)getUserAgent;
- (_Bool)hasUserAgent;
- (NSString *)getBuildVersion;
- (_Bool)hasBuildVersion;
@end

