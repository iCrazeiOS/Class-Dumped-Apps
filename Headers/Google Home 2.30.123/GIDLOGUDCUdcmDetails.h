//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIDLOGUDCConsentFlowDetails, GIDLOGUDCConsentLoadingErrorViewDetails, GIDLOGUDCConsentPromptDetails, GIDLOGUDCConsentWritingErrorViewDetails, GIDLOGUDCLinkDetails, GIDLOGUDCSettingDetailsViewDetails, GIDLOGUDCSettingsOverviewDetails, NSString;

@interface GIDLOGUDCUdcmDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIDLOGUDCConsentFlowDetails *consentFlowDetails; // @dynamic consentFlowDetails;
@property(retain, nonatomic) GIDLOGUDCConsentLoadingErrorViewDetails *consentLoadingErrorViewDetails; // @dynamic consentLoadingErrorViewDetails;
@property(retain, nonatomic) GIDLOGUDCConsentPromptDetails *consentPromptDetails; // @dynamic consentPromptDetails;
@property(retain, nonatomic) GIDLOGUDCConsentWritingErrorViewDetails *consentWritingErrorViewDetails; // @dynamic consentWritingErrorViewDetails;
@property(nonatomic) _Bool hasConsentFlowDetails; // @dynamic hasConsentFlowDetails;
@property(nonatomic) _Bool hasConsentLoadingErrorViewDetails; // @dynamic hasConsentLoadingErrorViewDetails;
@property(nonatomic) _Bool hasConsentPromptDetails; // @dynamic hasConsentPromptDetails;
@property(nonatomic) _Bool hasConsentWritingErrorViewDetails; // @dynamic hasConsentWritingErrorViewDetails;
@property(nonatomic) _Bool hasLanguageCode; // @dynamic hasLanguageCode;
@property(nonatomic) _Bool hasLinkDetails; // @dynamic hasLinkDetails;
@property(nonatomic) _Bool hasProductContext; // @dynamic hasProductContext;
@property(nonatomic) _Bool hasProductId; // @dynamic hasProductId;
@property(nonatomic) _Bool hasScreenOrientation; // @dynamic hasScreenOrientation;
@property(nonatomic) _Bool hasScreenType; // @dynamic hasScreenType;
@property(nonatomic) _Bool hasSettingDetailsViewDetails; // @dynamic hasSettingDetailsViewDetails;
@property(nonatomic) _Bool hasSettingsOverviewDetails; // @dynamic hasSettingsOverviewDetails;
@property(nonatomic) _Bool hasUnicornDelegated; // @dynamic hasUnicornDelegated;
@property(copy, nonatomic) NSString *languageCode; // @dynamic languageCode;
@property(retain, nonatomic) GIDLOGUDCLinkDetails *linkDetails; // @dynamic linkDetails;
@property(copy, nonatomic) NSString *productContext; // @dynamic productContext;
@property(nonatomic) int productId; // @dynamic productId;
@property(nonatomic) int screenOrientation; // @dynamic screenOrientation;
@property(nonatomic) int screenType; // @dynamic screenType;
@property(retain, nonatomic) GIDLOGUDCSettingDetailsViewDetails *settingDetailsViewDetails; // @dynamic settingDetailsViewDetails;
@property(retain, nonatomic) GIDLOGUDCSettingsOverviewDetails *settingsOverviewDetails; // @dynamic settingsOverviewDetails;
@property(nonatomic) _Bool unicornDelegated; // @dynamic unicornDelegated;

@end

