//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GAMDSharingDetails_RequestDetails, GAMDSharingDetails_RestrictionChange, GAMDSharingDetails_RoleChange, GAMDSharingDetails_VisibilityChange, NSMutableArray, NSString;

@interface GAMDSharingDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int accessRequestedForCount; // @dynamic accessRequestedForCount;
@property(nonatomic) _Bool accessRequestedForSelf; // @dynamic accessRequestedForSelf;
@property(copy, nonatomic) NSString *accessRequesterHash; // @dynamic accessRequesterHash;
@property(nonatomic) int aclEntryChangeType; // @dynamic aclEntryChangeType;
@property(nonatomic) int aclFixerCloseAction; // @dynamic aclFixerCloseAction;
@property(nonatomic) int aclFixerDefaultOption; // @dynamic aclFixerDefaultOption;
@property(nonatomic) int aclFixerFixSelection; // @dynamic aclFixerFixSelection;
@property(nonatomic) int aclFixerHostApp; // @dynamic aclFixerHostApp;
@property(nonatomic) int aclFixerUserContext; // @dynamic aclFixerUserContext;
@property(nonatomic) int actionOrigin; // @dynamic actionOrigin;
@property(nonatomic) int advancedOptionChange; // @dynamic advancedOptionChange;
@property(nonatomic) long long applicationInitializationLatencyUsec; // @dynamic applicationInitializationLatencyUsec;
@property(nonatomic) long long baseModuleLoadLatencyUsec; // @dynamic baseModuleLoadLatencyUsec;
@property(nonatomic) long long collaboratorGaiaId; // @dynamic collaboratorGaiaId;
@property(nonatomic) int copyLinkSource; // @dynamic copyLinkSource;
@property(nonatomic) _Bool customAudienceRecommendationPolicy; // @dynamic customAudienceRecommendationPolicy;
@property(nonatomic) long long dataLoadLatencyUsec; // @dynamic dataLoadLatencyUsec;
@property(nonatomic) int dialog; // @dynamic dialog;
@property(nonatomic) int dialogMode; // @dynamic dialogMode;
@property(nonatomic) int emailCollaboratorsFilterCategory; // @dynamic emailCollaboratorsFilterCategory;
@property(nonatomic) int externalSharingService; // @dynamic externalSharingService;
@property(nonatomic) long long gapiLoadLatencyUsec; // @dynamic gapiLoadLatencyUsec;
@property(nonatomic) _Bool hasAccessRequestedForCount; // @dynamic hasAccessRequestedForCount;
@property(nonatomic) _Bool hasAccessRequestedForSelf; // @dynamic hasAccessRequestedForSelf;
@property(nonatomic) _Bool hasAccessRequesterHash; // @dynamic hasAccessRequesterHash;
@property(nonatomic) _Bool hasAclEntryChangeType; // @dynamic hasAclEntryChangeType;
@property(nonatomic) _Bool hasAclFixerCloseAction; // @dynamic hasAclFixerCloseAction;
@property(nonatomic) _Bool hasAclFixerDefaultOption; // @dynamic hasAclFixerDefaultOption;
@property(nonatomic) _Bool hasAclFixerFixSelection; // @dynamic hasAclFixerFixSelection;
@property(nonatomic) _Bool hasAclFixerHostApp; // @dynamic hasAclFixerHostApp;
@property(nonatomic) _Bool hasAclFixerUserContext; // @dynamic hasAclFixerUserContext;
@property(nonatomic) _Bool hasActionOrigin; // @dynamic hasActionOrigin;
@property(nonatomic) _Bool hasAdvancedOptionChange; // @dynamic hasAdvancedOptionChange;
@property(nonatomic) _Bool hasApplicationInitializationLatencyUsec; // @dynamic hasApplicationInitializationLatencyUsec;
@property(nonatomic) _Bool hasBaseModuleLoadLatencyUsec; // @dynamic hasBaseModuleLoadLatencyUsec;
@property(nonatomic) _Bool hasCollaboratorGaiaId; // @dynamic hasCollaboratorGaiaId;
@property(nonatomic) _Bool hasCopyLinkSource; // @dynamic hasCopyLinkSource;
@property(nonatomic) _Bool hasCustomAudienceRecommendationPolicy; // @dynamic hasCustomAudienceRecommendationPolicy;
@property(nonatomic) _Bool hasDataLoadLatencyUsec; // @dynamic hasDataLoadLatencyUsec;
@property(nonatomic) _Bool hasDialog; // @dynamic hasDialog;
@property(nonatomic) _Bool hasDialogMode; // @dynamic hasDialogMode;
@property(nonatomic) _Bool hasEmailCollaboratorsFilterCategory; // @dynamic hasEmailCollaboratorsFilterCategory;
@property(nonatomic) _Bool hasExternalSharingService; // @dynamic hasExternalSharingService;
@property(nonatomic) _Bool hasGapiLoadLatencyUsec; // @dynamic hasGapiLoadLatencyUsec;
@property(nonatomic) _Bool hasInitialAction; // @dynamic hasInitialAction;
@property(nonatomic) _Bool hasItemType; // @dynamic hasItemType;
@property(nonatomic) _Bool hasLinkSharingDefaultOption; // @dynamic hasLinkSharingDefaultOption;
@property(nonatomic) _Bool hasLinkSharingSelectedOption; // @dynamic hasLinkSharingSelectedOption;
@property(nonatomic) _Bool hasLinkSharingStartingRole; // @dynamic hasLinkSharingStartingRole;
@property(nonatomic) _Bool hasMessageLength; // @dynamic hasMessageLength;
@property(nonatomic) _Bool hasMostRecommendedAudience; // @dynamic hasMostRecommendedAudience;
@property(nonatomic) _Bool hasNoriFileId; // @dynamic hasNoriFileId;
@property(nonatomic) _Bool hasNumGroupRecipients; // @dynamic hasNumGroupRecipients;
@property(nonatomic) _Bool hasNumRecipients; // @dynamic hasNumRecipients;
@property(nonatomic) _Bool hasNumUnknownRecipients; // @dynamic hasNumUnknownRecipients;
@property(nonatomic) _Bool hasNumUserRecipients; // @dynamic hasNumUserRecipients;
@property(nonatomic) _Bool hasPrefetchedServerSide; // @dynamic hasPrefetchedServerSide;
@property(nonatomic) _Bool hasPublishedReaderSupportState; // @dynamic hasPublishedReaderSupportState;
@property(nonatomic) _Bool hasReferringControlType; // @dynamic hasReferringControlType;
@property(nonatomic) _Bool hasRequest; // @dynamic hasRequest;
@property(nonatomic) _Bool hasRestrictionChange; // @dynamic hasRestrictionChange;
@property(nonatomic) _Bool hasRoleChange; // @dynamic hasRoleChange;
@property(nonatomic) _Bool hasScopeHint; // @dynamic hasScopeHint;
@property(nonatomic) _Bool hasSelectedConfirmationOption; // @dynamic hasSelectedConfirmationOption;
@property(nonatomic) _Bool hasSelectedRole; // @dynamic hasSelectedRole;
@property(nonatomic) _Bool hasSelectedVisibility; // @dynamic hasSelectedVisibility;
@property(nonatomic) _Bool hasSentEmail; // @dynamic hasSentEmail;
@property(nonatomic) _Bool hasSuggestionsShownCount; // @dynamic hasSuggestionsShownCount;
@property(nonatomic) _Bool hasToggleOn; // @dynamic hasToggleOn;
@property(nonatomic) _Bool hasVisibilityChange; // @dynamic hasVisibilityChange;
@property(nonatomic) _Bool hasVisibilityChangeSource; // @dynamic hasVisibilityChangeSource;
@property(nonatomic) _Bool hasZeroStateSuggestionsShown; // @dynamic hasZeroStateSuggestionsShown;
@property(nonatomic) _Bool initialAction; // @dynamic initialAction;
@property(nonatomic) int itemType; // @dynamic itemType;
@property(nonatomic) int linkSharingDefaultOption; // @dynamic linkSharingDefaultOption;
@property(nonatomic) int linkSharingSelectedOption; // @dynamic linkSharingSelectedOption;
@property(nonatomic) int linkSharingStartingRole; // @dynamic linkSharingStartingRole;
@property(nonatomic) int messageLength; // @dynamic messageLength;
@property(nonatomic) _Bool mostRecommendedAudience; // @dynamic mostRecommendedAudience;
@property(copy, nonatomic) NSString *noriFileId; // @dynamic noriFileId;
@property(nonatomic) int numGroupRecipients; // @dynamic numGroupRecipients;
@property(nonatomic) int numRecipients; // @dynamic numRecipients;
@property(nonatomic) int numUnknownRecipients; // @dynamic numUnknownRecipients;
@property(nonatomic) int numUserRecipients; // @dynamic numUserRecipients;
@property(nonatomic) _Bool prefetchedServerSide; // @dynamic prefetchedServerSide;
@property(nonatomic) int publishedReaderSupportState; // @dynamic publishedReaderSupportState;
@property(retain, nonatomic) NSMutableArray *recipientsInSuggestionsArray; // @dynamic recipientsInSuggestionsArray;
@property(readonly, nonatomic) unsigned long long recipientsInSuggestionsArray_Count; // @dynamic recipientsInSuggestionsArray_Count;
@property(nonatomic) int referringControlType; // @dynamic referringControlType;
@property(retain, nonatomic) GAMDSharingDetails_RequestDetails *request; // @dynamic request;
@property(retain, nonatomic) GAMDSharingDetails_RestrictionChange *restrictionChange; // @dynamic restrictionChange;
@property(retain, nonatomic) GAMDSharingDetails_RoleChange *roleChange; // @dynamic roleChange;
@property(copy, nonatomic) NSString *scopeHint; // @dynamic scopeHint;
@property(nonatomic) int selectedConfirmationOption; // @dynamic selectedConfirmationOption;
@property(nonatomic) int selectedRole; // @dynamic selectedRole;
@property(nonatomic) int selectedVisibility; // @dynamic selectedVisibility;
@property(nonatomic) _Bool sentEmail; // @dynamic sentEmail;
@property(nonatomic) int suggestionsShownCount; // @dynamic suggestionsShownCount;
@property(nonatomic) _Bool toggleOn; // @dynamic toggleOn;
@property(retain, nonatomic) GAMDSharingDetails_VisibilityChange *visibilityChange; // @dynamic visibilityChange;
@property(nonatomic) int visibilityChangeSource; // @dynamic visibilityChangeSource;
@property(nonatomic) _Bool zeroStateSuggestionsShown; // @dynamic zeroStateSuggestionsShown;

@end

