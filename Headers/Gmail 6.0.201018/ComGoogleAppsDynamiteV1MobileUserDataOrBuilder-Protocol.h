//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsDynamiteV1MobileBackgroundSyncDataStorage, ComGoogleAppsDynamiteV1MobileDndStatusStorage, ComGoogleAppsDynamiteV1MobileUserData_DataCase, ComGoogleAppsDynamiteV1MobileUserStatusStorage, DYNProtoStoredConversationSuggestions, DYNProtoUserSettings, DYNProtoWorkingHoursSettings;

@protocol ComGoogleAppsDynamiteV1MobileUserDataOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsDynamiteV1MobileUserData_DataCase *)getDataCase;
- (ComGoogleAppsDynamiteV1MobileUserStatusStorage *)getUserStatus;
- (_Bool)hasUserStatus;
- (long long)getClientDataRefreshRevision;
- (_Bool)hasClientDataRefreshRevision;
- (long long)getUserRevision;
- (_Bool)hasUserRevision;
- (DYNProtoWorkingHoursSettings *)getWorkingHoursSettings;
- (_Bool)hasWorkingHoursSettings;
- (DYNProtoUserSettings *)getUserSettings;
- (_Bool)hasUserSettings;
- (DYNProtoStoredConversationSuggestions *)getStoredConversationSuggestions;
- (_Bool)hasStoredConversationSuggestions;
- (ComGoogleAppsDynamiteV1MobileBackgroundSyncDataStorage *)getBackgroundSyncDataStorage;
- (_Bool)hasBackgroundSyncDataStorage;
- (ComGoogleAppsDynamiteV1MobileDndStatusStorage *)getDndStatus;
- (_Bool)hasDndStatus;
@end

